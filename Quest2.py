

from datetime import datetime, timedelta

def solution(schedule, time):

    try:
        current_time = datetime.strptime(time, "%H:%M")
    except ValueError:
        return -1  # Handle invalid time format

    if schedule is None or len(schedule) == 0:
        return -1  # Handle empty schedule

    try:
        # Convert schedule times to datetime objects for comparison
        schedule_times = [datetime.strptime(t, "%H:%M") for t in schedule]
    except ValueError:
        return -1  # Handle invalid time format in schedule

    latest_departure = None
    for departure in schedule_times:
        # Check if departure is before or at the current time
        if departure <= current_time:
            if latest_departure is None or departure > latest_departure:
                latest_departure = departure

    if latest_departure is None:
        return -1  # No departures before current time

    # Calculate time difference
    time_diff = current_time - latest_departure
    minutes = int(time_diff.total_seconds() / 60)

    return minutes

# Test cases
def test_solution():
    assert solution(["10:00"], "10:01") == 1  # Best case (departure just before)
    assert solution(["08:00", "09:00"], "10:15") == 75  # Regular case
    assert solution([], "12:30") == -1  # Empty schedule
    assert solution(["13:50"], "13:45") == -1  # No departures before current time
    assert solution(["14:32", "invalid_time"], "15:00") == -1  # Invalid time format
    assert solution(None, "16:10") == -1  # Invalid schedule (None)

if __name__ == "__main__":
    test_solution()
    print("All tests passed!")

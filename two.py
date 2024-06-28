# TWO
from datetime import datetime, timedelta


def solution(schedule, time):

    try:
        current_time = datetime.strptime(time, "%H:%M")
    except ValueError:
        return -1
    if schedule is None or len(schedule) == 0:
        return -1

    try:
        schedule_times = [datetime.strptime(t, "%H:%M") for t in schedule]
    except ValueError:
        return -1

    latest_departure = None
    for departure in schedule_times:
        if departure <= current_time:
            if latest_departure is None or departure > latest_departure:
                latest_departure = departure

    if latest_departure is None:
        return -1

    time_diff = current_time - latest_departure
    minutes = int(time_diff.total_seconds() / 60)

    return minutes

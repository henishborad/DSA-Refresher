# try this...
#yeh likh rhi hai??
from datetime import datetime, timedelta


def solution(schedule, time):
    current_time = datetime.strptime(time, "%H:%M")

    schedule_times = [datetime.strptime(t, "%H:%M") for t in schedule]

    latest_departure = None
    for departure in schedule_times:
        if departure <= current_time:
            if latest_departure is None or departure > latest_departure:
                latest_departure = departure

    if latest_departure is None:
        return -1

    time_diff = current_time - latest_departure
    minutes = time_diff.total_seconds() / 60

    return int(minutes)

# THREE
def solution(laps):
    best_times = {}

    for driver_time in laps[0]:
        driver, time = driver_time.split()
        time = int(time)
        best_times[driver] = time

    eliminated_order = []

    for lap in laps[1:]:
        current_times = {}

        for driver_time in lap:
            driver, time = driver_time.split()
            time = int(time)
            current_times[driver] = time

        slowest_time = max(current_times.values())

        to_eliminate = [
            driver for driver, time in best_times.items() if time == slowest_time
        ]

        to_eliminate.sort()

        eliminated_order.extend(to_eliminate)

        for driver in current_times:
            if driver in best_times:
                best_times[driver] = min(best_times[driver], current_times[driver])
            else:
                best_times[driver] = current_times[driver]

    return eliminated_order

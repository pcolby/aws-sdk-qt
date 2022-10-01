// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLEETMETRICSREQUEST_P_H
#define QTAWS_LISTFLEETMETRICSREQUEST_P_H

#include "iotrequest_p.h"
#include "listfleetmetricsrequest.h"

namespace QtAws {
namespace IoT {

class ListFleetMetricsRequest;

class ListFleetMetricsRequestPrivate : public IoTRequestPrivate {

public:
    ListFleetMetricsRequestPrivate(const IoTRequest::Action action,
                                   ListFleetMetricsRequest * const q);
    ListFleetMetricsRequestPrivate(const ListFleetMetricsRequestPrivate &other,
                                   ListFleetMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFleetMetricsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

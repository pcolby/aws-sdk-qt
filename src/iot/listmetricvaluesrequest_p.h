// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICVALUESREQUEST_P_H
#define QTAWS_LISTMETRICVALUESREQUEST_P_H

#include "iotrequest_p.h"
#include "listmetricvaluesrequest.h"

namespace QtAws {
namespace IoT {

class ListMetricValuesRequest;

class ListMetricValuesRequestPrivate : public IoTRequestPrivate {

public:
    ListMetricValuesRequestPrivate(const IoTRequest::Action action,
                                   ListMetricValuesRequest * const q);
    ListMetricValuesRequestPrivate(const ListMetricValuesRequestPrivate &other,
                                   ListMetricValuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMetricValuesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

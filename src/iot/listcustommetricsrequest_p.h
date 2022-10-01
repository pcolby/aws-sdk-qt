// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMMETRICSREQUEST_P_H
#define QTAWS_LISTCUSTOMMETRICSREQUEST_P_H

#include "iotrequest_p.h"
#include "listcustommetricsrequest.h"

namespace QtAws {
namespace IoT {

class ListCustomMetricsRequest;

class ListCustomMetricsRequestPrivate : public IoTRequestPrivate {

public:
    ListCustomMetricsRequestPrivate(const IoTRequest::Action action,
                                   ListCustomMetricsRequest * const q);
    ListCustomMetricsRequestPrivate(const ListCustomMetricsRequestPrivate &other,
                                   ListCustomMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomMetricsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

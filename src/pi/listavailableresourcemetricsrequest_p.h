// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLERESOURCEMETRICSREQUEST_P_H
#define QTAWS_LISTAVAILABLERESOURCEMETRICSREQUEST_P_H

#include "pirequest_p.h"
#include "listavailableresourcemetricsrequest.h"

namespace QtAws {
namespace Pi {

class ListAvailableResourceMetricsRequest;

class ListAvailableResourceMetricsRequestPrivate : public PiRequestPrivate {

public:
    ListAvailableResourceMetricsRequestPrivate(const PiRequest::Action action,
                                   ListAvailableResourceMetricsRequest * const q);
    ListAvailableResourceMetricsRequestPrivate(const ListAvailableResourceMetricsRequestPrivate &other,
                                   ListAvailableResourceMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAvailableResourceMetricsRequest)

};

} // namespace Pi
} // namespace QtAws

#endif

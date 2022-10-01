// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEMETRICSREQUEST_P_H
#define QTAWS_GETRESOURCEMETRICSREQUEST_P_H

#include "pirequest_p.h"
#include "getresourcemetricsrequest.h"

namespace QtAws {
namespace Pi {

class GetResourceMetricsRequest;

class GetResourceMetricsRequestPrivate : public PiRequestPrivate {

public:
    GetResourceMetricsRequestPrivate(const PiRequest::Action action,
                                   GetResourceMetricsRequest * const q);
    GetResourceMetricsRequestPrivate(const GetResourceMetricsRequestPrivate &other,
                                   GetResourceMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceMetricsRequest)

};

} // namespace Pi
} // namespace QtAws

#endif

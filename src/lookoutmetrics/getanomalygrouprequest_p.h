// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALYGROUPREQUEST_P_H
#define QTAWS_GETANOMALYGROUPREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "getanomalygrouprequest.h"

namespace QtAws {
namespace LookoutMetrics {

class GetAnomalyGroupRequest;

class GetAnomalyGroupRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    GetAnomalyGroupRequestPrivate(const LookoutMetricsRequest::Action action,
                                   GetAnomalyGroupRequest * const q);
    GetAnomalyGroupRequestPrivate(const GetAnomalyGroupRequestPrivate &other,
                                   GetAnomalyGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAnomalyGroupRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif

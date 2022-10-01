// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAQUALITYMETRICSREQUEST_P_H
#define QTAWS_GETDATAQUALITYMETRICSREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "getdataqualitymetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class GetDataQualityMetricsRequest;

class GetDataQualityMetricsRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    GetDataQualityMetricsRequestPrivate(const LookoutMetricsRequest::Action action,
                                   GetDataQualityMetricsRequest * const q);
    GetDataQualityMetricsRequestPrivate(const GetDataQualityMetricsRequestPrivate &other,
                                   GetDataQualityMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataQualityMetricsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif

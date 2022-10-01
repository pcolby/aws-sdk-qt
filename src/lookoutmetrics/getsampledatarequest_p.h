// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLEDATAREQUEST_P_H
#define QTAWS_GETSAMPLEDATAREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "getsampledatarequest.h"

namespace QtAws {
namespace LookoutMetrics {

class GetSampleDataRequest;

class GetSampleDataRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    GetSampleDataRequestPrivate(const LookoutMetricsRequest::Action action,
                                   GetSampleDataRequest * const q);
    GetSampleDataRequestPrivate(const GetSampleDataRequestPrivate &other,
                                   GetSampleDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSampleDataRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif

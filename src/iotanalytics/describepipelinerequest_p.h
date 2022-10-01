// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINEREQUEST_P_H
#define QTAWS_DESCRIBEPIPELINEREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "describepipelinerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DescribePipelineRequest;

class DescribePipelineRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    DescribePipelineRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   DescribePipelineRequest * const q);
    DescribePipelineRequestPrivate(const DescribePipelineRequestPrivate &other,
                                   DescribePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePipelineRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

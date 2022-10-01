// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELPIPELINEREPROCESSINGREQUEST_P_H
#define QTAWS_CANCELPIPELINEREPROCESSINGREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "cancelpipelinereprocessingrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CancelPipelineReprocessingRequest;

class CancelPipelineReprocessingRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    CancelPipelineReprocessingRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   CancelPipelineReprocessingRequest * const q);
    CancelPipelineReprocessingRequestPrivate(const CancelPipelineReprocessingRequestPrivate &other,
                                   CancelPipelineReprocessingRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelPipelineReprocessingRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

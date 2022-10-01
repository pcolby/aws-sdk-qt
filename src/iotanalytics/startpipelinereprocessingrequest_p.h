// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPIPELINEREPROCESSINGREQUEST_P_H
#define QTAWS_STARTPIPELINEREPROCESSINGREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "startpipelinereprocessingrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class StartPipelineReprocessingRequest;

class StartPipelineReprocessingRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    StartPipelineReprocessingRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   StartPipelineReprocessingRequest * const q);
    StartPipelineReprocessingRequestPrivate(const StartPipelineReprocessingRequestPrivate &other,
                                   StartPipelineReprocessingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartPipelineReprocessingRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNPIPELINEACTIVITYREQUEST_P_H
#define QTAWS_RUNPIPELINEACTIVITYREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "runpipelineactivityrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class RunPipelineActivityRequest;

class RunPipelineActivityRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    RunPipelineActivityRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   RunPipelineActivityRequest * const q);
    RunPipelineActivityRequestPrivate(const RunPipelineActivityRequestPrivate &other,
                                   RunPipelineActivityRequest * const q);

private:
    Q_DECLARE_PUBLIC(RunPipelineActivityRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINEREQUEST_P_H
#define QTAWS_UPDATEPIPELINEREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "updatepipelinerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class UpdatePipelineRequest;

class UpdatePipelineRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    UpdatePipelineRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   UpdatePipelineRequest * const q);
    UpdatePipelineRequestPrivate(const UpdatePipelineRequestPrivate &other,
                                   UpdatePipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePipelineRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNPIPELINEACTIVITYREQUEST_H
#define QTAWS_RUNPIPELINEACTIVITYREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class RunPipelineActivityRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT RunPipelineActivityRequest : public IoTAnalyticsRequest {

public:
    RunPipelineActivityRequest(const RunPipelineActivityRequest &other);
    RunPipelineActivityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RunPipelineActivityRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

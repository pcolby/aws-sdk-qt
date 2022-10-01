// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPIPELINEREQUEST_H
#define QTAWS_UPDATEPIPELINEREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class UpdatePipelineRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT UpdatePipelineRequest : public IoTAnalyticsRequest {

public:
    UpdatePipelineRequest(const UpdatePipelineRequest &other);
    UpdatePipelineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePipelineRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

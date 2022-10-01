// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPIPELINERESPONSE_H
#define QTAWS_CREATEPIPELINERESPONSE_H

#include "iotanalyticsresponse.h"
#include "createpipelinerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CreatePipelineResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT CreatePipelineResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    CreatePipelineResponse(const CreatePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePipelineResponse)
    Q_DISABLE_COPY(CreatePipelineResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

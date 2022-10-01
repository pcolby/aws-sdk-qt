// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPIPELINEREPROCESSINGRESPONSE_H
#define QTAWS_STARTPIPELINEREPROCESSINGRESPONSE_H

#include "iotanalyticsresponse.h"
#include "startpipelinereprocessingrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class StartPipelineReprocessingResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT StartPipelineReprocessingResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    StartPipelineReprocessingResponse(const StartPipelineReprocessingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartPipelineReprocessingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartPipelineReprocessingResponse)
    Q_DISABLE_COPY(StartPipelineReprocessingResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

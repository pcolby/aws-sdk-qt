// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNPIPELINEACTIVITYRESPONSE_H
#define QTAWS_RUNPIPELINEACTIVITYRESPONSE_H

#include "iotanalyticsresponse.h"
#include "runpipelineactivityrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class RunPipelineActivityResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT RunPipelineActivityResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    RunPipelineActivityResponse(const RunPipelineActivityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RunPipelineActivityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RunPipelineActivityResponse)
    Q_DISABLE_COPY(RunPipelineActivityResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

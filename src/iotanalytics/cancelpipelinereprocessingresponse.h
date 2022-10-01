// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELPIPELINEREPROCESSINGRESPONSE_H
#define QTAWS_CANCELPIPELINEREPROCESSINGRESPONSE_H

#include "iotanalyticsresponse.h"
#include "cancelpipelinereprocessingrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CancelPipelineReprocessingResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT CancelPipelineReprocessingResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    CancelPipelineReprocessingResponse(const CancelPipelineReprocessingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelPipelineReprocessingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelPipelineReprocessingResponse)
    Q_DISABLE_COPY(CancelPipelineReprocessingResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

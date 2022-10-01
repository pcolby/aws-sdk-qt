// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELPIPELINEREPROCESSINGRESPONSE_P_H
#define QTAWS_CANCELPIPELINEREPROCESSINGRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class CancelPipelineReprocessingResponse;

class CancelPipelineReprocessingResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit CancelPipelineReprocessingResponsePrivate(CancelPipelineReprocessingResponse * const q);

    void parseCancelPipelineReprocessingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelPipelineReprocessingResponse)
    Q_DISABLE_COPY(CancelPipelineReprocessingResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

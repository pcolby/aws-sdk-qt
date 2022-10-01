// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNPIPELINEACTIVITYRESPONSE_P_H
#define QTAWS_RUNPIPELINEACTIVITYRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class RunPipelineActivityResponse;

class RunPipelineActivityResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit RunPipelineActivityResponsePrivate(RunPipelineActivityResponse * const q);

    void parseRunPipelineActivityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RunPipelineActivityResponse)
    Q_DISABLE_COPY(RunPipelineActivityResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif

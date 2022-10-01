// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAUTOMATIONEXECUTIONRESPONSE_P_H
#define QTAWS_STOPAUTOMATIONEXECUTIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class StopAutomationExecutionResponse;

class StopAutomationExecutionResponsePrivate : public SsmResponsePrivate {

public:

    explicit StopAutomationExecutionResponsePrivate(StopAutomationExecutionResponse * const q);

    void parseStopAutomationExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopAutomationExecutionResponse)
    Q_DISABLE_COPY(StopAutomationExecutionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

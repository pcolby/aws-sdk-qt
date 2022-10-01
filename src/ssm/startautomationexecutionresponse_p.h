// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAUTOMATIONEXECUTIONRESPONSE_P_H
#define QTAWS_STARTAUTOMATIONEXECUTIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class StartAutomationExecutionResponse;

class StartAutomationExecutionResponsePrivate : public SsmResponsePrivate {

public:

    explicit StartAutomationExecutionResponsePrivate(StartAutomationExecutionResponse * const q);

    void parseStartAutomationExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartAutomationExecutionResponse)
    Q_DISABLE_COPY(StartAutomationExecutionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

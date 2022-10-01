// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOMATIONEXECUTIONRESPONSE_P_H
#define QTAWS_GETAUTOMATIONEXECUTIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetAutomationExecutionResponse;

class GetAutomationExecutionResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetAutomationExecutionResponsePrivate(GetAutomationExecutionResponse * const q);

    void parseGetAutomationExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAutomationExecutionResponse)
    Q_DISABLE_COPY(GetAutomationExecutionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREMEDIATIONEXECUTIONRESPONSE_P_H
#define QTAWS_STARTREMEDIATIONEXECUTIONRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class StartRemediationExecutionResponse;

class StartRemediationExecutionResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit StartRemediationExecutionResponsePrivate(StartRemediationExecutionResponse * const q);

    void parseStartRemediationExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartRemediationExecutionResponse)
    Q_DISABLE_COPY(StartRemediationExecutionResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDAUTOMATIONSIGNALRESPONSE_P_H
#define QTAWS_SENDAUTOMATIONSIGNALRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class SendAutomationSignalResponse;

class SendAutomationSignalResponsePrivate : public SsmResponsePrivate {

public:

    explicit SendAutomationSignalResponsePrivate(SendAutomationSignalResponse * const q);

    void parseSendAutomationSignalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendAutomationSignalResponse)
    Q_DISABLE_COPY(SendAutomationSignalResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDDIAGNOSTICINTERRUPTRESPONSE_P_H
#define QTAWS_SENDDIAGNOSTICINTERRUPTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class SendDiagnosticInterruptResponse;

class SendDiagnosticInterruptResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit SendDiagnosticInterruptResponsePrivate(SendDiagnosticInterruptResponse * const q);

    void parseSendDiagnosticInterruptResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendDiagnosticInterruptResponse)
    Q_DISABLE_COPY(SendDiagnosticInterruptResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTORRESPONSE_P_H
#define QTAWS_DISASSOCIATECONNECTORRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class DisassociateConnectorResponse;

class DisassociateConnectorResponsePrivate : public SmsResponsePrivate {

public:

    explicit DisassociateConnectorResponsePrivate(DisassociateConnectorResponse * const q);

    void parseDisassociateConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateConnectorResponse)
    Q_DISABLE_COPY(DisassociateConnectorResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif

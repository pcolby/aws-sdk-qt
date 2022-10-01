// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAWSACCOUNTFROMPARTNERACCOUNTRESPONSE_P_H
#define QTAWS_DISASSOCIATEAWSACCOUNTFROMPARTNERACCOUNTRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateAwsAccountFromPartnerAccountResponse;

class DisassociateAwsAccountFromPartnerAccountResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DisassociateAwsAccountFromPartnerAccountResponsePrivate(DisassociateAwsAccountFromPartnerAccountResponse * const q);

    void parseDisassociateAwsAccountFromPartnerAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateAwsAccountFromPartnerAccountResponse)
    Q_DISABLE_COPY(DisassociateAwsAccountFromPartnerAccountResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

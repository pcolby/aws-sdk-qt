// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAWSACCOUNTFROMPARTNERACCOUNTREQUEST_P_H
#define QTAWS_DISASSOCIATEAWSACCOUNTFROMPARTNERACCOUNTREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "disassociateawsaccountfrompartneraccountrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateAwsAccountFromPartnerAccountRequest;

class DisassociateAwsAccountFromPartnerAccountRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DisassociateAwsAccountFromPartnerAccountRequestPrivate(const IoTWirelessRequest::Action action,
                                   DisassociateAwsAccountFromPartnerAccountRequest * const q);
    DisassociateAwsAccountFromPartnerAccountRequestPrivate(const DisassociateAwsAccountFromPartnerAccountRequestPrivate &other,
                                   DisassociateAwsAccountFromPartnerAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateAwsAccountFromPartnerAccountRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

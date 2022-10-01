// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAWSACCOUNTWITHPARTNERACCOUNTREQUEST_P_H
#define QTAWS_ASSOCIATEAWSACCOUNTWITHPARTNERACCOUNTREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "associateawsaccountwithpartneraccountrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateAwsAccountWithPartnerAccountRequest;

class AssociateAwsAccountWithPartnerAccountRequestPrivate : public IoTWirelessRequestPrivate {

public:
    AssociateAwsAccountWithPartnerAccountRequestPrivate(const IoTWirelessRequest::Action action,
                                   AssociateAwsAccountWithPartnerAccountRequest * const q);
    AssociateAwsAccountWithPartnerAccountRequestPrivate(const AssociateAwsAccountWithPartnerAccountRequestPrivate &other,
                                   AssociateAwsAccountWithPartnerAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateAwsAccountWithPartnerAccountRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

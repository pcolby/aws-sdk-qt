// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAWSACCOUNTFROMPARTNERACCOUNTREQUEST_H
#define QTAWS_DISASSOCIATEAWSACCOUNTFROMPARTNERACCOUNTREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateAwsAccountFromPartnerAccountRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateAwsAccountFromPartnerAccountRequest : public IoTWirelessRequest {

public:
    DisassociateAwsAccountFromPartnerAccountRequest(const DisassociateAwsAccountFromPartnerAccountRequest &other);
    DisassociateAwsAccountFromPartnerAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAwsAccountFromPartnerAccountRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

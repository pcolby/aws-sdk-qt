// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAWSACCOUNTFROMPARTNERACCOUNTRESPONSE_H
#define QTAWS_DISASSOCIATEAWSACCOUNTFROMPARTNERACCOUNTRESPONSE_H

#include "iotwirelessresponse.h"
#include "disassociateawsaccountfrompartneraccountrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateAwsAccountFromPartnerAccountResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateAwsAccountFromPartnerAccountResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DisassociateAwsAccountFromPartnerAccountResponse(const DisassociateAwsAccountFromPartnerAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateAwsAccountFromPartnerAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAwsAccountFromPartnerAccountResponse)
    Q_DISABLE_COPY(DisassociateAwsAccountFromPartnerAccountResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

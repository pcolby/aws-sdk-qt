// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAWSACCOUNTWITHPARTNERACCOUNTRESPONSE_H
#define QTAWS_ASSOCIATEAWSACCOUNTWITHPARTNERACCOUNTRESPONSE_H

#include "iotwirelessresponse.h"
#include "associateawsaccountwithpartneraccountrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateAwsAccountWithPartnerAccountResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateAwsAccountWithPartnerAccountResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    AssociateAwsAccountWithPartnerAccountResponse(const AssociateAwsAccountWithPartnerAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateAwsAccountWithPartnerAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAwsAccountWithPartnerAccountResponse)
    Q_DISABLE_COPY(AssociateAwsAccountWithPartnerAccountResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

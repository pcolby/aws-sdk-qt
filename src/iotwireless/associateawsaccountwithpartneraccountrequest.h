// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAWSACCOUNTWITHPARTNERACCOUNTREQUEST_H
#define QTAWS_ASSOCIATEAWSACCOUNTWITHPARTNERACCOUNTREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateAwsAccountWithPartnerAccountRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateAwsAccountWithPartnerAccountRequest : public IoTWirelessRequest {

public:
    AssociateAwsAccountWithPartnerAccountRequest(const AssociateAwsAccountWithPartnerAccountRequest &other);
    AssociateAwsAccountWithPartnerAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAwsAccountWithPartnerAccountRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

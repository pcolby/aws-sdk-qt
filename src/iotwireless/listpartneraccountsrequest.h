// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNERACCOUNTSREQUEST_H
#define QTAWS_LISTPARTNERACCOUNTSREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListPartnerAccountsRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT ListPartnerAccountsRequest : public IoTWirelessRequest {

public:
    ListPartnerAccountsRequest(const ListPartnerAccountsRequest &other);
    ListPartnerAccountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPartnerAccountsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

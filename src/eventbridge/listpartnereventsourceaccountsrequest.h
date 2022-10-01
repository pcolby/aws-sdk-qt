// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNEREVENTSOURCEACCOUNTSREQUEST_H
#define QTAWS_LISTPARTNEREVENTSOURCEACCOUNTSREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class ListPartnerEventSourceAccountsRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT ListPartnerEventSourceAccountsRequest : public EventBridgeRequest {

public:
    ListPartnerEventSourceAccountsRequest(const ListPartnerEventSourceAccountsRequest &other);
    ListPartnerEventSourceAccountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPartnerEventSourceAccountsRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSENDINGATTRIBUTESREQUEST_H
#define QTAWS_PUTACCOUNTSENDINGATTRIBUTESREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutAccountSendingAttributesRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutAccountSendingAttributesRequest : public PinpointEmailRequest {

public:
    PutAccountSendingAttributesRequest(const PutAccountSendingAttributesRequest &other);
    PutAccountSendingAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountSendingAttributesRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif

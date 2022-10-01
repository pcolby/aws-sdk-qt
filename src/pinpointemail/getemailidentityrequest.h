// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILIDENTITYREQUEST_H
#define QTAWS_GETEMAILIDENTITYREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetEmailIdentityRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetEmailIdentityRequest : public PinpointEmailRequest {

public:
    GetEmailIdentityRequest(const GetEmailIdentityRequest &other);
    GetEmailIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEmailIdentityRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif

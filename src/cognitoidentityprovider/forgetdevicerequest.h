// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORGETDEVICEREQUEST_H
#define QTAWS_FORGETDEVICEREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ForgetDeviceRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ForgetDeviceRequest : public CognitoIdentityProviderRequest {

public:
    ForgetDeviceRequest(const ForgetDeviceRequest &other);
    ForgetDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ForgetDeviceRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

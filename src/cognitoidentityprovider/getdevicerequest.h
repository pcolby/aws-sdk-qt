// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEREQUEST_H
#define QTAWS_GETDEVICEREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetDeviceRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetDeviceRequest : public CognitoIdentityProviderRequest {

public:
    GetDeviceRequest(const GetDeviceRequest &other);
    GetDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

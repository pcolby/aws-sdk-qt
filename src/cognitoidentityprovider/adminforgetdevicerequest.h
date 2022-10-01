// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINFORGETDEVICEREQUEST_H
#define QTAWS_ADMINFORGETDEVICEREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminForgetDeviceRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminForgetDeviceRequest : public CognitoIdentityProviderRequest {

public:
    AdminForgetDeviceRequest(const AdminForgetDeviceRequest &other);
    AdminForgetDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminForgetDeviceRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

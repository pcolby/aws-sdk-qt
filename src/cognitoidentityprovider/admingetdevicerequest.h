// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINGETDEVICEREQUEST_H
#define QTAWS_ADMINGETDEVICEREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminGetDeviceRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminGetDeviceRequest : public CognitoIdentityProviderRequest {

public:
    AdminGetDeviceRequest(const AdminGetDeviceRequest &other);
    AdminGetDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminGetDeviceRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

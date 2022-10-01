// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUPDATEDEVICESTATUSREQUEST_H
#define QTAWS_ADMINUPDATEDEVICESTATUSREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUpdateDeviceStatusRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminUpdateDeviceStatusRequest : public CognitoIdentityProviderRequest {

public:
    AdminUpdateDeviceStatusRequest(const AdminUpdateDeviceStatusRequest &other);
    AdminUpdateDeviceStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminUpdateDeviceStatusRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

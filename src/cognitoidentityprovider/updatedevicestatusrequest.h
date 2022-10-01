// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICESTATUSREQUEST_H
#define QTAWS_UPDATEDEVICESTATUSREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateDeviceStatusRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT UpdateDeviceStatusRequest : public CognitoIdentityProviderRequest {

public:
    UpdateDeviceStatusRequest(const UpdateDeviceStatusRequest &other);
    UpdateDeviceStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceStatusRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

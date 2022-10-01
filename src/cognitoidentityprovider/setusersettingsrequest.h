// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUSERSETTINGSREQUEST_H
#define QTAWS_SETUSERSETTINGSREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserSettingsRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT SetUserSettingsRequest : public CognitoIdentityProviderRequest {

public:
    SetUserSettingsRequest(const SetUserSettingsRequest &other);
    SetUserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetUserSettingsRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

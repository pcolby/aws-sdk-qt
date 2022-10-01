// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINSETUSERSETTINGSREQUEST_H
#define QTAWS_ADMINSETUSERSETTINGSREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminSetUserSettingsRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminSetUserSettingsRequest : public CognitoIdentityProviderRequest {

public:
    AdminSetUserSettingsRequest(const AdminSetUserSettingsRequest &other);
    AdminSetUserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminSetUserSettingsRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

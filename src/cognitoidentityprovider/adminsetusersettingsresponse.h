// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINSETUSERSETTINGSRESPONSE_H
#define QTAWS_ADMINSETUSERSETTINGSRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminsetusersettingsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminSetUserSettingsResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminSetUserSettingsResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminSetUserSettingsResponse(const AdminSetUserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminSetUserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminSetUserSettingsResponse)
    Q_DISABLE_COPY(AdminSetUserSettingsResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

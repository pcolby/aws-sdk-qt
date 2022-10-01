// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUSERSETTINGSRESPONSE_H
#define QTAWS_SETUSERSETTINGSRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "setusersettingsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserSettingsResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT SetUserSettingsResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    SetUserSettingsResponse(const SetUserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetUserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetUserSettingsResponse)
    Q_DISABLE_COPY(SetUserSettingsResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

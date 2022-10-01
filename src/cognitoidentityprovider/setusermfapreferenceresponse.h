// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUSERMFAPREFERENCERESPONSE_H
#define QTAWS_SETUSERMFAPREFERENCERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "setusermfapreferencerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserMFAPreferenceResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT SetUserMFAPreferenceResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    SetUserMFAPreferenceResponse(const SetUserMFAPreferenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetUserMFAPreferenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetUserMFAPreferenceResponse)
    Q_DISABLE_COPY(SetUserMFAPreferenceResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

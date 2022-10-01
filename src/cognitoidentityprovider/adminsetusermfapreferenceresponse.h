// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINSETUSERMFAPREFERENCERESPONSE_H
#define QTAWS_ADMINSETUSERMFAPREFERENCERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminsetusermfapreferencerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminSetUserMFAPreferenceResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminSetUserMFAPreferenceResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminSetUserMFAPreferenceResponse(const AdminSetUserMFAPreferenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminSetUserMFAPreferenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminSetUserMFAPreferenceResponse)
    Q_DISABLE_COPY(AdminSetUserMFAPreferenceResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

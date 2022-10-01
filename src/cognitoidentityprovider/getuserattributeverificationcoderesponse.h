// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERATTRIBUTEVERIFICATIONCODERESPONSE_H
#define QTAWS_GETUSERATTRIBUTEVERIFICATIONCODERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "getuserattributeverificationcoderequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUserAttributeVerificationCodeResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetUserAttributeVerificationCodeResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    GetUserAttributeVerificationCodeResponse(const GetUserAttributeVerificationCodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUserAttributeVerificationCodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserAttributeVerificationCodeResponse)
    Q_DISABLE_COPY(GetUserAttributeVerificationCodeResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

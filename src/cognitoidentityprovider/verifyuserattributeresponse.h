// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYUSERATTRIBUTERESPONSE_H
#define QTAWS_VERIFYUSERATTRIBUTERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "verifyuserattributerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class VerifyUserAttributeResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT VerifyUserAttributeResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    VerifyUserAttributeResponse(const VerifyUserAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifyUserAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyUserAttributeResponse)
    Q_DISABLE_COPY(VerifyUserAttributeResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

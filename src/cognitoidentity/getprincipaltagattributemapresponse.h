// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPRINCIPALTAGATTRIBUTEMAPRESPONSE_H
#define QTAWS_GETPRINCIPALTAGATTRIBUTEMAPRESPONSE_H

#include "cognitoidentityresponse.h"
#include "getprincipaltagattributemaprequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetPrincipalTagAttributeMapResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT GetPrincipalTagAttributeMapResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    GetPrincipalTagAttributeMapResponse(const GetPrincipalTagAttributeMapRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPrincipalTagAttributeMapRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPrincipalTagAttributeMapResponse)
    Q_DISABLE_COPY(GetPrincipalTagAttributeMapResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif

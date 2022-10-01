// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETPRINCIPALTAGATTRIBUTEMAPRESPONSE_H
#define QTAWS_SETPRINCIPALTAGATTRIBUTEMAPRESPONSE_H

#include "cognitoidentityresponse.h"
#include "setprincipaltagattributemaprequest.h"

namespace QtAws {
namespace CognitoIdentity {

class SetPrincipalTagAttributeMapResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT SetPrincipalTagAttributeMapResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    SetPrincipalTagAttributeMapResponse(const SetPrincipalTagAttributeMapRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetPrincipalTagAttributeMapRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetPrincipalTagAttributeMapResponse)
    Q_DISABLE_COPY(SetPrincipalTagAttributeMapResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif

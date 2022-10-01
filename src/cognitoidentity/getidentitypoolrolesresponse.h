// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPOOLROLESRESPONSE_H
#define QTAWS_GETIDENTITYPOOLROLESRESPONSE_H

#include "cognitoidentityresponse.h"
#include "getidentitypoolrolesrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetIdentityPoolRolesResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT GetIdentityPoolRolesResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    GetIdentityPoolRolesResponse(const GetIdentityPoolRolesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIdentityPoolRolesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityPoolRolesResponse)
    Q_DISABLE_COPY(GetIdentityPoolRolesResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYPOOLROLESRESPONSE_H
#define QTAWS_SETIDENTITYPOOLROLESRESPONSE_H

#include "cognitoidentityresponse.h"
#include "setidentitypoolrolesrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class SetIdentityPoolRolesResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT SetIdentityPoolRolesResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    SetIdentityPoolRolesResponse(const SetIdentityPoolRolesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetIdentityPoolRolesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityPoolRolesResponse)
    Q_DISABLE_COPY(SetIdentityPoolRolesResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif

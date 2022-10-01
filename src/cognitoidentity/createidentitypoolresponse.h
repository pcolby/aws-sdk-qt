// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIDENTITYPOOLRESPONSE_H
#define QTAWS_CREATEIDENTITYPOOLRESPONSE_H

#include "cognitoidentityresponse.h"
#include "createidentitypoolrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class CreateIdentityPoolResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT CreateIdentityPoolResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    CreateIdentityPoolResponse(const CreateIdentityPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIdentityPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIdentityPoolResponse)
    Q_DISABLE_COPY(CreateIdentityPoolResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif

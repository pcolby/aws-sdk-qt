// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPOOLRESPONSE_H
#define QTAWS_DELETEIDENTITYPOOLRESPONSE_H

#include "cognitoidentityresponse.h"
#include "deleteidentitypoolrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class DeleteIdentityPoolResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT DeleteIdentityPoolResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    DeleteIdentityPoolResponse(const DeleteIdentityPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIdentityPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIdentityPoolResponse)
    Q_DISABLE_COPY(DeleteIdentityPoolResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif

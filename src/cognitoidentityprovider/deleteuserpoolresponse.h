// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOOLRESPONSE_H
#define QTAWS_DELETEUSERPOOLRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "deleteuserpoolrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserPoolResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteUserPoolResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DeleteUserPoolResponse(const DeleteUserPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserPoolResponse)
    Q_DISABLE_COPY(DeleteUserPoolResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

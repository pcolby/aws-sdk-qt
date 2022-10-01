// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOOLCLIENTRESPONSE_H
#define QTAWS_DELETEUSERPOOLCLIENTRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "deleteuserpoolclientrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserPoolClientResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteUserPoolClientResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DeleteUserPoolClientResponse(const DeleteUserPoolClientRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserPoolClientRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserPoolClientResponse)
    Q_DISABLE_COPY(DeleteUserPoolClientResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

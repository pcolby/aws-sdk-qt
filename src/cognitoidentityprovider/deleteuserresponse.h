// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERRESPONSE_H
#define QTAWS_DELETEUSERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "deleteuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteUserResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DeleteUserResponse(const DeleteUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserResponse)
    Q_DISABLE_COPY(DeleteUserResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

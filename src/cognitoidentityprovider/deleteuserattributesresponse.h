// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERATTRIBUTESRESPONSE_H
#define QTAWS_DELETEUSERATTRIBUTESRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "deleteuserattributesrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserAttributesResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteUserAttributesResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DeleteUserAttributesResponse(const DeleteUserAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserAttributesResponse)
    Q_DISABLE_COPY(DeleteUserAttributesResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

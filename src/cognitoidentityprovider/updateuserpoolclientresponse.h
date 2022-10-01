// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPOOLCLIENTRESPONSE_H
#define QTAWS_UPDATEUSERPOOLCLIENTRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "updateuserpoolclientrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserPoolClientResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT UpdateUserPoolClientResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    UpdateUserPoolClientResponse(const UpdateUserPoolClientRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserPoolClientRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserPoolClientResponse)
    Q_DISABLE_COPY(UpdateUserPoolClientResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

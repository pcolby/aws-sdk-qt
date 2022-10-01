// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCESERVERRESPONSE_H
#define QTAWS_CREATERESOURCESERVERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "createresourceserverrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateResourceServerResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CreateResourceServerResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    CreateResourceServerResponse(const CreateResourceServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResourceServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceServerResponse)
    Q_DISABLE_COPY(CreateResourceServerResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

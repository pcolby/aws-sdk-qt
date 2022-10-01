// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESERVERRESPONSE_H
#define QTAWS_DELETERESOURCESERVERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "deleteresourceserverrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteResourceServerResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DeleteResourceServerResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DeleteResourceServerResponse(const DeleteResourceServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResourceServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceServerResponse)
    Q_DISABLE_COPY(DeleteResourceServerResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

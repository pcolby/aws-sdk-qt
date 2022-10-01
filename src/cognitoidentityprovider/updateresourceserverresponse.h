// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCESERVERRESPONSE_H
#define QTAWS_UPDATERESOURCESERVERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "updateresourceserverrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateResourceServerResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT UpdateResourceServerResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    UpdateResourceServerResponse(const UpdateResourceServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResourceServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceServerResponse)
    Q_DISABLE_COPY(UpdateResourceServerResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

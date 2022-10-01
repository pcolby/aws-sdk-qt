// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIDENTITYPROVIDERRESPONSE_H
#define QTAWS_UPDATEIDENTITYPROVIDERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "updateidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateIdentityProviderResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT UpdateIdentityProviderResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    UpdateIdentityProviderResponse(const UpdateIdentityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIdentityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIdentityProviderResponse)
    Q_DISABLE_COPY(UpdateIdentityProviderResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

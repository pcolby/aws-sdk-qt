// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERATTRIBUTESRESPONSE_H
#define QTAWS_UPDATEUSERATTRIBUTESRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "updateuserattributesrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserAttributesResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT UpdateUserAttributesResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    UpdateUserAttributesResponse(const UpdateUserAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserAttributesResponse)
    Q_DISABLE_COPY(UpdateUserAttributesResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

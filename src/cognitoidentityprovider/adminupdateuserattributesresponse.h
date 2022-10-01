// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUPDATEUSERATTRIBUTESRESPONSE_H
#define QTAWS_ADMINUPDATEUSERATTRIBUTESRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminupdateuserattributesrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUpdateUserAttributesResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminUpdateUserAttributesResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminUpdateUserAttributesResponse(const AdminUpdateUserAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminUpdateUserAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminUpdateUserAttributesResponse)
    Q_DISABLE_COPY(AdminUpdateUserAttributesResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

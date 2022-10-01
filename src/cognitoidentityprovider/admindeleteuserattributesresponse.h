// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDELETEUSERATTRIBUTESRESPONSE_H
#define QTAWS_ADMINDELETEUSERATTRIBUTESRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "admindeleteuserattributesrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDeleteUserAttributesResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminDeleteUserAttributesResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminDeleteUserAttributesResponse(const AdminDeleteUserAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminDeleteUserAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminDeleteUserAttributesResponse)
    Q_DISABLE_COPY(AdminDeleteUserAttributesResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

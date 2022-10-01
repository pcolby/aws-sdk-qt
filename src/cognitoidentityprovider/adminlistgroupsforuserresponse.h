// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLISTGROUPSFORUSERRESPONSE_H
#define QTAWS_ADMINLISTGROUPSFORUSERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminlistgroupsforuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminListGroupsForUserResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminListGroupsForUserResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminListGroupsForUserResponse(const AdminListGroupsForUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminListGroupsForUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminListGroupsForUserResponse)
    Q_DISABLE_COPY(AdminListGroupsForUserResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

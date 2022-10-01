// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINADDUSERTOGROUPRESPONSE_H
#define QTAWS_ADMINADDUSERTOGROUPRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminaddusertogrouprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminAddUserToGroupResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminAddUserToGroupResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminAddUserToGroupResponse(const AdminAddUserToGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminAddUserToGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminAddUserToGroupResponse)
    Q_DISABLE_COPY(AdminAddUserToGroupResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

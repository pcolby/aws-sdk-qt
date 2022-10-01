// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINREMOVEUSERFROMGROUPRESPONSE_H
#define QTAWS_ADMINREMOVEUSERFROMGROUPRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminremoveuserfromgrouprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminRemoveUserFromGroupResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminRemoveUserFromGroupResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminRemoveUserFromGroupResponse(const AdminRemoveUserFromGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminRemoveUserFromGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminRemoveUserFromGroupResponse)
    Q_DISABLE_COPY(AdminRemoveUserFromGroupResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

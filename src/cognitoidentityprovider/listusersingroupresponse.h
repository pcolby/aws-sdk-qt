// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSINGROUPRESPONSE_H
#define QTAWS_LISTUSERSINGROUPRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "listusersingrouprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUsersInGroupResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ListUsersInGroupResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ListUsersInGroupResponse(const ListUsersInGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUsersInGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUsersInGroupResponse)
    Q_DISABLE_COPY(ListUsersInGroupResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

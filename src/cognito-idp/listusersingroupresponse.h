/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTUSERSINGROUPRESPONSE_H
#define QTAWS_LISTUSERSINGROUPRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "listusersingrouprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUsersInGroupResponsePrivate;

class QTAWS_EXPORT ListUsersInGroupResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ListUsersInGroupResponse(const ListUsersInGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUsersInGroupRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(ListUsersInGroupResponse)
    Q_DISABLE_COPY(ListUsersInGroupResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif

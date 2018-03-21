/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ADMINADDUSERTOGROUPRESPONSE_H
#define QTAWS_ADMINADDUSERTOGROUPRESPONSE_H

#include "cognito-idpresponse.h"
#include "adminaddusertogrouprequest.h"

namespace AWS {

namespace cognito-idp {

class AdminAddUserToGroupResponsePrivate;

class QTAWS_EXPORT AdminAddUserToGroupResponse : public AdminAddUserToGroupResponse {
    Q_OBJECT

public:
    AdminAddUserToGroupResponse(const AdminAddUserToGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminAddUserToGroupRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(AdminAddUserToGroupResponse)
    Q_DISABLE_COPY(AdminAddUserToGroupResponse)

};

} // namespace cognito-idp
} // namespace AWS

#endif

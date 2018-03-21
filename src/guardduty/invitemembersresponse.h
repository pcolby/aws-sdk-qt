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

#ifndef QTAWS_INVITEMEMBERSRESPONSE_H
#define QTAWS_INVITEMEMBERSRESPONSE_H

#include "guarddutyresponse.h"
#include "invitemembersrequest.h"

namespace AWS {

namespace GuardDuty {

class InviteMembersResponsePrivate;

class QTAWS_EXPORT InviteMembersResponse : public InviteMembersResponse {
    Q_OBJECT

public:
    InviteMembersResponse(const InviteMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InviteMembersRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(InviteMembersResponse)
    Q_DISABLE_COPY(InviteMembersResponse)

};

} // namespace GuardDuty
} // namespace AWS

#endif

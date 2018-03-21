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

#ifndef QTAWS_SETVISIBLETOALLUSERSRESPONSE_H
#define QTAWS_SETVISIBLETOALLUSERSRESPONSE_H

#include "emrresponse.h"
#include "setvisibletoallusersrequest.h"

namespace AWS {

namespace EMR {

class SetVisibleToAllUsersResponsePrivate;

class QTAWS_EXPORT SetVisibleToAllUsersResponse : public SetVisibleToAllUsersResponse {
    Q_OBJECT

public:
    SetVisibleToAllUsersResponse(const SetVisibleToAllUsersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetVisibleToAllUsersRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SetVisibleToAllUsersResponse)
    Q_DISABLE_COPY(SetVisibleToAllUsersResponse)

};

} // namespace EMR
} // namespace AWS

#endif

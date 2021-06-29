/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTGAMESERVERSRESPONSE_H
#define QTAWS_LISTGAMESERVERSRESPONSE_H

#include "gameliftresponse.h"
#include "listgameserversrequest.h"

namespace QtAws {
namespace GameLift {

class ListGameServersResponsePrivate;

class QTAWSGAMELIFT_EXPORT ListGameServersResponse : public GameLiftResponse {
    Q_OBJECT

public:
    ListGameServersResponse(const ListGameServersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGameServersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGameServersResponse)
    Q_DISABLE_COPY(ListGameServersResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif

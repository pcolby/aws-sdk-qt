/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_CREATEGAMESESSIONRESPONSE_H
#define QTAWS_CREATEGAMESESSIONRESPONSE_H

#include "gameliftresponse.h"
#include "creategamesessionrequest.h"

namespace QtAws {
namespace GameLift {

class CreateGameSessionResponsePrivate;

class QTAWS_EXPORT CreateGameSessionResponse : public GameLiftResponse {
    Q_OBJECT

public:
    CreateGameSessionResponse(const CreateGameSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGameSessionRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(CreateGameSessionResponse)
    Q_DISABLE_COPY(CreateGameSessionResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif

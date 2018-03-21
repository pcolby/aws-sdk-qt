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

#ifndef QTAWS_CREATEPLAYERSESSIONRESPONSE_H
#define QTAWS_CREATEPLAYERSESSIONRESPONSE_H

#include "gameliftresponse.h"
#include "createplayersessionrequest.h"

namespace AWS {

namespace GameLift {

class CreatePlayerSessionResponsePrivate;

class QTAWS_EXPORT CreatePlayerSessionResponse : public CreatePlayerSessionResponse {
    Q_OBJECT

public:
    CreatePlayerSessionResponse(const CreatePlayerSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePlayerSessionRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreatePlayerSessionResponse)
    Q_DISABLE_COPY(CreatePlayerSessionResponse)

};

} // namespace GameLift
} // namespace AWS

#endif

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

#ifndef QTAWS_STARTMATCHMAKINGRESPONSE_P_H
#define QTAWS_STARTMATCHMAKINGRESPONSE_P_H

#include "gameliftresponse.h"
#include "startmatchmakingrequest.h"

namespace AWS {

namespace GameLift {

class StartMatchmakingResponse;

class QTAWS_EXPORT StartMatchmakingResponsePrivate : public GameLiftResponsePrivate {
    Q_OBJECT

public:

    StartMatchmakingResponsePrivate(StartMatchmakingResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMatchmakingResponse)
    Q_DISABLE_COPY(StartMatchmakingResponsePrivate)

};

} // namespace GameLift
} // namespace AWS

#endif

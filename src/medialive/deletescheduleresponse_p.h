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

#ifndef QTAWS_DELETESCHEDULERESPONSE_P_H
#define QTAWS_DELETESCHEDULERESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DeleteScheduleResponse;

class DeleteScheduleResponsePrivate : public MediaLiveResponsePrivate {

public:

    DeleteScheduleResponsePrivate(DeleteScheduleResponse * const q);

    void parseDeleteScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteScheduleResponse)
    Q_DISABLE_COPY(DeleteScheduleResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif

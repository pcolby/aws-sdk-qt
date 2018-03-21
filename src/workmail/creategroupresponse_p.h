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

#ifndef QTAWS_CREATEGROUPRESPONSE_P_H
#define QTAWS_CREATEGROUPRESPONSE_P_H

#include "workmailresponse.h"
#include "creategrouprequest.h"

namespace AWS {

namespace WorkMail {

class CreateGroupResponse;

class QTAWS_EXPORT CreateGroupResponsePrivate : public WorkMailResponsePrivate {
    Q_OBJECT

public:

    CreateGroupResponsePrivate(CreateGroupResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGroupResponse)
    Q_DISABLE_COPY(CreateGroupResponsePrivate)

};

} // namespace WorkMail
} // namespace AWS

#endif

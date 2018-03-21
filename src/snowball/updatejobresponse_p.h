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

#ifndef QTAWS_UPDATEJOBRESPONSE_P_H
#define QTAWS_UPDATEJOBRESPONSE_P_H

#include "snowballresponse.h"
#include "updatejobrequest.h"

namespace AWS {

namespace Snowball {

class UpdateJobResponse;

class QTAWS_EXPORT UpdateJobResponsePrivate : public SnowballResponsePrivate {
    Q_OBJECT

public:

    UpdateJobResponsePrivate(UpdateJobResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateJobResponse)
    Q_DISABLE_COPY(UpdateJobResponsePrivate)

};

} // namespace Snowball
} // namespace AWS

#endif

/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_LISTTHINGTYPESRESPONSE_P_H
#define QTAWS_LISTTHINGTYPESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListThingTypesResponse;

class QTAWS_EXPORT ListThingTypesResponsePrivate : public IoTResponsePrivate {

public:

    ListThingTypesResponsePrivate(ListThingTypesResponse * const q);

    void parseListThingTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThingTypesResponse)
    Q_DISABLE_COPY(ListThingTypesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif

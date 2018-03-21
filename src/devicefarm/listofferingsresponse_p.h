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

#ifndef QTAWS_LISTOFFERINGSRESPONSE_P_H
#define QTAWS_LISTOFFERINGSRESPONSE_P_H

#include "devicefarmresponse.h"
#include "listofferingsrequest.h"

namespace AWS {

namespace DeviceFarm {

class ListOfferingsResponse;

class QTAWS_EXPORT ListOfferingsResponsePrivate : public DeviceFarmResponsePrivate {
    Q_OBJECT

public:

    ListOfferingsResponsePrivate(ListOfferingsResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOfferingsResponse)
    Q_DISABLE_COPY(ListOfferingsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace AWS

#endif

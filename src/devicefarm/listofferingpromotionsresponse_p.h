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

#ifndef QTAWS_LISTOFFERINGPROMOTIONSRESPONSE_P_H
#define QTAWS_LISTOFFERINGPROMOTIONSRESPONSE_P_H

#include "devicefarmresponse.h"
#include "listofferingpromotionsrequest.h"

namespace AWS {

namespace DeviceFarm {

class ListOfferingPromotionsResponse;

class QTAWS_EXPORT ListOfferingPromotionsResponsePrivate : public DeviceFarmResponsePrivate {
    Q_OBJECT

public:

    ListOfferingPromotionsResponsePrivate(ListOfferingPromotionsResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOfferingPromotionsResponse)
    Q_DISABLE_COPY(ListOfferingPromotionsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace AWS

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGPROMOTIONSRESPONSE_P_H
#define QTAWS_LISTOFFERINGPROMOTIONSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListOfferingPromotionsResponse;

class ListOfferingPromotionsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListOfferingPromotionsResponsePrivate(ListOfferingPromotionsResponse * const q);

    void parseListOfferingPromotionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOfferingPromotionsResponse)
    Q_DISABLE_COPY(ListOfferingPromotionsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

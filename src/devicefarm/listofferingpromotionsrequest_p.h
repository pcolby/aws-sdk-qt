// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGPROMOTIONSREQUEST_P_H
#define QTAWS_LISTOFFERINGPROMOTIONSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listofferingpromotionsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListOfferingPromotionsRequest;

class ListOfferingPromotionsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListOfferingPromotionsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListOfferingPromotionsRequest * const q);
    ListOfferingPromotionsRequestPrivate(const ListOfferingPromotionsRequestPrivate &other,
                                   ListOfferingPromotionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOfferingPromotionsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

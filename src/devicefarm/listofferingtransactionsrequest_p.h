// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGTRANSACTIONSREQUEST_P_H
#define QTAWS_LISTOFFERINGTRANSACTIONSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listofferingtransactionsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListOfferingTransactionsRequest;

class ListOfferingTransactionsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListOfferingTransactionsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListOfferingTransactionsRequest * const q);
    ListOfferingTransactionsRequestPrivate(const ListOfferingTransactionsRequestPrivate &other,
                                   ListOfferingTransactionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOfferingTransactionsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

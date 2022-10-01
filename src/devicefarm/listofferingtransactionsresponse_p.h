// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGTRANSACTIONSRESPONSE_P_H
#define QTAWS_LISTOFFERINGTRANSACTIONSRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class ListOfferingTransactionsResponse;

class ListOfferingTransactionsResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit ListOfferingTransactionsResponsePrivate(ListOfferingTransactionsResponse * const q);

    void parseListOfferingTransactionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOfferingTransactionsResponse)
    Q_DISABLE_COPY(ListOfferingTransactionsResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

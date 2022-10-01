// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNERACCOUNTSRESPONSE_P_H
#define QTAWS_LISTPARTNERACCOUNTSRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListPartnerAccountsResponse;

class ListPartnerAccountsResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListPartnerAccountsResponsePrivate(ListPartnerAccountsResponse * const q);

    void parseListPartnerAccountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPartnerAccountsResponse)
    Q_DISABLE_COPY(ListPartnerAccountsResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

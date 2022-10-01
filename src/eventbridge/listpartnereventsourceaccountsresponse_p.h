// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNEREVENTSOURCEACCOUNTSRESPONSE_P_H
#define QTAWS_LISTPARTNEREVENTSOURCEACCOUNTSRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class ListPartnerEventSourceAccountsResponse;

class ListPartnerEventSourceAccountsResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit ListPartnerEventSourceAccountsResponsePrivate(ListPartnerEventSourceAccountsResponse * const q);

    void parseListPartnerEventSourceAccountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPartnerEventSourceAccountsResponse)
    Q_DISABLE_COPY(ListPartnerEventSourceAccountsResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif

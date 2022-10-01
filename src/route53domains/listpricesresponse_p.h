// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICESRESPONSE_P_H
#define QTAWS_LISTPRICESRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class ListPricesResponse;

class ListPricesResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit ListPricesResponsePrivate(ListPricesResponse * const q);

    void parseListPricesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPricesResponse)
    Q_DISABLE_COPY(ListPricesResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif

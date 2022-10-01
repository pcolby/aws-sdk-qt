// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPERATIONSRESPONSE_P_H
#define QTAWS_LISTOPERATIONSRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class ListOperationsResponse;

class ListOperationsResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit ListOperationsResponsePrivate(ListOperationsResponse * const q);

    void parseListOperationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOperationsResponse)
    Q_DISABLE_COPY(ListOperationsResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif

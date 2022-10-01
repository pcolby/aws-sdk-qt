// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCIDRLOCATIONSRESPONSE_P_H
#define QTAWS_LISTCIDRLOCATIONSRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListCidrLocationsResponse;

class ListCidrLocationsResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListCidrLocationsResponsePrivate(ListCidrLocationsResponse * const q);

    void parseListCidrLocationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCidrLocationsResponse)
    Q_DISABLE_COPY(ListCidrLocationsResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

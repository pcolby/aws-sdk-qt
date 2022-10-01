// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDZONESBYNAMERESPONSE_P_H
#define QTAWS_LISTHOSTEDZONESBYNAMERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListHostedZonesByNameResponse;

class ListHostedZonesByNameResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListHostedZonesByNameResponsePrivate(ListHostedZonesByNameResponse * const q);

    void parseListHostedZonesByNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHostedZonesByNameResponse)
    Q_DISABLE_COPY(ListHostedZonesByNameResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

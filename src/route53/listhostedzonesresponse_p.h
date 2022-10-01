// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDZONESRESPONSE_P_H
#define QTAWS_LISTHOSTEDZONESRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListHostedZonesResponse;

class ListHostedZonesResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListHostedZonesResponsePrivate(ListHostedZonesResponse * const q);

    void parseListHostedZonesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHostedZonesResponse)
    Q_DISABLE_COPY(ListHostedZonesResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

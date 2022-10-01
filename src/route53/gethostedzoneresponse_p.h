// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDZONERESPONSE_P_H
#define QTAWS_GETHOSTEDZONERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetHostedZoneResponse;

class GetHostedZoneResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetHostedZoneResponsePrivate(GetHostedZoneResponse * const q);

    void parseGetHostedZoneResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHostedZoneResponse)
    Q_DISABLE_COPY(GetHostedZoneResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

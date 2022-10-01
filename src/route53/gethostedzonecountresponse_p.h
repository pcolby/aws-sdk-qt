// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDZONECOUNTRESPONSE_P_H
#define QTAWS_GETHOSTEDZONECOUNTRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetHostedZoneCountResponse;

class GetHostedZoneCountResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetHostedZoneCountResponsePrivate(GetHostedZoneCountResponse * const q);

    void parseGetHostedZoneCountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHostedZoneCountResponse)
    Q_DISABLE_COPY(GetHostedZoneCountResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOSTEDZONERESPONSE_P_H
#define QTAWS_CREATEHOSTEDZONERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class CreateHostedZoneResponse;

class CreateHostedZoneResponsePrivate : public Route53ResponsePrivate {

public:

    explicit CreateHostedZoneResponsePrivate(CreateHostedZoneResponse * const q);

    void parseCreateHostedZoneResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHostedZoneResponse)
    Q_DISABLE_COPY(CreateHostedZoneResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

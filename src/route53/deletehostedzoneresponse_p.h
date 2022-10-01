// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTEDZONERESPONSE_P_H
#define QTAWS_DELETEHOSTEDZONERESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class DeleteHostedZoneResponse;

class DeleteHostedZoneResponsePrivate : public Route53ResponsePrivate {

public:

    explicit DeleteHostedZoneResponsePrivate(DeleteHostedZoneResponse * const q);

    void parseDeleteHostedZoneResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHostedZoneResponse)
    Q_DISABLE_COPY(DeleteHostedZoneResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

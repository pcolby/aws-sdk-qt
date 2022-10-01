// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDZONELIMITRESPONSE_P_H
#define QTAWS_GETHOSTEDZONELIMITRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetHostedZoneLimitResponse;

class GetHostedZoneLimitResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetHostedZoneLimitResponsePrivate(GetHostedZoneLimitResponse * const q);

    void parseGetHostedZoneLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHostedZoneLimitResponse)
    Q_DISABLE_COPY(GetHostedZoneLimitResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

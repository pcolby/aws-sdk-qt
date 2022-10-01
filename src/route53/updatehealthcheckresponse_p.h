// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHEALTHCHECKRESPONSE_P_H
#define QTAWS_UPDATEHEALTHCHECKRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class UpdateHealthCheckResponse;

class UpdateHealthCheckResponsePrivate : public Route53ResponsePrivate {

public:

    explicit UpdateHealthCheckResponsePrivate(UpdateHealthCheckResponse * const q);

    void parseUpdateHealthCheckResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateHealthCheckResponse)
    Q_DISABLE_COPY(UpdateHealthCheckResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

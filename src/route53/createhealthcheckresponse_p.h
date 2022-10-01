// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHEALTHCHECKRESPONSE_P_H
#define QTAWS_CREATEHEALTHCHECKRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class CreateHealthCheckResponse;

class CreateHealthCheckResponsePrivate : public Route53ResponsePrivate {

public:

    explicit CreateHealthCheckResponsePrivate(CreateHealthCheckResponse * const q);

    void parseCreateHealthCheckResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHealthCheckResponse)
    Q_DISABLE_COPY(CreateHealthCheckResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

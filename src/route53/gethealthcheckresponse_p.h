// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKRESPONSE_P_H
#define QTAWS_GETHEALTHCHECKRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckResponse;

class GetHealthCheckResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetHealthCheckResponsePrivate(GetHealthCheckResponse * const q);

    void parseGetHealthCheckResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHealthCheckResponse)
    Q_DISABLE_COPY(GetHealthCheckResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKSTATUSRESPONSE_P_H
#define QTAWS_GETHEALTHCHECKSTATUSRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckStatusResponse;

class GetHealthCheckStatusResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetHealthCheckStatusResponsePrivate(GetHealthCheckStatusResponse * const q);

    void parseGetHealthCheckStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHealthCheckStatusResponse)
    Q_DISABLE_COPY(GetHealthCheckStatusResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

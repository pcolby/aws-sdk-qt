// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKLASTFAILUREREASONRESPONSE_P_H
#define QTAWS_GETHEALTHCHECKLASTFAILUREREASONRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckLastFailureReasonResponse;

class GetHealthCheckLastFailureReasonResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetHealthCheckLastFailureReasonResponsePrivate(GetHealthCheckLastFailureReasonResponse * const q);

    void parseGetHealthCheckLastFailureReasonResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHealthCheckLastFailureReasonResponse)
    Q_DISABLE_COPY(GetHealthCheckLastFailureReasonResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

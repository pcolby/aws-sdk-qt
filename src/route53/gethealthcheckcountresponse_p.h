// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKCOUNTRESPONSE_P_H
#define QTAWS_GETHEALTHCHECKCOUNTRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckCountResponse;

class GetHealthCheckCountResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetHealthCheckCountResponsePrivate(GetHealthCheckCountResponse * const q);

    void parseGetHealthCheckCountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHealthCheckCountResponse)
    Q_DISABLE_COPY(GetHealthCheckCountResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGUREHEALTHCHECKRESPONSE_P_H
#define QTAWS_CONFIGUREHEALTHCHECKRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class ConfigureHealthCheckResponse;

class ConfigureHealthCheckResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit ConfigureHealthCheckResponsePrivate(ConfigureHealthCheckResponse * const q);

    void parseConfigureHealthCheckResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfigureHealthCheckResponse)
    Q_DISABLE_COPY(ConfigureHealthCheckResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

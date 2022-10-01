// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGUREHEALTHCHECKRESPONSE_H
#define QTAWS_CONFIGUREHEALTHCHECKRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "configurehealthcheckrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class ConfigureHealthCheckResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT ConfigureHealthCheckResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    ConfigureHealthCheckResponse(const ConfigureHealthCheckRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfigureHealthCheckRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfigureHealthCheckResponse)
    Q_DISABLE_COPY(ConfigureHealthCheckResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

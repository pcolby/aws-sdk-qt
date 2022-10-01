// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGUREHEALTHCHECKREQUEST_P_H
#define QTAWS_CONFIGUREHEALTHCHECKREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "configurehealthcheckrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class ConfigureHealthCheckRequest;

class ConfigureHealthCheckRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    ConfigureHealthCheckRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   ConfigureHealthCheckRequest * const q);
    ConfigureHealthCheckRequestPrivate(const ConfigureHealthCheckRequestPrivate &other,
                                   ConfigureHealthCheckRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfigureHealthCheckRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

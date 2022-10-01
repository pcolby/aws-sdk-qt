// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERLISTENERSRESPONSE_P_H
#define QTAWS_DELETELOADBALANCERLISTENERSRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeleteLoadBalancerListenersResponse;

class DeleteLoadBalancerListenersResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit DeleteLoadBalancerListenersResponsePrivate(DeleteLoadBalancerListenersResponse * const q);

    void parseDeleteLoadBalancerListenersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLoadBalancerListenersResponse)
    Q_DISABLE_COPY(DeleteLoadBalancerListenersResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

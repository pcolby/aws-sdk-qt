// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHELASTICLOADBALANCERRESPONSE_P_H
#define QTAWS_DETACHELASTICLOADBALANCERRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DetachElasticLoadBalancerResponse;

class DetachElasticLoadBalancerResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DetachElasticLoadBalancerResponsePrivate(DetachElasticLoadBalancerResponse * const q);

    void parseDetachElasticLoadBalancerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachElasticLoadBalancerResponse)
    Q_DISABLE_COPY(DetachElasticLoadBalancerResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

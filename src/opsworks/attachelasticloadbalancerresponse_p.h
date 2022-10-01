// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHELASTICLOADBALANCERRESPONSE_P_H
#define QTAWS_ATTACHELASTICLOADBALANCERRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class AttachElasticLoadBalancerResponse;

class AttachElasticLoadBalancerResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit AttachElasticLoadBalancerResponsePrivate(AttachElasticLoadBalancerResponse * const q);

    void parseAttachElasticLoadBalancerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachElasticLoadBalancerResponse)
    Q_DISABLE_COPY(AttachElasticLoadBalancerResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

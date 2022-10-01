// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIPADDRESSTYPERESPONSE_P_H
#define QTAWS_SETIPADDRESSTYPERESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetIpAddressTypeResponse;

class SetIpAddressTypeResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit SetIpAddressTypeResponsePrivate(SetIpAddressTypeResponse * const q);

    void parseSetIpAddressTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetIpAddressTypeResponse)
    Q_DISABLE_COPY(SetIpAddressTypeResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVELISTENERCERTIFICATESRESPONSE_P_H
#define QTAWS_REMOVELISTENERCERTIFICATESRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class RemoveListenerCertificatesResponse;

class RemoveListenerCertificatesResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit RemoveListenerCertificatesResponsePrivate(RemoveListenerCertificatesResponse * const q);

    void parseRemoveListenerCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveListenerCertificatesResponse)
    Q_DISABLE_COPY(RemoveListenerCertificatesResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

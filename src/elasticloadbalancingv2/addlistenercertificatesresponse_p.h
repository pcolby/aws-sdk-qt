// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDLISTENERCERTIFICATESRESPONSE_P_H
#define QTAWS_ADDLISTENERCERTIFICATESRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class AddListenerCertificatesResponse;

class AddListenerCertificatesResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit AddListenerCertificatesResponsePrivate(AddListenerCertificatesResponse * const q);

    void parseAddListenerCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddListenerCertificatesResponse)
    Q_DISABLE_COPY(AddListenerCertificatesResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

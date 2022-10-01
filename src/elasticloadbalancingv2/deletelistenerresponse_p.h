// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELISTENERRESPONSE_P_H
#define QTAWS_DELETELISTENERRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeleteListenerResponse;

class DeleteListenerResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DeleteListenerResponsePrivate(DeleteListenerResponse * const q);

    void parseDeleteListenerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteListenerResponse)
    Q_DISABLE_COPY(DeleteListenerResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

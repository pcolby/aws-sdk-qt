// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLISTENERRESPONSE_P_H
#define QTAWS_MODIFYLISTENERRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyListenerResponse;

class ModifyListenerResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit ModifyListenerResponsePrivate(ModifyListenerResponse * const q);

    void parseModifyListenerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyListenerResponse)
    Q_DISABLE_COPY(ModifyListenerResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

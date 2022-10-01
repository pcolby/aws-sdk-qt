// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYINSTANCESRESPONSE_P_H
#define QTAWS_LISTTRAFFICPOLICYINSTANCESRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyInstancesResponse;

class ListTrafficPolicyInstancesResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListTrafficPolicyInstancesResponsePrivate(ListTrafficPolicyInstancesResponse * const q);

    void parseListTrafficPolicyInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrafficPolicyInstancesResponse)
    Q_DISABLE_COPY(ListTrafficPolicyInstancesResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

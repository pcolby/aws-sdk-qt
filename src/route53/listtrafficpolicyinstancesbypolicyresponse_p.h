// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYINSTANCESBYPOLICYRESPONSE_P_H
#define QTAWS_LISTTRAFFICPOLICYINSTANCESBYPOLICYRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyInstancesByPolicyResponse;

class ListTrafficPolicyInstancesByPolicyResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListTrafficPolicyInstancesByPolicyResponsePrivate(ListTrafficPolicyInstancesByPolicyResponse * const q);

    void parseListTrafficPolicyInstancesByPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrafficPolicyInstancesByPolicyResponse)
    Q_DISABLE_COPY(ListTrafficPolicyInstancesByPolicyResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

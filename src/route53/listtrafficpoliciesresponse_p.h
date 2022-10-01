// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICIESRESPONSE_P_H
#define QTAWS_LISTTRAFFICPOLICIESRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPoliciesResponse;

class ListTrafficPoliciesResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListTrafficPoliciesResponsePrivate(ListTrafficPoliciesResponse * const q);

    void parseListTrafficPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrafficPoliciesResponse)
    Q_DISABLE_COPY(ListTrafficPoliciesResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

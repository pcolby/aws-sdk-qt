// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYVERSIONSRESPONSE_P_H
#define QTAWS_LISTTRAFFICPOLICYVERSIONSRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyVersionsResponse;

class ListTrafficPolicyVersionsResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListTrafficPolicyVersionsResponsePrivate(ListTrafficPolicyVersionsResponse * const q);

    void parseListTrafficPolicyVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrafficPolicyVersionsResponse)
    Q_DISABLE_COPY(ListTrafficPolicyVersionsResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

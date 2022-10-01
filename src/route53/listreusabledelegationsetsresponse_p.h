// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREUSABLEDELEGATIONSETSRESPONSE_P_H
#define QTAWS_LISTREUSABLEDELEGATIONSETSRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListReusableDelegationSetsResponse;

class ListReusableDelegationSetsResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListReusableDelegationSetsResponsePrivate(ListReusableDelegationSetsResponse * const q);

    void parseListReusableDelegationSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReusableDelegationSetsResponse)
    Q_DISABLE_COPY(ListReusableDelegationSetsResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

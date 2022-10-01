// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREUSABLEDELEGATIONSETLIMITRESPONSE_P_H
#define QTAWS_GETREUSABLEDELEGATIONSETLIMITRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetReusableDelegationSetLimitResponse;

class GetReusableDelegationSetLimitResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetReusableDelegationSetLimitResponsePrivate(GetReusableDelegationSetLimitResponse * const q);

    void parseGetReusableDelegationSetLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReusableDelegationSetLimitResponse)
    Q_DISABLE_COPY(GetReusableDelegationSetLimitResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTLIMITRESPONSE_P_H
#define QTAWS_GETACCOUNTLIMITRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetAccountLimitResponse;

class GetAccountLimitResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetAccountLimitResponsePrivate(GetAccountLimitResponse * const q);

    void parseGetAccountLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountLimitResponse)
    Q_DISABLE_COPY(GetAccountLimitResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHECKERIPRANGESRESPONSE_P_H
#define QTAWS_GETCHECKERIPRANGESRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class GetCheckerIpRangesResponse;

class GetCheckerIpRangesResponsePrivate : public Route53ResponsePrivate {

public:

    explicit GetCheckerIpRangesResponsePrivate(GetCheckerIpRangesResponse * const q);

    void parseGetCheckerIpRangesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCheckerIpRangesResponse)
    Q_DISABLE_COPY(GetCheckerIpRangesResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif

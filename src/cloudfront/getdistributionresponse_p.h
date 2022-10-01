// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONRESPONSE_P_H
#define QTAWS_GETDISTRIBUTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetDistributionResponse;

class GetDistributionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetDistributionResponsePrivate(GetDistributionResponse * const q);

    void parseGetDistributionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDistributionResponse)
    Q_DISABLE_COPY(GetDistributionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif

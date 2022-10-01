// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONCONFIGRESPONSE_P_H
#define QTAWS_GETDISTRIBUTIONCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetDistributionConfigResponse;

class GetDistributionConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetDistributionConfigResponsePrivate(GetDistributionConfigResponse * const q);

    void parseGetDistributionConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDistributionConfigResponse)
    Q_DISABLE_COPY(GetDistributionConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif

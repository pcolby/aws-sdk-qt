// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGDISTRIBUTIONCONFIGRESPONSE_P_H
#define QTAWS_GETSTREAMINGDISTRIBUTIONCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetStreamingDistributionConfigResponse;

class GetStreamingDistributionConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetStreamingDistributionConfigResponsePrivate(GetStreamingDistributionConfigResponse * const q);

    void parseGetStreamingDistributionConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStreamingDistributionConfigResponse)
    Q_DISABLE_COPY(GetStreamingDistributionConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif

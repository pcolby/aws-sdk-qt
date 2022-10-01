// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGDISTRIBUTIONRESPONSE_P_H
#define QTAWS_GETSTREAMINGDISTRIBUTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetStreamingDistributionResponse;

class GetStreamingDistributionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetStreamingDistributionResponsePrivate(GetStreamingDistributionResponse * const q);

    void parseGetStreamingDistributionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStreamingDistributionResponse)
    Q_DISABLE_COPY(GetStreamingDistributionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif

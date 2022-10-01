// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMINGDISTRIBUTIONRESPONSE_P_H
#define QTAWS_UPDATESTREAMINGDISTRIBUTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class UpdateStreamingDistributionResponse;

class UpdateStreamingDistributionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit UpdateStreamingDistributionResponsePrivate(UpdateStreamingDistributionResponse * const q);

    void parseUpdateStreamingDistributionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStreamingDistributionResponse)
    Q_DISABLE_COPY(UpdateStreamingDistributionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif

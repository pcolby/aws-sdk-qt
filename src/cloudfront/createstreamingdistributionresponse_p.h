// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGDISTRIBUTIONRESPONSE_P_H
#define QTAWS_CREATESTREAMINGDISTRIBUTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateStreamingDistributionResponse;

class CreateStreamingDistributionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateStreamingDistributionResponsePrivate(CreateStreamingDistributionResponse * const q);

    void parseCreateStreamingDistributionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStreamingDistributionResponse)
    Q_DISABLE_COPY(CreateStreamingDistributionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif

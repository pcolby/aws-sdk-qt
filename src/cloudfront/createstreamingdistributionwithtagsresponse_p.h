// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGDISTRIBUTIONWITHTAGSRESPONSE_P_H
#define QTAWS_CREATESTREAMINGDISTRIBUTIONWITHTAGSRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateStreamingDistributionWithTagsResponse;

class CreateStreamingDistributionWithTagsResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateStreamingDistributionWithTagsResponsePrivate(CreateStreamingDistributionWithTagsResponse * const q);

    void parseCreateStreamingDistributionWithTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStreamingDistributionWithTagsResponse)
    Q_DISABLE_COPY(CreateStreamingDistributionWithTagsResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif

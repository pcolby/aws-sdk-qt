// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMINGDISTRIBUTIONRESPONSE_P_H
#define QTAWS_DELETESTREAMINGDISTRIBUTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class DeleteStreamingDistributionResponse;

class DeleteStreamingDistributionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit DeleteStreamingDistributionResponsePrivate(DeleteStreamingDistributionResponse * const q);

    void parseDeleteStreamingDistributionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStreamingDistributionResponse)
    Q_DISABLE_COPY(DeleteStreamingDistributionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif

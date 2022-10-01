// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONWITHTAGSRESPONSE_P_H
#define QTAWS_CREATEDISTRIBUTIONWITHTAGSRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class CreateDistributionWithTagsResponse;

class CreateDistributionWithTagsResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit CreateDistributionWithTagsResponsePrivate(CreateDistributionWithTagsResponse * const q);

    void parseCreateDistributionWithTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDistributionWithTagsResponse)
    Q_DISABLE_COPY(CreateDistributionWithTagsResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif

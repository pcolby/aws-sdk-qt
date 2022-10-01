// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLOUDFRONTORIGINACCESSIDENTITIESRESPONSE_P_H
#define QTAWS_LISTCLOUDFRONTORIGINACCESSIDENTITIESRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListCloudFrontOriginAccessIdentitiesResponse;

class ListCloudFrontOriginAccessIdentitiesResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListCloudFrontOriginAccessIdentitiesResponsePrivate(ListCloudFrontOriginAccessIdentitiesResponse * const q);

    void parseListCloudFrontOriginAccessIdentitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCloudFrontOriginAccessIdentitiesResponse)
    Q_DISABLE_COPY(ListCloudFrontOriginAccessIdentitiesResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif

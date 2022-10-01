// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETWEBSITERESPONSE_P_H
#define QTAWS_GETBUCKETWEBSITERESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketWebsiteResponse;

class GetBucketWebsiteResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketWebsiteResponsePrivate(GetBucketWebsiteResponse * const q);

    void parseGetBucketWebsiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketWebsiteResponse)
    Q_DISABLE_COPY(GetBucketWebsiteResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

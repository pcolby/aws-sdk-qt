// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETLOCATIONRESPONSE_P_H
#define QTAWS_GETBUCKETLOCATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketLocationResponse;

class GetBucketLocationResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketLocationResponsePrivate(GetBucketLocationResponse * const q);

    void parseGetBucketLocationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketLocationResponse)
    Q_DISABLE_COPY(GetBucketLocationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

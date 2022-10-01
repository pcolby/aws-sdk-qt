// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEADBUCKETRESPONSE_P_H
#define QTAWS_HEADBUCKETRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class HeadBucketResponse;

class HeadBucketResponsePrivate : public S3ResponsePrivate {

public:

    explicit HeadBucketResponsePrivate(HeadBucketResponse * const q);

    void parseHeadBucketResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(HeadBucketResponse)
    Q_DISABLE_COPY(HeadBucketResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUCKETRESPONSE_P_H
#define QTAWS_CREATEBUCKETRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class CreateBucketResponse;

class CreateBucketResponsePrivate : public S3ResponsePrivate {

public:

    explicit CreateBucketResponsePrivate(CreateBucketResponse * const q);

    void parseCreateBucketResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBucketResponse)
    Q_DISABLE_COPY(CreateBucketResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

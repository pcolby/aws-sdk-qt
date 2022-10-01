// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETWEBSITERESPONSE_P_H
#define QTAWS_DELETEBUCKETWEBSITERESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteBucketWebsiteResponse;

class DeleteBucketWebsiteResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteBucketWebsiteResponsePrivate(DeleteBucketWebsiteResponse * const q);

    void parseDeleteBucketWebsiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketWebsiteResponse)
    Q_DISABLE_COPY(DeleteBucketWebsiteResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

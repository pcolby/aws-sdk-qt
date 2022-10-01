// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETLIFECYCLERESPONSE_P_H
#define QTAWS_DELETEBUCKETLIFECYCLERESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteBucketLifecycleResponse;

class DeleteBucketLifecycleResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteBucketLifecycleResponsePrivate(DeleteBucketLifecycleResponse * const q);

    void parseDeleteBucketLifecycleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketLifecycleResponse)
    Q_DISABLE_COPY(DeleteBucketLifecycleResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETRESPONSE_P_H
#define QTAWS_DELETEBUCKETRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteBucketResponse;

class DeleteBucketResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteBucketResponsePrivate(DeleteBucketResponse * const q);

    void parseDeleteBucketResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketResponse)
    Q_DISABLE_COPY(DeleteBucketResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

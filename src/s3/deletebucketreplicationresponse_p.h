// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETREPLICATIONRESPONSE_P_H
#define QTAWS_DELETEBUCKETREPLICATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteBucketReplicationResponse;

class DeleteBucketReplicationResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteBucketReplicationResponsePrivate(DeleteBucketReplicationResponse * const q);

    void parseDeleteBucketReplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketReplicationResponse)
    Q_DISABLE_COPY(DeleteBucketReplicationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

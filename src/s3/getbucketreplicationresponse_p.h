// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETREPLICATIONRESPONSE_P_H
#define QTAWS_GETBUCKETREPLICATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketReplicationResponse;

class GetBucketReplicationResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketReplicationResponsePrivate(GetBucketReplicationResponse * const q);

    void parseGetBucketReplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketReplicationResponse)
    Q_DISABLE_COPY(GetBucketReplicationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETOWNERSHIPCONTROLSRESPONSE_P_H
#define QTAWS_PUTBUCKETOWNERSHIPCONTROLSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketOwnershipControlsResponse;

class PutBucketOwnershipControlsResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketOwnershipControlsResponsePrivate(PutBucketOwnershipControlsResponse * const q);

    void parsePutBucketOwnershipControlsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketOwnershipControlsResponse)
    Q_DISABLE_COPY(PutBucketOwnershipControlsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

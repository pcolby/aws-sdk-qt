// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETACLRESPONSE_P_H
#define QTAWS_PUTBUCKETACLRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketAclResponse;

class PutBucketAclResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketAclResponsePrivate(PutBucketAclResponse * const q);

    void parsePutBucketAclResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketAclResponse)
    Q_DISABLE_COPY(PutBucketAclResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

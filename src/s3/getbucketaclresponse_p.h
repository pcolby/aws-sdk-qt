// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETACLRESPONSE_P_H
#define QTAWS_GETBUCKETACLRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketAclResponse;

class GetBucketAclResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketAclResponsePrivate(GetBucketAclResponse * const q);

    void parseGetBucketAclResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketAclResponse)
    Q_DISABLE_COPY(GetBucketAclResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

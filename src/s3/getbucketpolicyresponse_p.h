// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETPOLICYRESPONSE_P_H
#define QTAWS_GETBUCKETPOLICYRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketPolicyResponse;

class GetBucketPolicyResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketPolicyResponsePrivate(GetBucketPolicyResponse * const q);

    void parseGetBucketPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketPolicyResponse)
    Q_DISABLE_COPY(GetBucketPolicyResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

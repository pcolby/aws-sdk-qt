// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETPOLICYSTATUSRESPONSE_P_H
#define QTAWS_GETBUCKETPOLICYSTATUSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketPolicyStatusResponse;

class GetBucketPolicyStatusResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketPolicyStatusResponsePrivate(GetBucketPolicyStatusResponse * const q);

    void parseGetBucketPolicyStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketPolicyStatusResponse)
    Q_DISABLE_COPY(GetBucketPolicyStatusResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

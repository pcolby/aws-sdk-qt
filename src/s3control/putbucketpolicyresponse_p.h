// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETPOLICYRESPONSE_P_H
#define QTAWS_PUTBUCKETPOLICYRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class PutBucketPolicyResponse;

class PutBucketPolicyResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit PutBucketPolicyResponsePrivate(PutBucketPolicyResponse * const q);

    void parsePutBucketPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketPolicyResponse)
    Q_DISABLE_COPY(PutBucketPolicyResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif

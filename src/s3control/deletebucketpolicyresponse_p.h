// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETPOLICYRESPONSE_P_H
#define QTAWS_DELETEBUCKETPOLICYRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class DeleteBucketPolicyResponse;

class DeleteBucketPolicyResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit DeleteBucketPolicyResponsePrivate(DeleteBucketPolicyResponse * const q);

    void parseDeleteBucketPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketPolicyResponse)
    Q_DISABLE_COPY(DeleteBucketPolicyResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif

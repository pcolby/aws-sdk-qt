// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETPOLICYRESPONSE_H
#define QTAWS_GETBUCKETPOLICYRESPONSE_H

#include "s3controlresponse.h"
#include "getbucketpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class GetBucketPolicyResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetBucketPolicyResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetBucketPolicyResponse(const GetBucketPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketPolicyResponse)
    Q_DISABLE_COPY(GetBucketPolicyResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif

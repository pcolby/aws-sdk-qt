// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETPOLICYRESPONSE_H
#define QTAWS_DELETEBUCKETPOLICYRESPONSE_H

#include "s3response.h"
#include "deletebucketpolicyrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketPolicyResponsePrivate;

class QTAWSS3_EXPORT DeleteBucketPolicyResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketPolicyResponse(const DeleteBucketPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketPolicyResponse)
    Q_DISABLE_COPY(DeleteBucketPolicyResponse)

};

} // namespace S3
} // namespace QtAws

#endif

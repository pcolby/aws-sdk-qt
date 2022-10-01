// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETPOLICYRESPONSE_H
#define QTAWS_DELETEBUCKETPOLICYRESPONSE_H

#include "s3controlresponse.h"
#include "deletebucketpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteBucketPolicyResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeleteBucketPolicyResponse : public S3ControlResponse {
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

} // namespace S3Control
} // namespace QtAws

#endif

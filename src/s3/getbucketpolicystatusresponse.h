// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETPOLICYSTATUSRESPONSE_H
#define QTAWS_GETBUCKETPOLICYSTATUSRESPONSE_H

#include "s3response.h"
#include "getbucketpolicystatusrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketPolicyStatusResponsePrivate;

class QTAWSS3_EXPORT GetBucketPolicyStatusResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketPolicyStatusResponse(const GetBucketPolicyStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketPolicyStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketPolicyStatusResponse)
    Q_DISABLE_COPY(GetBucketPolicyStatusResponse)

};

} // namespace S3
} // namespace QtAws

#endif

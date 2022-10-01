// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETREPLICATIONRESPONSE_H
#define QTAWS_GETBUCKETREPLICATIONRESPONSE_H

#include "s3response.h"
#include "getbucketreplicationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketReplicationResponsePrivate;

class QTAWSS3_EXPORT GetBucketReplicationResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketReplicationResponse(const GetBucketReplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketReplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketReplicationResponse)
    Q_DISABLE_COPY(GetBucketReplicationResponse)

};

} // namespace S3
} // namespace QtAws

#endif

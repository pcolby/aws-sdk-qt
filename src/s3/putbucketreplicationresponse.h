// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETREPLICATIONRESPONSE_H
#define QTAWS_PUTBUCKETREPLICATIONRESPONSE_H

#include "s3response.h"
#include "putbucketreplicationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketReplicationResponsePrivate;

class QTAWSS3_EXPORT PutBucketReplicationResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketReplicationResponse(const PutBucketReplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketReplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketReplicationResponse)
    Q_DISABLE_COPY(PutBucketReplicationResponse)

};

} // namespace S3
} // namespace QtAws

#endif

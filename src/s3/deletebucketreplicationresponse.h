// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETREPLICATIONRESPONSE_H
#define QTAWS_DELETEBUCKETREPLICATIONRESPONSE_H

#include "s3response.h"
#include "deletebucketreplicationrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketReplicationResponsePrivate;

class QTAWSS3_EXPORT DeleteBucketReplicationResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketReplicationResponse(const DeleteBucketReplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketReplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketReplicationResponse)
    Q_DISABLE_COPY(DeleteBucketReplicationResponse)

};

} // namespace S3
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETLIFECYCLERESPONSE_H
#define QTAWS_DELETEBUCKETLIFECYCLERESPONSE_H

#include "s3response.h"
#include "deletebucketlifecyclerequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketLifecycleResponsePrivate;

class QTAWSS3_EXPORT DeleteBucketLifecycleResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketLifecycleResponse(const DeleteBucketLifecycleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketLifecycleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketLifecycleResponse)
    Q_DISABLE_COPY(DeleteBucketLifecycleResponse)

};

} // namespace S3
} // namespace QtAws

#endif

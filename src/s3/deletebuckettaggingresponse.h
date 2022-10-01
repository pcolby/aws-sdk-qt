// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETTAGGINGRESPONSE_H
#define QTAWS_DELETEBUCKETTAGGINGRESPONSE_H

#include "s3response.h"
#include "deletebuckettaggingrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketTaggingResponsePrivate;

class QTAWSS3_EXPORT DeleteBucketTaggingResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketTaggingResponse(const DeleteBucketTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketTaggingResponse)
    Q_DISABLE_COPY(DeleteBucketTaggingResponse)

};

} // namespace S3
} // namespace QtAws

#endif

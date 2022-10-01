// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETTAGGINGRESPONSE_H
#define QTAWS_PUTBUCKETTAGGINGRESPONSE_H

#include "s3response.h"
#include "putbuckettaggingrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketTaggingResponsePrivate;

class QTAWSS3_EXPORT PutBucketTaggingResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketTaggingResponse(const PutBucketTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketTaggingResponse)
    Q_DISABLE_COPY(PutBucketTaggingResponse)

};

} // namespace S3
} // namespace QtAws

#endif

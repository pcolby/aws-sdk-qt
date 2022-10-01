// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETVERSIONINGRESPONSE_H
#define QTAWS_PUTBUCKETVERSIONINGRESPONSE_H

#include "s3response.h"
#include "putbucketversioningrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketVersioningResponsePrivate;

class QTAWSS3_EXPORT PutBucketVersioningResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketVersioningResponse(const PutBucketVersioningRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketVersioningRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketVersioningResponse)
    Q_DISABLE_COPY(PutBucketVersioningResponse)

};

} // namespace S3
} // namespace QtAws

#endif

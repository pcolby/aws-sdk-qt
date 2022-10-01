// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETLOGGINGRESPONSE_H
#define QTAWS_PUTBUCKETLOGGINGRESPONSE_H

#include "s3response.h"
#include "putbucketloggingrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketLoggingResponsePrivate;

class QTAWSS3_EXPORT PutBucketLoggingResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketLoggingResponse(const PutBucketLoggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketLoggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketLoggingResponse)
    Q_DISABLE_COPY(PutBucketLoggingResponse)

};

} // namespace S3
} // namespace QtAws

#endif

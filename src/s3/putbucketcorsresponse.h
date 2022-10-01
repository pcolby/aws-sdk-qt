// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETCORSRESPONSE_H
#define QTAWS_PUTBUCKETCORSRESPONSE_H

#include "s3response.h"
#include "putbucketcorsrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketCorsResponsePrivate;

class QTAWSS3_EXPORT PutBucketCorsResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketCorsResponse(const PutBucketCorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketCorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketCorsResponse)
    Q_DISABLE_COPY(PutBucketCorsResponse)

};

} // namespace S3
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETLOGGINGRESPONSE_H
#define QTAWS_GETBUCKETLOGGINGRESPONSE_H

#include "s3response.h"
#include "getbucketloggingrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketLoggingResponsePrivate;

class QTAWSS3_EXPORT GetBucketLoggingResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketLoggingResponse(const GetBucketLoggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketLoggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketLoggingResponse)
    Q_DISABLE_COPY(GetBucketLoggingResponse)

};

} // namespace S3
} // namespace QtAws

#endif

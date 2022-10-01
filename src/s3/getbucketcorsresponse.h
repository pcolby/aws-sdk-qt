// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETCORSRESPONSE_H
#define QTAWS_GETBUCKETCORSRESPONSE_H

#include "s3response.h"
#include "getbucketcorsrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketCorsResponsePrivate;

class QTAWSS3_EXPORT GetBucketCorsResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketCorsResponse(const GetBucketCorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketCorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketCorsResponse)
    Q_DISABLE_COPY(GetBucketCorsResponse)

};

} // namespace S3
} // namespace QtAws

#endif

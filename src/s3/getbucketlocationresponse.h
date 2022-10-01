// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETLOCATIONRESPONSE_H
#define QTAWS_GETBUCKETLOCATIONRESPONSE_H

#include "s3response.h"
#include "getbucketlocationrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketLocationResponsePrivate;

class QTAWSS3_EXPORT GetBucketLocationResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketLocationResponse(const GetBucketLocationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketLocationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketLocationResponse)
    Q_DISABLE_COPY(GetBucketLocationResponse)

};

} // namespace S3
} // namespace QtAws

#endif

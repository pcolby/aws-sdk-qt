// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETWEBSITERESPONSE_H
#define QTAWS_GETBUCKETWEBSITERESPONSE_H

#include "s3response.h"
#include "getbucketwebsiterequest.h"

namespace QtAws {
namespace S3 {

class GetBucketWebsiteResponsePrivate;

class QTAWSS3_EXPORT GetBucketWebsiteResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketWebsiteResponse(const GetBucketWebsiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketWebsiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketWebsiteResponse)
    Q_DISABLE_COPY(GetBucketWebsiteResponse)

};

} // namespace S3
} // namespace QtAws

#endif

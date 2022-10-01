// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETWEBSITERESPONSE_H
#define QTAWS_PUTBUCKETWEBSITERESPONSE_H

#include "s3response.h"
#include "putbucketwebsiterequest.h"

namespace QtAws {
namespace S3 {

class PutBucketWebsiteResponsePrivate;

class QTAWSS3_EXPORT PutBucketWebsiteResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketWebsiteResponse(const PutBucketWebsiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketWebsiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketWebsiteResponse)
    Q_DISABLE_COPY(PutBucketWebsiteResponse)

};

} // namespace S3
} // namespace QtAws

#endif

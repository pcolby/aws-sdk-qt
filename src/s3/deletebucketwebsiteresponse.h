// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETWEBSITERESPONSE_H
#define QTAWS_DELETEBUCKETWEBSITERESPONSE_H

#include "s3response.h"
#include "deletebucketwebsiterequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketWebsiteResponsePrivate;

class QTAWSS3_EXPORT DeleteBucketWebsiteResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketWebsiteResponse(const DeleteBucketWebsiteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketWebsiteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketWebsiteResponse)
    Q_DISABLE_COPY(DeleteBucketWebsiteResponse)

};

} // namespace S3
} // namespace QtAws

#endif

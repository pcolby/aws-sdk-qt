// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETACLRESPONSE_H
#define QTAWS_PUTBUCKETACLRESPONSE_H

#include "s3response.h"
#include "putbucketaclrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketAclResponsePrivate;

class QTAWSS3_EXPORT PutBucketAclResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketAclResponse(const PutBucketAclRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketAclRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketAclResponse)
    Q_DISABLE_COPY(PutBucketAclResponse)

};

} // namespace S3
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETACLRESPONSE_H
#define QTAWS_GETBUCKETACLRESPONSE_H

#include "s3response.h"
#include "getbucketaclrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketAclResponsePrivate;

class QTAWSS3_EXPORT GetBucketAclResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketAclResponse(const GetBucketAclRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketAclRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketAclResponse)
    Q_DISABLE_COPY(GetBucketAclResponse)

};

} // namespace S3
} // namespace QtAws

#endif

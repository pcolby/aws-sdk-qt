// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETOWNERSHIPCONTROLSRESPONSE_H
#define QTAWS_PUTBUCKETOWNERSHIPCONTROLSRESPONSE_H

#include "s3response.h"
#include "putbucketownershipcontrolsrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketOwnershipControlsResponsePrivate;

class QTAWSS3_EXPORT PutBucketOwnershipControlsResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketOwnershipControlsResponse(const PutBucketOwnershipControlsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketOwnershipControlsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketOwnershipControlsResponse)
    Q_DISABLE_COPY(PutBucketOwnershipControlsResponse)

};

} // namespace S3
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETOWNERSHIPCONTROLSRESPONSE_H
#define QTAWS_GETBUCKETOWNERSHIPCONTROLSRESPONSE_H

#include "s3response.h"
#include "getbucketownershipcontrolsrequest.h"

namespace QtAws {
namespace S3 {

class GetBucketOwnershipControlsResponsePrivate;

class QTAWSS3_EXPORT GetBucketOwnershipControlsResponse : public S3Response {
    Q_OBJECT

public:
    GetBucketOwnershipControlsResponse(const GetBucketOwnershipControlsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketOwnershipControlsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketOwnershipControlsResponse)
    Q_DISABLE_COPY(GetBucketOwnershipControlsResponse)

};

} // namespace S3
} // namespace QtAws

#endif

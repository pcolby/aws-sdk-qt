// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETOWNERSHIPCONTROLSRESPONSE_H
#define QTAWS_DELETEBUCKETOWNERSHIPCONTROLSRESPONSE_H

#include "s3response.h"
#include "deletebucketownershipcontrolsrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketOwnershipControlsResponsePrivate;

class QTAWSS3_EXPORT DeleteBucketOwnershipControlsResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketOwnershipControlsResponse(const DeleteBucketOwnershipControlsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketOwnershipControlsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketOwnershipControlsResponse)
    Q_DISABLE_COPY(DeleteBucketOwnershipControlsResponse)

};

} // namespace S3
} // namespace QtAws

#endif

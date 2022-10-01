// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETOWNERSHIPCONTROLSRESPONSE_P_H
#define QTAWS_DELETEBUCKETOWNERSHIPCONTROLSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteBucketOwnershipControlsResponse;

class DeleteBucketOwnershipControlsResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteBucketOwnershipControlsResponsePrivate(DeleteBucketOwnershipControlsResponse * const q);

    void parseDeleteBucketOwnershipControlsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketOwnershipControlsResponse)
    Q_DISABLE_COPY(DeleteBucketOwnershipControlsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

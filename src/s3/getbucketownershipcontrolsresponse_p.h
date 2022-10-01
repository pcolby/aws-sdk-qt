// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETOWNERSHIPCONTROLSRESPONSE_P_H
#define QTAWS_GETBUCKETOWNERSHIPCONTROLSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetBucketOwnershipControlsResponse;

class GetBucketOwnershipControlsResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetBucketOwnershipControlsResponsePrivate(GetBucketOwnershipControlsResponse * const q);

    void parseGetBucketOwnershipControlsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketOwnershipControlsResponse)
    Q_DISABLE_COPY(GetBucketOwnershipControlsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

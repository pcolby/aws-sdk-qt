// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETRESPONSE_P_H
#define QTAWS_GETBUCKETRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetBucketResponse;

class GetBucketResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetBucketResponsePrivate(GetBucketResponse * const q);

    void parseGetBucketResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketResponse)
    Q_DISABLE_COPY(GetBucketResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif

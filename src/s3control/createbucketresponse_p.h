// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUCKETRESPONSE_P_H
#define QTAWS_CREATEBUCKETRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class CreateBucketResponse;

class CreateBucketResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit CreateBucketResponsePrivate(CreateBucketResponse * const q);

    void parseCreateBucketResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBucketResponse)
    Q_DISABLE_COPY(CreateBucketResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif

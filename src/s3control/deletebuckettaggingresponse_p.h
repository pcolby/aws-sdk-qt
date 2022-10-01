// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETTAGGINGRESPONSE_P_H
#define QTAWS_DELETEBUCKETTAGGINGRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class DeleteBucketTaggingResponse;

class DeleteBucketTaggingResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit DeleteBucketTaggingResponsePrivate(DeleteBucketTaggingResponse * const q);

    void parseDeleteBucketTaggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketTaggingResponse)
    Q_DISABLE_COPY(DeleteBucketTaggingResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif

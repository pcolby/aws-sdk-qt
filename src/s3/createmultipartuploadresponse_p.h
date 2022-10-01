// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIPARTUPLOADRESPONSE_P_H
#define QTAWS_CREATEMULTIPARTUPLOADRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class CreateMultipartUploadResponse;

class CreateMultipartUploadResponsePrivate : public S3ResponsePrivate {

public:

    explicit CreateMultipartUploadResponsePrivate(CreateMultipartUploadResponse * const q);

    void parseCreateMultipartUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMultipartUploadResponse)
    Q_DISABLE_COPY(CreateMultipartUploadResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

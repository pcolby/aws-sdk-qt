// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTMULTIPARTUPLOADRESPONSE_P_H
#define QTAWS_ABORTMULTIPARTUPLOADRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class AbortMultipartUploadResponse;

class AbortMultipartUploadResponsePrivate : public S3ResponsePrivate {

public:

    explicit AbortMultipartUploadResponsePrivate(AbortMultipartUploadResponse * const q);

    void parseAbortMultipartUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AbortMultipartUploadResponse)
    Q_DISABLE_COPY(AbortMultipartUploadResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

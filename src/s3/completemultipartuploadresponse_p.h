// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEMULTIPARTUPLOADRESPONSE_P_H
#define QTAWS_COMPLETEMULTIPARTUPLOADRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class CompleteMultipartUploadResponse;

class CompleteMultipartUploadResponsePrivate : public S3ResponsePrivate {

public:

    explicit CompleteMultipartUploadResponsePrivate(CompleteMultipartUploadResponse * const q);

    void parseCompleteMultipartUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CompleteMultipartUploadResponse)
    Q_DISABLE_COPY(CompleteMultipartUploadResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

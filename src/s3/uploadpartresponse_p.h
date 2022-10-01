// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADPARTRESPONSE_P_H
#define QTAWS_UPLOADPARTRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class UploadPartResponse;

class UploadPartResponsePrivate : public S3ResponsePrivate {

public:

    explicit UploadPartResponsePrivate(UploadPartResponse * const q);

    void parseUploadPartResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UploadPartResponse)
    Q_DISABLE_COPY(UploadPartResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif

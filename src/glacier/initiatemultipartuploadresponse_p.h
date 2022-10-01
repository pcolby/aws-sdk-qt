// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEMULTIPARTUPLOADRESPONSE_P_H
#define QTAWS_INITIATEMULTIPARTUPLOADRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class InitiateMultipartUploadResponse;

class InitiateMultipartUploadResponsePrivate : public GlacierResponsePrivate {

public:

    explicit InitiateMultipartUploadResponsePrivate(InitiateMultipartUploadResponse * const q);

    void parseInitiateMultipartUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InitiateMultipartUploadResponse)
    Q_DISABLE_COPY(InitiateMultipartUploadResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif

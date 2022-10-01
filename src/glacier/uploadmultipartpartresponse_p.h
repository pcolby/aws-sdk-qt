// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADMULTIPARTPARTRESPONSE_P_H
#define QTAWS_UPLOADMULTIPARTPARTRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class UploadMultipartPartResponse;

class UploadMultipartPartResponsePrivate : public GlacierResponsePrivate {

public:

    explicit UploadMultipartPartResponsePrivate(UploadMultipartPartResponse * const q);

    void parseUploadMultipartPartResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UploadMultipartPartResponse)
    Q_DISABLE_COPY(UploadMultipartPartResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif

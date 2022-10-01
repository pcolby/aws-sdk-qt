// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTENTUPLOADRESPONSE_P_H
#define QTAWS_STARTCONTENTUPLOADRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class StartContentUploadResponse;

class StartContentUploadResponsePrivate : public WisdomResponsePrivate {

public:

    explicit StartContentUploadResponsePrivate(StartContentUploadResponse * const q);

    void parseStartContentUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartContentUploadResponse)
    Q_DISABLE_COPY(StartContentUploadResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif

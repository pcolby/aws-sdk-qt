// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOCUMENTTEXTDETECTIONRESPONSE_P_H
#define QTAWS_STARTDOCUMENTTEXTDETECTIONRESPONSE_P_H

#include "textractresponse_p.h"

namespace QtAws {
namespace Textract {

class StartDocumentTextDetectionResponse;

class StartDocumentTextDetectionResponsePrivate : public TextractResponsePrivate {

public:

    explicit StartDocumentTextDetectionResponsePrivate(StartDocumentTextDetectionResponse * const q);

    void parseStartDocumentTextDetectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDocumentTextDetectionResponse)
    Q_DISABLE_COPY(StartDocumentTextDetectionResponsePrivate)

};

} // namespace Textract
} // namespace QtAws

#endif

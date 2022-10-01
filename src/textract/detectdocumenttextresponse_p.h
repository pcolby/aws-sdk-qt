// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTDOCUMENTTEXTRESPONSE_P_H
#define QTAWS_DETECTDOCUMENTTEXTRESPONSE_P_H

#include "textractresponse_p.h"

namespace QtAws {
namespace Textract {

class DetectDocumentTextResponse;

class DetectDocumentTextResponsePrivate : public TextractResponsePrivate {

public:

    explicit DetectDocumentTextResponsePrivate(DetectDocumentTextResponse * const q);

    void parseDetectDocumentTextResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectDocumentTextResponse)
    Q_DISABLE_COPY(DetectDocumentTextResponsePrivate)

};

} // namespace Textract
} // namespace QtAws

#endif

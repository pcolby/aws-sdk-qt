// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTTEXTDETECTIONRESPONSE_P_H
#define QTAWS_GETDOCUMENTTEXTDETECTIONRESPONSE_P_H

#include "textractresponse_p.h"

namespace QtAws {
namespace Textract {

class GetDocumentTextDetectionResponse;

class GetDocumentTextDetectionResponsePrivate : public TextractResponsePrivate {

public:

    explicit GetDocumentTextDetectionResponsePrivate(GetDocumentTextDetectionResponse * const q);

    void parseGetDocumentTextDetectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDocumentTextDetectionResponse)
    Q_DISABLE_COPY(GetDocumentTextDetectionResponsePrivate)

};

} // namespace Textract
} // namespace QtAws

#endif

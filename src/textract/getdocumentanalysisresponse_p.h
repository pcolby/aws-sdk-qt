// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTANALYSISRESPONSE_P_H
#define QTAWS_GETDOCUMENTANALYSISRESPONSE_P_H

#include "textractresponse_p.h"

namespace QtAws {
namespace Textract {

class GetDocumentAnalysisResponse;

class GetDocumentAnalysisResponsePrivate : public TextractResponsePrivate {

public:

    explicit GetDocumentAnalysisResponsePrivate(GetDocumentAnalysisResponse * const q);

    void parseGetDocumentAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDocumentAnalysisResponse)
    Q_DISABLE_COPY(GetDocumentAnalysisResponsePrivate)

};

} // namespace Textract
} // namespace QtAws

#endif

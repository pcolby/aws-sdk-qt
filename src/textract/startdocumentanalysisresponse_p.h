// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOCUMENTANALYSISRESPONSE_P_H
#define QTAWS_STARTDOCUMENTANALYSISRESPONSE_P_H

#include "textractresponse_p.h"

namespace QtAws {
namespace Textract {

class StartDocumentAnalysisResponse;

class StartDocumentAnalysisResponsePrivate : public TextractResponsePrivate {

public:

    explicit StartDocumentAnalysisResponsePrivate(StartDocumentAnalysisResponse * const q);

    void parseStartDocumentAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDocumentAnalysisResponse)
    Q_DISABLE_COPY(StartDocumentAnalysisResponsePrivate)

};

} // namespace Textract
} // namespace QtAws

#endif

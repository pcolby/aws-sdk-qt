// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ANALYZEDOCUMENTRESPONSE_P_H
#define QTAWS_ANALYZEDOCUMENTRESPONSE_P_H

#include "textractresponse_p.h"

namespace QtAws {
namespace Textract {

class AnalyzeDocumentResponse;

class AnalyzeDocumentResponsePrivate : public TextractResponsePrivate {

public:

    explicit AnalyzeDocumentResponsePrivate(AnalyzeDocumentResponse * const q);

    void parseAnalyzeDocumentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AnalyzeDocumentResponse)
    Q_DISABLE_COPY(AnalyzeDocumentResponsePrivate)

};

} // namespace Textract
} // namespace QtAws

#endif

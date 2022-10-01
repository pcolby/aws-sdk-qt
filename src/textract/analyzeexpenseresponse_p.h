// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ANALYZEEXPENSERESPONSE_P_H
#define QTAWS_ANALYZEEXPENSERESPONSE_P_H

#include "textractresponse_p.h"

namespace QtAws {
namespace Textract {

class AnalyzeExpenseResponse;

class AnalyzeExpenseResponsePrivate : public TextractResponsePrivate {

public:

    explicit AnalyzeExpenseResponsePrivate(AnalyzeExpenseResponse * const q);

    void parseAnalyzeExpenseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AnalyzeExpenseResponse)
    Q_DISABLE_COPY(AnalyzeExpenseResponsePrivate)

};

} // namespace Textract
} // namespace QtAws

#endif

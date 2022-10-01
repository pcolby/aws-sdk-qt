// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPENSEANALYSISRESPONSE_P_H
#define QTAWS_STARTEXPENSEANALYSISRESPONSE_P_H

#include "textractresponse_p.h"

namespace QtAws {
namespace Textract {

class StartExpenseAnalysisResponse;

class StartExpenseAnalysisResponsePrivate : public TextractResponsePrivate {

public:

    explicit StartExpenseAnalysisResponsePrivate(StartExpenseAnalysisResponse * const q);

    void parseStartExpenseAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartExpenseAnalysisResponse)
    Q_DISABLE_COPY(StartExpenseAnalysisResponsePrivate)

};

} // namespace Textract
} // namespace QtAws

#endif

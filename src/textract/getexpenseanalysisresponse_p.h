// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPENSEANALYSISRESPONSE_P_H
#define QTAWS_GETEXPENSEANALYSISRESPONSE_P_H

#include "textractresponse_p.h"

namespace QtAws {
namespace Textract {

class GetExpenseAnalysisResponse;

class GetExpenseAnalysisResponsePrivate : public TextractResponsePrivate {

public:

    explicit GetExpenseAnalysisResponsePrivate(GetExpenseAnalysisResponse * const q);

    void parseGetExpenseAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExpenseAnalysisResponse)
    Q_DISABLE_COPY(GetExpenseAnalysisResponsePrivate)

};

} // namespace Textract
} // namespace QtAws

#endif

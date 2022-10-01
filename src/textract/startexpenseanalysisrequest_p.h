// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPENSEANALYSISREQUEST_P_H
#define QTAWS_STARTEXPENSEANALYSISREQUEST_P_H

#include "textractrequest_p.h"
#include "startexpenseanalysisrequest.h"

namespace QtAws {
namespace Textract {

class StartExpenseAnalysisRequest;

class StartExpenseAnalysisRequestPrivate : public TextractRequestPrivate {

public:
    StartExpenseAnalysisRequestPrivate(const TextractRequest::Action action,
                                   StartExpenseAnalysisRequest * const q);
    StartExpenseAnalysisRequestPrivate(const StartExpenseAnalysisRequestPrivate &other,
                                   StartExpenseAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartExpenseAnalysisRequest)

};

} // namespace Textract
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPENSEANALYSISREQUEST_P_H
#define QTAWS_GETEXPENSEANALYSISREQUEST_P_H

#include "textractrequest_p.h"
#include "getexpenseanalysisrequest.h"

namespace QtAws {
namespace Textract {

class GetExpenseAnalysisRequest;

class GetExpenseAnalysisRequestPrivate : public TextractRequestPrivate {

public:
    GetExpenseAnalysisRequestPrivate(const TextractRequest::Action action,
                                   GetExpenseAnalysisRequest * const q);
    GetExpenseAnalysisRequestPrivate(const GetExpenseAnalysisRequestPrivate &other,
                                   GetExpenseAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExpenseAnalysisRequest)

};

} // namespace Textract
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ANALYZEEXPENSEREQUEST_P_H
#define QTAWS_ANALYZEEXPENSEREQUEST_P_H

#include "textractrequest_p.h"
#include "analyzeexpenserequest.h"

namespace QtAws {
namespace Textract {

class AnalyzeExpenseRequest;

class AnalyzeExpenseRequestPrivate : public TextractRequestPrivate {

public:
    AnalyzeExpenseRequestPrivate(const TextractRequest::Action action,
                                   AnalyzeExpenseRequest * const q);
    AnalyzeExpenseRequestPrivate(const AnalyzeExpenseRequestPrivate &other,
                                   AnalyzeExpenseRequest * const q);

private:
    Q_DECLARE_PUBLIC(AnalyzeExpenseRequest)

};

} // namespace Textract
} // namespace QtAws

#endif

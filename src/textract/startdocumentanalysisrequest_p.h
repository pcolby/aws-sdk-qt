// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOCUMENTANALYSISREQUEST_P_H
#define QTAWS_STARTDOCUMENTANALYSISREQUEST_P_H

#include "textractrequest_p.h"
#include "startdocumentanalysisrequest.h"

namespace QtAws {
namespace Textract {

class StartDocumentAnalysisRequest;

class StartDocumentAnalysisRequestPrivate : public TextractRequestPrivate {

public:
    StartDocumentAnalysisRequestPrivate(const TextractRequest::Action action,
                                   StartDocumentAnalysisRequest * const q);
    StartDocumentAnalysisRequestPrivate(const StartDocumentAnalysisRequestPrivate &other,
                                   StartDocumentAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDocumentAnalysisRequest)

};

} // namespace Textract
} // namespace QtAws

#endif

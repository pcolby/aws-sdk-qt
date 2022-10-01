// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTANALYSISREQUEST_P_H
#define QTAWS_GETDOCUMENTANALYSISREQUEST_P_H

#include "textractrequest_p.h"
#include "getdocumentanalysisrequest.h"

namespace QtAws {
namespace Textract {

class GetDocumentAnalysisRequest;

class GetDocumentAnalysisRequestPrivate : public TextractRequestPrivate {

public:
    GetDocumentAnalysisRequestPrivate(const TextractRequest::Action action,
                                   GetDocumentAnalysisRequest * const q);
    GetDocumentAnalysisRequestPrivate(const GetDocumentAnalysisRequestPrivate &other,
                                   GetDocumentAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDocumentAnalysisRequest)

};

} // namespace Textract
} // namespace QtAws

#endif

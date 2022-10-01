// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ANALYZEDOCUMENTREQUEST_P_H
#define QTAWS_ANALYZEDOCUMENTREQUEST_P_H

#include "textractrequest_p.h"
#include "analyzedocumentrequest.h"

namespace QtAws {
namespace Textract {

class AnalyzeDocumentRequest;

class AnalyzeDocumentRequestPrivate : public TextractRequestPrivate {

public:
    AnalyzeDocumentRequestPrivate(const TextractRequest::Action action,
                                   AnalyzeDocumentRequest * const q);
    AnalyzeDocumentRequestPrivate(const AnalyzeDocumentRequestPrivate &other,
                                   AnalyzeDocumentRequest * const q);

private:
    Q_DECLARE_PUBLIC(AnalyzeDocumentRequest)

};

} // namespace Textract
} // namespace QtAws

#endif

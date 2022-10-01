// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOCUMENTTEXTDETECTIONREQUEST_P_H
#define QTAWS_STARTDOCUMENTTEXTDETECTIONREQUEST_P_H

#include "textractrequest_p.h"
#include "startdocumenttextdetectionrequest.h"

namespace QtAws {
namespace Textract {

class StartDocumentTextDetectionRequest;

class StartDocumentTextDetectionRequestPrivate : public TextractRequestPrivate {

public:
    StartDocumentTextDetectionRequestPrivate(const TextractRequest::Action action,
                                   StartDocumentTextDetectionRequest * const q);
    StartDocumentTextDetectionRequestPrivate(const StartDocumentTextDetectionRequestPrivate &other,
                                   StartDocumentTextDetectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDocumentTextDetectionRequest)

};

} // namespace Textract
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTTEXTDETECTIONREQUEST_P_H
#define QTAWS_GETDOCUMENTTEXTDETECTIONREQUEST_P_H

#include "textractrequest_p.h"
#include "getdocumenttextdetectionrequest.h"

namespace QtAws {
namespace Textract {

class GetDocumentTextDetectionRequest;

class GetDocumentTextDetectionRequestPrivate : public TextractRequestPrivate {

public:
    GetDocumentTextDetectionRequestPrivate(const TextractRequest::Action action,
                                   GetDocumentTextDetectionRequest * const q);
    GetDocumentTextDetectionRequestPrivate(const GetDocumentTextDetectionRequestPrivate &other,
                                   GetDocumentTextDetectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDocumentTextDetectionRequest)

};

} // namespace Textract
} // namespace QtAws

#endif

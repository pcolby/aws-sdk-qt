// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTDOCUMENTTEXTREQUEST_P_H
#define QTAWS_DETECTDOCUMENTTEXTREQUEST_P_H

#include "textractrequest_p.h"
#include "detectdocumenttextrequest.h"

namespace QtAws {
namespace Textract {

class DetectDocumentTextRequest;

class DetectDocumentTextRequestPrivate : public TextractRequestPrivate {

public:
    DetectDocumentTextRequestPrivate(const TextractRequest::Action action,
                                   DetectDocumentTextRequest * const q);
    DetectDocumentTextRequestPrivate(const DetectDocumentTextRequestPrivate &other,
                                   DetectDocumentTextRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectDocumentTextRequest)

};

} // namespace Textract
} // namespace QtAws

#endif

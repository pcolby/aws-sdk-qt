// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLASSIFYDOCUMENTREQUEST_P_H
#define QTAWS_CLASSIFYDOCUMENTREQUEST_P_H

#include "comprehendrequest_p.h"
#include "classifydocumentrequest.h"

namespace QtAws {
namespace Comprehend {

class ClassifyDocumentRequest;

class ClassifyDocumentRequestPrivate : public ComprehendRequestPrivate {

public:
    ClassifyDocumentRequestPrivate(const ComprehendRequest::Action action,
                                   ClassifyDocumentRequest * const q);
    ClassifyDocumentRequestPrivate(const ClassifyDocumentRequestPrivate &other,
                                   ClassifyDocumentRequest * const q);

private:
    Q_DECLARE_PUBLIC(ClassifyDocumentRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

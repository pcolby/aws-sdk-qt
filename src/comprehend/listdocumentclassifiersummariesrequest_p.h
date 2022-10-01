// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTCLASSIFIERSUMMARIESREQUEST_P_H
#define QTAWS_LISTDOCUMENTCLASSIFIERSUMMARIESREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listdocumentclassifiersummariesrequest.h"

namespace QtAws {
namespace Comprehend {

class ListDocumentClassifierSummariesRequest;

class ListDocumentClassifierSummariesRequestPrivate : public ComprehendRequestPrivate {

public:
    ListDocumentClassifierSummariesRequestPrivate(const ComprehendRequest::Action action,
                                   ListDocumentClassifierSummariesRequest * const q);
    ListDocumentClassifierSummariesRequestPrivate(const ListDocumentClassifierSummariesRequestPrivate &other,
                                   ListDocumentClassifierSummariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDocumentClassifierSummariesRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

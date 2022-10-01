// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTCLASSIFIERSREQUEST_P_H
#define QTAWS_LISTDOCUMENTCLASSIFIERSREQUEST_P_H

#include "comprehendrequest_p.h"
#include "listdocumentclassifiersrequest.h"

namespace QtAws {
namespace Comprehend {

class ListDocumentClassifiersRequest;

class ListDocumentClassifiersRequestPrivate : public ComprehendRequestPrivate {

public:
    ListDocumentClassifiersRequestPrivate(const ComprehendRequest::Action action,
                                   ListDocumentClassifiersRequest * const q);
    ListDocumentClassifiersRequestPrivate(const ListDocumentClassifiersRequestPrivate &other,
                                   ListDocumentClassifiersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDocumentClassifiersRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif

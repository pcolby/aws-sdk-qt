// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTVERSIONSREQUEST_P_H
#define QTAWS_LISTDOCUMENTVERSIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "listdocumentversionsrequest.h"

namespace QtAws {
namespace Ssm {

class ListDocumentVersionsRequest;

class ListDocumentVersionsRequestPrivate : public SsmRequestPrivate {

public:
    ListDocumentVersionsRequestPrivate(const SsmRequest::Action action,
                                   ListDocumentVersionsRequest * const q);
    ListDocumentVersionsRequestPrivate(const ListDocumentVersionsRequestPrivate &other,
                                   ListDocumentVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDocumentVersionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

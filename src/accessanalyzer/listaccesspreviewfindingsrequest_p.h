// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPREVIEWFINDINGSREQUEST_P_H
#define QTAWS_LISTACCESSPREVIEWFINDINGSREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "listaccesspreviewfindingsrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAccessPreviewFindingsRequest;

class ListAccessPreviewFindingsRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    ListAccessPreviewFindingsRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   ListAccessPreviewFindingsRequest * const q);
    ListAccessPreviewFindingsRequestPrivate(const ListAccessPreviewFindingsRequestPrivate &other,
                                   ListAccessPreviewFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccessPreviewFindingsRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

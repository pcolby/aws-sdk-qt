// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPREVIEWSREQUEST_P_H
#define QTAWS_LISTACCESSPREVIEWSREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "listaccesspreviewsrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAccessPreviewsRequest;

class ListAccessPreviewsRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    ListAccessPreviewsRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   ListAccessPreviewsRequest * const q);
    ListAccessPreviewsRequestPrivate(const ListAccessPreviewsRequestPrivate &other,
                                   ListAccessPreviewsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccessPreviewsRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

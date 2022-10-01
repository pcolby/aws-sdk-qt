// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANALYZEDRESOURCESREQUEST_P_H
#define QTAWS_LISTANALYZEDRESOURCESREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "listanalyzedresourcesrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAnalyzedResourcesRequest;

class ListAnalyzedResourcesRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    ListAnalyzedResourcesRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   ListAnalyzedResourcesRequest * const q);
    ListAnalyzedResourcesRequestPrivate(const ListAnalyzedResourcesRequestPrivate &other,
                                   ListAnalyzedResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAnalyzedResourcesRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

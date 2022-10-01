// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANALYZERSREQUEST_P_H
#define QTAWS_LISTANALYZERSREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "listanalyzersrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListAnalyzersRequest;

class ListAnalyzersRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    ListAnalyzersRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   ListAnalyzersRequest * const q);
    ListAnalyzersRequestPrivate(const ListAnalyzersRequestPrivate &other,
                                   ListAnalyzersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAnalyzersRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

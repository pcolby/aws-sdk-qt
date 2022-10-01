// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARCHIVERULESREQUEST_P_H
#define QTAWS_LISTARCHIVERULESREQUEST_P_H

#include "accessanalyzerrequest_p.h"
#include "listarchiverulesrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class ListArchiveRulesRequest;

class ListArchiveRulesRequestPrivate : public AccessAnalyzerRequestPrivate {

public:
    ListArchiveRulesRequestPrivate(const AccessAnalyzerRequest::Action action,
                                   ListArchiveRulesRequest * const q);
    ListArchiveRulesRequestPrivate(const ListArchiveRulesRequestPrivate &other,
                                   ListArchiveRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListArchiveRulesRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif

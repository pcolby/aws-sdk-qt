// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSQLINJECTIONMATCHSETSREQUEST_P_H
#define QTAWS_LISTSQLINJECTIONMATCHSETSREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "listsqlinjectionmatchsetsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListSqlInjectionMatchSetsRequest;

class ListSqlInjectionMatchSetsRequestPrivate : public WafRegionalRequestPrivate {

public:
    ListSqlInjectionMatchSetsRequestPrivate(const WafRegionalRequest::Action action,
                                   ListSqlInjectionMatchSetsRequest * const q);
    ListSqlInjectionMatchSetsRequestPrivate(const ListSqlInjectionMatchSetsRequestPrivate &other,
                                   ListSqlInjectionMatchSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSqlInjectionMatchSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

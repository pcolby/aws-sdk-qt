// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSQLINJECTIONMATCHSETSREQUEST_P_H
#define QTAWS_LISTSQLINJECTIONMATCHSETSREQUEST_P_H

#include "wafrequest_p.h"
#include "listsqlinjectionmatchsetsrequest.h"

namespace QtAws {
namespace Waf {

class ListSqlInjectionMatchSetsRequest;

class ListSqlInjectionMatchSetsRequestPrivate : public WafRequestPrivate {

public:
    ListSqlInjectionMatchSetsRequestPrivate(const WafRequest::Action action,
                                   ListSqlInjectionMatchSetsRequest * const q);
    ListSqlInjectionMatchSetsRequestPrivate(const ListSqlInjectionMatchSetsRequestPrivate &other,
                                   ListSqlInjectionMatchSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSqlInjectionMatchSetsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

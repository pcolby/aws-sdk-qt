// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXMATCHSETSREQUEST_P_H
#define QTAWS_LISTREGEXMATCHSETSREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "listregexmatchsetsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListRegexMatchSetsRequest;

class ListRegexMatchSetsRequestPrivate : public WafRegionalRequestPrivate {

public:
    ListRegexMatchSetsRequestPrivate(const WafRegionalRequest::Action action,
                                   ListRegexMatchSetsRequest * const q);
    ListRegexMatchSetsRequestPrivate(const ListRegexMatchSetsRequestPrivate &other,
                                   ListRegexMatchSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRegexMatchSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXPATTERNSETSREQUEST_P_H
#define QTAWS_LISTREGEXPATTERNSETSREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "listregexpatternsetsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListRegexPatternSetsRequest;

class ListRegexPatternSetsRequestPrivate : public WafRegionalRequestPrivate {

public:
    ListRegexPatternSetsRequestPrivate(const WafRegionalRequest::Action action,
                                   ListRegexPatternSetsRequest * const q);
    ListRegexPatternSetsRequestPrivate(const ListRegexPatternSetsRequestPrivate &other,
                                   ListRegexPatternSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRegexPatternSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXPATTERNSETSREQUEST_P_H
#define QTAWS_LISTREGEXPATTERNSETSREQUEST_P_H

#include "wafrequest_p.h"
#include "listregexpatternsetsrequest.h"

namespace QtAws {
namespace Waf {

class ListRegexPatternSetsRequest;

class ListRegexPatternSetsRequestPrivate : public WafRequestPrivate {

public:
    ListRegexPatternSetsRequestPrivate(const WafRequest::Action action,
                                   ListRegexPatternSetsRequest * const q);
    ListRegexPatternSetsRequestPrivate(const ListRegexPatternSetsRequestPrivate &other,
                                   ListRegexPatternSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRegexPatternSetsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

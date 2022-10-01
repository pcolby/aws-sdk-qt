// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGEXMATCHSETSREQUEST_P_H
#define QTAWS_LISTREGEXMATCHSETSREQUEST_P_H

#include "wafrequest_p.h"
#include "listregexmatchsetsrequest.h"

namespace QtAws {
namespace Waf {

class ListRegexMatchSetsRequest;

class ListRegexMatchSetsRequestPrivate : public WafRequestPrivate {

public:
    ListRegexMatchSetsRequestPrivate(const WafRequest::Action action,
                                   ListRegexMatchSetsRequest * const q);
    ListRegexMatchSetsRequestPrivate(const ListRegexMatchSetsRequestPrivate &other,
                                   ListRegexMatchSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRegexMatchSetsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

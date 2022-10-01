// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTXSSMATCHSETSREQUEST_P_H
#define QTAWS_LISTXSSMATCHSETSREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "listxssmatchsetsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListXssMatchSetsRequest;

class ListXssMatchSetsRequestPrivate : public WafRegionalRequestPrivate {

public:
    ListXssMatchSetsRequestPrivate(const WafRegionalRequest::Action action,
                                   ListXssMatchSetsRequest * const q);
    ListXssMatchSetsRequestPrivate(const ListXssMatchSetsRequestPrivate &other,
                                   ListXssMatchSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListXssMatchSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

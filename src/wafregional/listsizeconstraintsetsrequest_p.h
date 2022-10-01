// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIZECONSTRAINTSETSREQUEST_P_H
#define QTAWS_LISTSIZECONSTRAINTSETSREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "listsizeconstraintsetsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListSizeConstraintSetsRequest;

class ListSizeConstraintSetsRequestPrivate : public WafRegionalRequestPrivate {

public:
    ListSizeConstraintSetsRequestPrivate(const WafRegionalRequest::Action action,
                                   ListSizeConstraintSetsRequest * const q);
    ListSizeConstraintSetsRequestPrivate(const ListSizeConstraintSetsRequestPrivate &other,
                                   ListSizeConstraintSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSizeConstraintSetsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

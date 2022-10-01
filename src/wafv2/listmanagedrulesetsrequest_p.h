// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDRULESETSREQUEST_P_H
#define QTAWS_LISTMANAGEDRULESETSREQUEST_P_H

#include "wafv2request_p.h"
#include "listmanagedrulesetsrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListManagedRuleSetsRequest;

class ListManagedRuleSetsRequestPrivate : public Wafv2RequestPrivate {

public:
    ListManagedRuleSetsRequestPrivate(const Wafv2Request::Action action,
                                   ListManagedRuleSetsRequest * const q);
    ListManagedRuleSetsRequestPrivate(const ListManagedRuleSetsRequestPrivate &other,
                                   ListManagedRuleSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListManagedRuleSetsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

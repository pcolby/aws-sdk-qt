// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULEGROUPSNAMESPACESREQUEST_P_H
#define QTAWS_LISTRULEGROUPSNAMESPACESREQUEST_P_H

#include "amprequest_p.h"
#include "listrulegroupsnamespacesrequest.h"

namespace QtAws {
namespace Amp {

class ListRuleGroupsNamespacesRequest;

class ListRuleGroupsNamespacesRequestPrivate : public AmpRequestPrivate {

public:
    ListRuleGroupsNamespacesRequestPrivate(const AmpRequest::Action action,
                                   ListRuleGroupsNamespacesRequest * const q);
    ListRuleGroupsNamespacesRequestPrivate(const ListRuleGroupsNamespacesRequestPrivate &other,
                                   ListRuleGroupsNamespacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRuleGroupsNamespacesRequest)

};

} // namespace Amp
} // namespace QtAws

#endif

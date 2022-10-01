// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESFORWEBACLREQUEST_P_H
#define QTAWS_LISTRESOURCESFORWEBACLREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "listresourcesforwebaclrequest.h"

namespace QtAws {
namespace WafRegional {

class ListResourcesForWebACLRequest;

class ListResourcesForWebACLRequestPrivate : public WafRegionalRequestPrivate {

public:
    ListResourcesForWebACLRequestPrivate(const WafRegionalRequest::Action action,
                                   ListResourcesForWebACLRequest * const q);
    ListResourcesForWebACLRequestPrivate(const ListResourcesForWebACLRequestPrivate &other,
                                   ListResourcesForWebACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourcesForWebACLRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

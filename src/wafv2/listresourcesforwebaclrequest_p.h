// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESFORWEBACLREQUEST_P_H
#define QTAWS_LISTRESOURCESFORWEBACLREQUEST_P_H

#include "wafv2request_p.h"
#include "listresourcesforwebaclrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListResourcesForWebACLRequest;

class ListResourcesForWebACLRequestPrivate : public Wafv2RequestPrivate {

public:
    ListResourcesForWebACLRequestPrivate(const Wafv2Request::Action action,
                                   ListResourcesForWebACLRequest * const q);
    ListResourcesForWebACLRequestPrivate(const ListResourcesForWebACLRequestPrivate &other,
                                   ListResourcesForWebACLRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourcesForWebACLRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif

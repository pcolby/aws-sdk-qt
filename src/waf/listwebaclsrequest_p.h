// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBACLSREQUEST_P_H
#define QTAWS_LISTWEBACLSREQUEST_P_H

#include "wafrequest_p.h"
#include "listwebaclsrequest.h"

namespace QtAws {
namespace Waf {

class ListWebACLsRequest;

class ListWebACLsRequestPrivate : public WafRequestPrivate {

public:
    ListWebACLsRequestPrivate(const WafRequest::Action action,
                                   ListWebACLsRequest * const q);
    ListWebACLsRequestPrivate(const ListWebACLsRequestPrivate &other,
                                   ListWebACLsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWebACLsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

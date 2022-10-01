// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODEGROUPSREQUEST_P_H
#define QTAWS_LISTNODEGROUPSREQUEST_P_H

#include "eksrequest_p.h"
#include "listnodegroupsrequest.h"

namespace QtAws {
namespace Eks {

class ListNodegroupsRequest;

class ListNodegroupsRequestPrivate : public EksRequestPrivate {

public:
    ListNodegroupsRequestPrivate(const EksRequest::Action action,
                                   ListNodegroupsRequest * const q);
    ListNodegroupsRequestPrivate(const ListNodegroupsRequestPrivate &other,
                                   ListNodegroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNodegroupsRequest)

};

} // namespace Eks
} // namespace QtAws

#endif

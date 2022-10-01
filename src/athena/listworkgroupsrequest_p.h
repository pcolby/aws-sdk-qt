// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKGROUPSREQUEST_P_H
#define QTAWS_LISTWORKGROUPSREQUEST_P_H

#include "athenarequest_p.h"
#include "listworkgroupsrequest.h"

namespace QtAws {
namespace Athena {

class ListWorkGroupsRequest;

class ListWorkGroupsRequestPrivate : public AthenaRequestPrivate {

public:
    ListWorkGroupsRequestPrivate(const AthenaRequest::Action action,
                                   ListWorkGroupsRequest * const q);
    ListWorkGroupsRequestPrivate(const ListWorkGroupsRequestPrivate &other,
                                   ListWorkGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkGroupsRequest)

};

} // namespace Athena
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALLOWEDNODETYPEUPDATESREQUEST_P_H
#define QTAWS_LISTALLOWEDNODETYPEUPDATESREQUEST_P_H

#include "memorydbrequest_p.h"
#include "listallowednodetypeupdatesrequest.h"

namespace QtAws {
namespace MemoryDb {

class ListAllowedNodeTypeUpdatesRequest;

class ListAllowedNodeTypeUpdatesRequestPrivate : public MemoryDbRequestPrivate {

public:
    ListAllowedNodeTypeUpdatesRequestPrivate(const MemoryDbRequest::Action action,
                                   ListAllowedNodeTypeUpdatesRequest * const q);
    ListAllowedNodeTypeUpdatesRequestPrivate(const ListAllowedNodeTypeUpdatesRequestPrivate &other,
                                   ListAllowedNodeTypeUpdatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAllowedNodeTypeUpdatesRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif

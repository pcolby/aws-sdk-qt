// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVENTORYENTRIESREQUEST_P_H
#define QTAWS_LISTINVENTORYENTRIESREQUEST_P_H

#include "ssmrequest_p.h"
#include "listinventoryentriesrequest.h"

namespace QtAws {
namespace Ssm {

class ListInventoryEntriesRequest;

class ListInventoryEntriesRequestPrivate : public SsmRequestPrivate {

public:
    ListInventoryEntriesRequestPrivate(const SsmRequest::Action action,
                                   ListInventoryEntriesRequest * const q);
    ListInventoryEntriesRequestPrivate(const ListInventoryEntriesRequestPrivate &other,
                                   ListInventoryEntriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInventoryEntriesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif

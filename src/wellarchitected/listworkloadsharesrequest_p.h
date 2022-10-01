// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKLOADSHARESREQUEST_P_H
#define QTAWS_LISTWORKLOADSHARESREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "listworkloadsharesrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListWorkloadSharesRequest;

class ListWorkloadSharesRequestPrivate : public WellArchitectedRequestPrivate {

public:
    ListWorkloadSharesRequestPrivate(const WellArchitectedRequest::Action action,
                                   ListWorkloadSharesRequest * const q);
    ListWorkloadSharesRequestPrivate(const ListWorkloadSharesRequestPrivate &other,
                                   ListWorkloadSharesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkloadSharesRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

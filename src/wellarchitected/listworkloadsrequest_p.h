// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKLOADSREQUEST_P_H
#define QTAWS_LISTWORKLOADSREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "listworkloadsrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListWorkloadsRequest;

class ListWorkloadsRequestPrivate : public WellArchitectedRequestPrivate {

public:
    ListWorkloadsRequestPrivate(const WellArchitectedRequest::Action action,
                                   ListWorkloadsRequest * const q);
    ListWorkloadsRequestPrivate(const ListWorkloadsRequestPrivate &other,
                                   ListWorkloadsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWorkloadsRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

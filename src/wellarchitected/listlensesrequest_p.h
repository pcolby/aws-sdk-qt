// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSESREQUEST_P_H
#define QTAWS_LISTLENSESREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "listlensesrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListLensesRequest;

class ListLensesRequestPrivate : public WellArchitectedRequestPrivate {

public:
    ListLensesRequestPrivate(const WellArchitectedRequest::Action action,
                                   ListLensesRequest * const q);
    ListLensesRequestPrivate(const ListLensesRequestPrivate &other,
                                   ListLensesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLensesRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

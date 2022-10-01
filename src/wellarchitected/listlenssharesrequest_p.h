// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSSHARESREQUEST_P_H
#define QTAWS_LISTLENSSHARESREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "listlenssharesrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListLensSharesRequest;

class ListLensSharesRequestPrivate : public WellArchitectedRequestPrivate {

public:
    ListLensSharesRequestPrivate(const WellArchitectedRequest::Action action,
                                   ListLensSharesRequest * const q);
    ListLensSharesRequestPrivate(const ListLensSharesRequestPrivate &other,
                                   ListLensSharesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLensSharesRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif

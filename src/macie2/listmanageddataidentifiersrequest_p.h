// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDDATAIDENTIFIERSREQUEST_P_H
#define QTAWS_LISTMANAGEDDATAIDENTIFIERSREQUEST_P_H

#include "macie2request_p.h"
#include "listmanageddataidentifiersrequest.h"

namespace QtAws {
namespace Macie2 {

class ListManagedDataIdentifiersRequest;

class ListManagedDataIdentifiersRequestPrivate : public Macie2RequestPrivate {

public:
    ListManagedDataIdentifiersRequestPrivate(const Macie2Request::Action action,
                                   ListManagedDataIdentifiersRequest * const q);
    ListManagedDataIdentifiersRequestPrivate(const ListManagedDataIdentifiersRequestPrivate &other,
                                   ListManagedDataIdentifiersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListManagedDataIdentifiersRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif

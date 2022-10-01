// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHILDRENREQUEST_P_H
#define QTAWS_LISTCHILDRENREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listchildrenrequest.h"

namespace QtAws {
namespace Organizations {

class ListChildrenRequest;

class ListChildrenRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListChildrenRequestPrivate(const OrganizationsRequest::Action action,
                                   ListChildrenRequest * const q);
    ListChildrenRequestPrivate(const ListChildrenRequestPrivate &other,
                                   ListChildrenRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChildrenRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif

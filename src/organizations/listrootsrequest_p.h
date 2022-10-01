// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOTSREQUEST_P_H
#define QTAWS_LISTROOTSREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listrootsrequest.h"

namespace QtAws {
namespace Organizations {

class ListRootsRequest;

class ListRootsRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListRootsRequestPrivate(const OrganizationsRequest::Action action,
                                   ListRootsRequest * const q);
    ListRootsRequestPrivate(const ListRootsRequestPrivate &other,
                                   ListRootsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRootsRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif

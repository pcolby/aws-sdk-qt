// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCRLSREQUEST_P_H
#define QTAWS_LISTCRLSREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "listcrlsrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ListCrlsRequest;

class ListCrlsRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    ListCrlsRequestPrivate(const RolesAnywhereRequest::Action action,
                                   ListCrlsRequest * const q);
    ListCrlsRequestPrivate(const ListCrlsRequestPrivate &other,
                                   ListCrlsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCrlsRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif

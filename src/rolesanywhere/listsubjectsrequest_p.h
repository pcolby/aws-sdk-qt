// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBJECTSREQUEST_P_H
#define QTAWS_LISTSUBJECTSREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "listsubjectsrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class ListSubjectsRequest;

class ListSubjectsRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    ListSubjectsRequestPrivate(const RolesAnywhereRequest::Action action,
                                   ListSubjectsRequest * const q);
    ListSubjectsRequestPrivate(const ListSubjectsRequestPrivate &other,
                                   ListSubjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSubjectsRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif

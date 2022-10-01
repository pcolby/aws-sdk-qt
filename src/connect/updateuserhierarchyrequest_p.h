// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERHIERARCHYREQUEST_P_H
#define QTAWS_UPDATEUSERHIERARCHYREQUEST_P_H

#include "connectrequest_p.h"
#include "updateuserhierarchyrequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserHierarchyRequest;

class UpdateUserHierarchyRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateUserHierarchyRequestPrivate(const ConnectRequest::Action action,
                                   UpdateUserHierarchyRequest * const q);
    UpdateUserHierarchyRequestPrivate(const UpdateUserHierarchyRequestPrivate &other,
                                   UpdateUserHierarchyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserHierarchyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

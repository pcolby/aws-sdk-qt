// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERHIERARCHYSTRUCTUREREQUEST_P_H
#define QTAWS_UPDATEUSERHIERARCHYSTRUCTUREREQUEST_P_H

#include "connectrequest_p.h"
#include "updateuserhierarchystructurerequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserHierarchyStructureRequest;

class UpdateUserHierarchyStructureRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateUserHierarchyStructureRequestPrivate(const ConnectRequest::Action action,
                                   UpdateUserHierarchyStructureRequest * const q);
    UpdateUserHierarchyStructureRequestPrivate(const UpdateUserHierarchyStructureRequestPrivate &other,
                                   UpdateUserHierarchyStructureRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserHierarchyStructureRequest)

};

} // namespace Connect
} // namespace QtAws

#endif

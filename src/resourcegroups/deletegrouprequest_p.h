// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGROUPREQUEST_P_H
#define QTAWS_DELETEGROUPREQUEST_P_H

#include "resourcegroupsrequest_p.h"
#include "deletegrouprequest.h"

namespace QtAws {
namespace ResourceGroups {

class DeleteGroupRequest;

class DeleteGroupRequestPrivate : public ResourceGroupsRequestPrivate {

public:
    DeleteGroupRequestPrivate(const ResourceGroupsRequest::Action action,
                                   DeleteGroupRequest * const q);
    DeleteGroupRequestPrivate(const DeleteGroupRequestPrivate &other,
                                   DeleteGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGroupRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPGROUPREQUEST_P_H
#define QTAWS_DELETEIPGROUPREQUEST_P_H

#include "workspacesrequest_p.h"
#include "deleteipgrouprequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteIpGroupRequest;

class DeleteIpGroupRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DeleteIpGroupRequestPrivate(const WorkSpacesRequest::Action action,
                                   DeleteIpGroupRequest * const q);
    DeleteIpGroupRequestPrivate(const DeleteIpGroupRequestPrivate &other,
                                   DeleteIpGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIpGroupRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

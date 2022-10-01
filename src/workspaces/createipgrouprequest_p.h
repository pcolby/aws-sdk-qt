// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPGROUPREQUEST_P_H
#define QTAWS_CREATEIPGROUPREQUEST_P_H

#include "workspacesrequest_p.h"
#include "createipgrouprequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateIpGroupRequest;

class CreateIpGroupRequestPrivate : public WorkSpacesRequestPrivate {

public:
    CreateIpGroupRequestPrivate(const WorkSpacesRequest::Action action,
                                   CreateIpGroupRequest * const q);
    CreateIpGroupRequestPrivate(const CreateIpGroupRequestPrivate &other,
                                   CreateIpGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIpGroupRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif

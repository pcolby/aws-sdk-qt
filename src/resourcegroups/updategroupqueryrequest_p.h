// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPQUERYREQUEST_P_H
#define QTAWS_UPDATEGROUPQUERYREQUEST_P_H

#include "resourcegroupsrequest_p.h"
#include "updategroupqueryrequest.h"

namespace QtAws {
namespace ResourceGroups {

class UpdateGroupQueryRequest;

class UpdateGroupQueryRequestPrivate : public ResourceGroupsRequestPrivate {

public:
    UpdateGroupQueryRequestPrivate(const ResourceGroupsRequest::Action action,
                                   UpdateGroupQueryRequest * const q);
    UpdateGroupQueryRequestPrivate(const UpdateGroupQueryRequestPrivate &other,
                                   UpdateGroupQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGroupQueryRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

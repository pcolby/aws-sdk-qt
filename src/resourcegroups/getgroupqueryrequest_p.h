// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPQUERYREQUEST_P_H
#define QTAWS_GETGROUPQUERYREQUEST_P_H

#include "resourcegroupsrequest_p.h"
#include "getgroupqueryrequest.h"

namespace QtAws {
namespace ResourceGroups {

class GetGroupQueryRequest;

class GetGroupQueryRequestPrivate : public ResourceGroupsRequestPrivate {

public:
    GetGroupQueryRequestPrivate(const ResourceGroupsRequest::Action action,
                                   GetGroupQueryRequest * const q);
    GetGroupQueryRequestPrivate(const GetGroupQueryRequestPrivate &other,
                                   GetGroupQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGroupQueryRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif

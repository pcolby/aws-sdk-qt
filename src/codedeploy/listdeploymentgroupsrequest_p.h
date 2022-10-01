// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTGROUPSREQUEST_P_H
#define QTAWS_LISTDEPLOYMENTGROUPSREQUEST_P_H

#include "codedeployrequest_p.h"
#include "listdeploymentgroupsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentGroupsRequest;

class ListDeploymentGroupsRequestPrivate : public CodeDeployRequestPrivate {

public:
    ListDeploymentGroupsRequestPrivate(const CodeDeployRequest::Action action,
                                   ListDeploymentGroupsRequest * const q);
    ListDeploymentGroupsRequestPrivate(const ListDeploymentGroupsRequestPrivate &other,
                                   ListDeploymentGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeploymentGroupsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

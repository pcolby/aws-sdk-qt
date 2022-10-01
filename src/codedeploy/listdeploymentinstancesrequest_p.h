// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTINSTANCESREQUEST_P_H
#define QTAWS_LISTDEPLOYMENTINSTANCESREQUEST_P_H

#include "codedeployrequest_p.h"
#include "listdeploymentinstancesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentInstancesRequest;

class ListDeploymentInstancesRequestPrivate : public CodeDeployRequestPrivate {

public:
    ListDeploymentInstancesRequestPrivate(const CodeDeployRequest::Action action,
                                   ListDeploymentInstancesRequest * const q);
    ListDeploymentInstancesRequestPrivate(const ListDeploymentInstancesRequestPrivate &other,
                                   ListDeploymentInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeploymentInstancesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTCONFIGSREQUEST_P_H
#define QTAWS_LISTDEPLOYMENTCONFIGSREQUEST_P_H

#include "codedeployrequest_p.h"
#include "listdeploymentconfigsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentConfigsRequest;

class ListDeploymentConfigsRequestPrivate : public CodeDeployRequestPrivate {

public:
    ListDeploymentConfigsRequestPrivate(const CodeDeployRequest::Action action,
                                   ListDeploymentConfigsRequest * const q);
    ListDeploymentConfigsRequestPrivate(const ListDeploymentConfigsRequestPrivate &other,
                                   ListDeploymentConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeploymentConfigsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

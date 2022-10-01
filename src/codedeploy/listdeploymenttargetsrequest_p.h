// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTTARGETSREQUEST_P_H
#define QTAWS_LISTDEPLOYMENTTARGETSREQUEST_P_H

#include "codedeployrequest_p.h"
#include "listdeploymenttargetsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListDeploymentTargetsRequest;

class ListDeploymentTargetsRequestPrivate : public CodeDeployRequestPrivate {

public:
    ListDeploymentTargetsRequestPrivate(const CodeDeployRequest::Action action,
                                   ListDeploymentTargetsRequest * const q);
    ListDeploymentTargetsRequestPrivate(const ListDeploymentTargetsRequestPrivate &other,
                                   ListDeploymentTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeploymentTargetsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

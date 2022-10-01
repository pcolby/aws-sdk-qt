// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMONPREMISESINSTANCESREQUEST_P_H
#define QTAWS_REMOVETAGSFROMONPREMISESINSTANCESREQUEST_P_H

#include "codedeployrequest_p.h"
#include "removetagsfromonpremisesinstancesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class RemoveTagsFromOnPremisesInstancesRequest;

class RemoveTagsFromOnPremisesInstancesRequestPrivate : public CodeDeployRequestPrivate {

public:
    RemoveTagsFromOnPremisesInstancesRequestPrivate(const CodeDeployRequest::Action action,
                                   RemoveTagsFromOnPremisesInstancesRequest * const q);
    RemoveTagsFromOnPremisesInstancesRequestPrivate(const RemoveTagsFromOnPremisesInstancesRequestPrivate &other,
                                   RemoveTagsFromOnPremisesInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveTagsFromOnPremisesInstancesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

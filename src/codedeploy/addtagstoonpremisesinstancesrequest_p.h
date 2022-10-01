// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOONPREMISESINSTANCESREQUEST_P_H
#define QTAWS_ADDTAGSTOONPREMISESINSTANCESREQUEST_P_H

#include "codedeployrequest_p.h"
#include "addtagstoonpremisesinstancesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class AddTagsToOnPremisesInstancesRequest;

class AddTagsToOnPremisesInstancesRequestPrivate : public CodeDeployRequestPrivate {

public:
    AddTagsToOnPremisesInstancesRequestPrivate(const CodeDeployRequest::Action action,
                                   AddTagsToOnPremisesInstancesRequest * const q);
    AddTagsToOnPremisesInstancesRequestPrivate(const AddTagsToOnPremisesInstancesRequestPrivate &other,
                                   AddTagsToOnPremisesInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddTagsToOnPremisesInstancesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

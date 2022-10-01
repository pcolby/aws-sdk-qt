// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTONPREMISESINSTANCESREQUEST_P_H
#define QTAWS_LISTONPREMISESINSTANCESREQUEST_P_H

#include "codedeployrequest_p.h"
#include "listonpremisesinstancesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListOnPremisesInstancesRequest;

class ListOnPremisesInstancesRequestPrivate : public CodeDeployRequestPrivate {

public:
    ListOnPremisesInstancesRequestPrivate(const CodeDeployRequest::Action action,
                                   ListOnPremisesInstancesRequest * const q);
    ListOnPremisesInstancesRequestPrivate(const ListOnPremisesInstancesRequestPrivate &other,
                                   ListOnPremisesInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOnPremisesInstancesRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif

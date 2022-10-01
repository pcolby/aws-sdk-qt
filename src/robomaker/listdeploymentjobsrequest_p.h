// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTJOBSREQUEST_P_H
#define QTAWS_LISTDEPLOYMENTJOBSREQUEST_P_H

#include "robomakerrequest_p.h"
#include "listdeploymentjobsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListDeploymentJobsRequest;

class ListDeploymentJobsRequestPrivate : public RoboMakerRequestPrivate {

public:
    ListDeploymentJobsRequestPrivate(const RoboMakerRequest::Action action,
                                   ListDeploymentJobsRequest * const q);
    ListDeploymentJobsRequestPrivate(const ListDeploymentJobsRequestPrivate &other,
                                   ListDeploymentJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeploymentJobsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

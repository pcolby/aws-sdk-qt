// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIMULATIONJOBSREQUEST_P_H
#define QTAWS_LISTSIMULATIONJOBSREQUEST_P_H

#include "robomakerrequest_p.h"
#include "listsimulationjobsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListSimulationJobsRequest;

class ListSimulationJobsRequestPrivate : public RoboMakerRequestPrivate {

public:
    ListSimulationJobsRequestPrivate(const RoboMakerRequest::Action action,
                                   ListSimulationJobsRequest * const q);
    ListSimulationJobsRequestPrivate(const ListSimulationJobsRequestPrivate &other,
                                   ListSimulationJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSimulationJobsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

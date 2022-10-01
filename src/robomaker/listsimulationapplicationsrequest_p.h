// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIMULATIONAPPLICATIONSREQUEST_P_H
#define QTAWS_LISTSIMULATIONAPPLICATIONSREQUEST_P_H

#include "robomakerrequest_p.h"
#include "listsimulationapplicationsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListSimulationApplicationsRequest;

class ListSimulationApplicationsRequestPrivate : public RoboMakerRequestPrivate {

public:
    ListSimulationApplicationsRequestPrivate(const RoboMakerRequest::Action action,
                                   ListSimulationApplicationsRequest * const q);
    ListSimulationApplicationsRequestPrivate(const ListSimulationApplicationsRequestPrivate &other,
                                   ListSimulationApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSimulationApplicationsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

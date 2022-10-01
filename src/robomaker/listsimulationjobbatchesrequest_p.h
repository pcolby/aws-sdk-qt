// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIMULATIONJOBBATCHESREQUEST_P_H
#define QTAWS_LISTSIMULATIONJOBBATCHESREQUEST_P_H

#include "robomakerrequest_p.h"
#include "listsimulationjobbatchesrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListSimulationJobBatchesRequest;

class ListSimulationJobBatchesRequestPrivate : public RoboMakerRequestPrivate {

public:
    ListSimulationJobBatchesRequestPrivate(const RoboMakerRequest::Action action,
                                   ListSimulationJobBatchesRequest * const q);
    ListSimulationJobBatchesRequestPrivate(const ListSimulationJobBatchesRequestPrivate &other,
                                   ListSimulationJobBatchesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSimulationJobBatchesRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

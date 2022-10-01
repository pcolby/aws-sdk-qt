// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIMULATIONAPPLICATIONREQUEST_P_H
#define QTAWS_DELETESIMULATIONAPPLICATIONREQUEST_P_H

#include "robomakerrequest_p.h"
#include "deletesimulationapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteSimulationApplicationRequest;

class DeleteSimulationApplicationRequestPrivate : public RoboMakerRequestPrivate {

public:
    DeleteSimulationApplicationRequestPrivate(const RoboMakerRequest::Action action,
                                   DeleteSimulationApplicationRequest * const q);
    DeleteSimulationApplicationRequestPrivate(const DeleteSimulationApplicationRequestPrivate &other,
                                   DeleteSimulationApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSimulationApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

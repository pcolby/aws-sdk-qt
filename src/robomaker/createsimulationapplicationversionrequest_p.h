// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIMULATIONAPPLICATIONVERSIONREQUEST_P_H
#define QTAWS_CREATESIMULATIONAPPLICATIONVERSIONREQUEST_P_H

#include "robomakerrequest_p.h"
#include "createsimulationapplicationversionrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateSimulationApplicationVersionRequest;

class CreateSimulationApplicationVersionRequestPrivate : public RoboMakerRequestPrivate {

public:
    CreateSimulationApplicationVersionRequestPrivate(const RoboMakerRequest::Action action,
                                   CreateSimulationApplicationVersionRequest * const q);
    CreateSimulationApplicationVersionRequestPrivate(const CreateSimulationApplicationVersionRequestPrivate &other,
                                   CreateSimulationApplicationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSimulationApplicationVersionRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

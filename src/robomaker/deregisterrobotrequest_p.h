// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERROBOTREQUEST_P_H
#define QTAWS_DEREGISTERROBOTREQUEST_P_H

#include "robomakerrequest_p.h"
#include "deregisterrobotrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeregisterRobotRequest;

class DeregisterRobotRequestPrivate : public RoboMakerRequestPrivate {

public:
    DeregisterRobotRequestPrivate(const RoboMakerRequest::Action action,
                                   DeregisterRobotRequest * const q);
    DeregisterRobotRequestPrivate(const DeregisterRobotRequestPrivate &other,
                                   DeregisterRobotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterRobotRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

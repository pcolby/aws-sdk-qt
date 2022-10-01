// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERROBOTREQUEST_P_H
#define QTAWS_REGISTERROBOTREQUEST_P_H

#include "robomakerrequest_p.h"
#include "registerrobotrequest.h"

namespace QtAws {
namespace RoboMaker {

class RegisterRobotRequest;

class RegisterRobotRequestPrivate : public RoboMakerRequestPrivate {

public:
    RegisterRobotRequestPrivate(const RoboMakerRequest::Action action,
                                   RegisterRobotRequest * const q);
    RegisterRobotRequestPrivate(const RegisterRobotRequestPrivate &other,
                                   RegisterRobotRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterRobotRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

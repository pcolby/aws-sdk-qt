// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROBOTREQUEST_P_H
#define QTAWS_CREATEROBOTREQUEST_P_H

#include "robomakerrequest_p.h"
#include "createrobotrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateRobotRequest;

class CreateRobotRequestPrivate : public RoboMakerRequestPrivate {

public:
    CreateRobotRequestPrivate(const RoboMakerRequest::Action action,
                                   CreateRobotRequest * const q);
    CreateRobotRequestPrivate(const CreateRobotRequestPrivate &other,
                                   CreateRobotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRobotRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

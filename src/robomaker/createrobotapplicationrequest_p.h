// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROBOTAPPLICATIONREQUEST_P_H
#define QTAWS_CREATEROBOTAPPLICATIONREQUEST_P_H

#include "robomakerrequest_p.h"
#include "createrobotapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateRobotApplicationRequest;

class CreateRobotApplicationRequestPrivate : public RoboMakerRequestPrivate {

public:
    CreateRobotApplicationRequestPrivate(const RoboMakerRequest::Action action,
                                   CreateRobotApplicationRequest * const q);
    CreateRobotApplicationRequestPrivate(const CreateRobotApplicationRequestPrivate &other,
                                   CreateRobotApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRobotApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

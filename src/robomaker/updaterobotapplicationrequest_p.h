// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROBOTAPPLICATIONREQUEST_P_H
#define QTAWS_UPDATEROBOTAPPLICATIONREQUEST_P_H

#include "robomakerrequest_p.h"
#include "updaterobotapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class UpdateRobotApplicationRequest;

class UpdateRobotApplicationRequestPrivate : public RoboMakerRequestPrivate {

public:
    UpdateRobotApplicationRequestPrivate(const RoboMakerRequest::Action action,
                                   UpdateRobotApplicationRequest * const q);
    UpdateRobotApplicationRequestPrivate(const UpdateRobotApplicationRequestPrivate &other,
                                   UpdateRobotApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRobotApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

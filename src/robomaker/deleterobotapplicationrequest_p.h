// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROBOTAPPLICATIONREQUEST_P_H
#define QTAWS_DELETEROBOTAPPLICATIONREQUEST_P_H

#include "robomakerrequest_p.h"
#include "deleterobotapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteRobotApplicationRequest;

class DeleteRobotApplicationRequestPrivate : public RoboMakerRequestPrivate {

public:
    DeleteRobotApplicationRequestPrivate(const RoboMakerRequest::Action action,
                                   DeleteRobotApplicationRequest * const q);
    DeleteRobotApplicationRequestPrivate(const DeleteRobotApplicationRequestPrivate &other,
                                   DeleteRobotApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRobotApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

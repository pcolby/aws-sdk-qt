// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROBOTREQUEST_P_H
#define QTAWS_DELETEROBOTREQUEST_P_H

#include "robomakerrequest_p.h"
#include "deleterobotrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteRobotRequest;

class DeleteRobotRequestPrivate : public RoboMakerRequestPrivate {

public:
    DeleteRobotRequestPrivate(const RoboMakerRequest::Action action,
                                   DeleteRobotRequest * const q);
    DeleteRobotRequestPrivate(const DeleteRobotRequestPrivate &other,
                                   DeleteRobotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRobotRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

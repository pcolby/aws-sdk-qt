// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROBOTAPPLICATIONVERSIONREQUEST_P_H
#define QTAWS_CREATEROBOTAPPLICATIONVERSIONREQUEST_P_H

#include "robomakerrequest_p.h"
#include "createrobotapplicationversionrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateRobotApplicationVersionRequest;

class CreateRobotApplicationVersionRequestPrivate : public RoboMakerRequestPrivate {

public:
    CreateRobotApplicationVersionRequestPrivate(const RoboMakerRequest::Action action,
                                   CreateRobotApplicationVersionRequest * const q);
    CreateRobotApplicationVersionRequestPrivate(const CreateRobotApplicationVersionRequestPrivate &other,
                                   CreateRobotApplicationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRobotApplicationVersionRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATEROBOTAPPLICATIONREQUEST_P_H
#define QTAWS_UPDATEROBOTAPPLICATIONREQUEST_P_H

#include "robomakerrequest_p.h"
#include "updaterobotapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class UpdateRobotApplicationRequest;

class QTAWS_EXPORT UpdateRobotApplicationRequestPrivate : public RoboMakerRequestPrivate {

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

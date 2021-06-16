/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_DELETESIMULATIONAPPLICATIONREQUEST_P_H
#define QTAWS_DELETESIMULATIONAPPLICATIONREQUEST_P_H

#include "robomakerrequest_p.h"
#include "deletesimulationapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteSimulationApplicationRequest;

class QTAWS_EXPORT DeleteSimulationApplicationRequestPrivate : public RoboMakerRequestPrivate {

public:
    DeleteSimulationApplicationRequestPrivate(const RoboMakerRequest::Action action,
                                   DeleteSimulationApplicationRequest * const q);
    DeleteSimulationApplicationRequestPrivate(const DeleteSimulationApplicationRequestPrivate &other,
                                   DeleteSimulationApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSimulationApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif

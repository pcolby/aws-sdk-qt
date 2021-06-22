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

#ifndef QTAWS_STARTCHANGEREQUESTEXECUTIONREQUEST_P_H
#define QTAWS_STARTCHANGEREQUESTEXECUTIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "startchangerequestexecutionrequest.h"

namespace QtAws {
namespace SSM {

class StartChangeRequestExecutionRequest;

class StartChangeRequestExecutionRequestPrivate : public SsmRequestPrivate {

public:
    StartChangeRequestExecutionRequestPrivate(const SsmRequest::Action action,
                                   StartChangeRequestExecutionRequest * const q);
    StartChangeRequestExecutionRequestPrivate(const StartChangeRequestExecutionRequestPrivate &other,
                                   StartChangeRequestExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartChangeRequestExecutionRequest)

};

} // namespace SSM
} // namespace QtAws

#endif

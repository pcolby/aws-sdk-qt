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

#ifndef QTAWS_CREATEDEVICEFLEETREQUEST_P_H
#define QTAWS_CREATEDEVICEFLEETREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createdevicefleetrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateDeviceFleetRequest;

class QTAWS_EXPORT CreateDeviceFleetRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateDeviceFleetRequestPrivate(const SageMakerRequest::Action action,
                                   CreateDeviceFleetRequest * const q);
    CreateDeviceFleetRequestPrivate(const CreateDeviceFleetRequestPrivate &other,
                                   CreateDeviceFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeviceFleetRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif

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

#ifndef QTAWS_GETDEVICEREGISTRATIONREQUEST_P_H
#define QTAWS_GETDEVICEREGISTRATIONREQUEST_P_H

#include "sagemakeredgemanagerrequest_p.h"
#include "getdeviceregistrationrequest.h"

namespace QtAws {
namespace SagemakerEdgeManager {

class GetDeviceRegistrationRequest;

class QTAWS_EXPORT GetDeviceRegistrationRequestPrivate : public SagemakerEdgeManagerRequestPrivate {

public:
    GetDeviceRegistrationRequestPrivate(const SagemakerEdgeManagerRequest::Action action,
                                   GetDeviceRegistrationRequest * const q);
    GetDeviceRegistrationRequestPrivate(const GetDeviceRegistrationRequestPrivate &other,
                                   GetDeviceRegistrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeviceRegistrationRequest)

};

} // namespace SagemakerEdgeManager
} // namespace QtAws

#endif

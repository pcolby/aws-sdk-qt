/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_DELETEVPCECONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEVPCECONFIGURATIONREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "deletevpceconfigurationrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteVPCEConfigurationRequest;

class QTAWS_EXPORT DeleteVPCEConfigurationRequestPrivate : public DeviceFarmRequestPrivate {

public:
    DeleteVPCEConfigurationRequestPrivate(const DeviceFarmRequest::Action action,
                                   DeleteVPCEConfigurationRequest * const q);
    DeleteVPCEConfigurationRequestPrivate(const DeleteVPCEConfigurationRequestPrivate &other,
                                   DeleteVPCEConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVPCEConfigurationRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONREQUEST_P_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONREQUEST_P_H

#include "ssm_p.h"
#include "getmaintenancewindowexecutiontaskinvocationrequest.h"

namespace AWS {

namespace SSM {

class GetMaintenanceWindowExecutionTaskInvocationRequest;

class QTAWS_EXPORT GetMaintenanceWindowExecutionTaskInvocationRequestPrivate : public SSMPrivate {

public:
    GetMaintenanceWindowExecutionTaskInvocationRequestPrivate(const SSM::Action action,
                                   GetMaintenanceWindowExecutionTaskInvocationRequest * const q);
    GetMaintenanceWindowExecutionTaskInvocationRequestPrivate(const GetMaintenanceWindowExecutionTaskInvocationRequestPrivate &other,
                                   GetMaintenanceWindowExecutionTaskInvocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMaintenanceWindowExecutionTaskInvocationRequest)

};

} // namespace SSM
} // namespace AWS

#endif

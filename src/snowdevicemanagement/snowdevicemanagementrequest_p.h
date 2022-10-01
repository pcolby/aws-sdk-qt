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

#ifndef QTAWS_SNOWDEVICEMANAGEMENTREQUEST_P_H
#define QTAWS_SNOWDEVICEMANAGEMENTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "snowdevicemanagementrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class SnowDeviceManagementRequest;

class SnowDeviceManagementRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SnowDeviceManagementRequest::Action action; ///< SnowDeviceManagement action to be performed.
    QString apiVersion;        ///< SnowDeviceManagement API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SnowDeviceManagement request (query string) parameters. @todo?

    SnowDeviceManagementRequestPrivate(const SnowDeviceManagementRequest::Action action, SnowDeviceManagementRequest * const q);
    SnowDeviceManagementRequestPrivate(const SnowDeviceManagementRequestPrivate &other, SnowDeviceManagementRequest * const q);

    static QString toString(const SnowDeviceManagementRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SnowDeviceManagementRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif

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

#ifndef QTAWS_IOTDEVICEADVISORREQUEST_P_H
#define QTAWS_IOTDEVICEADVISORREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotdeviceadvisorrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class IotDeviceAdvisorRequest;

class IotDeviceAdvisorRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IotDeviceAdvisorRequest::Action action; ///< IotDeviceAdvisor action to be performed.
    QString apiVersion;        ///< IotDeviceAdvisor API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IotDeviceAdvisor request (query string) parameters. @todo?

    IotDeviceAdvisorRequestPrivate(const IotDeviceAdvisorRequest::Action action, IotDeviceAdvisorRequest * const q);
    IotDeviceAdvisorRequestPrivate(const IotDeviceAdvisorRequestPrivate &other, IotDeviceAdvisorRequest * const q);

    static QString toString(const IotDeviceAdvisorRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IotDeviceAdvisorRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif

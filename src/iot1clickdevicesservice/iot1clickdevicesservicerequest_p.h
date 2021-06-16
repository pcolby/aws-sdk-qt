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

#ifndef QTAWS_IOT1CLICKDEVICESSERVICEREQUEST_P_H
#define QTAWS_IOT1CLICKDEVICESSERVICEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iot1clickdevicesservicerequest.h"

namespace QtAws {
namespace IoT1ClickDevicesService {

class IoT1ClickDevicesServiceRequest;

class QTAWS_EXPORT IoT1ClickDevicesServiceRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoT1ClickDevicesServiceRequest::Action action; ///< IoT1ClickDevicesService action to be performed.
    QString apiVersion;        ///< IoT1ClickDevicesService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoT1ClickDevicesService request (query string) parameters. @todo?

    IoT1ClickDevicesServiceRequestPrivate(const IoT1ClickDevicesServiceRequest::Action action, IoT1ClickDevicesServiceRequest * const q);
    IoT1ClickDevicesServiceRequestPrivate(const IoT1ClickDevicesServiceRequestPrivate &other, IoT1ClickDevicesServiceRequest * const q);

    static QString toString(const IoT1ClickDevicesServiceRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoT1ClickDevicesServiceRequest)

};

} // namespace IoT1ClickDevicesService
} // namespace QtAws

#endif

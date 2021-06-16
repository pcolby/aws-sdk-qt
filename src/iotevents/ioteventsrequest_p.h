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

#ifndef QTAWS_IOTEVENTSREQUEST_P_H
#define QTAWS_IOTEVENTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class IoTEventsRequest;

class QTAWS_EXPORT IoTEventsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTEventsRequest::Action action; ///< IoTEvents action to be performed.
    QString apiVersion;        ///< IoTEvents API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTEvents request (query string) parameters. @todo?

    IoTEventsRequestPrivate(const IoTEventsRequest::Action action, IoTEventsRequest * const q);
    IoTEventsRequestPrivate(const IoTEventsRequestPrivate &other, IoTEventsRequest * const q);

    static QString toString(const IoTEventsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTEventsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

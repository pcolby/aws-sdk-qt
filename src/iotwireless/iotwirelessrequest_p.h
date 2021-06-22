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

#ifndef QTAWS_IOTWIRELESSREQUEST_P_H
#define QTAWS_IOTWIRELESSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class IoTWirelessRequest;

class IoTWirelessRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTWirelessRequest::Action action; ///< IoTWireless action to be performed.
    QString apiVersion;        ///< IoTWireless API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTWireless request (query string) parameters. @todo?

    IoTWirelessRequestPrivate(const IoTWirelessRequest::Action action, IoTWirelessRequest * const q);
    IoTWirelessRequestPrivate(const IoTWirelessRequestPrivate &other, IoTWirelessRequest * const q);

    static QString toString(const IoTWirelessRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTWirelessRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

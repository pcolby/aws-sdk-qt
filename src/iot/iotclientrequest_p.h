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

#ifndef QTAWS_IOTCLIENTREQUEST_P_H
#define QTAWS_IOTCLIENTREQUEST_P_H

#include "iot_p.h"
#include "iotclientrequest.h"

namespace AWS {

namespace IoT {

class IoTClientRequest;

class QTAWS_EXPORT IoTClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    IoTClientRequest::Action action; ///< IoT action to be performed.
    QString apiVersion;        ///< IoT API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoT request (query string) parameters. @todo?

    IoTClientRequestPrivate(const IoTClientRequest::Action action, IoTClientRequest * const q);
    IoTClientRequestPrivate(const IoTClientRequestPrivate &other, IoTClientRequest * const q);

    static QString toString(const IoTClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTClientRequest)

};

} // namespace IoT
} // namespace AWS

#endif

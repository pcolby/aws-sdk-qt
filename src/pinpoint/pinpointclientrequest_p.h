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

#ifndef QTAWS_PINPOINTCLIENTREQUEST_P_H
#define QTAWS_PINPOINTCLIENTREQUEST_P_H

#include "pinpoint_p.h"
#include "request.h"

namespace AWS {

namespace Pinpoint {

class PinpointClientRequest;

class QTAWS_EXPORT PinpointClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    PinpointClientRequest::Action action; ///< Pinpoint action to be performed.
    QString apiVersion;        ///< Pinpoint API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Pinpoint request (query string) parameters. @todo?

    PinpointClientRequestPrivate(const PinpointClientRequest::Action action, PinpointClientRequest * const q);
    PinpointClientRequestPrivate(const RequestPrivate &other, PinpointClientRequest * const q);

    static QString toString(const PinpointClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PinpointClientRequest)

};

} // namespace Pinpoint
} // namespace AWS

#endif

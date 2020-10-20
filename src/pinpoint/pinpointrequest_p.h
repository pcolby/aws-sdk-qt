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

#ifndef QTAWS_PINPOINTREQUEST_P_H
#define QTAWS_PINPOINTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class PinpointRequest;

class QTAWS_EXPORT PinpointRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PinpointRequest::Action action; ///< Pinpoint action to be performed.
    QString apiVersion;        ///< Pinpoint API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Pinpoint request (query string) parameters. @todo?

    PinpointRequestPrivate(const PinpointRequest::Action action, PinpointRequest * const q);
    PinpointRequestPrivate(const PinpointRequestPrivate &other, PinpointRequest * const q);

    static QString toString(const PinpointRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PinpointRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

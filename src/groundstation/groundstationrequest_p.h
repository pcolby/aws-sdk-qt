/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_GROUNDSTATIONREQUEST_P_H
#define QTAWS_GROUNDSTATIONREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class GroundStationRequest;

class QTAWS_EXPORT GroundStationRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    GroundStationRequest::Action action; ///< GroundStation action to be performed.
    QString apiVersion;        ///< GroundStation API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< GroundStation request (query string) parameters. @todo?

    GroundStationRequestPrivate(const GroundStationRequest::Action action, GroundStationRequest * const q);
    GroundStationRequestPrivate(const GroundStationRequestPrivate &other, GroundStationRequest * const q);

    static QString toString(const GroundStationRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(GroundStationRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif

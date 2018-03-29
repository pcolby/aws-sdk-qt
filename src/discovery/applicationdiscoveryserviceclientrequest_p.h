/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_APPLICATIONDISCOVERYSERVICECLIENTREQUEST_P_H
#define QTAWS_APPLICATIONDISCOVERYSERVICECLIENTREQUEST_P_H

#include "applicationdiscoveryservice_p.h"
#include "applicationdiscoveryserviceclientrequest.h"

namespace QtAws {
namespace ApplicationDiscoveryService {

class ApplicationDiscoveryServiceClientRequest;

class QTAWS_EXPORT ApplicationDiscoveryServiceClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ApplicationDiscoveryServiceClientRequest::Action action; ///< ApplicationDiscoveryService action to be performed.
    QString apiVersion;        ///< ApplicationDiscoveryService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ApplicationDiscoveryService request (query string) parameters. @todo?

    ApplicationDiscoveryServiceClientRequestPrivate(const ApplicationDiscoveryServiceClientRequest::Action action, ApplicationDiscoveryServiceClientRequest * const q);
    ApplicationDiscoveryServiceClientRequestPrivate(const ApplicationDiscoveryServiceClientRequestPrivate &other, ApplicationDiscoveryServiceClientRequest * const q);

    static QString toString(const ApplicationDiscoveryServiceClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ApplicationDiscoveryServiceClientRequest)

};

} // namespace ApplicationDiscoveryService
} // namespace QtAws

#endif

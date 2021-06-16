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

#ifndef QTAWS_APPINTEGRATIONSSERVICEREQUEST_P_H
#define QTAWS_APPINTEGRATIONSSERVICEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "appintegrationsservicerequest.h"

namespace QtAws {
namespace AppIntegrationsService {

class AppIntegrationsServiceRequest;

class QTAWS_EXPORT AppIntegrationsServiceRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AppIntegrationsServiceRequest::Action action; ///< AppIntegrationsService action to be performed.
    QString apiVersion;        ///< AppIntegrationsService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AppIntegrationsService request (query string) parameters. @todo?

    AppIntegrationsServiceRequestPrivate(const AppIntegrationsServiceRequest::Action action, AppIntegrationsServiceRequest * const q);
    AppIntegrationsServiceRequestPrivate(const AppIntegrationsServiceRequestPrivate &other, AppIntegrationsServiceRequest * const q);

    static QString toString(const AppIntegrationsServiceRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppIntegrationsServiceRequest)

};

} // namespace AppIntegrationsService
} // namespace QtAws

#endif

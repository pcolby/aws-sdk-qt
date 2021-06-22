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

#ifndef QTAWS_SSMINCIDENTSREQUEST_P_H
#define QTAWS_SSMINCIDENTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SSMIncidents {

class SSMIncidentsRequest;

class SSMIncidentsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SSMIncidentsRequest::Action action; ///< SSMIncidents action to be performed.
    QString apiVersion;        ///< SSMIncidents API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SSMIncidents request (query string) parameters. @todo?

    SSMIncidentsRequestPrivate(const SSMIncidentsRequest::Action action, SSMIncidentsRequest * const q);
    SSMIncidentsRequestPrivate(const SSMIncidentsRequestPrivate &other, SSMIncidentsRequest * const q);

    static QString toString(const SSMIncidentsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SSMIncidentsRequest)

};

} // namespace SSMIncidents
} // namespace QtAws

#endif

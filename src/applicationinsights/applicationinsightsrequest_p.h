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

#ifndef QTAWS_APPLICATIONINSIGHTSREQUEST_P_H
#define QTAWS_APPLICATIONINSIGHTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "applicationinsightsrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class ApplicationInsightsRequest;

class QTAWS_EXPORT ApplicationInsightsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ApplicationInsightsRequest::Action action; ///< ApplicationInsights action to be performed.
    QString apiVersion;        ///< ApplicationInsights API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ApplicationInsights request (query string) parameters. @todo?

    ApplicationInsightsRequestPrivate(const ApplicationInsightsRequest::Action action, ApplicationInsightsRequest * const q);
    ApplicationInsightsRequestPrivate(const ApplicationInsightsRequestPrivate &other, ApplicationInsightsRequest * const q);

    static QString toString(const ApplicationInsightsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ApplicationInsightsRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif

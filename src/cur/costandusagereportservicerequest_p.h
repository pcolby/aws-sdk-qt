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

#ifndef QTAWS_COSTANDUSAGEREPORTSERVICEREQUEST_P_H
#define QTAWS_COSTANDUSAGEREPORTSERVICEREQUEST_P_H

#include "costandusagereportservice_p.h"
#include "costandusagereportservicerequest.h"

namespace QtAws {
namespace CostandUsageReportService {

class CostandUsageReportServiceRequest;

class QTAWS_EXPORT CostandUsageReportServiceRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CostandUsageReportServiceRequest::Action action; ///< CostandUsageReportService action to be performed.
    QString apiVersion;        ///< CostandUsageReportService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CostandUsageReportService request (query string) parameters. @todo?

    CostandUsageReportServiceRequestPrivate(const CostandUsageReportServiceRequest::Action action, CostandUsageReportServiceRequest * const q);
    CostandUsageReportServiceRequestPrivate(const CostandUsageReportServiceRequestPrivate &other, CostandUsageReportServiceRequest * const q);

    static QString toString(const CostandUsageReportServiceRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CostandUsageReportServiceRequest)

};

} // namespace CostandUsageReportService
} // namespace QtAws

#endif

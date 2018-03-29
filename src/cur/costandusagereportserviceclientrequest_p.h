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

#ifndef QTAWS_COSTANDUSAGEREPORTSERVICECLIENTREQUEST_P_H
#define QTAWS_COSTANDUSAGEREPORTSERVICECLIENTREQUEST_P_H

#include "costandusagereportservice_p.h"
#include "costandusagereportserviceclientrequest.h"

namespace QtAws {
namespace CostandUsageReportService {

class CostandUsageReportServiceClientRequest;

class QTAWS_EXPORT CostandUsageReportServiceClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CostandUsageReportServiceClientRequest::Action action; ///< CostandUsageReportService action to be performed.
    QString apiVersion;        ///< CostandUsageReportService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CostandUsageReportService request (query string) parameters. @todo?

    CostandUsageReportServiceClientRequestPrivate(const CostandUsageReportServiceClientRequest::Action action, CostandUsageReportServiceClientRequest * const q);
    CostandUsageReportServiceClientRequestPrivate(const CostandUsageReportServiceClientRequestPrivate &other, CostandUsageReportServiceClientRequest * const q);

    static QString toString(const CostandUsageReportServiceClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CostandUsageReportServiceClientRequest)

};

} // namespace CostandUsageReportService
} // namespace QtAws

#endif

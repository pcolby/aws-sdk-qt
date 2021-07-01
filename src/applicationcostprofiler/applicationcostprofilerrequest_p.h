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

#ifndef QTAWS_APPLICATIONCOSTPROFILERREQUEST_P_H
#define QTAWS_APPLICATIONCOSTPROFILERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "applicationcostprofilerrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class ApplicationCostProfilerRequest;

class ApplicationCostProfilerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ApplicationCostProfilerRequest::Action action; ///< ApplicationCostProfiler action to be performed.
    QString apiVersion;        ///< ApplicationCostProfiler API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ApplicationCostProfiler request (query string) parameters. @todo?

    ApplicationCostProfilerRequestPrivate(const ApplicationCostProfilerRequest::Action action, ApplicationCostProfilerRequest * const q);
    ApplicationCostProfilerRequestPrivate(const ApplicationCostProfilerRequestPrivate &other, ApplicationCostProfilerRequest * const q);

    static QString toString(const ApplicationCostProfilerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ApplicationCostProfilerRequest)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif

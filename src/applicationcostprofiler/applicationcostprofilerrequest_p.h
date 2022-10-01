// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

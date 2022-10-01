// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COSTANDUSAGEREPORTREQUEST_P_H
#define QTAWS_COSTANDUSAGEREPORTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "costandusagereportrequest.h"

namespace QtAws {
namespace CostandUsageReport {

class CostandUsageReportRequest;

class CostandUsageReportRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CostandUsageReportRequest::Action action; ///< CostandUsageReport action to be performed.
    QString apiVersion;        ///< CostandUsageReport API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CostandUsageReport request (query string) parameters. @todo?

    CostandUsageReportRequestPrivate(const CostandUsageReportRequest::Action action, CostandUsageReportRequest * const q);
    CostandUsageReportRequestPrivate(const CostandUsageReportRequestPrivate &other, CostandUsageReportRequest * const q);

    static QString toString(const CostandUsageReportRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CostandUsageReportRequest)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif

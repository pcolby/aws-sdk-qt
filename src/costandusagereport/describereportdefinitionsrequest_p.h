// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTDEFINITIONSREQUEST_P_H
#define QTAWS_DESCRIBEREPORTDEFINITIONSREQUEST_P_H

#include "costandusagereportrequest_p.h"
#include "describereportdefinitionsrequest.h"

namespace QtAws {
namespace CostandUsageReport {

class DescribeReportDefinitionsRequest;

class DescribeReportDefinitionsRequestPrivate : public CostandUsageReportRequestPrivate {

public:
    DescribeReportDefinitionsRequestPrivate(const CostandUsageReportRequest::Action action,
                                   DescribeReportDefinitionsRequest * const q);
    DescribeReportDefinitionsRequestPrivate(const DescribeReportDefinitionsRequestPrivate &other,
                                   DescribeReportDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReportDefinitionsRequest)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif

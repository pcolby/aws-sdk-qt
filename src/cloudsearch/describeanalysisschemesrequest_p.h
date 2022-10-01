// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANALYSISSCHEMESREQUEST_P_H
#define QTAWS_DESCRIBEANALYSISSCHEMESREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "describeanalysisschemesrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeAnalysisSchemesRequest;

class DescribeAnalysisSchemesRequestPrivate : public CloudSearchRequestPrivate {

public:
    DescribeAnalysisSchemesRequestPrivate(const CloudSearchRequest::Action action,
                                   DescribeAnalysisSchemesRequest * const q);
    DescribeAnalysisSchemesRequestPrivate(const DescribeAnalysisSchemesRequestPrivate &other,
                                   DescribeAnalysisSchemesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAnalysisSchemesRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif

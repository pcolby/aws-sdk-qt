// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereportdefinitionsrequest.h"
#include "describereportdefinitionsrequest_p.h"
#include "describereportdefinitionsresponse.h"
#include "costandusagereportrequest_p.h"

namespace QtAws {
namespace CostandUsageReport {

/*!
 * \class QtAws::CostandUsageReport::DescribeReportDefinitionsRequest
 * \brief The DescribeReportDefinitionsRequest class provides an interface for CostandUsageReport DescribeReportDefinitions requests.
 *
 * \inmodule QtAwsCostandUsageReport
 *
 *  The AWS Cost and Usage Report API enables you to programmatically create, query, and delete AWS Cost and Usage report
 * 
 *  definitions>
 * 
 *  AWS Cost and Usage reports track the monthly AWS costs and usage associated with your AWS account. The report contains
 *  line items for each unique combination of AWS product, usage type, and operation that your AWS account uses. You can
 *  configure the AWS Cost and Usage report to show only the data that you want, using the AWS Cost and Usage
 * 
 *  API>
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The AWS Cost and Usage Report API provides the following
 * 
 *  endpoint> <ul> <li>
 *
 * \sa CostandUsageReportClient::describeReportDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReportDefinitionsRequest::DescribeReportDefinitionsRequest(const DescribeReportDefinitionsRequest &other)
    : CostandUsageReportRequest(new DescribeReportDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReportDefinitionsRequest object.
 */
DescribeReportDefinitionsRequest::DescribeReportDefinitionsRequest()
    : CostandUsageReportRequest(new DescribeReportDefinitionsRequestPrivate(CostandUsageReportRequest::DescribeReportDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReportDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReportDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReportDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReportDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::CostandUsageReport::DescribeReportDefinitionsRequestPrivate
 * \brief The DescribeReportDefinitionsRequestPrivate class provides private implementation for DescribeReportDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * Constructs a DescribeReportDefinitionsRequestPrivate object for CostandUsageReport \a action,
 * with public implementation \a q.
 */
DescribeReportDefinitionsRequestPrivate::DescribeReportDefinitionsRequestPrivate(
    const CostandUsageReportRequest::Action action, DescribeReportDefinitionsRequest * const q)
    : CostandUsageReportRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReportDefinitionsRequest
 * class' copy constructor.
 */
DescribeReportDefinitionsRequestPrivate::DescribeReportDefinitionsRequestPrivate(
    const DescribeReportDefinitionsRequestPrivate &other, DescribeReportDefinitionsRequest * const q)
    : CostandUsageReportRequestPrivate(other, q)
{

}

} // namespace CostandUsageReport
} // namespace QtAws

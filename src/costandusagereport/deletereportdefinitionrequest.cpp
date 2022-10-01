// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereportdefinitionrequest.h"
#include "deletereportdefinitionrequest_p.h"
#include "deletereportdefinitionresponse.h"
#include "costandusagereportrequest_p.h"

namespace QtAws {
namespace CostandUsageReport {

/*!
 * \class QtAws::CostandUsageReport::DeleteReportDefinitionRequest
 * \brief The DeleteReportDefinitionRequest class provides an interface for CostandUsageReport DeleteReportDefinition requests.
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
 * \sa CostandUsageReportClient::deleteReportDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReportDefinitionRequest::DeleteReportDefinitionRequest(const DeleteReportDefinitionRequest &other)
    : CostandUsageReportRequest(new DeleteReportDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReportDefinitionRequest object.
 */
DeleteReportDefinitionRequest::DeleteReportDefinitionRequest()
    : CostandUsageReportRequest(new DeleteReportDefinitionRequestPrivate(CostandUsageReportRequest::DeleteReportDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReportDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReportDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReportDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReportDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::CostandUsageReport::DeleteReportDefinitionRequestPrivate
 * \brief The DeleteReportDefinitionRequestPrivate class provides private implementation for DeleteReportDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * Constructs a DeleteReportDefinitionRequestPrivate object for CostandUsageReport \a action,
 * with public implementation \a q.
 */
DeleteReportDefinitionRequestPrivate::DeleteReportDefinitionRequestPrivate(
    const CostandUsageReportRequest::Action action, DeleteReportDefinitionRequest * const q)
    : CostandUsageReportRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReportDefinitionRequest
 * class' copy constructor.
 */
DeleteReportDefinitionRequestPrivate::DeleteReportDefinitionRequestPrivate(
    const DeleteReportDefinitionRequestPrivate &other, DeleteReportDefinitionRequest * const q)
    : CostandUsageReportRequestPrivate(other, q)
{

}

} // namespace CostandUsageReport
} // namespace QtAws

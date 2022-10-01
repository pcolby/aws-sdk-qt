// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putreportdefinitionrequest.h"
#include "putreportdefinitionrequest_p.h"
#include "putreportdefinitionresponse.h"
#include "costandusagereportrequest_p.h"

namespace QtAws {
namespace CostandUsageReport {

/*!
 * \class QtAws::CostandUsageReport::PutReportDefinitionRequest
 * \brief The PutReportDefinitionRequest class provides an interface for CostandUsageReport PutReportDefinition requests.
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
 * \sa CostandUsageReportClient::putReportDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
PutReportDefinitionRequest::PutReportDefinitionRequest(const PutReportDefinitionRequest &other)
    : CostandUsageReportRequest(new PutReportDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutReportDefinitionRequest object.
 */
PutReportDefinitionRequest::PutReportDefinitionRequest()
    : CostandUsageReportRequest(new PutReportDefinitionRequestPrivate(CostandUsageReportRequest::PutReportDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool PutReportDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutReportDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutReportDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new PutReportDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::CostandUsageReport::PutReportDefinitionRequestPrivate
 * \brief The PutReportDefinitionRequestPrivate class provides private implementation for PutReportDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * Constructs a PutReportDefinitionRequestPrivate object for CostandUsageReport \a action,
 * with public implementation \a q.
 */
PutReportDefinitionRequestPrivate::PutReportDefinitionRequestPrivate(
    const CostandUsageReportRequest::Action action, PutReportDefinitionRequest * const q)
    : CostandUsageReportRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutReportDefinitionRequest
 * class' copy constructor.
 */
PutReportDefinitionRequestPrivate::PutReportDefinitionRequestPrivate(
    const PutReportDefinitionRequestPrivate &other, PutReportDefinitionRequest * const q)
    : CostandUsageReportRequestPrivate(other, q)
{

}

} // namespace CostandUsageReport
} // namespace QtAws

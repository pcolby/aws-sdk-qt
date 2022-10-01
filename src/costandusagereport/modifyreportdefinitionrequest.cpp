// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyreportdefinitionrequest.h"
#include "modifyreportdefinitionrequest_p.h"
#include "modifyreportdefinitionresponse.h"
#include "costandusagereportrequest_p.h"

namespace QtAws {
namespace CostandUsageReport {

/*!
 * \class QtAws::CostandUsageReport::ModifyReportDefinitionRequest
 * \brief The ModifyReportDefinitionRequest class provides an interface for CostandUsageReport ModifyReportDefinition requests.
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
 * \sa CostandUsageReportClient::modifyReportDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyReportDefinitionRequest::ModifyReportDefinitionRequest(const ModifyReportDefinitionRequest &other)
    : CostandUsageReportRequest(new ModifyReportDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyReportDefinitionRequest object.
 */
ModifyReportDefinitionRequest::ModifyReportDefinitionRequest()
    : CostandUsageReportRequest(new ModifyReportDefinitionRequestPrivate(CostandUsageReportRequest::ModifyReportDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyReportDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyReportDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyReportDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReportDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::CostandUsageReport::ModifyReportDefinitionRequestPrivate
 * \brief The ModifyReportDefinitionRequestPrivate class provides private implementation for ModifyReportDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * Constructs a ModifyReportDefinitionRequestPrivate object for CostandUsageReport \a action,
 * with public implementation \a q.
 */
ModifyReportDefinitionRequestPrivate::ModifyReportDefinitionRequestPrivate(
    const CostandUsageReportRequest::Action action, ModifyReportDefinitionRequest * const q)
    : CostandUsageReportRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyReportDefinitionRequest
 * class' copy constructor.
 */
ModifyReportDefinitionRequestPrivate::ModifyReportDefinitionRequestPrivate(
    const ModifyReportDefinitionRequestPrivate &other, ModifyReportDefinitionRequest * const q)
    : CostandUsageReportRequestPrivate(other, q)
{

}

} // namespace CostandUsageReport
} // namespace QtAws

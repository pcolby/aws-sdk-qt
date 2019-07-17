/*
    Copyright 2013-2019 Paul Colby

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

#include "describereportdefinitionsrequest.h"
#include "describereportdefinitionsrequest_p.h"
#include "describereportdefinitionsresponse.h"
#include "costandusagereportservicerequest_p.h"

namespace QtAws {
namespace CostandUsageReportService {

/*!
 * \class QtAws::CostandUsageReportService::DescribeReportDefinitionsRequest
 * \brief The DescribeReportDefinitionsRequest class provides an interface for CostandUsageReportService DescribeReportDefinitions requests.
 *
 * \inmodule QtAwsCostandUsageReportService
 *
 *
 * \sa CostandUsageReportServiceClient::describeReportDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReportDefinitionsRequest::DescribeReportDefinitionsRequest(const DescribeReportDefinitionsRequest &other)
    : CostandUsageReportServiceRequest(new DescribeReportDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReportDefinitionsRequest object.
 */
DescribeReportDefinitionsRequest::DescribeReportDefinitionsRequest()
    : CostandUsageReportServiceRequest(new DescribeReportDefinitionsRequestPrivate(CostandUsageReportServiceRequest::DescribeReportDefinitionsAction, this))
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
 * \class QtAws::CostandUsageReportService::DescribeReportDefinitionsRequestPrivate
 * \brief The DescribeReportDefinitionsRequestPrivate class provides private implementation for DescribeReportDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReportService
 */

/*!
 * Constructs a DescribeReportDefinitionsRequestPrivate object for CostandUsageReportService \a action,
 * with public implementation \a q.
 */
DescribeReportDefinitionsRequestPrivate::DescribeReportDefinitionsRequestPrivate(
    const CostandUsageReportServiceRequest::Action action, DescribeReportDefinitionsRequest * const q)
    : CostandUsageReportServiceRequestPrivate(action, q)
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
    : CostandUsageReportServiceRequestPrivate(other, q)
{

}

} // namespace CostandUsageReportService
} // namespace QtAws

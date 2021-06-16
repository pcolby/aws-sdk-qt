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

#include "describetablerequest.h"
#include "describetablerequest_p.h"
#include "describetableresponse.h"
#include "redshiftdataapiservicerequest_p.h"

namespace QtAws {
namespace RedshiftDataAPIService {

/*!
 * \class QtAws::RedshiftDataAPIService::DescribeTableRequest
 * \brief The DescribeTableRequest class provides an interface for RedshiftDataAPIService DescribeTable requests.
 *
 * \inmodule QtAwsRedshiftDataAPIService
 *
 *  You can use the Amazon Redshift Data API to run queries on Amazon Redshift tables. You can run individual SQL
 *  statements, which are committed if the statement succeeds.
 * 
 *  </p
 * 
 *  For more information about the Amazon Redshift Data API, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the Amazon Redshift Data API</a> in the
 *  <i>Amazon Redshift Cluster Management Guide</i>.
 *
 * \sa RedshiftDataAPIServiceClient::describeTable
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTableRequest::DescribeTableRequest(const DescribeTableRequest &other)
    : RedshiftDataAPIServiceRequest(new DescribeTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTableRequest object.
 */
DescribeTableRequest::DescribeTableRequest()
    : RedshiftDataAPIServiceRequest(new DescribeTableRequestPrivate(RedshiftDataAPIServiceRequest::DescribeTableAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTableRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTableResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftDataAPIService::DescribeTableRequestPrivate
 * \brief The DescribeTableRequestPrivate class provides private implementation for DescribeTableRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftDataAPIService
 */

/*!
 * Constructs a DescribeTableRequestPrivate object for RedshiftDataAPIService \a action,
 * with public implementation \a q.
 */
DescribeTableRequestPrivate::DescribeTableRequestPrivate(
    const RedshiftDataAPIServiceRequest::Action action, DescribeTableRequest * const q)
    : RedshiftDataAPIServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTableRequest
 * class' copy constructor.
 */
DescribeTableRequestPrivate::DescribeTableRequestPrivate(
    const DescribeTableRequestPrivate &other, DescribeTableRequest * const q)
    : RedshiftDataAPIServiceRequestPrivate(other, q)
{

}

} // namespace RedshiftDataAPIService
} // namespace QtAws

/*
    Copyright 2013-2020 Paul Colby

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

#include "executesqlrequest.h"
#include "executesqlrequest_p.h"
#include "executesqlresponse.h"
#include "rdsdataservicerequest_p.h"

namespace QtAws {
namespace RDSDataService {

/*!
 * \class QtAws::RDSDataService::ExecuteSqlRequest
 * \brief The ExecuteSqlRequest class provides an interface for RDSDataService ExecuteSql requests.
 *
 * \inmodule QtAwsRDSDataService
 *
 *  <fullname>Amazon RDS Data Service</fullname>
 * 
 *  Amazon RDS provides an HTTP endpoint to run SQL statements on an Amazon Aurora Serverless DB cluster. To run these
 *  statements, you work with the Data Service
 * 
 *  API>
 * 
 *  For more information about the Data Service API, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using the Data API for Aurora
 *  Serverless</a> in the <i>Amazon Aurora User
 *
 * \sa RDSDataServiceClient::executeSql
 */

/*!
 * Constructs a copy of \a other.
 */
ExecuteSqlRequest::ExecuteSqlRequest(const ExecuteSqlRequest &other)
    : RDSDataServiceRequest(new ExecuteSqlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExecuteSqlRequest object.
 */
ExecuteSqlRequest::ExecuteSqlRequest()
    : RDSDataServiceRequest(new ExecuteSqlRequestPrivate(RDSDataServiceRequest::ExecuteSqlAction, this))
{

}

/*!
 * \reimp
 */
bool ExecuteSqlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExecuteSqlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExecuteSqlRequest::response(QNetworkReply * const reply) const
{
    return new ExecuteSqlResponse(*this, reply);
}

/*!
 * \class QtAws::RDSDataService::ExecuteSqlRequestPrivate
 * \brief The ExecuteSqlRequestPrivate class provides private implementation for ExecuteSqlRequest.
 * \internal
 *
 * \inmodule QtAwsRDSDataService
 */

/*!
 * Constructs a ExecuteSqlRequestPrivate object for RDSDataService \a action,
 * with public implementation \a q.
 */
ExecuteSqlRequestPrivate::ExecuteSqlRequestPrivate(
    const RDSDataServiceRequest::Action action, ExecuteSqlRequest * const q)
    : RDSDataServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExecuteSqlRequest
 * class' copy constructor.
 */
ExecuteSqlRequestPrivate::ExecuteSqlRequestPrivate(
    const ExecuteSqlRequestPrivate &other, ExecuteSqlRequest * const q)
    : RDSDataServiceRequestPrivate(other, q)
{

}

} // namespace RDSDataService
} // namespace QtAws

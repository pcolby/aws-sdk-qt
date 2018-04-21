/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getdimensionvaluesrequest.h"
#include "getdimensionvaluesrequest_p.h"
#include "getdimensionvaluesresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetDimensionValuesRequest
 * \brief The GetDimensionValuesRequest class provides an interface for CostExplorer GetDimensionValues requests.
 *
 * \inmodule QtAwsCostExplorer
 *
 *  The Cost Explorer API allows you to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 *  write operations for DynamoDB database tables in your production environment.
 * 
 *  </p
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The Cost Explorer API provides the following
 * 
 *  endpoint> <ul> <li>
 *
 * \sa CostExplorerClient::getDimensionValues
 */

/*!
 * Constructs a copy of \a other.
 */
GetDimensionValuesRequest::GetDimensionValuesRequest(const GetDimensionValuesRequest &other)
    : CostExplorerRequest(new GetDimensionValuesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDimensionValuesRequest object.
 */
GetDimensionValuesRequest::GetDimensionValuesRequest()
    : CostExplorerRequest(new GetDimensionValuesRequestPrivate(CostExplorerRequest::GetDimensionValuesAction, this))
{

}

/*!
 * \reimp
 */
bool GetDimensionValuesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDimensionValuesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDimensionValuesRequest::response(QNetworkReply * const reply) const
{
    return new GetDimensionValuesResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetDimensionValuesRequestPrivate
 * \brief The GetDimensionValuesRequestPrivate class provides private implementation for GetDimensionValuesRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetDimensionValuesRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetDimensionValuesRequestPrivate::GetDimensionValuesRequestPrivate(
    const CostExplorerRequest::Action action, GetDimensionValuesRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDimensionValuesRequest
 * class' copy constructor.
 */
GetDimensionValuesRequestPrivate::GetDimensionValuesRequestPrivate(
    const GetDimensionValuesRequestPrivate &other, GetDimensionValuesRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws

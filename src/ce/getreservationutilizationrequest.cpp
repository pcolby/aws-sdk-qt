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

#include "getreservationutilizationrequest.h"
#include "getreservationutilizationrequest_p.h"
#include "getreservationutilizationresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetReservationUtilizationRequest
 * \brief The GetReservationUtilizationRequest class provides an interface for CostExplorer GetReservationUtilization requests.
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
 * \sa CostExplorerClient::getReservationUtilization
 */

/*!
 * Constructs a copy of \a other.
 */
GetReservationUtilizationRequest::GetReservationUtilizationRequest(const GetReservationUtilizationRequest &other)
    : CostExplorerRequest(new GetReservationUtilizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReservationUtilizationRequest object.
 */
GetReservationUtilizationRequest::GetReservationUtilizationRequest()
    : CostExplorerRequest(new GetReservationUtilizationRequestPrivate(CostExplorerRequest::GetReservationUtilizationAction, this))
{

}

/*!
 * \reimp
 */
bool GetReservationUtilizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReservationUtilizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReservationUtilizationRequest::response(QNetworkReply * const reply) const
{
    return new GetReservationUtilizationResponse(*this, reply);
}

/*!
 * \class QtAws::CostExplorer::GetReservationUtilizationRequestPrivate
 * \brief The GetReservationUtilizationRequestPrivate class provides private implementation for GetReservationUtilizationRequest.
 * \internal
 *
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a GetReservationUtilizationRequestPrivate object for CostExplorer \a action,
 * with public implementation \a q.
 */
GetReservationUtilizationRequestPrivate::GetReservationUtilizationRequestPrivate(
    const CostExplorerRequest::Action action, GetReservationUtilizationRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReservationUtilizationRequest
 * class' copy constructor.
 */
GetReservationUtilizationRequestPrivate::GetReservationUtilizationRequestPrivate(
    const GetReservationUtilizationRequestPrivate &other, GetReservationUtilizationRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws

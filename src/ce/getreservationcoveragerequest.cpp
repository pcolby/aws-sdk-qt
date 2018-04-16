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

#include "getreservationcoveragerequest.h"
#include "getreservationcoveragerequest_p.h"
#include "getreservationcoverageresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::GetReservationCoverageRequest
 *
 * \brief The GetReservationCoverageRequest class encapsulates CostExplorer GetReservationCoverage requests.
 *
 * \ingroup CostExplorer
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
 * \sa CostExplorerClient::getReservationCoverage
 */

/*!
 * @brief  Constructs a new GetReservationCoverageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetReservationCoverageRequest::GetReservationCoverageRequest(const GetReservationCoverageRequest &other)
    : CostExplorerRequest(new GetReservationCoverageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetReservationCoverageRequest object.
 */
GetReservationCoverageRequest::GetReservationCoverageRequest()
    : CostExplorerRequest(new GetReservationCoverageRequestPrivate(CostExplorerRequest::GetReservationCoverageAction, this))
{

}

/*!
 * \reimp
 */
bool GetReservationCoverageRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetReservationCoverageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetReservationCoverageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CostExplorerClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReservationCoverageRequest::response(QNetworkReply * const reply) const
{
    return new GetReservationCoverageResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetReservationCoverageRequestPrivate
 *
 * @brief  Private implementation for GetReservationCoverageRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetReservationCoverageRequestPrivate object.
 *
 * @param  action  CostExplorer action being performed.
 * @param  q       Pointer to this object's public GetReservationCoverageRequest instance.
 */
GetReservationCoverageRequestPrivate::GetReservationCoverageRequestPrivate(
    const CostExplorerRequest::Action action, GetReservationCoverageRequest * const q)
    : CostExplorerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetReservationCoverageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetReservationCoverageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetReservationCoverageRequest instance.
 */
GetReservationCoverageRequestPrivate::GetReservationCoverageRequestPrivate(
    const GetReservationCoverageRequestPrivate &other, GetReservationCoverageRequest * const q)
    : CostExplorerRequestPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws

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

#include "getquerystatisticsrequest.h"
#include "getquerystatisticsrequest_p.h"
#include "getquerystatisticsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::GetQueryStatisticsRequest
 * \brief The GetQueryStatisticsRequest class provides an interface for LakeFormation GetQueryStatistics requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::getQueryStatistics
 */

/*!
 * Constructs a copy of \a other.
 */
GetQueryStatisticsRequest::GetQueryStatisticsRequest(const GetQueryStatisticsRequest &other)
    : LakeFormationRequest(new GetQueryStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetQueryStatisticsRequest object.
 */
GetQueryStatisticsRequest::GetQueryStatisticsRequest()
    : LakeFormationRequest(new GetQueryStatisticsRequestPrivate(LakeFormationRequest::GetQueryStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool GetQueryStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetQueryStatisticsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetQueryStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new GetQueryStatisticsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::GetQueryStatisticsRequestPrivate
 * \brief The GetQueryStatisticsRequestPrivate class provides private implementation for GetQueryStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a GetQueryStatisticsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
GetQueryStatisticsRequestPrivate::GetQueryStatisticsRequestPrivate(
    const LakeFormationRequest::Action action, GetQueryStatisticsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetQueryStatisticsRequest
 * class' copy constructor.
 */
GetQueryStatisticsRequestPrivate::GetQueryStatisticsRequestPrivate(
    const GetQueryStatisticsRequestPrivate &other, GetQueryStatisticsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws

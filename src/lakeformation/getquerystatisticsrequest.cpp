// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

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

#include "getfindingsstatisticsrequest.h"
#include "getfindingsstatisticsrequest_p.h"
#include "getfindingsstatisticsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetFindingsStatisticsRequest
 *
 * \brief The GetFindingsStatisticsRequest class encapsulates GuardDuty GetFindingsStatistics requests.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::getFindingsStatistics
 */

/*!
 * @brief  Constructs a new GetFindingsStatisticsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFindingsStatisticsRequest::GetFindingsStatisticsRequest(const GetFindingsStatisticsRequest &other)
    : GuardDutyRequest(new GetFindingsStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetFindingsStatisticsRequest object.
 */
GetFindingsStatisticsRequest::GetFindingsStatisticsRequest()
    : GuardDutyRequest(new GetFindingsStatisticsRequestPrivate(GuardDutyRequest::GetFindingsStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool GetFindingsStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetFindingsStatisticsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFindingsStatisticsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFindingsStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new GetFindingsStatisticsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetFindingsStatisticsRequestPrivate
 *
 * @brief  Private implementation for GetFindingsStatisticsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetFindingsStatisticsRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public GetFindingsStatisticsRequest instance.
 */
GetFindingsStatisticsRequestPrivate::GetFindingsStatisticsRequestPrivate(
    const GuardDutyRequest::Action action, GetFindingsStatisticsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetFindingsStatisticsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFindingsStatisticsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFindingsStatisticsRequest instance.
 */
GetFindingsStatisticsRequestPrivate::GetFindingsStatisticsRequestPrivate(
    const GetFindingsStatisticsRequestPrivate &other, GetFindingsStatisticsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws

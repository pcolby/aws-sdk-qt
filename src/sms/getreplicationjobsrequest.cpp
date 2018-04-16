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

#include "getreplicationjobsrequest.h"
#include "getreplicationjobsrequest_p.h"
#include "getreplicationjobsresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GetReplicationJobsRequest
 *
 * \brief The GetReplicationJobsRequest class encapsulates SMS GetReplicationJobs requests.
 *
 * \ingroup SMS
 *
 *
 * \sa SMSClient::getReplicationJobs
 */

/*!
 * @brief  Constructs a new GetReplicationJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetReplicationJobsRequest::GetReplicationJobsRequest(const GetReplicationJobsRequest &other)
    : SMSRequest(new GetReplicationJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetReplicationJobsRequest object.
 */
GetReplicationJobsRequest::GetReplicationJobsRequest()
    : SMSRequest(new GetReplicationJobsRequestPrivate(SMSRequest::GetReplicationJobsAction, this))
{

}

/*!
 * \reimp
 */
bool GetReplicationJobsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetReplicationJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetReplicationJobsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SMSClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReplicationJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetReplicationJobsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetReplicationJobsRequestPrivate
 *
 * @brief  Private implementation for GetReplicationJobsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetReplicationJobsRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public GetReplicationJobsRequest instance.
 */
GetReplicationJobsRequestPrivate::GetReplicationJobsRequestPrivate(
    const SMSRequest::Action action, GetReplicationJobsRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetReplicationJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetReplicationJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetReplicationJobsRequest instance.
 */
GetReplicationJobsRequestPrivate::GetReplicationJobsRequestPrivate(
    const GetReplicationJobsRequestPrivate &other, GetReplicationJobsRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws

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

#include "terminateinstancesrequest.h"
#include "terminateinstancesrequest_p.h"
#include "terminateinstancesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::TerminateInstancesRequest
 *
 * \brief The TerminateInstancesRequest class encapsulates EC2 TerminateInstances requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::terminateInstances
 */

/*!
 * @brief  Constructs a new TerminateInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TerminateInstancesRequest::TerminateInstancesRequest(const TerminateInstancesRequest &other)
    : EC2Request(new TerminateInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new TerminateInstancesRequest object.
 */
TerminateInstancesRequest::TerminateInstancesRequest()
    : EC2Request(new TerminateInstancesRequestPrivate(EC2Request::TerminateInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool TerminateInstancesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an TerminateInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TerminateInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * TerminateInstancesRequest::response(QNetworkReply * const reply) const
{
    return new TerminateInstancesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  TerminateInstancesRequestPrivate
 *
 * @brief  Private implementation for TerminateInstancesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new TerminateInstancesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public TerminateInstancesRequest instance.
 */
TerminateInstancesRequestPrivate::TerminateInstancesRequestPrivate(
    const EC2Request::Action action, TerminateInstancesRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new TerminateInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TerminateInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TerminateInstancesRequest instance.
 */
TerminateInstancesRequestPrivate::TerminateInstancesRequestPrivate(
    const TerminateInstancesRequestPrivate &other, TerminateInstancesRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws

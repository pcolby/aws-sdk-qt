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

#include "deletespotdatafeedsubscriptionrequest.h"
#include "deletespotdatafeedsubscriptionrequest_p.h"
#include "deletespotdatafeedsubscriptionresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteSpotDatafeedSubscriptionRequest
 *
 * \brief The DeleteSpotDatafeedSubscriptionRequest class encapsulates EC2 DeleteSpotDatafeedSubscription requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deleteSpotDatafeedSubscription
 */

/*!
 * @brief  Constructs a new DeleteSpotDatafeedSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSpotDatafeedSubscriptionRequest::DeleteSpotDatafeedSubscriptionRequest(const DeleteSpotDatafeedSubscriptionRequest &other)
    : EC2Request(new DeleteSpotDatafeedSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteSpotDatafeedSubscriptionRequest object.
 */
DeleteSpotDatafeedSubscriptionRequest::DeleteSpotDatafeedSubscriptionRequest()
    : EC2Request(new DeleteSpotDatafeedSubscriptionRequestPrivate(EC2Request::DeleteSpotDatafeedSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSpotDatafeedSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteSpotDatafeedSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSpotDatafeedSubscriptionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSpotDatafeedSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSpotDatafeedSubscriptionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteSpotDatafeedSubscriptionRequestPrivate
 *
 * @brief  Private implementation for DeleteSpotDatafeedSubscriptionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteSpotDatafeedSubscriptionRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteSpotDatafeedSubscriptionRequest instance.
 */
DeleteSpotDatafeedSubscriptionRequestPrivate::DeleteSpotDatafeedSubscriptionRequestPrivate(
    const EC2Request::Action action, DeleteSpotDatafeedSubscriptionRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteSpotDatafeedSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSpotDatafeedSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSpotDatafeedSubscriptionRequest instance.
 */
DeleteSpotDatafeedSubscriptionRequestPrivate::DeleteSpotDatafeedSubscriptionRequestPrivate(
    const DeleteSpotDatafeedSubscriptionRequestPrivate &other, DeleteSpotDatafeedSubscriptionRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws

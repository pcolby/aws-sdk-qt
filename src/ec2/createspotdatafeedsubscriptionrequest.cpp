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

#include "createspotdatafeedsubscriptionrequest.h"
#include "createspotdatafeedsubscriptionrequest_p.h"
#include "createspotdatafeedsubscriptionresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateSpotDatafeedSubscriptionRequest
 *
 * \brief The CreateSpotDatafeedSubscriptionRequest class encapsulates EC2 CreateSpotDatafeedSubscription requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::createSpotDatafeedSubscription
 */

/*!
 * @brief  Constructs a new CreateSpotDatafeedSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSpotDatafeedSubscriptionRequest::CreateSpotDatafeedSubscriptionRequest(const CreateSpotDatafeedSubscriptionRequest &other)
    : EC2Request(new CreateSpotDatafeedSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateSpotDatafeedSubscriptionRequest object.
 */
CreateSpotDatafeedSubscriptionRequest::CreateSpotDatafeedSubscriptionRequest()
    : EC2Request(new CreateSpotDatafeedSubscriptionRequestPrivate(EC2Request::CreateSpotDatafeedSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSpotDatafeedSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateSpotDatafeedSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSpotDatafeedSubscriptionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateSpotDatafeedSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSpotDatafeedSubscriptionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateSpotDatafeedSubscriptionRequestPrivate
 *
 * @brief  Private implementation for CreateSpotDatafeedSubscriptionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSpotDatafeedSubscriptionRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateSpotDatafeedSubscriptionRequest instance.
 */
CreateSpotDatafeedSubscriptionRequestPrivate::CreateSpotDatafeedSubscriptionRequestPrivate(
    const EC2Request::Action action, CreateSpotDatafeedSubscriptionRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSpotDatafeedSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSpotDatafeedSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSpotDatafeedSubscriptionRequest instance.
 */
CreateSpotDatafeedSubscriptionRequestPrivate::CreateSpotDatafeedSubscriptionRequestPrivate(
    const CreateSpotDatafeedSubscriptionRequestPrivate &other, CreateSpotDatafeedSubscriptionRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws

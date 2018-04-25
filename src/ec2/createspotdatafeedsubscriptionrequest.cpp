/*
    Copyright 2013-2018 Paul Colby

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

#include "createspotdatafeedsubscriptionrequest.h"
#include "createspotdatafeedsubscriptionrequest_p.h"
#include "createspotdatafeedsubscriptionresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateSpotDatafeedSubscriptionRequest
 * \brief The CreateSpotDatafeedSubscriptionRequest class provides an interface for EC2 CreateSpotDatafeedSubscription requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createSpotDatafeedSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSpotDatafeedSubscriptionRequest::CreateSpotDatafeedSubscriptionRequest(const CreateSpotDatafeedSubscriptionRequest &other)
    : Ec2Request(new CreateSpotDatafeedSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSpotDatafeedSubscriptionRequest object.
 */
CreateSpotDatafeedSubscriptionRequest::CreateSpotDatafeedSubscriptionRequest()
    : Ec2Request(new CreateSpotDatafeedSubscriptionRequestPrivate(Ec2Request::CreateSpotDatafeedSubscriptionAction, this))
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
 * Returns a CreateSpotDatafeedSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSpotDatafeedSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSpotDatafeedSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CreateSpotDatafeedSubscriptionRequestPrivate
 * \brief The CreateSpotDatafeedSubscriptionRequestPrivate class provides private implementation for CreateSpotDatafeedSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateSpotDatafeedSubscriptionRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
CreateSpotDatafeedSubscriptionRequestPrivate::CreateSpotDatafeedSubscriptionRequestPrivate(
    const Ec2Request::Action action, CreateSpotDatafeedSubscriptionRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSpotDatafeedSubscriptionRequest
 * class' copy constructor.
 */
CreateSpotDatafeedSubscriptionRequestPrivate::CreateSpotDatafeedSubscriptionRequestPrivate(
    const CreateSpotDatafeedSubscriptionRequestPrivate &other, CreateSpotDatafeedSubscriptionRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws

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

#include "getmonitoringsubscriptionrequest.h"
#include "getmonitoringsubscriptionrequest_p.h"
#include "getmonitoringsubscriptionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetMonitoringSubscriptionRequest
 * \brief The GetMonitoringSubscriptionRequest class provides an interface for CloudFront GetMonitoringSubscription requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getMonitoringSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
GetMonitoringSubscriptionRequest::GetMonitoringSubscriptionRequest(const GetMonitoringSubscriptionRequest &other)
    : CloudFrontRequest(new GetMonitoringSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMonitoringSubscriptionRequest object.
 */
GetMonitoringSubscriptionRequest::GetMonitoringSubscriptionRequest()
    : CloudFrontRequest(new GetMonitoringSubscriptionRequestPrivate(CloudFrontRequest::GetMonitoringSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool GetMonitoringSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMonitoringSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMonitoringSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new GetMonitoringSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetMonitoringSubscriptionRequestPrivate
 * \brief The GetMonitoringSubscriptionRequestPrivate class provides private implementation for GetMonitoringSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetMonitoringSubscriptionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetMonitoringSubscriptionRequestPrivate::GetMonitoringSubscriptionRequestPrivate(
    const CloudFrontRequest::Action action, GetMonitoringSubscriptionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMonitoringSubscriptionRequest
 * class' copy constructor.
 */
GetMonitoringSubscriptionRequestPrivate::GetMonitoringSubscriptionRequestPrivate(
    const GetMonitoringSubscriptionRequestPrivate &other, GetMonitoringSubscriptionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws

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

#include "createmonitoringsubscriptionrequest.h"
#include "createmonitoringsubscriptionrequest_p.h"
#include "createmonitoringsubscriptionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateMonitoringSubscriptionRequest
 * \brief The CreateMonitoringSubscriptionRequest class provides an interface for CloudFront CreateMonitoringSubscription requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createMonitoringSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMonitoringSubscriptionRequest::CreateMonitoringSubscriptionRequest(const CreateMonitoringSubscriptionRequest &other)
    : CloudFrontRequest(new CreateMonitoringSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMonitoringSubscriptionRequest object.
 */
CreateMonitoringSubscriptionRequest::CreateMonitoringSubscriptionRequest()
    : CloudFrontRequest(new CreateMonitoringSubscriptionRequestPrivate(CloudFrontRequest::CreateMonitoringSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMonitoringSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMonitoringSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMonitoringSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new CreateMonitoringSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateMonitoringSubscriptionRequestPrivate
 * \brief The CreateMonitoringSubscriptionRequestPrivate class provides private implementation for CreateMonitoringSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateMonitoringSubscriptionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateMonitoringSubscriptionRequestPrivate::CreateMonitoringSubscriptionRequestPrivate(
    const CloudFrontRequest::Action action, CreateMonitoringSubscriptionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMonitoringSubscriptionRequest
 * class' copy constructor.
 */
CreateMonitoringSubscriptionRequestPrivate::CreateMonitoringSubscriptionRequestPrivate(
    const CreateMonitoringSubscriptionRequestPrivate &other, CreateMonitoringSubscriptionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws

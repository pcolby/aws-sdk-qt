// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

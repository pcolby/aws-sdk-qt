// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemonitoringsubscriptionrequest.h"
#include "deletemonitoringsubscriptionrequest_p.h"
#include "deletemonitoringsubscriptionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteMonitoringSubscriptionRequest
 * \brief The DeleteMonitoringSubscriptionRequest class provides an interface for CloudFront DeleteMonitoringSubscription requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteMonitoringSubscription
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMonitoringSubscriptionRequest::DeleteMonitoringSubscriptionRequest(const DeleteMonitoringSubscriptionRequest &other)
    : CloudFrontRequest(new DeleteMonitoringSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMonitoringSubscriptionRequest object.
 */
DeleteMonitoringSubscriptionRequest::DeleteMonitoringSubscriptionRequest()
    : CloudFrontRequest(new DeleteMonitoringSubscriptionRequestPrivate(CloudFrontRequest::DeleteMonitoringSubscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMonitoringSubscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMonitoringSubscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMonitoringSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMonitoringSubscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteMonitoringSubscriptionRequestPrivate
 * \brief The DeleteMonitoringSubscriptionRequestPrivate class provides private implementation for DeleteMonitoringSubscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteMonitoringSubscriptionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteMonitoringSubscriptionRequestPrivate::DeleteMonitoringSubscriptionRequestPrivate(
    const CloudFrontRequest::Action action, DeleteMonitoringSubscriptionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMonitoringSubscriptionRequest
 * class' copy constructor.
 */
DeleteMonitoringSubscriptionRequestPrivate::DeleteMonitoringSubscriptionRequestPrivate(
    const DeleteMonitoringSubscriptionRequestPrivate &other, DeleteMonitoringSubscriptionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "publishappversionrequest.h"
#include "publishappversionrequest_p.h"
#include "publishappversionresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::PublishAppVersionRequest
 * \brief The PublishAppVersionRequest class provides an interface for ResilienceHub PublishAppVersion requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::publishAppVersion
 */

/*!
 * Constructs a copy of \a other.
 */
PublishAppVersionRequest::PublishAppVersionRequest(const PublishAppVersionRequest &other)
    : ResilienceHubRequest(new PublishAppVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PublishAppVersionRequest object.
 */
PublishAppVersionRequest::PublishAppVersionRequest()
    : ResilienceHubRequest(new PublishAppVersionRequestPrivate(ResilienceHubRequest::PublishAppVersionAction, this))
{

}

/*!
 * \reimp
 */
bool PublishAppVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PublishAppVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PublishAppVersionRequest::response(QNetworkReply * const reply) const
{
    return new PublishAppVersionResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::PublishAppVersionRequestPrivate
 * \brief The PublishAppVersionRequestPrivate class provides private implementation for PublishAppVersionRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a PublishAppVersionRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
PublishAppVersionRequestPrivate::PublishAppVersionRequestPrivate(
    const ResilienceHubRequest::Action action, PublishAppVersionRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PublishAppVersionRequest
 * class' copy constructor.
 */
PublishAppVersionRequestPrivate::PublishAppVersionRequestPrivate(
    const PublishAppVersionRequestPrivate &other, PublishAppVersionRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws

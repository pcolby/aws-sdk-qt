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

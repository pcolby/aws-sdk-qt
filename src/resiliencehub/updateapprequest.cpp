// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapprequest.h"
#include "updateapprequest_p.h"
#include "updateappresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::UpdateAppRequest
 * \brief The UpdateAppRequest class provides an interface for ResilienceHub UpdateApp requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::updateApp
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAppRequest::UpdateAppRequest(const UpdateAppRequest &other)
    : ResilienceHubRequest(new UpdateAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAppRequest object.
 */
UpdateAppRequest::UpdateAppRequest()
    : ResilienceHubRequest(new UpdateAppRequestPrivate(ResilienceHubRequest::UpdateAppAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAppRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAppResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::UpdateAppRequestPrivate
 * \brief The UpdateAppRequestPrivate class provides private implementation for UpdateAppRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a UpdateAppRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
UpdateAppRequestPrivate::UpdateAppRequestPrivate(
    const ResilienceHubRequest::Action action, UpdateAppRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAppRequest
 * class' copy constructor.
 */
UpdateAppRequestPrivate::UpdateAppRequestPrivate(
    const UpdateAppRequestPrivate &other, UpdateAppRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws

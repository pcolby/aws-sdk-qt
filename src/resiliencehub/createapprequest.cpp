// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapprequest.h"
#include "createapprequest_p.h"
#include "createappresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::CreateAppRequest
 * \brief The CreateAppRequest class provides an interface for ResilienceHub CreateApp requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::createApp
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAppRequest::CreateAppRequest(const CreateAppRequest &other)
    : ResilienceHubRequest(new CreateAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAppRequest object.
 */
CreateAppRequest::CreateAppRequest()
    : ResilienceHubRequest(new CreateAppRequestPrivate(ResilienceHubRequest::CreateAppAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAppRequest::response(QNetworkReply * const reply) const
{
    return new CreateAppResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::CreateAppRequestPrivate
 * \brief The CreateAppRequestPrivate class provides private implementation for CreateAppRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a CreateAppRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
CreateAppRequestPrivate::CreateAppRequestPrivate(
    const ResilienceHubRequest::Action action, CreateAppRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAppRequest
 * class' copy constructor.
 */
CreateAppRequestPrivate::CreateAppRequestPrivate(
    const CreateAppRequestPrivate &other, CreateAppRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws

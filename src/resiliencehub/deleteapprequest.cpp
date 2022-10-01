// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapprequest.h"
#include "deleteapprequest_p.h"
#include "deleteappresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DeleteAppRequest
 * \brief The DeleteAppRequest class provides an interface for ResilienceHub DeleteApp requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::deleteApp
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppRequest::DeleteAppRequest(const DeleteAppRequest &other)
    : ResilienceHubRequest(new DeleteAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppRequest object.
 */
DeleteAppRequest::DeleteAppRequest()
    : ResilienceHubRequest(new DeleteAppRequestPrivate(ResilienceHubRequest::DeleteAppAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::DeleteAppRequestPrivate
 * \brief The DeleteAppRequestPrivate class provides private implementation for DeleteAppRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DeleteAppRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
DeleteAppRequestPrivate::DeleteAppRequestPrivate(
    const ResilienceHubRequest::Action action, DeleteAppRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppRequest
 * class' copy constructor.
 */
DeleteAppRequestPrivate::DeleteAppRequestPrivate(
    const DeleteAppRequestPrivate &other, DeleteAppRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws

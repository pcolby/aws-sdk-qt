// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getenvironmentrequest.h"
#include "getenvironmentrequest_p.h"
#include "getenvironmentresponse.h"
#include "finspacerequest_p.h"

namespace QtAws {
namespace Finspace {

/*!
 * \class QtAws::Finspace::GetEnvironmentRequest
 * \brief The GetEnvironmentRequest class provides an interface for Finspace GetEnvironment requests.
 *
 * \inmodule QtAwsFinspace
 *
 *  The FinSpace management service provides the APIs for managing FinSpace
 *
 * \sa FinspaceClient::getEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
GetEnvironmentRequest::GetEnvironmentRequest(const GetEnvironmentRequest &other)
    : FinspaceRequest(new GetEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEnvironmentRequest object.
 */
GetEnvironmentRequest::GetEnvironmentRequest()
    : FinspaceRequest(new GetEnvironmentRequestPrivate(FinspaceRequest::GetEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new GetEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::Finspace::GetEnvironmentRequestPrivate
 * \brief The GetEnvironmentRequestPrivate class provides private implementation for GetEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * Constructs a GetEnvironmentRequestPrivate object for Finspace \a action,
 * with public implementation \a q.
 */
GetEnvironmentRequestPrivate::GetEnvironmentRequestPrivate(
    const FinspaceRequest::Action action, GetEnvironmentRequest * const q)
    : FinspaceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEnvironmentRequest
 * class' copy constructor.
 */
GetEnvironmentRequestPrivate::GetEnvironmentRequestPrivate(
    const GetEnvironmentRequestPrivate &other, GetEnvironmentRequest * const q)
    : FinspaceRequestPrivate(other, q)
{

}

} // namespace Finspace
} // namespace QtAws

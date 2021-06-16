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

#include "startdeploymentrequest.h"
#include "startdeploymentrequest_p.h"
#include "startdeploymentresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::StartDeploymentRequest
 * \brief The StartDeploymentRequest class provides an interface for Amplify StartDeployment requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::startDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
StartDeploymentRequest::StartDeploymentRequest(const StartDeploymentRequest &other)
    : AmplifyRequest(new StartDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDeploymentRequest object.
 */
StartDeploymentRequest::StartDeploymentRequest()
    : AmplifyRequest(new StartDeploymentRequestPrivate(AmplifyRequest::StartDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool StartDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new StartDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::StartDeploymentRequestPrivate
 * \brief The StartDeploymentRequestPrivate class provides private implementation for StartDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a StartDeploymentRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
StartDeploymentRequestPrivate::StartDeploymentRequestPrivate(
    const AmplifyRequest::Action action, StartDeploymentRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDeploymentRequest
 * class' copy constructor.
 */
StartDeploymentRequestPrivate::StartDeploymentRequestPrivate(
    const StartDeploymentRequestPrivate &other, StartDeploymentRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws

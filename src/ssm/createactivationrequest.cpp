/*
    Copyright 2013-2018 Paul Colby

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

#include "createactivationrequest.h"
#include "createactivationrequest_p.h"
#include "createactivationresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::CreateActivationRequest
 * \brief The CreateActivationRequest class provides an interface for SSM CreateActivation requests.
 *
 * \inmodule QtAwsSSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon EC2 instance or on-premises machine in
 *  your hybrid environment that has been configured for Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Systems Manager
 * 
 *  Prerequisites</a>>
 * 
 *  For information about other API actions you can perform on Amazon EC2 instances, see the <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 *  use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 *  Requests</a>.
 *
 * \sa SsmClient::createActivation
 */

/*!
 * Constructs a copy of \a other.
 */
CreateActivationRequest::CreateActivationRequest(const CreateActivationRequest &other)
    : SsmRequest(new CreateActivationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateActivationRequest object.
 */
CreateActivationRequest::CreateActivationRequest()
    : SsmRequest(new CreateActivationRequestPrivate(SsmRequest::CreateActivationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateActivationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateActivationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateActivationRequest::response(QNetworkReply * const reply) const
{
    return new CreateActivationResponse(*this, reply);
}

/*!
 * \class QtAws::SSM::CreateActivationRequestPrivate
 * \brief The CreateActivationRequestPrivate class provides private implementation for CreateActivationRequest.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a CreateActivationRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
CreateActivationRequestPrivate::CreateActivationRequestPrivate(
    const SsmRequest::Action action, CreateActivationRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateActivationRequest
 * class' copy constructor.
 */
CreateActivationRequestPrivate::CreateActivationRequestPrivate(
    const CreateActivationRequestPrivate &other, CreateActivationRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws

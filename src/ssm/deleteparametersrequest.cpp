/*
    Copyright 2013-2020 Paul Colby

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

#include "deleteparametersrequest.h"
#include "deleteparametersrequest_p.h"
#include "deleteparametersresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::DeleteParametersRequest
 * \brief The DeleteParametersRequest class provides an interface for SSM DeleteParameters requests.
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
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting Up AWS
 *  Systems Manager</a> in the <i>AWS Systems Manager User
 * 
 *  Guide</i>>
 * 
 *  For information about other API actions you can perform on Amazon EC2 instances, see the <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 *  use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 *  Requests</a>.
 *
 * \sa SsmClient::deleteParameters
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteParametersRequest::DeleteParametersRequest(const DeleteParametersRequest &other)
    : SsmRequest(new DeleteParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteParametersRequest object.
 */
DeleteParametersRequest::DeleteParametersRequest()
    : SsmRequest(new DeleteParametersRequestPrivate(SsmRequest::DeleteParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteParametersRequest::response(QNetworkReply * const reply) const
{
    return new DeleteParametersResponse(*this, reply);
}

/*!
 * \class QtAws::SSM::DeleteParametersRequestPrivate
 * \brief The DeleteParametersRequestPrivate class provides private implementation for DeleteParametersRequest.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a DeleteParametersRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
DeleteParametersRequestPrivate::DeleteParametersRequestPrivate(
    const SsmRequest::Action action, DeleteParametersRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteParametersRequest
 * class' copy constructor.
 */
DeleteParametersRequestPrivate::DeleteParametersRequestPrivate(
    const DeleteParametersRequestPrivate &other, DeleteParametersRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws

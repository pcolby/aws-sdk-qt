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

#include "resumesessionrequest.h"
#include "resumesessionrequest_p.h"
#include "resumesessionresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::ResumeSessionRequest
 * \brief The ResumeSessionRequest class provides an interface for SSM ResumeSession requests.
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
 *  Prerequisites</a> in the <i>AWS Systems Manager User
 * 
 *  Guide</i>>
 * 
 *  For information about other API actions you can perform on Amazon EC2 instances, see the <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 *  use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 *  Requests</a>.
 *
 * \sa SsmClient::resumeSession
 */

/*!
 * Constructs a copy of \a other.
 */
ResumeSessionRequest::ResumeSessionRequest(const ResumeSessionRequest &other)
    : SsmRequest(new ResumeSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResumeSessionRequest object.
 */
ResumeSessionRequest::ResumeSessionRequest()
    : SsmRequest(new ResumeSessionRequestPrivate(SsmRequest::ResumeSessionAction, this))
{

}

/*!
 * \reimp
 */
bool ResumeSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResumeSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResumeSessionRequest::response(QNetworkReply * const reply) const
{
    return new ResumeSessionResponse(*this, reply);
}

/*!
 * \class QtAws::SSM::ResumeSessionRequestPrivate
 * \brief The ResumeSessionRequestPrivate class provides private implementation for ResumeSessionRequest.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a ResumeSessionRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
ResumeSessionRequestPrivate::ResumeSessionRequestPrivate(
    const SsmRequest::Action action, ResumeSessionRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResumeSessionRequest
 * class' copy constructor.
 */
ResumeSessionRequestPrivate::ResumeSessionRequestPrivate(
    const ResumeSessionRequestPrivate &other, ResumeSessionRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws

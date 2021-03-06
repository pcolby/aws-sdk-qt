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

#include "describeautomationstepexecutionsrequest.h"
#include "describeautomationstepexecutionsrequest_p.h"
#include "describeautomationstepexecutionsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::DescribeAutomationStepExecutionsRequest
 * \brief The DescribeAutomationStepExecutionsRequest class provides an interface for SSM DescribeAutomationStepExecutions requests.
 *
 * \inmodule QtAwsSSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon Elastic Compute Cloud instance (EC2
 *  instance), or any on-premises server or virtual machine (VM) in your hybrid environment that has been configured for
 *  Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up AWS
 *  Systems Manager</a> in the <i>AWS Systems Manager User
 * 
 *  Guide</i>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API actions you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AWS AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AWS AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AWS AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AWS Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">AWS Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">AWS Incident Manager API
 *
 * \sa SsmClient::describeAutomationStepExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAutomationStepExecutionsRequest::DescribeAutomationStepExecutionsRequest(const DescribeAutomationStepExecutionsRequest &other)
    : SsmRequest(new DescribeAutomationStepExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAutomationStepExecutionsRequest object.
 */
DescribeAutomationStepExecutionsRequest::DescribeAutomationStepExecutionsRequest()
    : SsmRequest(new DescribeAutomationStepExecutionsRequestPrivate(SsmRequest::DescribeAutomationStepExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAutomationStepExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAutomationStepExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAutomationStepExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAutomationStepExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::SSM::DescribeAutomationStepExecutionsRequestPrivate
 * \brief The DescribeAutomationStepExecutionsRequestPrivate class provides private implementation for DescribeAutomationStepExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a DescribeAutomationStepExecutionsRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
DescribeAutomationStepExecutionsRequestPrivate::DescribeAutomationStepExecutionsRequestPrivate(
    const SsmRequest::Action action, DescribeAutomationStepExecutionsRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAutomationStepExecutionsRequest
 * class' copy constructor.
 */
DescribeAutomationStepExecutionsRequestPrivate::DescribeAutomationStepExecutionsRequestPrivate(
    const DescribeAutomationStepExecutionsRequestPrivate &other, DescribeAutomationStepExecutionsRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws

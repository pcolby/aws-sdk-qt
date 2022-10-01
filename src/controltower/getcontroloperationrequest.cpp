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

#include "getcontroloperationrequest.h"
#include "getcontroloperationrequest_p.h"
#include "getcontroloperationresponse.h"
#include "controltowerrequest_p.h"

namespace QtAws {
namespace ControlTower {

/*!
 * \class QtAws::ControlTower::GetControlOperationRequest
 * \brief The GetControlOperationRequest class provides an interface for ControlTower GetControlOperation requests.
 *
 * \inmodule QtAwsControlTower
 *
 *  These interfaces allow you to apply the AWS library of pre-defined <i>controls</i> to your organizational units,
 *  programmatically. In this context, controls are the same as AWS Control Tower
 * 
 *  guardrails>
 * 
 *  To call these APIs, you'll need to
 * 
 *  know> <ul> <li>
 * 
 *  the <code>ControlARN</code> for the control--that is, the guardrail--you are
 * 
 *  targeting> </li> <li>
 * 
 *  and the ARN associated with the target organizational unit
 * 
 *  (OU)> </li> </ul>
 * 
 *  <b>To get the <code>ControlARN</code> for your AWS Control Tower guardrail:</b>
 * 
 *  </p
 * 
 *  The <code>ControlARN</code> contains the control name which is specified in each guardrail. For a list of control names
 *  for <i>Strongly recommended</i> and <i>Elective</i> guardrails, see <a
 *  href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html.html">Resource identifiers for
 *  APIs and guardrails</a> in the <a
 *  href="https://docs.aws.amazon.com/controltower/latest/userguide/automating-tasks.html">Automating tasks section</a> of
 *  the AWS Control Tower User Guide. Remember that <i>Mandatory</i> guardrails cannot be added or
 * 
 *  removed> <note>
 * 
 *  <b>ARN format:</b> <code>arn:aws:controltower:{REGION}::control/{CONTROL_NAME}</code>
 * 
 *  </p
 * 
 *  <b>Example:</b>
 * 
 *  </p
 * 
 *  <code>arn:aws:controltower:us-west-2::control/AWS-GR_AUTOSCALING_LAUNCH_CONFIG_PUBLIC_IP_DISABLED</code>
 * 
 *  </p </note>
 * 
 *  <b>To get the ARN for an OU:</b>
 * 
 *  </p
 * 
 *  In the AWS Organizations console, you can find the ARN for the OU on the <b>Organizational unit details</b> page
 *  associated with that
 * 
 *  OU> <note>
 * 
 *  <b>OU ARN format:</b>
 * 
 *  </p
 * 
 *  <code>arn:${Partition}:organizations::${MasterAccountId}:ou/o-${OrganizationId}/ou-${OrganizationalUnitId}</code>
 * 
 *  </p </note> <p class="title"> <b>Details and examples</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html">List of resource
 *  identifiers for APIs and guardrails</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/controltower/latest/userguide/guardrail-api-examples-short.html">Guardrail API
 *  examples (CLI)</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/controltower/latest/userguide/enable-controls.html">Enable controls with AWS
 *  CloudFormation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/controltower/latest/userguide/creating-resources-with-cloudformation.html">Creating
 *  AWS Control Tower resources with AWS CloudFormation</a>
 * 
 *  </p </li> </ul>
 * 
 *  To view the open source resource repository on GitHub, see <a
 *  href="https://github.com/aws-cloudformation/aws-cloudformation-resource-providers-controltower">aws-cloudformation/aws-cloudformation-resource-providers-controltower</a>
 * 
 *  </p
 * 
 *  <b>Recording API Requests</b>
 * 
 *  </p
 * 
 *  AWS Control Tower supports AWS CloudTrail, a service that records AWS API calls for your AWS account and delivers log
 *  files to an Amazon S3 bucket. By using information collected by CloudTrail, you can determine which requests the AWS
 *  Control Tower service received, who made the request and when, and so on. For more about AWS Control Tower and its
 *  support for CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/controltower/latest/userguide/logging-using-cloudtrail.html">Logging AWS Control Tower
 *  Actions with AWS CloudTrail</a> in the AWS Control Tower User Guide. To learn more about CloudTrail, including how to
 *  turn it on and find your log files, see the AWS CloudTrail User
 *
 * \sa ControlTowerClient::getControlOperation
 */

/*!
 * Constructs a copy of \a other.
 */
GetControlOperationRequest::GetControlOperationRequest(const GetControlOperationRequest &other)
    : ControlTowerRequest(new GetControlOperationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetControlOperationRequest object.
 */
GetControlOperationRequest::GetControlOperationRequest()
    : ControlTowerRequest(new GetControlOperationRequestPrivate(ControlTowerRequest::GetControlOperationAction, this))
{

}

/*!
 * \reimp
 */
bool GetControlOperationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetControlOperationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetControlOperationRequest::response(QNetworkReply * const reply) const
{
    return new GetControlOperationResponse(*this, reply);
}

/*!
 * \class QtAws::ControlTower::GetControlOperationRequestPrivate
 * \brief The GetControlOperationRequestPrivate class provides private implementation for GetControlOperationRequest.
 * \internal
 *
 * \inmodule QtAwsControlTower
 */

/*!
 * Constructs a GetControlOperationRequestPrivate object for ControlTower \a action,
 * with public implementation \a q.
 */
GetControlOperationRequestPrivate::GetControlOperationRequestPrivate(
    const ControlTowerRequest::Action action, GetControlOperationRequest * const q)
    : ControlTowerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetControlOperationRequest
 * class' copy constructor.
 */
GetControlOperationRequestPrivate::GetControlOperationRequestPrivate(
    const GetControlOperationRequestPrivate &other, GetControlOperationRequest * const q)
    : ControlTowerRequestPrivate(other, q)
{

}

} // namespace ControlTower
} // namespace QtAws

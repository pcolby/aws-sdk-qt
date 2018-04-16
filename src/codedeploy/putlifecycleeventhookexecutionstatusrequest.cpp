/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putlifecycleeventhookexecutionstatusrequest.h"
#include "putlifecycleeventhookexecutionstatusrequest_p.h"
#include "putlifecycleeventhookexecutionstatusresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/*!
 * \class QtAws::CodeDeploy::PutLifecycleEventHookExecutionStatusRequest
 *
 * \brief The PutLifecycleEventHookExecutionStatusRequest class provides an interface for CodeDeploy PutLifecycleEventHookExecutionStatus requests.
 *
 * \ingroup CodeDeploy
 *
 *  <fullname>AWS CodeDeploy</fullname>
 * 
 *  AWS CodeDeploy is a deployment service that automates application deployments to Amazon EC2 instances, on-premises
 *  instances running in your own facility, or serverless AWS Lambda
 * 
 *  functions>
 * 
 *  You can deploy a nearly unlimited variety of application content, such as an updated Lambda function, code, web and
 *  configuration files, executables, packages, scripts, multimedia files, and so on. AWS CodeDeploy can deploy application
 *  content stored in Amazon S3 buckets, GitHub repositories, or Bitbucket repositories. You do not need to make changes to
 *  your existing code before you can use AWS
 * 
 *  CodeDeploy>
 * 
 *  AWS CodeDeploy makes it easier for you to rapidly release new features, helps you avoid downtime during application
 *  deployment, and handles the complexity of updating your applications, without many of the risks associated with
 *  error-prone manual
 * 
 *  deployments>
 * 
 *  <b>AWS CodeDeploy Components</b>
 * 
 *  </p
 * 
 *  Use the information in this guide to help you work with the following AWS CodeDeploy
 * 
 *  components> <ul> <li>
 * 
 *  <b>Application</b>: A name that uniquely identifies the application you want to deploy. AWS CodeDeploy uses this name,
 *  which functions as a container, to ensure the correct combination of revision, deployment configuration, and deployment
 *  group are referenced during a
 * 
 *  deployment> </li> <li>
 * 
 *  <b>Deployment group</b>: A set of individual instances or CodeDeploy Lambda applications. A Lambda deployment group
 *  contains a group of applications. An EC2/On-premises deployment group contains individually tagged instances, Amazon EC2
 *  instances in Auto Scaling groups, or both.
 * 
 *  </p </li> <li>
 * 
 *  <b>Deployment configuration</b>: A set of deployment rules and deployment success and failure conditions used by AWS
 *  CodeDeploy during a
 * 
 *  deployment> </li> <li>
 * 
 *  <b>Deployment</b>: The process and the components used in the process of updating a Lambda function or of installing
 *  content on one or more instances.
 * 
 *  </p </li> <li>
 * 
 *  <b>Application revisions</b>: For an AWS Lambda deployment, this is an AppSpec file that specifies the Lambda function
 *  to update and one or more functions to validate deployment lifecycle events. For an EC2/On-premises deployment, this is
 *  an archive file containing source content—source code, web pages, executable files, and deployment scripts—along with an
 *  AppSpec file. Revisions are stored in Amazon S3 buckets or GitHub repositories. For Amazon S3, a revision is uniquely
 *  identified by its Amazon S3 object key and its ETag, version, or both. For GitHub, a revision is uniquely identified by
 *  its commit
 * 
 *  ID> </li> </ul>
 * 
 *  This guide also contains information to help you get details about the instances in your deployments, to make
 *  on-premises instances available for AWS CodeDeploy deployments, and to get details about a Lambda function
 * 
 *  deployment>
 * 
 *  <b>AWS CodeDeploy Information Resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy User Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/codedeploy/latest/APIReference/">AWS CodeDeploy API Reference Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/cli/latest/reference/deploy/index.html">AWS CLI Reference for AWS CodeDeploy</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://forums.aws.amazon.com/forum.jspa?forumID=179">AWS CodeDeploy Developer Forum</a>
 *
 * \sa CodeDeployClient::putLifecycleEventHookExecutionStatus
 */

/*!
 * @brief  Constructs a new PutLifecycleEventHookExecutionStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutLifecycleEventHookExecutionStatusRequest::PutLifecycleEventHookExecutionStatusRequest(const PutLifecycleEventHookExecutionStatusRequest &other)
    : CodeDeployRequest(new PutLifecycleEventHookExecutionStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutLifecycleEventHookExecutionStatusRequest object.
 */
PutLifecycleEventHookExecutionStatusRequest::PutLifecycleEventHookExecutionStatusRequest()
    : CodeDeployRequest(new PutLifecycleEventHookExecutionStatusRequestPrivate(CodeDeployRequest::PutLifecycleEventHookExecutionStatusAction, this))
{

}

/*!
 * \reimp
 */
bool PutLifecycleEventHookExecutionStatusRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutLifecycleEventHookExecutionStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutLifecycleEventHookExecutionStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLifecycleEventHookExecutionStatusRequest::response(QNetworkReply * const reply) const
{
    return new PutLifecycleEventHookExecutionStatusResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutLifecycleEventHookExecutionStatusRequestPrivate
 *
 * @brief  Private implementation for PutLifecycleEventHookExecutionStatusRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutLifecycleEventHookExecutionStatusRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public PutLifecycleEventHookExecutionStatusRequest instance.
 */
PutLifecycleEventHookExecutionStatusRequestPrivate::PutLifecycleEventHookExecutionStatusRequestPrivate(
    const CodeDeployRequest::Action action, PutLifecycleEventHookExecutionStatusRequest * const q)
    : CodeDeployRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutLifecycleEventHookExecutionStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutLifecycleEventHookExecutionStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutLifecycleEventHookExecutionStatusRequest instance.
 */
PutLifecycleEventHookExecutionStatusRequestPrivate::PutLifecycleEventHookExecutionStatusRequestPrivate(
    const PutLifecycleEventHookExecutionStatusRequestPrivate &other, PutLifecycleEventHookExecutionStatusRequest * const q)
    : CodeDeployRequestPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws

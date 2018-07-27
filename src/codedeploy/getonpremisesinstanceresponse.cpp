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

#include "getonpremisesinstanceresponse.h"
#include "getonpremisesinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/*!
 * \class QtAws::CodeDeploy::GetOnPremisesInstanceResponse
 * \brief The GetOnPremisesInstanceResponse class provides an interace for CodeDeploy GetOnPremisesInstance responses.
 *
 * \inmodule QtAwsCodeDeploy
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
 * \sa CodeDeployClient::getOnPremisesInstance
 */

/*!
 * Constructs a GetOnPremisesInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
GetOnPremisesInstanceResponse::GetOnPremisesInstanceResponse(
        const GetOnPremisesInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new GetOnPremisesInstanceResponsePrivate(this), parent)
{
    setRequest(new GetOnPremisesInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOnPremisesInstanceRequest * GetOnPremisesInstanceResponse::request() const
{
    Q_D(const GetOnPremisesInstanceResponse);
    return static_cast<const GetOnPremisesInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeDeploy GetOnPremisesInstance \a response.
 */
void GetOnPremisesInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOnPremisesInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeDeploy::GetOnPremisesInstanceResponsePrivate
 * \brief The GetOnPremisesInstanceResponsePrivate class provides private implementation for GetOnPremisesInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsCodeDeploy
 */

/*!
 * Constructs a GetOnPremisesInstanceResponsePrivate object with public implementation \a q.
 */
GetOnPremisesInstanceResponsePrivate::GetOnPremisesInstanceResponsePrivate(
    GetOnPremisesInstanceResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/*!
 * Parses a CodeDeploy GetOnPremisesInstance response element from \a xml.
 */
void GetOnPremisesInstanceResponsePrivate::parseGetOnPremisesInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOnPremisesInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeDeploy
} // namespace QtAws

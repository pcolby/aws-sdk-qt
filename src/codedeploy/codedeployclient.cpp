/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "codedeployclient.h"
#include "codedeployclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  CodeDeployClient
 *
 * @brief  Client for AWS CodeDeploy
 *
 * <fullname>AWS CodeDeploy</fullname> <b>Overview</b>
 *
 * This reference guide provides descriptions of the AWS CodeDeploy APIs. For more information about AWS CodeDeploy, see
 * the <a href="docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy User
 *
 * Guide</a>> <b>Using the APIs</b>
 *
 * You can use the AWS CodeDeploy APIs to work with the
 *
 * following> <ul> <li>
 *
 * Applications are unique identifiers used by AWS CodeDeploy to ensure the correct combinations of revisions, deployment
 * configurations, and deployment groups are being referenced during
 *
 * deployments>
 *
 * You can use the AWS CodeDeploy APIs to create, delete, get, list, and update
 *
 * applications> </li> <li>
 *
 * Deployment configurations are sets of deployment rules and success and failure conditions used by AWS CodeDeploy during
 *
 * deployments>
 *
 * You can use the AWS CodeDeploy APIs to create, delete, get, and list deployment
 *
 * configurations> </li> <li>
 *
 * Deployment groups are groups of instances to which application revisions can be
 *
 * deployed>
 *
 * You can use the AWS CodeDeploy APIs to create, delete, get, list, and update deployment
 *
 * groups> </li> <li>
 *
 * Instances represent Amazon EC2 instances to which application revisions are deployed. Instances are identified by their
 * Amazon EC2 tags or Auto Scaling group names. Instances belong to deployment
 *
 * groups>
 *
 * You can use the AWS CodeDeploy APIs to get and list
 *
 * instance> </li> <li>
 *
 * Deployments represent the process of deploying revisions to
 *
 * instances>
 *
 * You can use the AWS CodeDeploy APIs to create, get, list, and stop
 *
 * deployments> </li> <li>
 *
 * Application revisions are archive files stored in Amazon S3 buckets or GitHub repositories. These revisions contain
 * source content (such as source code, web pages, executable files, and deployment scripts) along with an application
 * specification (AppSpec) file. (The AppSpec file is unique to AWS CodeDeploy; it defines the deployment actions you want
 * AWS CodeDeploy to execute.) Ffor application revisions stored in Amazon S3 buckets, an application revision is uniquely
 * identified by its Amazon S3 object key and its ETag, version, or both. For application revisions stored in GitHub
 * repositories, an application revision is uniquely identified by its repository name and commit ID. Application revisions
 * are deployed through deployment
 *
 * groups>
 *
 * You can use the AWS CodeDeploy APIs to get, list, and register application
 */

/**
 * @brief  Constructs a new CodeDeployClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CodeDeployClient::CodeDeployClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CodeDeployClientPrivate(this), parent)
{
    Q_D(CodeDeployClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new CodeDeployClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
CodeDeployClient::CodeDeployClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CodeDeployClientPrivate(this), parent)
{
    Q_D(CodeDeployClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  CodeDeployClientPrivate
 *
 * @brief  Private implementation for CodeDeployClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CodeDeployClientPrivate object.
 *
 * @param  q  Pointer to this object's public CodeDeployClient instance.
 */
CodeDeployClientPrivate::CodeDeployClientPrivate(CodeDeployClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CodeDeploy
} // namespace AWS

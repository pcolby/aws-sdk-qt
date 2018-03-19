/*
    Copyright 2013-2018 Paul Colby

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

#include "serverlessapplicationrepositoryclient.h"
#include "serverlessapplicationrepositoryclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ServerlessApplicationRepository {

/**
 * @class  ServerlessApplicationRepositoryClient
 *
 * @brief  Client for AWSServerlessApplicationRepository
 *
 * The AWS Serverless Application Repository makes it easy for developers and enterprises to quickly find and deploy
 * serverless applications in the AWS Cloud. For more information about serverless applications, see Serverless Computing
 * and Applications on the AWS website.</p><p>The AWS Serverless Application Repository is deeply integrated with the AWS
 * Lambda console, so that developers of all levels can get started with serverless computing without needing to learn
 * anything new. You can use category keywords to browse for applications such as web and mobile backends, data processing
 * applications, or chatbots. You can also search for applications by name, publisher, or event source. To use an
 * application, you simply choose it, configure any required fields, and deploy it with a few clicks. </p><p>You can also
 * easily publish applications, sharing them publicly with the community at large, or privately within your team or across
 * your organization. To publish a serverless application (or app), you can use the AWS Management Console, AWS Command
 * Line Interface (AWS CLI), or AWS SDKs to upload the code. Along with the code, you upload a simple manifest file, also
 * known as the AWS Serverless Application Model (AWS SAM) template. For more information about AWS SAM, see AWS Serverless
 * Application Model (AWS SAM) on the AWS Labs GitHub repository.</p><p>The AWS Serverless Application Repository Developer
 * Guide contains more information about the two developer experiences available:</p><ul> <li>
 *
 * Consuming Applications – Browse for applications and view information about them, including source code and readme
 * files. Also install, configure, and deploy applications of your choosing.
 *
 * </p
 *
 * Publishing Applications – Configure and upload applications to make them available to other developers, and publish new
 * versions of applications.
 */

/**
 * @brief  Constructs a new ServerlessApplicationRepositoryClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ServerlessApplicationRepositoryClientPrivate(this), parent)
{
    Q_D(ServerlessApplicationRepositoryClient);
    d->apiVersion = QStringLiteral("2017-09-08");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("serverlessrepo");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWSServerlessApplicationRepository");
    d->serviceName = QStringLiteral("serverlessrepo");
}

/**
 * @brief  Constructs a new ServerlessApplicationRepositoryClient object.
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
ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ServerlessApplicationRepositoryClientPrivate(this), parent)
{
    Q_D(ServerlessApplicationRepositoryClient);
    d->apiVersion = QStringLiteral("2017-09-08");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("serverlessrepo");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWSServerlessApplicationRepository");
    d->serviceName = QStringLiteral("serverlessrepo");
}

/**
 * Creates an application, optionally including an AWS SAM file to create the first application version in the same
 *
 * @param  request Request to send to AWSServerlessApplicationRepository.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateApplicationResponse * ServerlessApplicationRepositoryClient::createApplication(const CreateApplicationRequest &request)
{

}

/**
 * Creates an application
 *
 * @param  request Request to send to AWSServerlessApplicationRepository.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateApplicationVersionResponse * ServerlessApplicationRepositoryClient::createApplicationVersion(const CreateApplicationVersionRequest &request)
{

}

/**
 * Creates an AWS CloudFormation ChangeSet for the given
 *
 * @param  request Request to send to AWSServerlessApplicationRepository.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCloudFormationChangeSetResponse * ServerlessApplicationRepositoryClient::createCloudFormationChangeSet(const CreateCloudFormationChangeSetRequest &request)
{

}

/**
 * Deletes the specified
 *
 * @param  request Request to send to AWSServerlessApplicationRepository.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApplicationResponse * ServerlessApplicationRepositoryClient::deleteApplication(const DeleteApplicationRequest &request)
{

}

/**
 * Gets the specified
 *
 * @param  request Request to send to AWSServerlessApplicationRepository.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApplicationResponse * ServerlessApplicationRepositoryClient::getApplication(const GetApplicationRequest &request)
{

}

/**
 * Gets the policy for the specified
 *
 * @param  request Request to send to AWSServerlessApplicationRepository.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApplicationPolicyResponse * ServerlessApplicationRepositoryClient::getApplicationPolicy(const GetApplicationPolicyRequest &request)
{

}

/**
 * Lists versions for the specified
 *
 * @param  request Request to send to AWSServerlessApplicationRepository.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListApplicationVersionsResponse * ServerlessApplicationRepositoryClient::listApplicationVersions(const ListApplicationVersionsRequest &request)
{

}

/**
 * Lists applications owned by the
 *
 * @param  request Request to send to AWSServerlessApplicationRepository.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListApplicationsResponse * ServerlessApplicationRepositoryClient::listApplications(const ListApplicationsRequest &request)
{

}

/**
 * Puts the policy for the specified
 *
 * @param  request Request to send to AWSServerlessApplicationRepository.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutApplicationPolicyResponse * ServerlessApplicationRepositoryClient::putApplicationPolicy(const PutApplicationPolicyRequest &request)
{

}

/**
 * Updates the specified
 *
 * @param  request Request to send to AWSServerlessApplicationRepository.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApplicationResponse * ServerlessApplicationRepositoryClient::updateApplication(const UpdateApplicationRequest &request)
{

}

/**
 * @internal
 *
 * @class  ServerlessApplicationRepositoryClientPrivate
 *
 * @brief  Private implementation for ServerlessApplicationRepositoryClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ServerlessApplicationRepositoryClientPrivate object.
 *
 * @param  q  Pointer to this object's public ServerlessApplicationRepositoryClient instance.
 */
ServerlessApplicationRepositoryClientPrivate::ServerlessApplicationRepositoryClientPrivate(ServerlessApplicationRepositoryClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ServerlessApplicationRepository
} // namespace AWS

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

#include "serverlessapplicationrepositoryclient.h"
#include "serverlessapplicationrepositoryclient_p.h"

#include "core/awssignaturev4.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "createapplicationversionrequest.h"
#include "createapplicationversionresponse.h"
#include "createcloudformationchangesetrequest.h"
#include "createcloudformationchangesetresponse.h"
#include "createcloudformationtemplaterequest.h"
#include "createcloudformationtemplateresponse.h"
#include "deleteapplicationrequest.h"
#include "deleteapplicationresponse.h"
#include "getapplicationrequest.h"
#include "getapplicationresponse.h"
#include "getapplicationpolicyrequest.h"
#include "getapplicationpolicyresponse.h"
#include "getcloudformationtemplaterequest.h"
#include "getcloudformationtemplateresponse.h"
#include "listapplicationdependenciesrequest.h"
#include "listapplicationdependenciesresponse.h"
#include "listapplicationversionsrequest.h"
#include "listapplicationversionsresponse.h"
#include "listapplicationsrequest.h"
#include "listapplicationsresponse.h"
#include "putapplicationpolicyrequest.h"
#include "putapplicationpolicyresponse.h"
#include "unshareapplicationrequest.h"
#include "unshareapplicationresponse.h"
#include "updateapplicationrequest.h"
#include "updateapplicationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ServerlessApplicationRepository
 * \brief Contains classess for accessing AWSServerlessApplicationRepository.
 *
 * \inmodule QtAwsServerlessApplicationRepository
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ServerlessApplicationRepository {

/*!
 * \class QtAws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClient
 * \brief The ServerlessApplicationRepositoryClient class provides access to the AWSServerlessApplicationRepository service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsServerlessApplicationRepository
 *
 *  The AWS Serverless Application Repository makes it easy for developers and enterprises to quickly find and deploy
 *  serverless applications in the AWS Cloud. For more information about serverless applications, see Serverless Computing
 *  and Applications on the AWS website.</p><p>The AWS Serverless Application Repository is deeply integrated with the AWS
 *  Lambda console, so that developers of all levels can get started with serverless computing without needing to learn
 *  anything new. You can use category keywords to browse for applications such as web and mobile backends, data processing
 *  applications, or chatbots. You can also search for applications by name, publisher, or event source. To use an
 *  application, you simply choose it, configure any required fields, and deploy it with a few clicks. </p><p>You can also
 *  easily publish applications, sharing them publicly with the community at large, or privately within your team or across
 *  your organization. To publish a serverless application (or app), you can use the AWS Management Console, AWS Command
 *  Line Interface (AWS CLI), or AWS SDKs to upload the code. Along with the code, you upload a simple manifest file, also
 *  known as the AWS Serverless Application Model (AWS SAM) template. For more information about AWS SAM, see AWS Serverless
 *  Application Model (AWS SAM) on the AWS Labs GitHub repository.</p><p>The AWS Serverless Application Repository Developer
 *  Guide contains more information about the two developer experiences available:</p><ul> <li>
 * 
 *  Consuming Applications – Browse for applications and view information about them, including source code and readme
 *  files. Also install, configure, and deploy applications of your choosing.
 * 
 *  </p
 * 
 *  Publishing Applications – Configure and upload applications to make them available to other developers, and publish new
 *  versions of applications.
 */

/*!
 * \brief Constructs a ServerlessApplicationRepositoryClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-09-08"),
    QStringLiteral("serverlessrepo"),
    QStringLiteral("AWSServerlessApplicationRepository"),
    QStringLiteral("serverlessrepo"),
    parent), d_ptr(new ServerlessApplicationRepositoryClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload ServerlessApplicationRepositoryClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-09-08"),
    QStringLiteral("serverlessrepo"),
    QStringLiteral("AWSServerlessApplicationRepository"),
    QStringLiteral("serverlessrepo"),
    parent), d_ptr(new ServerlessApplicationRepositoryClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an application, optionally including an AWS SAM file to create the first application version in the same
 */
CreateApplicationResponse * ServerlessApplicationRepositoryClient::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * CreateApplicationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an application
 */
CreateApplicationVersionResponse * ServerlessApplicationRepositoryClient::createApplicationVersion(const CreateApplicationVersionRequest &request)
{
    return qobject_cast<CreateApplicationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * CreateCloudFormationChangeSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS CloudFormation change set for the given
 */
CreateCloudFormationChangeSetResponse * ServerlessApplicationRepositoryClient::createCloudFormationChangeSet(const CreateCloudFormationChangeSetRequest &request)
{
    return qobject_cast<CreateCloudFormationChangeSetResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * CreateCloudFormationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS CloudFormation
 */
CreateCloudFormationTemplateResponse * ServerlessApplicationRepositoryClient::createCloudFormationTemplate(const CreateCloudFormationTemplateRequest &request)
{
    return qobject_cast<CreateCloudFormationTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * DeleteApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteApplicationResponse * ServerlessApplicationRepositoryClient::deleteApplication(const DeleteApplicationRequest &request)
{
    return qobject_cast<DeleteApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * GetApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified
 */
GetApplicationResponse * ServerlessApplicationRepositoryClient::getApplication(const GetApplicationRequest &request)
{
    return qobject_cast<GetApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * GetApplicationPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the policy for the
 */
GetApplicationPolicyResponse * ServerlessApplicationRepositoryClient::getApplicationPolicy(const GetApplicationPolicyRequest &request)
{
    return qobject_cast<GetApplicationPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * GetCloudFormationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified AWS CloudFormation
 */
GetCloudFormationTemplateResponse * ServerlessApplicationRepositoryClient::getCloudFormationTemplate(const GetCloudFormationTemplateRequest &request)
{
    return qobject_cast<GetCloudFormationTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * ListApplicationDependenciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the list of applications nested in the containing
 */
ListApplicationDependenciesResponse * ServerlessApplicationRepositoryClient::listApplicationDependencies(const ListApplicationDependenciesRequest &request)
{
    return qobject_cast<ListApplicationDependenciesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * ListApplicationVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists versions for the specified
 */
ListApplicationVersionsResponse * ServerlessApplicationRepositoryClient::listApplicationVersions(const ListApplicationVersionsRequest &request)
{
    return qobject_cast<ListApplicationVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * ListApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists applications owned by the
 */
ListApplicationsResponse * ServerlessApplicationRepositoryClient::listApplications(const ListApplicationsRequest &request)
{
    return qobject_cast<ListApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * PutApplicationPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the permission policy for an application. For the list of actions supported for this operation, see <a
 * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
 * Permissions</a>
 */
PutApplicationPolicyResponse * ServerlessApplicationRepositoryClient::putApplicationPolicy(const PutApplicationPolicyRequest &request)
{
    return qobject_cast<PutApplicationPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * UnshareApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Unshares an application from an AWS Organization.</p><p>This operation can be called only from the organization's master
 */
UnshareApplicationResponse * ServerlessApplicationRepositoryClient::unshareApplication(const UnshareApplicationRequest &request)
{
    return qobject_cast<UnshareApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ServerlessApplicationRepositoryClient service, and returns a pointer to an
 * UpdateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 */
UpdateApplicationResponse * ServerlessApplicationRepositoryClient::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * \class QtAws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientPrivate
 * \brief The ServerlessApplicationRepositoryClientPrivate class provides private implementation for ServerlessApplicationRepositoryClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsServerlessApplicationRepository
 */

/*!
 * Constructs a ServerlessApplicationRepositoryClientPrivate object with public implementation \a q.
 */
ServerlessApplicationRepositoryClientPrivate::ServerlessApplicationRepositoryClientPrivate(ServerlessApplicationRepositoryClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace ServerlessApplicationRepository
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mqclient.h"
#include "mqclient_p.h"

#include "core/awssignaturev4.h"
#include "createbrokerrequest.h"
#include "createbrokerresponse.h"
#include "createconfigurationrequest.h"
#include "createconfigurationresponse.h"
#include "createtagsrequest.h"
#include "createtagsresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "deletebrokerrequest.h"
#include "deletebrokerresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "describebrokerrequest.h"
#include "describebrokerresponse.h"
#include "describebrokerenginetypesrequest.h"
#include "describebrokerenginetypesresponse.h"
#include "describebrokerinstanceoptionsrequest.h"
#include "describebrokerinstanceoptionsresponse.h"
#include "describeconfigurationrequest.h"
#include "describeconfigurationresponse.h"
#include "describeconfigurationrevisionrequest.h"
#include "describeconfigurationrevisionresponse.h"
#include "describeuserrequest.h"
#include "describeuserresponse.h"
#include "listbrokersrequest.h"
#include "listbrokersresponse.h"
#include "listconfigurationrevisionsrequest.h"
#include "listconfigurationrevisionsresponse.h"
#include "listconfigurationsrequest.h"
#include "listconfigurationsresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "rebootbrokerrequest.h"
#include "rebootbrokerresponse.h"
#include "updatebrokerrequest.h"
#include "updatebrokerresponse.h"
#include "updateconfigurationrequest.h"
#include "updateconfigurationresponse.h"
#include "updateuserrequest.h"
#include "updateuserresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Mq
 * \brief Contains classess for accessing AmazonMQ.
 *
 * \inmodule QtAwsMq
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::MqClient
 * \brief The MqClient class provides access to the AmazonMQ service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 */

/*!
 * \brief Constructs a MqClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MqClient::MqClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MqClientPrivate(this), parent)
{
    Q_D(MqClient);
    d->apiVersion = QStringLiteral("2017-11-27");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("mq");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AmazonMQ");
    d->serviceName = QStringLiteral("mq");
}

/*!
 * \overload MqClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MqClient::MqClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MqClientPrivate(this), parent)
{
    Q_D(MqClient);
    d->apiVersion = QStringLiteral("2017-11-27");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("mq");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AmazonMQ");
    d->serviceName = QStringLiteral("mq");
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * CreateBrokerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a broker. Note: This API is
 *
 * asynchronous>
 *
 * To create a broker, you must either use the AmazonMQFullAccess IAM policy or include the following EC2 permissions in
 * your IAM
 *
 * policy>
 *
 * <ul><li><p>ec2:CreateNetworkInterfac>
 *
 * This permission is required to allow Amazon MQ to create an elastic network interface (ENI) on behalf of your
 * account.</p></li>
 *
 * <li><p>ec2:CreateNetworkInterfacePermissio>
 *
 * This permission is required to attach the ENI to the broker instance.</p></li>
 * <li><p>ec2:DeleteNetworkInterface</p></li> <li><p>ec2:DeleteNetworkInterfacePermission</p></li>
 * <li><p>ec2:DetachNetworkInterface</p></li> <li><p>ec2:DescribeInternetGateways</p></li>
 * <li><p>ec2:DescribeNetworkInterfaces</p></li> <li><p>ec2:DescribeNetworkInterfacePermissions</p></li>
 * <li><p>ec2:DescribeRouteTables</p></li> <li><p>ec2:DescribeSecurityGroups</p></li> <li><p>ec2:DescribeSubnets</p></li>
 * <li><p>ec2:DescribeVpcs</p></li></ul>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/amazon-mq-setting-up.html#create-iam-user">Create an
 * IAM User and Get Your AWS Credentials</a> and <a
 * href="https://docs.aws.amazon.com/amazon-mq/latest/developer-guide/connecting-to-amazon-mq.html#never-modify-delete-elastic-network-interface">Never
 * Modify or Delete the Amazon MQ Elastic Network Interface</a> in the <i>Amazon MQ Developer
 */
CreateBrokerResponse * MqClient::createBroker(const CreateBrokerRequest &request)
{
    return qobject_cast<CreateBrokerResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * CreateConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new configuration for the specified configuration name. Amazon MQ uses the default configuration (the engine
 * type and
 */
CreateConfigurationResponse * MqClient::createConfiguration(const CreateConfigurationRequest &request)
{
    return qobject_cast<CreateConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * CreateTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add a tag to a
 */
CreateTagsResponse * MqClient::createTags(const CreateTagsRequest &request)
{
    return qobject_cast<CreateTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an ActiveMQ
 */
CreateUserResponse * MqClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * DeleteBrokerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a broker. Note: This API is
 */
DeleteBrokerResponse * MqClient::deleteBroker(const DeleteBrokerRequest &request)
{
    return qobject_cast<DeleteBrokerResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from a
 */
DeleteTagsResponse * MqClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an ActiveMQ
 */
DeleteUserResponse * MqClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * DescribeBrokerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified
 */
DescribeBrokerResponse * MqClient::describeBroker(const DescribeBrokerRequest &request)
{
    return qobject_cast<DescribeBrokerResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * DescribeBrokerEngineTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe available engine types and
 */
DescribeBrokerEngineTypesResponse * MqClient::describeBrokerEngineTypes(const DescribeBrokerEngineTypesRequest &request)
{
    return qobject_cast<DescribeBrokerEngineTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * DescribeBrokerInstanceOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe available broker instance
 */
DescribeBrokerInstanceOptionsResponse * MqClient::describeBrokerInstanceOptions(const DescribeBrokerInstanceOptionsRequest &request)
{
    return qobject_cast<DescribeBrokerInstanceOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * DescribeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified
 */
DescribeConfigurationResponse * MqClient::describeConfiguration(const DescribeConfigurationRequest &request)
{
    return qobject_cast<DescribeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * DescribeConfigurationRevisionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the specified configuration revision for the specified
 */
DescribeConfigurationRevisionResponse * MqClient::describeConfigurationRevision(const DescribeConfigurationRevisionRequest &request)
{
    return qobject_cast<DescribeConfigurationRevisionResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * DescribeUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about an ActiveMQ
 */
DescribeUserResponse * MqClient::describeUser(const DescribeUserRequest &request)
{
    return qobject_cast<DescribeUserResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * ListBrokersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all
 */
ListBrokersResponse * MqClient::listBrokers(const ListBrokersRequest &request)
{
    return qobject_cast<ListBrokersResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * ListConfigurationRevisionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all revisions for the specified
 */
ListConfigurationRevisionsResponse * MqClient::listConfigurationRevisions(const ListConfigurationRevisionsRequest &request)
{
    return qobject_cast<ListConfigurationRevisionsResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * ListConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all
 */
ListConfigurationsResponse * MqClient::listConfigurations(const ListConfigurationsRequest &request)
{
    return qobject_cast<ListConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists tags for a
 */
ListTagsResponse * MqClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all ActiveMQ
 */
ListUsersResponse * MqClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * RebootBrokerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reboots a broker. Note: This API is
 */
RebootBrokerResponse * MqClient::rebootBroker(const RebootBrokerRequest &request)
{
    return qobject_cast<RebootBrokerResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * UpdateBrokerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a pending configuration change to a
 */
UpdateBrokerResponse * MqClient::updateBroker(const UpdateBrokerRequest &request)
{
    return qobject_cast<UpdateBrokerResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * UpdateConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 */
UpdateConfigurationResponse * MqClient::updateConfiguration(const UpdateConfigurationRequest &request)
{
    return qobject_cast<UpdateConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MqClient service, and returns a pointer to an
 * UpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the information for an ActiveMQ
 */
UpdateUserResponse * MqClient::updateUser(const UpdateUserRequest &request)
{
    return qobject_cast<UpdateUserResponse *>(send(request));
}

/*!
 * \class QtAws::Mq::MqClientPrivate
 * \brief The MqClientPrivate class provides private implementation for MqClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a MqClientPrivate object with public implementation \a q.
 */
MqClientPrivate::MqClientPrivate(MqClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Mq
} // namespace QtAws

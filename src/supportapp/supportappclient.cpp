// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "supportappclient.h"
#include "supportappclient_p.h"

#include "core/awssignaturev4.h"
#include "createslackchannelconfigurationrequest.h"
#include "createslackchannelconfigurationresponse.h"
#include "deleteaccountaliasrequest.h"
#include "deleteaccountaliasresponse.h"
#include "deleteslackchannelconfigurationrequest.h"
#include "deleteslackchannelconfigurationresponse.h"
#include "deleteslackworkspaceconfigurationrequest.h"
#include "deleteslackworkspaceconfigurationresponse.h"
#include "getaccountaliasrequest.h"
#include "getaccountaliasresponse.h"
#include "listslackchannelconfigurationsrequest.h"
#include "listslackchannelconfigurationsresponse.h"
#include "listslackworkspaceconfigurationsrequest.h"
#include "listslackworkspaceconfigurationsresponse.h"
#include "putaccountaliasrequest.h"
#include "putaccountaliasresponse.h"
#include "updateslackchannelconfigurationrequest.h"
#include "updateslackchannelconfigurationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SupportApp
 * \brief Contains classess for accessing AWS Support App.
 *
 * \inmodule QtAwsSupportApp
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SupportApp {

/*!
 * \class QtAws::SupportApp::SupportAppClient
 * \brief The SupportAppClient class provides access to the AWS Support App service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSupportApp
 *
 *  <fullname>Amazon Web Services Support App in Slack</fullname>
 * 
 *  You can use the Amazon Web Services Support App in Slack API to manage your support cases in Slack for your Amazon Web
 *  Services account. After you configure your Slack workspace and channel with the Amazon Web Services Support App, you can
 *  perform the following tasks directly in your Slack
 * 
 *  channel> <ul> <li>
 * 
 *  Create, search, update, and resolve your support
 * 
 *  case> </li> <li>
 * 
 *  Request service quota increases for your
 * 
 *  accoun> </li> <li>
 * 
 *  Invite Amazon Web Services Support agents to your channel so that you can chat directly about your support
 * 
 *  case> </li> </ul>
 * 
 *  For more information about how to perform these actions in Slack, see the following documentation in the <i>Amazon Web
 *  Services Support User
 * 
 *  Guide</i>> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/awssupport/latest/user/aws-support-app-for-slack.html">Amazon Web Services Support
 *  App in Slack</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/awssupport/latest/user/joining-a-live-chat-session.html">Joining a live chat
 *  session with Amazon Web Services Support</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/awssupport/latest/user/service-quota-increase.html">Requesting service quota
 *  increases</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-commands.html">Amazon Web Services Support App
 *  commands in Slack</a>
 * 
 *  </p </li> </ul>
 * 
 *  You can also use the Amazon Web Services Management Console instead of the Amazon Web Services Support App API to manage
 *  your Slack configurations. For more information, see <a
 *  href="https://docs.aws.amazon.com/awssupport/latest/user/authorize-slack-workspace.html">Authorize a Slack workspace to
 *  enable the Amazon Web Services Support
 * 
 *  App</a>> <note> <ul> <li>
 * 
 *  You must have a Business or Enterprise Support plan to use the Amazon Web Services Support App API.
 * 
 *  </p </li> <li>
 * 
 *  For more information about the Amazon Web Services Support App endpoints, see the <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/awssupport.html#awssupport_app_region">Amazon Web Services Support
 *  App in Slack endpoints</a> in the <i>Amazon Web Services General
 */

/*!
 * \brief Constructs a SupportAppClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SupportAppClient::SupportAppClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SupportAppClientPrivate(this), parent)
{
    Q_D(SupportAppClient);
    d->apiVersion = QStringLiteral("2021-08-20");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Support App");
    d->serviceName = QStringLiteral("supportapp");
}

/*!
 * \overload SupportAppClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SupportAppClient::SupportAppClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SupportAppClientPrivate(this), parent)
{
    Q_D(SupportAppClient);
    d->apiVersion = QStringLiteral("2021-08-20");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Support App");
    d->serviceName = QStringLiteral("supportapp");
}

/*!
 * Sends \a request to the SupportAppClient service, and returns a pointer to an
 * CreateSlackChannelConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Slack channel configuration for your Amazon Web Services
 *
 * account> <note> <ul> <li>
 *
 * You can add up to 5 Slack workspaces for your
 *
 * account> </li> <li>
 *
 * You can add up to 20 Slack channels for your
 *
 * account> </li> </ul> </note>
 *
 * A Slack channel can have up to 100 Amazon Web Services accounts. This means that only 100 accounts can add the same
 * Slack channel to the Amazon Web Services Support App. We recommend that you only add the accounts that you need to
 * manage support cases for your organization. This can reduce the notifications about case updates that you receive in the
 * Slack
 *
 * channel> <note>
 *
 * We recommend that you choose a private Slack channel so that only members in that channel have read and write access to
 * your support cases. Anyone in your Slack channel can create, update, or resolve support cases for your account. Users
 * require an invitation to join private channels.
 */
CreateSlackChannelConfigurationResponse * SupportAppClient::createSlackChannelConfiguration(const CreateSlackChannelConfigurationRequest &request)
{
    return qobject_cast<CreateSlackChannelConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportAppClient service, and returns a pointer to an
 * DeleteAccountAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an alias for an Amazon Web Services account ID. The alias appears in the Amazon Web Services Support App page of
 * the Amazon Web Services Support Center. The alias also appears in Slack messages from the Amazon Web Services Support
 */
DeleteAccountAliasResponse * SupportAppClient::deleteAccountAlias(const DeleteAccountAliasRequest &request)
{
    return qobject_cast<DeleteAccountAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportAppClient service, and returns a pointer to an
 * DeleteSlackChannelConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Slack channel configuration from your Amazon Web Services account. This operation doesn't delete your Slack
 */
DeleteSlackChannelConfigurationResponse * SupportAppClient::deleteSlackChannelConfiguration(const DeleteSlackChannelConfigurationRequest &request)
{
    return qobject_cast<DeleteSlackChannelConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportAppClient service, and returns a pointer to an
 * DeleteSlackWorkspaceConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Slack workspace configuration from your Amazon Web Services account. This operation doesn't delete your Slack
 */
DeleteSlackWorkspaceConfigurationResponse * SupportAppClient::deleteSlackWorkspaceConfiguration(const DeleteSlackWorkspaceConfigurationRequest &request)
{
    return qobject_cast<DeleteSlackWorkspaceConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportAppClient service, and returns a pointer to an
 * GetAccountAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the alias from an Amazon Web Services account ID. The alias appears in the Amazon Web Services Support App
 * page of the Amazon Web Services Support Center. The alias also appears in Slack messages from the Amazon Web Services
 * Support
 */
GetAccountAliasResponse * SupportAppClient::getAccountAlias(const GetAccountAliasRequest &request)
{
    return qobject_cast<GetAccountAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportAppClient service, and returns a pointer to an
 * ListSlackChannelConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Slack channel configurations for an Amazon Web Services
 */
ListSlackChannelConfigurationsResponse * SupportAppClient::listSlackChannelConfigurations(const ListSlackChannelConfigurationsRequest &request)
{
    return qobject_cast<ListSlackChannelConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportAppClient service, and returns a pointer to an
 * ListSlackWorkspaceConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Slack workspace configurations for an Amazon Web Services
 */
ListSlackWorkspaceConfigurationsResponse * SupportAppClient::listSlackWorkspaceConfigurations(const ListSlackWorkspaceConfigurationsRequest &request)
{
    return qobject_cast<ListSlackWorkspaceConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportAppClient service, and returns a pointer to an
 * PutAccountAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates an individual alias for each Amazon Web Services account ID. The alias appears in the Amazon Web
 * Services Support App page of the Amazon Web Services Support Center. The alias also appears in Slack messages from the
 * Amazon Web Services Support
 */
PutAccountAliasResponse * SupportAppClient::putAccountAlias(const PutAccountAliasRequest &request)
{
    return qobject_cast<PutAccountAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the SupportAppClient service, and returns a pointer to an
 * UpdateSlackChannelConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration for a Slack channel, such as case update
 */
UpdateSlackChannelConfigurationResponse * SupportAppClient::updateSlackChannelConfiguration(const UpdateSlackChannelConfigurationRequest &request)
{
    return qobject_cast<UpdateSlackChannelConfigurationResponse *>(send(request));
}

/*!
 * \class QtAws::SupportApp::SupportAppClientPrivate
 * \brief The SupportAppClientPrivate class provides private implementation for SupportAppClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSupportApp
 */

/*!
 * Constructs a SupportAppClientPrivate object with public implementation \a q.
 */
SupportAppClientPrivate::SupportAppClientPrivate(SupportAppClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SupportApp
} // namespace QtAws

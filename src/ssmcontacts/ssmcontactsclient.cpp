// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ssmcontactsclient.h"
#include "ssmcontactsclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptpagerequest.h"
#include "acceptpageresponse.h"
#include "activatecontactchannelrequest.h"
#include "activatecontactchannelresponse.h"
#include "createcontactrequest.h"
#include "createcontactresponse.h"
#include "createcontactchannelrequest.h"
#include "createcontactchannelresponse.h"
#include "deactivatecontactchannelrequest.h"
#include "deactivatecontactchannelresponse.h"
#include "deletecontactrequest.h"
#include "deletecontactresponse.h"
#include "deletecontactchannelrequest.h"
#include "deletecontactchannelresponse.h"
#include "describeengagementrequest.h"
#include "describeengagementresponse.h"
#include "describepagerequest.h"
#include "describepageresponse.h"
#include "getcontactrequest.h"
#include "getcontactresponse.h"
#include "getcontactchannelrequest.h"
#include "getcontactchannelresponse.h"
#include "getcontactpolicyrequest.h"
#include "getcontactpolicyresponse.h"
#include "listcontactchannelsrequest.h"
#include "listcontactchannelsresponse.h"
#include "listcontactsrequest.h"
#include "listcontactsresponse.h"
#include "listengagementsrequest.h"
#include "listengagementsresponse.h"
#include "listpagereceiptsrequest.h"
#include "listpagereceiptsresponse.h"
#include "listpagesbycontactrequest.h"
#include "listpagesbycontactresponse.h"
#include "listpagesbyengagementrequest.h"
#include "listpagesbyengagementresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putcontactpolicyrequest.h"
#include "putcontactpolicyresponse.h"
#include "sendactivationcoderequest.h"
#include "sendactivationcoderesponse.h"
#include "startengagementrequest.h"
#include "startengagementresponse.h"
#include "stopengagementrequest.h"
#include "stopengagementresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatecontactrequest.h"
#include "updatecontactresponse.h"
#include "updatecontactchannelrequest.h"
#include "updatecontactchannelresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SsmContacts
 * \brief Contains classess for accessing AWS Systems Manager Incident Manager Contacts.
 *
 * \inmodule QtAwsSsmContacts
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::SsmContactsClient
 * \brief The SsmContactsClient class provides access to the AWS Systems Manager Incident Manager Contacts service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSsmContacts
 *
 *  Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their Amazon Web Services-hosted applications. An incident is any unplanned interruption or
 *  reduction in quality of services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 */

/*!
 * \brief Constructs a SsmContactsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SsmContactsClient::SsmContactsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SsmContactsClientPrivate(this), parent)
{
    Q_D(SsmContactsClient);
    d->apiVersion = QStringLiteral("2021-05-03");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ssm-contacts");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Systems Manager Incident Manager Contacts");
    d->serviceName = QStringLiteral("ssm-contacts");
}

/*!
 * \overload SsmContactsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SsmContactsClient::SsmContactsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SsmContactsClientPrivate(this), parent)
{
    Q_D(SsmContactsClient);
    d->apiVersion = QStringLiteral("2021-05-03");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ssm-contacts");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Systems Manager Incident Manager Contacts");
    d->serviceName = QStringLiteral("ssm-contacts");
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * AcceptPageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to acknowledge an engagement to a contact channel during an
 */
AcceptPageResponse * SsmContactsClient::acceptPage(const AcceptPageRequest &request)
{
    return qobject_cast<AcceptPageResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * ActivateContactChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Activates a contact's contact channel. Incident Manager can't engage a contact until the contact channel has been
 */
ActivateContactChannelResponse * SsmContactsClient::activateContactChannel(const ActivateContactChannelRequest &request)
{
    return qobject_cast<ActivateContactChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * CreateContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Contacts are either the contacts that Incident Manager engages during an incident or the escalation plans that Incident
 * Manager uses to engage contacts in phases during an incident.
 */
CreateContactResponse * SsmContactsClient::createContact(const CreateContactRequest &request)
{
    return qobject_cast<CreateContactResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * CreateContactChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A contact channel is the method that Incident Manager uses to engage your
 */
CreateContactChannelResponse * SsmContactsClient::createContactChannel(const CreateContactChannelRequest &request)
{
    return qobject_cast<CreateContactChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * DeactivateContactChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * To no longer receive Incident Manager engagements to a contact channel, you can deactivate the
 */
DeactivateContactChannelResponse * SsmContactsClient::deactivateContactChannel(const DeactivateContactChannelRequest &request)
{
    return qobject_cast<DeactivateContactChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * DeleteContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * To remove a contact from Incident Manager, you can delete the contact. Deleting a contact removes them from all
 * escalation plans and related response plans. Deleting an escalation plan removes it from all related response plans. You
 * will have to recreate the contact and its contact channels before you can use it
 */
DeleteContactResponse * SsmContactsClient::deleteContact(const DeleteContactRequest &request)
{
    return qobject_cast<DeleteContactResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * DeleteContactChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * To no longer receive engagements on a contact channel, you can delete the channel from a contact. Deleting the contact
 * channel removes it from the contact's engagement plan. If you delete the only contact channel for a contact, you won't
 * be able to engage that contact during an
 */
DeleteContactChannelResponse * SsmContactsClient::deleteContactChannel(const DeleteContactChannelRequest &request)
{
    return qobject_cast<DeleteContactChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * DescribeEngagementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Incident Manager uses engagements to engage contacts and escalation plans during an incident. Use this command to
 * describe the engagement that occurred during an
 */
DescribeEngagementResponse * SsmContactsClient::describeEngagement(const DescribeEngagementRequest &request)
{
    return qobject_cast<DescribeEngagementResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * DescribePageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists details of the engagement to a contact
 */
DescribePageResponse * SsmContactsClient::describePage(const DescribePageRequest &request)
{
    return qobject_cast<DescribePageResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * GetContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the specified contact or escalation
 */
GetContactResponse * SsmContactsClient::getContact(const GetContactRequest &request)
{
    return qobject_cast<GetContactResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * GetContactChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List details about a specific contact
 */
GetContactChannelResponse * SsmContactsClient::getContactChannel(const GetContactChannelRequest &request)
{
    return qobject_cast<GetContactChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * GetContactPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the resource policies attached to the specified contact or escalation
 */
GetContactPolicyResponse * SsmContactsClient::getContactPolicy(const GetContactPolicyRequest &request)
{
    return qobject_cast<GetContactPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * ListContactChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all contact channels for the specified
 */
ListContactChannelsResponse * SsmContactsClient::listContactChannels(const ListContactChannelsRequest &request)
{
    return qobject_cast<ListContactChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * ListContactsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all contacts and escalation plans in Incident
 */
ListContactsResponse * SsmContactsClient::listContacts(const ListContactsRequest &request)
{
    return qobject_cast<ListContactsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * ListEngagementsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all engagements that have happened in an
 */
ListEngagementsResponse * SsmContactsClient::listEngagements(const ListEngagementsRequest &request)
{
    return qobject_cast<ListEngagementsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * ListPageReceiptsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the engagements to contact channels that have been acknowledged.
 */
ListPageReceiptsResponse * SsmContactsClient::listPageReceipts(const ListPageReceiptsRequest &request)
{
    return qobject_cast<ListPageReceiptsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * ListPagesByContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the engagements to a contact's contact
 */
ListPagesByContactResponse * SsmContactsClient::listPagesByContact(const ListPagesByContactRequest &request)
{
    return qobject_cast<ListPagesByContactResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * ListPagesByEngagementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the engagements to contact channels that occurred by engaging a
 */
ListPagesByEngagementResponse * SsmContactsClient::listPagesByEngagement(const ListPagesByEngagementRequest &request)
{
    return qobject_cast<ListPagesByEngagementResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags of an escalation plan or
 */
ListTagsForResourceResponse * SsmContactsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * PutContactPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a resource policy to the specified contact or escalation plan. The resource policy is used to share the contact or
 * escalation plan using Resource Access Manager (RAM). For more information about cross-account sharing, see <a
 * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/xa.html">Setting up cross-account
 */
PutContactPolicyResponse * SsmContactsClient::putContactPolicy(const PutContactPolicyRequest &request)
{
    return qobject_cast<PutContactPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * SendActivationCodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends an activation code to a contact channel. The contact can use this code to activate the contact channel in the
 * console or with the <code>ActivateChannel</code> operation. Incident Manager can't engage a contact channel until it has
 * been
 */
SendActivationCodeResponse * SsmContactsClient::sendActivationCode(const SendActivationCodeRequest &request)
{
    return qobject_cast<SendActivationCodeResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * StartEngagementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an engagement to a contact or escalation plan. The engagement engages each contact specified in the
 */
StartEngagementResponse * SsmContactsClient::startEngagement(const StartEngagementRequest &request)
{
    return qobject_cast<StartEngagementResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * StopEngagementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an engagement before it finishes the final stage of the escalation plan or engagement plan. Further contacts
 * aren't
 */
StopEngagementResponse * SsmContactsClient::stopEngagement(const StopEngagementRequest &request)
{
    return qobject_cast<StopEngagementResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tags a contact or escalation plan. You can tag only contacts and escalation plans in the first region of your
 * replication set.
 */
TagResourceResponse * SsmContactsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the specified resource.
 */
UntagResourceResponse * SsmContactsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * UpdateContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the contact or escalation plan specified.
 */
UpdateContactResponse * SsmContactsClient::updateContact(const UpdateContactRequest &request)
{
    return qobject_cast<UpdateContactResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmContactsClient service, and returns a pointer to an
 * UpdateContactChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a contact's contact
 */
UpdateContactChannelResponse * SsmContactsClient::updateContactChannel(const UpdateContactChannelRequest &request)
{
    return qobject_cast<UpdateContactChannelResponse *>(send(request));
}

/*!
 * \class QtAws::SsmContacts::SsmContactsClientPrivate
 * \brief The SsmContactsClientPrivate class provides private implementation for SsmContactsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a SsmContactsClientPrivate object with public implementation \a q.
 */
SsmContactsClientPrivate::SsmContactsClientPrivate(SsmContactsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SsmContacts
} // namespace QtAws

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

#include "connectclient.h"
#include "connectclient_p.h"

#include "core/awssignaturev4.h"
#include "associateapprovedoriginrequest.h"
#include "associateapprovedoriginresponse.h"
#include "associatebotrequest.h"
#include "associatebotresponse.h"
#include "associatedefaultvocabularyrequest.h"
#include "associatedefaultvocabularyresponse.h"
#include "associateinstancestorageconfigrequest.h"
#include "associateinstancestorageconfigresponse.h"
#include "associatelambdafunctionrequest.h"
#include "associatelambdafunctionresponse.h"
#include "associatelexbotrequest.h"
#include "associatelexbotresponse.h"
#include "associatephonenumbercontactflowrequest.h"
#include "associatephonenumbercontactflowresponse.h"
#include "associatequeuequickconnectsrequest.h"
#include "associatequeuequickconnectsresponse.h"
#include "associateroutingprofilequeuesrequest.h"
#include "associateroutingprofilequeuesresponse.h"
#include "associatesecuritykeyrequest.h"
#include "associatesecuritykeyresponse.h"
#include "claimphonenumberrequest.h"
#include "claimphonenumberresponse.h"
#include "createagentstatusrequest.h"
#include "createagentstatusresponse.h"
#include "createcontactflowrequest.h"
#include "createcontactflowresponse.h"
#include "createcontactflowmodulerequest.h"
#include "createcontactflowmoduleresponse.h"
#include "createhoursofoperationrequest.h"
#include "createhoursofoperationresponse.h"
#include "createinstancerequest.h"
#include "createinstanceresponse.h"
#include "createintegrationassociationrequest.h"
#include "createintegrationassociationresponse.h"
#include "createqueuerequest.h"
#include "createqueueresponse.h"
#include "createquickconnectrequest.h"
#include "createquickconnectresponse.h"
#include "createroutingprofilerequest.h"
#include "createroutingprofileresponse.h"
#include "createsecurityprofilerequest.h"
#include "createsecurityprofileresponse.h"
#include "createtasktemplaterequest.h"
#include "createtasktemplateresponse.h"
#include "createusecaserequest.h"
#include "createusecaseresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "createuserhierarchygrouprequest.h"
#include "createuserhierarchygroupresponse.h"
#include "createvocabularyrequest.h"
#include "createvocabularyresponse.h"
#include "deletecontactflowrequest.h"
#include "deletecontactflowresponse.h"
#include "deletecontactflowmodulerequest.h"
#include "deletecontactflowmoduleresponse.h"
#include "deletehoursofoperationrequest.h"
#include "deletehoursofoperationresponse.h"
#include "deleteinstancerequest.h"
#include "deleteinstanceresponse.h"
#include "deleteintegrationassociationrequest.h"
#include "deleteintegrationassociationresponse.h"
#include "deletequickconnectrequest.h"
#include "deletequickconnectresponse.h"
#include "deletesecurityprofilerequest.h"
#include "deletesecurityprofileresponse.h"
#include "deletetasktemplaterequest.h"
#include "deletetasktemplateresponse.h"
#include "deleteusecaserequest.h"
#include "deleteusecaseresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "deleteuserhierarchygrouprequest.h"
#include "deleteuserhierarchygroupresponse.h"
#include "deletevocabularyrequest.h"
#include "deletevocabularyresponse.h"
#include "describeagentstatusrequest.h"
#include "describeagentstatusresponse.h"
#include "describecontactrequest.h"
#include "describecontactresponse.h"
#include "describecontactflowrequest.h"
#include "describecontactflowresponse.h"
#include "describecontactflowmodulerequest.h"
#include "describecontactflowmoduleresponse.h"
#include "describehoursofoperationrequest.h"
#include "describehoursofoperationresponse.h"
#include "describeinstancerequest.h"
#include "describeinstanceresponse.h"
#include "describeinstanceattributerequest.h"
#include "describeinstanceattributeresponse.h"
#include "describeinstancestorageconfigrequest.h"
#include "describeinstancestorageconfigresponse.h"
#include "describephonenumberrequest.h"
#include "describephonenumberresponse.h"
#include "describequeuerequest.h"
#include "describequeueresponse.h"
#include "describequickconnectrequest.h"
#include "describequickconnectresponse.h"
#include "describeroutingprofilerequest.h"
#include "describeroutingprofileresponse.h"
#include "describesecurityprofilerequest.h"
#include "describesecurityprofileresponse.h"
#include "describeuserrequest.h"
#include "describeuserresponse.h"
#include "describeuserhierarchygrouprequest.h"
#include "describeuserhierarchygroupresponse.h"
#include "describeuserhierarchystructurerequest.h"
#include "describeuserhierarchystructureresponse.h"
#include "describevocabularyrequest.h"
#include "describevocabularyresponse.h"
#include "disassociateapprovedoriginrequest.h"
#include "disassociateapprovedoriginresponse.h"
#include "disassociatebotrequest.h"
#include "disassociatebotresponse.h"
#include "disassociateinstancestorageconfigrequest.h"
#include "disassociateinstancestorageconfigresponse.h"
#include "disassociatelambdafunctionrequest.h"
#include "disassociatelambdafunctionresponse.h"
#include "disassociatelexbotrequest.h"
#include "disassociatelexbotresponse.h"
#include "disassociatephonenumbercontactflowrequest.h"
#include "disassociatephonenumbercontactflowresponse.h"
#include "disassociatequeuequickconnectsrequest.h"
#include "disassociatequeuequickconnectsresponse.h"
#include "disassociateroutingprofilequeuesrequest.h"
#include "disassociateroutingprofilequeuesresponse.h"
#include "disassociatesecuritykeyrequest.h"
#include "disassociatesecuritykeyresponse.h"
#include "getcontactattributesrequest.h"
#include "getcontactattributesresponse.h"
#include "getcurrentmetricdatarequest.h"
#include "getcurrentmetricdataresponse.h"
#include "getcurrentuserdatarequest.h"
#include "getcurrentuserdataresponse.h"
#include "getfederationtokenrequest.h"
#include "getfederationtokenresponse.h"
#include "getmetricdatarequest.h"
#include "getmetricdataresponse.h"
#include "gettasktemplaterequest.h"
#include "gettasktemplateresponse.h"
#include "listagentstatusesrequest.h"
#include "listagentstatusesresponse.h"
#include "listapprovedoriginsrequest.h"
#include "listapprovedoriginsresponse.h"
#include "listbotsrequest.h"
#include "listbotsresponse.h"
#include "listcontactflowmodulesrequest.h"
#include "listcontactflowmodulesresponse.h"
#include "listcontactflowsrequest.h"
#include "listcontactflowsresponse.h"
#include "listcontactreferencesrequest.h"
#include "listcontactreferencesresponse.h"
#include "listdefaultvocabulariesrequest.h"
#include "listdefaultvocabulariesresponse.h"
#include "listhoursofoperationsrequest.h"
#include "listhoursofoperationsresponse.h"
#include "listinstanceattributesrequest.h"
#include "listinstanceattributesresponse.h"
#include "listinstancestorageconfigsrequest.h"
#include "listinstancestorageconfigsresponse.h"
#include "listinstancesrequest.h"
#include "listinstancesresponse.h"
#include "listintegrationassociationsrequest.h"
#include "listintegrationassociationsresponse.h"
#include "listlambdafunctionsrequest.h"
#include "listlambdafunctionsresponse.h"
#include "listlexbotsrequest.h"
#include "listlexbotsresponse.h"
#include "listphonenumbersrequest.h"
#include "listphonenumbersresponse.h"
#include "listphonenumbersv2request.h"
#include "listphonenumbersv2response.h"
#include "listpromptsrequest.h"
#include "listpromptsresponse.h"
#include "listqueuequickconnectsrequest.h"
#include "listqueuequickconnectsresponse.h"
#include "listqueuesrequest.h"
#include "listqueuesresponse.h"
#include "listquickconnectsrequest.h"
#include "listquickconnectsresponse.h"
#include "listroutingprofilequeuesrequest.h"
#include "listroutingprofilequeuesresponse.h"
#include "listroutingprofilesrequest.h"
#include "listroutingprofilesresponse.h"
#include "listsecuritykeysrequest.h"
#include "listsecuritykeysresponse.h"
#include "listsecurityprofilepermissionsrequest.h"
#include "listsecurityprofilepermissionsresponse.h"
#include "listsecurityprofilesrequest.h"
#include "listsecurityprofilesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtasktemplatesrequest.h"
#include "listtasktemplatesresponse.h"
#include "listusecasesrequest.h"
#include "listusecasesresponse.h"
#include "listuserhierarchygroupsrequest.h"
#include "listuserhierarchygroupsresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "putuserstatusrequest.h"
#include "putuserstatusresponse.h"
#include "releasephonenumberrequest.h"
#include "releasephonenumberresponse.h"
#include "resumecontactrecordingrequest.h"
#include "resumecontactrecordingresponse.h"
#include "searchavailablephonenumbersrequest.h"
#include "searchavailablephonenumbersresponse.h"
#include "searchqueuesrequest.h"
#include "searchqueuesresponse.h"
#include "searchroutingprofilesrequest.h"
#include "searchroutingprofilesresponse.h"
#include "searchsecurityprofilesrequest.h"
#include "searchsecurityprofilesresponse.h"
#include "searchusersrequest.h"
#include "searchusersresponse.h"
#include "searchvocabulariesrequest.h"
#include "searchvocabulariesresponse.h"
#include "startchatcontactrequest.h"
#include "startchatcontactresponse.h"
#include "startcontactrecordingrequest.h"
#include "startcontactrecordingresponse.h"
#include "startcontactstreamingrequest.h"
#include "startcontactstreamingresponse.h"
#include "startoutboundvoicecontactrequest.h"
#include "startoutboundvoicecontactresponse.h"
#include "starttaskcontactrequest.h"
#include "starttaskcontactresponse.h"
#include "stopcontactrequest.h"
#include "stopcontactresponse.h"
#include "stopcontactrecordingrequest.h"
#include "stopcontactrecordingresponse.h"
#include "stopcontactstreamingrequest.h"
#include "stopcontactstreamingresponse.h"
#include "suspendcontactrecordingrequest.h"
#include "suspendcontactrecordingresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "transfercontactrequest.h"
#include "transfercontactresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateagentstatusrequest.h"
#include "updateagentstatusresponse.h"
#include "updatecontactrequest.h"
#include "updatecontactresponse.h"
#include "updatecontactattributesrequest.h"
#include "updatecontactattributesresponse.h"
#include "updatecontactflowcontentrequest.h"
#include "updatecontactflowcontentresponse.h"
#include "updatecontactflowmetadatarequest.h"
#include "updatecontactflowmetadataresponse.h"
#include "updatecontactflowmodulecontentrequest.h"
#include "updatecontactflowmodulecontentresponse.h"
#include "updatecontactflowmodulemetadatarequest.h"
#include "updatecontactflowmodulemetadataresponse.h"
#include "updatecontactflownamerequest.h"
#include "updatecontactflownameresponse.h"
#include "updatecontactschedulerequest.h"
#include "updatecontactscheduleresponse.h"
#include "updatehoursofoperationrequest.h"
#include "updatehoursofoperationresponse.h"
#include "updateinstanceattributerequest.h"
#include "updateinstanceattributeresponse.h"
#include "updateinstancestorageconfigrequest.h"
#include "updateinstancestorageconfigresponse.h"
#include "updatephonenumberrequest.h"
#include "updatephonenumberresponse.h"
#include "updatequeuehoursofoperationrequest.h"
#include "updatequeuehoursofoperationresponse.h"
#include "updatequeuemaxcontactsrequest.h"
#include "updatequeuemaxcontactsresponse.h"
#include "updatequeuenamerequest.h"
#include "updatequeuenameresponse.h"
#include "updatequeueoutboundcallerconfigrequest.h"
#include "updatequeueoutboundcallerconfigresponse.h"
#include "updatequeuestatusrequest.h"
#include "updatequeuestatusresponse.h"
#include "updatequickconnectconfigrequest.h"
#include "updatequickconnectconfigresponse.h"
#include "updatequickconnectnamerequest.h"
#include "updatequickconnectnameresponse.h"
#include "updateroutingprofileconcurrencyrequest.h"
#include "updateroutingprofileconcurrencyresponse.h"
#include "updateroutingprofiledefaultoutboundqueuerequest.h"
#include "updateroutingprofiledefaultoutboundqueueresponse.h"
#include "updateroutingprofilenamerequest.h"
#include "updateroutingprofilenameresponse.h"
#include "updateroutingprofilequeuesrequest.h"
#include "updateroutingprofilequeuesresponse.h"
#include "updatesecurityprofilerequest.h"
#include "updatesecurityprofileresponse.h"
#include "updatetasktemplaterequest.h"
#include "updatetasktemplateresponse.h"
#include "updateuserhierarchyrequest.h"
#include "updateuserhierarchyresponse.h"
#include "updateuserhierarchygroupnamerequest.h"
#include "updateuserhierarchygroupnameresponse.h"
#include "updateuserhierarchystructurerequest.h"
#include "updateuserhierarchystructureresponse.h"
#include "updateuseridentityinforequest.h"
#include "updateuseridentityinforesponse.h"
#include "updateuserphoneconfigrequest.h"
#include "updateuserphoneconfigresponse.h"
#include "updateuserroutingprofilerequest.h"
#include "updateuserroutingprofileresponse.h"
#include "updateusersecurityprofilesrequest.h"
#include "updateusersecurityprofilesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Connect
 * \brief Contains classess for accessing Amazon Connect Service.
 *
 * \inmodule QtAwsConnect
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::ConnectClient
 * \brief The ConnectClient class provides access to the Amazon Connect Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 */

/*!
 * \brief Constructs a ConnectClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ConnectClient::ConnectClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConnectClientPrivate(this), parent)
{
    Q_D(ConnectClient);
    d->apiVersion = QStringLiteral("2017-08-08");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("connect");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Connect Service");
    d->serviceName = QStringLiteral("connect");
}

/*!
 * \overload ConnectClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ConnectClient::ConnectClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConnectClientPrivate(this), parent)
{
    Q_D(ConnectClient);
    d->apiVersion = QStringLiteral("2017-08-08");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("connect");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Connect Service");
    d->serviceName = QStringLiteral("connect");
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * AssociateApprovedOriginResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Associates an approved origin to an Amazon Connect
 */
AssociateApprovedOriginResponse * ConnectClient::associateApprovedOrigin(const AssociateApprovedOriginRequest &request)
{
    return qobject_cast<AssociateApprovedOriginResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * AssociateBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Allows the specified Amazon Connect instance to access the specified Amazon Lex or Amazon Lex V2
 */
AssociateBotResponse * ConnectClient::associateBot(const AssociateBotRequest &request)
{
    return qobject_cast<AssociateBotResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * AssociateDefaultVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an existing vocabulary as the default. Contact Lens for Amazon Connect uses the vocabulary in post-call and
 * real-time analysis sessions for the given
 */
AssociateDefaultVocabularyResponse * ConnectClient::associateDefaultVocabulary(const AssociateDefaultVocabularyRequest &request)
{
    return qobject_cast<AssociateDefaultVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * AssociateInstanceStorageConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Associates a storage resource type for the first time. You can only associate one type of storage configuration in a
 * single call. This means, for example, that you can't define an instance with multiple S3 buckets for storing chat
 *
 * transcripts>
 *
 * This API does not create a resource that doesn't exist. It only associates it to the instance. Ensure that the resource
 * being specified in the storage configuration, like an S3 bucket, exists when being used for
 */
AssociateInstanceStorageConfigResponse * ConnectClient::associateInstanceStorageConfig(const AssociateInstanceStorageConfigRequest &request)
{
    return qobject_cast<AssociateInstanceStorageConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * AssociateLambdaFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Allows the specified Amazon Connect instance to access the specified Lambda
 */
AssociateLambdaFunctionResponse * ConnectClient::associateLambdaFunction(const AssociateLambdaFunctionRequest &request)
{
    return qobject_cast<AssociateLambdaFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * AssociateLexBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Allows the specified Amazon Connect instance to access the specified Amazon Lex
 */
AssociateLexBotResponse * ConnectClient::associateLexBot(const AssociateLexBotRequest &request)
{
    return qobject_cast<AssociateLexBotResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * AssociatePhoneNumberContactFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a flow with a phone number claimed to your Amazon Connect
 */
AssociatePhoneNumberContactFlowResponse * ConnectClient::associatePhoneNumberContactFlow(const AssociatePhoneNumberContactFlowRequest &request)
{
    return qobject_cast<AssociatePhoneNumberContactFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * AssociateQueueQuickConnectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Associates a set of quick connects with a
 */
AssociateQueueQuickConnectsResponse * ConnectClient::associateQueueQuickConnects(const AssociateQueueQuickConnectsRequest &request)
{
    return qobject_cast<AssociateQueueQuickConnectsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * AssociateRoutingProfileQueuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a set of queues with a routing
 */
AssociateRoutingProfileQueuesResponse * ConnectClient::associateRoutingProfileQueues(const AssociateRoutingProfileQueuesRequest &request)
{
    return qobject_cast<AssociateRoutingProfileQueuesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * AssociateSecurityKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Associates a security key to the
 */
AssociateSecurityKeyResponse * ConnectClient::associateSecurityKey(const AssociateSecurityKeyRequest &request)
{
    return qobject_cast<AssociateSecurityKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ClaimPhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Claims an available phone number to your Amazon Connect
 */
ClaimPhoneNumberResponse * ConnectClient::claimPhoneNumber(const ClaimPhoneNumberRequest &request)
{
    return qobject_cast<ClaimPhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateAgentStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Creates an agent status for the specified Amazon Connect
 */
CreateAgentStatusResponse * ConnectClient::createAgentStatus(const CreateAgentStatusRequest &request)
{
    return qobject_cast<CreateAgentStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateContactFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a flow for the specified Amazon Connect
 *
 * instance>
 *
 * You can also create and update flows using the <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 */
CreateContactFlowResponse * ConnectClient::createContactFlow(const CreateContactFlowRequest &request)
{
    return qobject_cast<CreateContactFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateContactFlowModuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a flow module for the specified Amazon Connect instance.
 */
CreateContactFlowModuleResponse * ConnectClient::createContactFlowModule(const CreateContactFlowModuleRequest &request)
{
    return qobject_cast<CreateContactFlowModuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateHoursOfOperationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Creates hours of operation.
 */
CreateHoursOfOperationResponse * ConnectClient::createHoursOfOperation(const CreateHoursOfOperationRequest &request)
{
    return qobject_cast<CreateHoursOfOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Initiates an Amazon Connect instance with all the supported channels enabled. It does not attach any storage, such as
 * Amazon Simple Storage Service (Amazon S3) or Amazon Kinesis. It also does not allow for any configurations on features,
 * such as Contact Lens for Amazon Connect.
 *
 * </p
 *
 * Amazon Connect enforces a limit on the total number of instances that you can create or delete in 30 days. If you exceed
 * this limit, you will get an error message indicating there has been an excessive number of attempts at creating or
 * deleting instances. You must wait 30 days before you can restart creating and deleting instances in your
 */
CreateInstanceResponse * ConnectClient::createInstance(const CreateInstanceRequest &request)
{
    return qobject_cast<CreateInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateIntegrationAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Web Services resource association with an Amazon Connect
 */
CreateIntegrationAssociationResponse * ConnectClient::createIntegrationAssociation(const CreateIntegrationAssociationRequest &request)
{
    return qobject_cast<CreateIntegrationAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Creates a new queue for the specified Amazon Connect
 */
CreateQueueResponse * ConnectClient::createQueue(const CreateQueueRequest &request)
{
    return qobject_cast<CreateQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateQuickConnectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a quick connect for the specified Amazon Connect
 */
CreateQuickConnectResponse * ConnectClient::createQuickConnect(const CreateQuickConnectRequest &request)
{
    return qobject_cast<CreateQuickConnectResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateRoutingProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new routing
 */
CreateRoutingProfileResponse * ConnectClient::createRoutingProfile(const CreateRoutingProfileRequest &request)
{
    return qobject_cast<CreateRoutingProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Creates a security
 */
CreateSecurityProfileResponse * ConnectClient::createSecurityProfile(const CreateSecurityProfileRequest &request)
{
    return qobject_cast<CreateSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateTaskTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new task template in the specified Amazon Connect
 */
CreateTaskTemplateResponse * ConnectClient::createTaskTemplate(const CreateTaskTemplateRequest &request)
{
    return qobject_cast<CreateTaskTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateUseCaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a use case for an integration
 */
CreateUseCaseResponse * ConnectClient::createUseCase(const CreateUseCaseRequest &request)
{
    return qobject_cast<CreateUseCaseResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a user account for the specified Amazon Connect
 *
 * instance>
 *
 * For information about how to create user accounts using the Amazon Connect console, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/user-management.html">Add Users</a> in the <i>Amazon Connect
 * Administrator
 */
CreateUserResponse * ConnectClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateUserHierarchyGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new user hierarchy
 */
CreateUserHierarchyGroupResponse * ConnectClient::createUserHierarchyGroup(const CreateUserHierarchyGroupRequest &request)
{
    return qobject_cast<CreateUserHierarchyGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a custom vocabulary associated with your Amazon Connect instance. You can set a custom vocabulary to be your
 * default vocabulary for a given language. Contact Lens for Amazon Connect uses the default vocabulary in post-call and
 * real-time contact analysis sessions for that
 */
CreateVocabularyResponse * ConnectClient::createVocabulary(const CreateVocabularyRequest &request)
{
    return qobject_cast<CreateVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteContactFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a flow for the specified Amazon Connect
 */
DeleteContactFlowResponse * ConnectClient::deleteContactFlow(const DeleteContactFlowRequest &request)
{
    return qobject_cast<DeleteContactFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteContactFlowModuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified flow
 */
DeleteContactFlowModuleResponse * ConnectClient::deleteContactFlowModule(const DeleteContactFlowModuleRequest &request)
{
    return qobject_cast<DeleteContactFlowModuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteHoursOfOperationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Deletes an hours of
 */
DeleteHoursOfOperationResponse * ConnectClient::deleteHoursOfOperation(const DeleteHoursOfOperationRequest &request)
{
    return qobject_cast<DeleteHoursOfOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Deletes the Amazon Connect
 *
 * instance>
 *
 * Amazon Connect enforces a limit on the total number of instances that you can create or delete in 30 days. If you exceed
 * this limit, you will get an error message indicating there has been an excessive number of attempts at creating or
 * deleting instances. You must wait 30 days before you can restart creating and deleting instances in your
 */
DeleteInstanceResponse * ConnectClient::deleteInstance(const DeleteInstanceRequest &request)
{
    return qobject_cast<DeleteInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteIntegrationAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Web Services resource association from an Amazon Connect instance. The association must not have any
 * use cases associated with
 */
DeleteIntegrationAssociationResponse * ConnectClient::deleteIntegrationAssociation(const DeleteIntegrationAssociationRequest &request)
{
    return qobject_cast<DeleteIntegrationAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteQuickConnectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a quick
 */
DeleteQuickConnectResponse * ConnectClient::deleteQuickConnect(const DeleteQuickConnectRequest &request)
{
    return qobject_cast<DeleteQuickConnectResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Deletes a security
 */
DeleteSecurityProfileResponse * ConnectClient::deleteSecurityProfile(const DeleteSecurityProfileRequest &request)
{
    return qobject_cast<DeleteSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteTaskTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the task
 */
DeleteTaskTemplateResponse * ConnectClient::deleteTaskTemplate(const DeleteTaskTemplateRequest &request)
{
    return qobject_cast<DeleteTaskTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteUseCaseResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a use case from an integration
 */
DeleteUseCaseResponse * ConnectClient::deleteUseCase(const DeleteUseCaseRequest &request)
{
    return qobject_cast<DeleteUseCaseResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a user account from the specified Amazon Connect
 *
 * instance>
 *
 * For information about what happens to a user's data when their account is deleted, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/delete-users.html">Delete Users from Your Amazon Connect
 * Instance</a> in the <i>Amazon Connect Administrator
 */
DeleteUserResponse * ConnectClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteUserHierarchyGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing user hierarchy group. It must not be associated with any agents or have any active child
 */
DeleteUserHierarchyGroupResponse * ConnectClient::deleteUserHierarchyGroup(const DeleteUserHierarchyGroupRequest &request)
{
    return qobject_cast<DeleteUserHierarchyGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the vocabulary that has the given
 */
DeleteVocabularyResponse * ConnectClient::deleteVocabulary(const DeleteVocabularyRequest &request)
{
    return qobject_cast<DeleteVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeAgentStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Describes an agent
 */
DescribeAgentStatusResponse * ConnectClient::describeAgentStatus(const DescribeAgentStatusRequest &request)
{
    return qobject_cast<DescribeAgentStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Describes the specified contact.
 *
 * </p <b>
 *
 * Contact information remains available in Amazon Connect for 24 months, and then it is
 *
 * deleted>
 *
 * Only data from November 12, 2021, and later is returned by this
 */
DescribeContactResponse * ConnectClient::describeContact(const DescribeContactRequest &request)
{
    return qobject_cast<DescribeContactResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeContactFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified
 *
 * flow>
 *
 * You can also create and update flows using the <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 */
DescribeContactFlowResponse * ConnectClient::describeContactFlow(const DescribeContactFlowRequest &request)
{
    return qobject_cast<DescribeContactFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeContactFlowModuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified flow
 */
DescribeContactFlowModuleResponse * ConnectClient::describeContactFlowModule(const DescribeContactFlowModuleRequest &request)
{
    return qobject_cast<DescribeContactFlowModuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeHoursOfOperationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Describes the hours of
 */
DescribeHoursOfOperationResponse * ConnectClient::describeHoursOfOperation(const DescribeHoursOfOperationRequest &request)
{
    return qobject_cast<DescribeHoursOfOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Returns the current state of the specified instance identifier. It tracks the instance while it is being created and
 * returns an error status, if applicable.
 *
 * </p
 *
 * If an instance is not created successfully, the instance status reason field returns details relevant to the reason. The
 * instance in a failed state is returned only for 24 hours after the CreateInstance API was
 */
DescribeInstanceResponse * ConnectClient::describeInstance(const DescribeInstanceRequest &request)
{
    return qobject_cast<DescribeInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeInstanceAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Describes the specified instance
 */
DescribeInstanceAttributeResponse * ConnectClient::describeInstanceAttribute(const DescribeInstanceAttributeRequest &request)
{
    return qobject_cast<DescribeInstanceAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeInstanceStorageConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Retrieves the current storage configurations for the specified resource type, association ID, and instance
 */
DescribeInstanceStorageConfigResponse * ConnectClient::describeInstanceStorageConfig(const DescribeInstanceStorageConfigRequest &request)
{
    return qobject_cast<DescribeInstanceStorageConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribePhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details and status of a phone number that’s claimed to your Amazon Connect
 */
DescribePhoneNumberResponse * ConnectClient::describePhoneNumber(const DescribePhoneNumberRequest &request)
{
    return qobject_cast<DescribePhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Describes the specified
 */
DescribeQueueResponse * ConnectClient::describeQueue(const DescribeQueueRequest &request)
{
    return qobject_cast<DescribeQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeQuickConnectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the quick
 */
DescribeQuickConnectResponse * ConnectClient::describeQuickConnect(const DescribeQuickConnectRequest &request)
{
    return qobject_cast<DescribeQuickConnectResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeRoutingProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified routing
 */
DescribeRoutingProfileResponse * ConnectClient::describeRoutingProfile(const DescribeRoutingProfileRequest &request)
{
    return qobject_cast<DescribeRoutingProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Gets basic information about the security
 */
DescribeSecurityProfileResponse * ConnectClient::describeSecurityProfile(const DescribeSecurityProfileRequest &request)
{
    return qobject_cast<DescribeSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified user account. You can find the instance ID in the console (it’s the final part of the ARN). The
 * console does not display the user IDs. Instead, list the users and note the IDs provided in the
 */
DescribeUserResponse * ConnectClient::describeUser(const DescribeUserRequest &request)
{
    return qobject_cast<DescribeUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeUserHierarchyGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified hierarchy
 */
DescribeUserHierarchyGroupResponse * ConnectClient::describeUserHierarchyGroup(const DescribeUserHierarchyGroupRequest &request)
{
    return qobject_cast<DescribeUserHierarchyGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeUserHierarchyStructureResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the hierarchy structure of the specified Amazon Connect
 */
DescribeUserHierarchyStructureResponse * ConnectClient::describeUserHierarchyStructure(const DescribeUserHierarchyStructureRequest &request)
{
    return qobject_cast<DescribeUserHierarchyStructureResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeVocabularyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified
 */
DescribeVocabularyResponse * ConnectClient::describeVocabulary(const DescribeVocabularyRequest &request)
{
    return qobject_cast<DescribeVocabularyResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DisassociateApprovedOriginResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Revokes access to integrated applications from Amazon
 */
DisassociateApprovedOriginResponse * ConnectClient::disassociateApprovedOrigin(const DisassociateApprovedOriginRequest &request)
{
    return qobject_cast<DisassociateApprovedOriginResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DisassociateBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Revokes authorization from the specified instance to access the specified Amazon Lex or Amazon Lex V2 bot.
 */
DisassociateBotResponse * ConnectClient::disassociateBot(const DisassociateBotRequest &request)
{
    return qobject_cast<DisassociateBotResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DisassociateInstanceStorageConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Removes the storage type configurations for the specified resource type and association
 */
DisassociateInstanceStorageConfigResponse * ConnectClient::disassociateInstanceStorageConfig(const DisassociateInstanceStorageConfigRequest &request)
{
    return qobject_cast<DisassociateInstanceStorageConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DisassociateLambdaFunctionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Remove the Lambda function from the dropdown options available in the relevant flow
 */
DisassociateLambdaFunctionResponse * ConnectClient::disassociateLambdaFunction(const DisassociateLambdaFunctionRequest &request)
{
    return qobject_cast<DisassociateLambdaFunctionResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DisassociateLexBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Revokes authorization from the specified instance to access the specified Amazon Lex
 */
DisassociateLexBotResponse * ConnectClient::disassociateLexBot(const DisassociateLexBotRequest &request)
{
    return qobject_cast<DisassociateLexBotResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DisassociatePhoneNumberContactFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the flow association from a phone number claimed to your Amazon Connect instance, if a flow association
 */
DisassociatePhoneNumberContactFlowResponse * ConnectClient::disassociatePhoneNumberContactFlow(const DisassociatePhoneNumberContactFlowRequest &request)
{
    return qobject_cast<DisassociatePhoneNumberContactFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DisassociateQueueQuickConnectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Disassociates a set of quick connects from a
 */
DisassociateQueueQuickConnectsResponse * ConnectClient::disassociateQueueQuickConnects(const DisassociateQueueQuickConnectsRequest &request)
{
    return qobject_cast<DisassociateQueueQuickConnectsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DisassociateRoutingProfileQueuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a set of queues from a routing
 */
DisassociateRoutingProfileQueuesResponse * ConnectClient::disassociateRoutingProfileQueues(const DisassociateRoutingProfileQueuesRequest &request)
{
    return qobject_cast<DisassociateRoutingProfileQueuesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DisassociateSecurityKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Deletes the specified security
 */
DisassociateSecurityKeyResponse * ConnectClient::disassociateSecurityKey(const DisassociateSecurityKeyRequest &request)
{
    return qobject_cast<DisassociateSecurityKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * GetContactAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the contact attributes for the specified
 */
GetContactAttributesResponse * ConnectClient::getContactAttributes(const GetContactAttributesRequest &request)
{
    return qobject_cast<GetContactAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * GetCurrentMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the real-time metric data from the specified Amazon Connect
 *
 * instance>
 *
 * For a description of each metric, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time Metrics
 * Definitions</a> in the <i>Amazon Connect Administrator
 */
GetCurrentMetricDataResponse * ConnectClient::getCurrentMetricData(const GetCurrentMetricDataRequest &request)
{
    return qobject_cast<GetCurrentMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * GetCurrentUserDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the real-time active user data from the specified Amazon Connect instance.
 */
GetCurrentUserDataResponse * ConnectClient::getCurrentUserData(const GetCurrentUserDataRequest &request)
{
    return qobject_cast<GetCurrentUserDataResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * GetFederationTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a token for
 *
 * federation> <note>
 *
 * This API doesn't support root users. If you try to invoke GetFederationToken with root credentials, an error message
 * similar to the following one appears:
 *
 * </p
 *
 * <code>Provided identity: Principal: .... User: .... cannot be used for federation with Amazon Connect</code>
 */
GetFederationTokenResponse * ConnectClient::getFederationToken(const GetFederationTokenRequest &request)
{
    return qobject_cast<GetFederationTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * GetMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets historical metric data from the specified Amazon Connect
 *
 * instance>
 *
 * For a description of each historical metric, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical Metrics
 * Definitions</a> in the <i>Amazon Connect Administrator
 */
GetMetricDataResponse * ConnectClient::getMetricData(const GetMetricDataRequest &request)
{
    return qobject_cast<GetMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * GetTaskTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details about a specific task template in the specified Amazon Connect
 */
GetTaskTemplateResponse * ConnectClient::getTaskTemplate(const GetTaskTemplateRequest &request)
{
    return qobject_cast<GetTaskTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListAgentStatusesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Lists agent
 */
ListAgentStatusesResponse * ConnectClient::listAgentStatuses(const ListAgentStatusesRequest &request)
{
    return qobject_cast<ListAgentStatusesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListApprovedOriginsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Returns a paginated list of all approved origins associated with the
 */
ListApprovedOriginsResponse * ConnectClient::listApprovedOrigins(const ListApprovedOriginsRequest &request)
{
    return qobject_cast<ListApprovedOriginsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListBotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * For the specified version of Amazon Lex, returns a paginated list of all the Amazon Lex bots currently associated with
 * the instance. Use this API to returns both Amazon Lex V1 and V2
 */
ListBotsResponse * ConnectClient::listBots(const ListBotsRequest &request)
{
    return qobject_cast<ListBotsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListContactFlowModulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the flow modules for the specified Amazon Connect
 */
ListContactFlowModulesResponse * ConnectClient::listContactFlowModules(const ListContactFlowModulesRequest &request)
{
    return qobject_cast<ListContactFlowModulesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListContactFlowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the flows for the specified Amazon Connect
 *
 * instance>
 *
 * You can also create and update flows using the <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * language</a>>
 *
 * For more information about flows, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-contact-flows.html">Flows</a> in the <i>Amazon
 * Connect Administrator
 */
ListContactFlowsResponse * ConnectClient::listContactFlows(const ListContactFlowsRequest &request)
{
    return qobject_cast<ListContactFlowsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListContactReferencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * For the specified <code>referenceTypes</code>, returns a list of references associated with the contact.
 */
ListContactReferencesResponse * ConnectClient::listContactReferences(const ListContactReferencesRequest &request)
{
    return qobject_cast<ListContactReferencesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListDefaultVocabulariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the default vocabularies for the specified Amazon Connect
 */
ListDefaultVocabulariesResponse * ConnectClient::listDefaultVocabularies(const ListDefaultVocabulariesRequest &request)
{
    return qobject_cast<ListDefaultVocabulariesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListHoursOfOperationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the hours of operation for the specified Amazon Connect
 *
 * instance>
 *
 * For more information about hours of operation, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-hours-operation.html">Set the Hours of Operation for a
 * Queue</a> in the <i>Amazon Connect Administrator
 */
ListHoursOfOperationsResponse * ConnectClient::listHoursOfOperations(const ListHoursOfOperationsRequest &request)
{
    return qobject_cast<ListHoursOfOperationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListInstanceAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Returns a paginated list of all attribute types for the given
 */
ListInstanceAttributesResponse * ConnectClient::listInstanceAttributes(const ListInstanceAttributesRequest &request)
{
    return qobject_cast<ListInstanceAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListInstanceStorageConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Returns a paginated list of storage configs for the identified instance and resource
 */
ListInstanceStorageConfigsResponse * ConnectClient::listInstanceStorageConfigs(const ListInstanceStorageConfigsRequest &request)
{
    return qobject_cast<ListInstanceStorageConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Return a list of instances which are in active state, creation-in-progress state, and failed state. Instances that
 * aren't successfully created (they are in a failed state) are returned only for 24 hours after the CreateInstance API was
 */
ListInstancesResponse * ConnectClient::listInstances(const ListInstancesRequest &request)
{
    return qobject_cast<ListInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListIntegrationAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides summary information about the Amazon Web Services resource associations for the specified Amazon Connect
 */
ListIntegrationAssociationsResponse * ConnectClient::listIntegrationAssociations(const ListIntegrationAssociationsRequest &request)
{
    return qobject_cast<ListIntegrationAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListLambdaFunctionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Returns a paginated list of all Lambda functions that display in the dropdown options in the relevant flow
 */
ListLambdaFunctionsResponse * ConnectClient::listLambdaFunctions(const ListLambdaFunctionsRequest &request)
{
    return qobject_cast<ListLambdaFunctionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListLexBotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Returns a paginated list of all the Amazon Lex V1 bots currently associated with the instance. To return both Amazon Lex
 * V1 and V2 bots, use the <a href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ListBots.html">ListBots</a>
 * API.
 */
ListLexBotsResponse * ConnectClient::listLexBots(const ListLexBotsRequest &request)
{
    return qobject_cast<ListLexBotsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListPhoneNumbersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the phone numbers for the specified Amazon Connect instance.
 *
 * </p
 *
 * For more information about phone numbers, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-center-phone-number.html">Set Up Phone Numbers for
 * Your Contact Center</a> in the <i>Amazon Connect Administrator
 */
ListPhoneNumbersResponse * ConnectClient::listPhoneNumbers(const ListPhoneNumbersRequest &request)
{
    return qobject_cast<ListPhoneNumbersResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListPhoneNumbersV2Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists phone numbers claimed to your Amazon Connect instance.
 *
 * </p
 *
 * For more information about phone numbers, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-center-phone-number.html">Set Up Phone Numbers for
 * Your Contact Center</a> in the <i>Amazon Connect Administrator
 */
ListPhoneNumbersV2Response * ConnectClient::listPhoneNumbersV2(const ListPhoneNumbersV2Request &request)
{
    return qobject_cast<ListPhoneNumbersV2Response *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListPromptsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the prompts for the specified Amazon Connect
 */
ListPromptsResponse * ConnectClient::listPrompts(const ListPromptsRequest &request)
{
    return qobject_cast<ListPromptsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListQueueQuickConnectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Lists the quick connects associated with a
 */
ListQueueQuickConnectsResponse * ConnectClient::listQueueQuickConnects(const ListQueueQuickConnectsRequest &request)
{
    return qobject_cast<ListQueueQuickConnectsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListQueuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the queues for the specified Amazon Connect
 *
 * instance>
 *
 * If you do not specify a <code>QueueTypes</code> parameter, both standard and agent queues are returned. This might cause
 * an unexpected truncation of results if you have more than 1000 agents and you limit the number of results of the API
 * call in
 *
 * code>
 *
 * For more information about queues, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-queues-standard-and-agent.html">Queues: Standard
 * and Agent</a> in the <i>Amazon Connect Administrator
 */
ListQueuesResponse * ConnectClient::listQueues(const ListQueuesRequest &request)
{
    return qobject_cast<ListQueuesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListQuickConnectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the quick connects for the specified Amazon Connect instance.
 */
ListQuickConnectsResponse * ConnectClient::listQuickConnects(const ListQuickConnectsRequest &request)
{
    return qobject_cast<ListQuickConnectsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListRoutingProfileQueuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the queues associated with a routing
 */
ListRoutingProfileQueuesResponse * ConnectClient::listRoutingProfileQueues(const ListRoutingProfileQueuesRequest &request)
{
    return qobject_cast<ListRoutingProfileQueuesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListRoutingProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides summary information about the routing profiles for the specified Amazon Connect
 *
 * instance>
 *
 * For more information about routing profiles, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing.html">Routing Profiles</a> and <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/routing-profiles.html">Create a Routing Profile</a> in the
 * <i>Amazon Connect Administrator
 */
ListRoutingProfilesResponse * ConnectClient::listRoutingProfiles(const ListRoutingProfilesRequest &request)
{
    return qobject_cast<ListRoutingProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListSecurityKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Returns a paginated list of all security keys associated with the
 */
ListSecurityKeysResponse * ConnectClient::listSecurityKeys(const ListSecurityKeysRequest &request)
{
    return qobject_cast<ListSecurityKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListSecurityProfilePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Lists the permissions granted to a security
 */
ListSecurityProfilePermissionsResponse * ConnectClient::listSecurityProfilePermissions(const ListSecurityProfilePermissionsRequest &request)
{
    return qobject_cast<ListSecurityProfilePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListSecurityProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides summary information about the security profiles for the specified Amazon Connect
 *
 * instance>
 *
 * For more information about security profiles, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-security-profiles.html">Security Profiles</a> in the
 * <i>Amazon Connect Administrator
 */
ListSecurityProfilesResponse * ConnectClient::listSecurityProfiles(const ListSecurityProfilesRequest &request)
{
    return qobject_cast<ListSecurityProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 *
 * resource>
 *
 * For sample policies that use tags, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon Connect
 * Identity-Based Policy Examples</a> in the <i>Amazon Connect Administrator
 */
ListTagsForResourceResponse * ConnectClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListTaskTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists task templates for the specified Amazon Connect
 */
ListTaskTemplatesResponse * ConnectClient::listTaskTemplates(const ListTaskTemplatesRequest &request)
{
    return qobject_cast<ListTaskTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListUseCasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the use cases for the integration association.
 */
ListUseCasesResponse * ConnectClient::listUseCases(const ListUseCasesRequest &request)
{
    return qobject_cast<ListUseCasesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListUserHierarchyGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides summary information about the hierarchy groups for the specified Amazon Connect
 *
 * instance>
 *
 * For more information about agent hierarchies, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/agent-hierarchy.html">Set Up Agent Hierarchies</a> in the
 * <i>Amazon Connect Administrator
 */
ListUserHierarchyGroupsResponse * ConnectClient::listUserHierarchyGroups(const ListUserHierarchyGroupsRequest &request)
{
    return qobject_cast<ListUserHierarchyGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides summary information about the users for the specified Amazon Connect
 */
ListUsersResponse * ConnectClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * PutUserStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the current status of a user or agent in Amazon Connect. If the agent is currently handling a contact, this sets
 * the agent's next
 *
 * status>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-agent-status.html">Agent status</a> and <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-next-status.html">Set your next status</a> in the
 * <i>Amazon Connect Administrator
 */
PutUserStatusResponse * ConnectClient::putUserStatus(const PutUserStatusRequest &request)
{
    return qobject_cast<PutUserStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ReleasePhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Releases a phone number previously claimed to an Amazon Connect
 */
ReleasePhoneNumberResponse * ConnectClient::releasePhoneNumber(const ReleasePhoneNumberRequest &request)
{
    return qobject_cast<ReleasePhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ResumeContactRecordingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * When a contact is being recorded, and the recording has been suspended using SuspendContactRecording, this API resumes
 * recording the
 *
 * call>
 *
 * Only voice recordings are supported at this
 */
ResumeContactRecordingResponse * ConnectClient::resumeContactRecording(const ResumeContactRecordingRequest &request)
{
    return qobject_cast<ResumeContactRecordingResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * SearchAvailablePhoneNumbersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for available phone numbers that you can claim to your Amazon Connect
 */
SearchAvailablePhoneNumbersResponse * ConnectClient::searchAvailablePhoneNumbers(const SearchAvailablePhoneNumbersRequest &request)
{
    return qobject_cast<SearchAvailablePhoneNumbersResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * SearchQueuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Searches queues in an Amazon Connect instance, with optional
 */
SearchQueuesResponse * ConnectClient::searchQueues(const SearchQueuesRequest &request)
{
    return qobject_cast<SearchQueuesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * SearchRoutingProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Searches routing profiles in an Amazon Connect instance, with optional
 */
SearchRoutingProfilesResponse * ConnectClient::searchRoutingProfiles(const SearchRoutingProfilesRequest &request)
{
    return qobject_cast<SearchRoutingProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * SearchSecurityProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Searches security profiles in an Amazon Connect instance, with optional
 */
SearchSecurityProfilesResponse * ConnectClient::searchSecurityProfiles(const SearchSecurityProfilesRequest &request)
{
    return qobject_cast<SearchSecurityProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * SearchUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches users in an Amazon Connect instance, with optional
 */
SearchUsersResponse * ConnectClient::searchUsers(const SearchUsersRequest &request)
{
    return qobject_cast<SearchUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * SearchVocabulariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for vocabularies within a specific Amazon Connect instance using <code>State</code>,
 * <code>NameStartsWith</code>, and
 */
SearchVocabulariesResponse * ConnectClient::searchVocabularies(const SearchVocabulariesRequest &request)
{
    return qobject_cast<SearchVocabulariesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * StartChatContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates a flow to start a new chat for the customer. Response of this API provides a token required to obtain
 * credentials from the <a
 * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
 * API in the Amazon Connect Participant
 *
 * Service>
 *
 * When a new chat contact is successfully created, clients must subscribe to the participant’s connection for the created
 * chat within 5 minutes. This is achieved by invoking <a
 * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
 * with WEBSOCKET and CONNECTION_CREDENTIALS.
 *
 * </p
 *
 * A 429 error occurs in the following
 *
 * situations> <ul> <li>
 *
 * API rate limit is exceeded. API TPS throttling returns a <code>TooManyRequests</code>
 *
 * exception> </li> <li>
 *
 * The <a href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">quota for
 * concurrent active chats</a> is exceeded. Active chat throttling returns a
 *
 * <code>LimitExceededException</code>> </li> </ul>
 *
 * If you use the <code>ChatDurationInMinutes</code> parameter and receive a 400 error, your account may not support the
 * ability to configure custom chat durations. For more information, contact Amazon Web Services Support.
 *
 * </p
 *
 * For more information about chat, see <a href="https://docs.aws.amazon.com/connect/latest/adminguide/chat.html">Chat</a>
 * in the <i>Amazon Connect Administrator
 */
StartChatContactResponse * ConnectClient::startChatContact(const StartChatContactRequest &request)
{
    return qobject_cast<StartChatContactResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * StartContactRecordingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts recording the contact:
 *
 * </p <ul> <li>
 *
 * If the API is called <i>before</i> the agent joins the call, recording starts when the agent joins the
 *
 * call> </li> <li>
 *
 * If the API is called <i>after</i> the agent joins the call, recording starts at the time of the API
 *
 * call> </li> </ul>
 *
 * StartContactRecording is a one-time action. For example, if you use StopContactRecording to stop recording an ongoing
 * call, you can't use StartContactRecording to restart it. For scenarios where the recording has started and you want to
 * suspend and resume it, such as when collecting sensitive information (for example, a credit card number), use
 * SuspendContactRecording and
 *
 * ResumeContactRecording>
 *
 * You can use this API to override the recording behavior configured in the <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-recording-behavior.html">Set recording behavior</a>
 *
 * block>
 *
 * Only voice recordings are supported at this
 */
StartContactRecordingResponse * ConnectClient::startContactRecording(const StartContactRecordingRequest &request)
{
    return qobject_cast<StartContactRecordingResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * StartContactStreamingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates real-time message streaming for a new chat
 *
 * contact>
 *
 * For more information about message streaming, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-message-streaming.html">Enable real-time chat message
 * streaming</a> in the <i>Amazon Connect Administrator
 */
StartContactStreamingResponse * ConnectClient::startContactStreaming(const StartContactStreamingRequest &request)
{
    return qobject_cast<StartContactStreamingResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * StartOutboundVoiceContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Places an outbound call to a contact, and then initiates the flow. It performs the actions in the flow that's specified
 * (in
 *
 * <code>ContactFlowId</code>)>
 *
 * Agents do not initiate the outbound API, which means that they do not dial the contact. If the flow places an outbound
 * call to a contact, and then puts the contact in queue, the call is then routed to the agent, like any other inbound
 *
 * case>
 *
 * There is a 60-second dialing timeout for this operation. If the call is not connected after 60 seconds, it
 *
 * fails> <note>
 *
 * UK numbers with a 447 prefix are not allowed by default. Before you can dial these UK mobile numbers, you must submit a
 * service quota increase request. For more information, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 * Quotas</a> in the <i>Amazon Connect Administrator Guide</i>.
 *
 * </p </note> <note>
 *
 * Campaign calls are not allowed by default. Before you can make a call with <code>TrafficType</code> =
 * <code>CAMPAIGN</code>, you must submit a service quota increase request to the quota <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html#outbound-communications-quotas">Amazon
 * Connect campaigns</a>.
 */
StartOutboundVoiceContactResponse * ConnectClient::startOutboundVoiceContact(const StartOutboundVoiceContactRequest &request)
{
    return qobject_cast<StartOutboundVoiceContactResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * StartTaskContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates a flow to start a new
 */
StartTaskContactResponse * ConnectClient::startTaskContact(const StartTaskContactRequest &request)
{
    return qobject_cast<StartTaskContactResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * StopContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Ends the specified contact. This call does not work for the following initiation
 *
 * methods> <ul> <li>
 *
 * DISCONNEC> </li> <li>
 *
 * TRANSFE> </li> <li>
 */
StopContactResponse * ConnectClient::stopContact(const StopContactRequest &request)
{
    return qobject_cast<StopContactResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * StopContactRecordingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops recording a call when a contact is being recorded. StopContactRecording is a one-time action. If you use
 * StopContactRecording to stop recording an ongoing call, you can't use StartContactRecording to restart it. For scenarios
 * where the recording has started and you want to suspend it for sensitive information (for example, to collect a credit
 * card number), and then restart it, use SuspendContactRecording and
 *
 * ResumeContactRecording>
 *
 * Only voice recordings are supported at this
 */
StopContactRecordingResponse * ConnectClient::stopContactRecording(const StopContactRecordingRequest &request)
{
    return qobject_cast<StopContactRecordingResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * StopContactStreamingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Ends message streaming on a specified contact. To restart message streaming on that contact, call the <a
 * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartContactStreaming.html">StartContactStreaming</a>
 * API.
 */
StopContactStreamingResponse * ConnectClient::stopContactStreaming(const StopContactStreamingRequest &request)
{
    return qobject_cast<StopContactStreamingResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * SuspendContactRecordingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * When a contact is being recorded, this API suspends recording the call. For example, you might suspend the call
 * recording while collecting sensitive information, such as a credit card number. Then use ResumeContactRecording to
 * restart recording.
 *
 * </p
 *
 * The period of time that the recording is suspended is filled with silence in the final recording.
 *
 * </p
 *
 * Only voice recordings are supported at this
 */
SuspendContactRecordingResponse * ConnectClient::suspendContactRecording(const SuspendContactRecordingRequest &request)
{
    return qobject_cast<SuspendContactRecordingResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified
 *
 * resource>
 *
 * Some of the supported resource types are agents, routing profiles, queues, quick connects, contact flows, agent
 * statuses, hours of operation, phone numbers, security profiles, and task templates. For a complete list, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/tagging.html">Tagging resources in Amazon
 *
 * Connect</a>>
 *
 * For sample policies that use tags, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon Connect
 * Identity-Based Policy Examples</a> in the <i>Amazon Connect Administrator
 */
TagResourceResponse * ConnectClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * TransferContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Transfers contacts from one agent or queue to another agent or queue at any point after a contact is created. You can
 * transfer a contact to another queue by providing the flow which orchestrates the contact to the destination queue. This
 * gives you more control over contact handling and helps you adhere to the service level agreement (SLA) guaranteed to
 * your
 *
 * customers>
 *
 * Note the following
 *
 * requirements> <ul> <li>
 *
 * Transfer is supported for only <code>TASK</code>
 *
 * contacts> </li> <li>
 *
 * Do not use both <code>QueueId</code> and <code>UserId</code> in the same
 *
 * call> </li> <li>
 *
 * The following flow types are supported: Inbound flow, Transfer to agent flow, and Transfer to queue
 *
 * flow> </li> <li>
 *
 * The <code>TransferContact</code> API can be called only on active
 *
 * contacts> </li> <li>
 *
 * A contact cannot be transferred more than 11
 */
TransferContactResponse * ConnectClient::transferContact(const TransferContactRequest &request)
{
    return qobject_cast<TransferContactResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified
 */
UntagResourceResponse * ConnectClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateAgentStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Updates agent
 */
UpdateAgentStatusResponse * ConnectClient::updateAgentStatus(const UpdateAgentStatusRequest &request)
{
    return qobject_cast<UpdateAgentStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Adds or updates user-defined contact information associated with the specified contact. At least one field to be updated
 * must be present in the
 *
 * request> <b>
 *
 * You can add or update user-defined contact information for both ongoing and completed
 */
UpdateContactResponse * ConnectClient::updateContact(const UpdateContactRequest &request)
{
    return qobject_cast<UpdateContactResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateContactAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates user-defined contact attributes associated with the specified
 *
 * contact>
 *
 * You can create or update user-defined attributes for both ongoing and completed contacts. For example, while the call is
 * active, you can update the customer's name or the reason the customer called. You can add notes about steps that the
 * agent took during the call that display to the next agent that takes the call. You can also update attributes for a
 * contact using data from your CRM application and save the data with the contact in Amazon Connect. You could also flag
 * calls for additional analysis, such as legal review or to identify abusive
 *
 * callers>
 *
 * Contact attributes are available in Amazon Connect for 24 months, and are then deleted. For information about contact
 * record retention and the maximum size of the contact record attributes section, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html#feature-limits">Feature
 * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.
 */
UpdateContactAttributesResponse * ConnectClient::updateContactAttributes(const UpdateContactAttributesRequest &request)
{
    return qobject_cast<UpdateContactAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateContactFlowContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 *
 * flow>
 *
 * You can also create and update flows using the <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 */
UpdateContactFlowContentResponse * ConnectClient::updateContactFlowContent(const UpdateContactFlowContentRequest &request)
{
    return qobject_cast<UpdateContactFlowContentResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateContactFlowMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates metadata about specified
 */
UpdateContactFlowMetadataResponse * ConnectClient::updateContactFlowMetadata(const UpdateContactFlowMetadataRequest &request)
{
    return qobject_cast<UpdateContactFlowMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateContactFlowModuleContentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates specified flow module for the specified Amazon Connect instance.
 */
UpdateContactFlowModuleContentResponse * ConnectClient::updateContactFlowModuleContent(const UpdateContactFlowModuleContentRequest &request)
{
    return qobject_cast<UpdateContactFlowModuleContentResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateContactFlowModuleMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates metadata about specified flow
 */
UpdateContactFlowModuleMetadataResponse * ConnectClient::updateContactFlowModuleMetadata(const UpdateContactFlowModuleMetadataRequest &request)
{
    return qobject_cast<UpdateContactFlowModuleMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateContactFlowNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The name of the
 *
 * flow>
 *
 * You can also create and update flows using the <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 */
UpdateContactFlowNameResponse * ConnectClient::updateContactFlowName(const UpdateContactFlowNameRequest &request)
{
    return qobject_cast<UpdateContactFlowNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateContactScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the scheduled time of a task contact that is already
 */
UpdateContactScheduleResponse * ConnectClient::updateContactSchedule(const UpdateContactScheduleRequest &request)
{
    return qobject_cast<UpdateContactScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateHoursOfOperationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Updates the hours of
 */
UpdateHoursOfOperationResponse * ConnectClient::updateHoursOfOperation(const UpdateHoursOfOperationRequest &request)
{
    return qobject_cast<UpdateHoursOfOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateInstanceAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Updates the value for the specified attribute
 */
UpdateInstanceAttributeResponse * ConnectClient::updateInstanceAttribute(const UpdateInstanceAttributeRequest &request)
{
    return qobject_cast<UpdateInstanceAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateInstanceStorageConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Updates an existing configuration for a resource type. This API is
 */
UpdateInstanceStorageConfigResponse * ConnectClient::updateInstanceStorageConfig(const UpdateInstanceStorageConfigRequest &request)
{
    return qobject_cast<UpdateInstanceStorageConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdatePhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates your claimed phone number from its current Amazon Connect instance to another Amazon Connect instance in the
 * same
 */
UpdatePhoneNumberResponse * ConnectClient::updatePhoneNumber(const UpdatePhoneNumberRequest &request)
{
    return qobject_cast<UpdatePhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateQueueHoursOfOperationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Updates the hours of operation for the specified
 */
UpdateQueueHoursOfOperationResponse * ConnectClient::updateQueueHoursOfOperation(const UpdateQueueHoursOfOperationRequest &request)
{
    return qobject_cast<UpdateQueueHoursOfOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateQueueMaxContactsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Updates the maximum number of contacts allowed in a queue before it is considered
 */
UpdateQueueMaxContactsResponse * ConnectClient::updateQueueMaxContacts(const UpdateQueueMaxContactsRequest &request)
{
    return qobject_cast<UpdateQueueMaxContactsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateQueueNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Updates the name and description of a queue. At least <code>Name</code> or <code>Description</code> must be
 */
UpdateQueueNameResponse * ConnectClient::updateQueueName(const UpdateQueueNameRequest &request)
{
    return qobject_cast<UpdateQueueNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateQueueOutboundCallerConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Updates the outbound caller ID name, number, and outbound whisper flow for a specified
 */
UpdateQueueOutboundCallerConfigResponse * ConnectClient::updateQueueOutboundCallerConfig(const UpdateQueueOutboundCallerConfigRequest &request)
{
    return qobject_cast<UpdateQueueOutboundCallerConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateQueueStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Updates the status of the
 */
UpdateQueueStatusResponse * ConnectClient::updateQueueStatus(const UpdateQueueStatusRequest &request)
{
    return qobject_cast<UpdateQueueStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateQuickConnectConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration settings for the specified quick
 */
UpdateQuickConnectConfigResponse * ConnectClient::updateQuickConnectConfig(const UpdateQuickConnectConfigRequest &request)
{
    return qobject_cast<UpdateQuickConnectConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateQuickConnectNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name and description of a quick connect. The request accepts the following data in JSON format. At least
 * <code>Name</code> or <code>Description</code> must be
 */
UpdateQuickConnectNameResponse * ConnectClient::updateQuickConnectName(const UpdateQuickConnectNameRequest &request)
{
    return qobject_cast<UpdateQuickConnectNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateRoutingProfileConcurrencyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the channels that agents can handle in the Contact Control Panel (CCP) for a routing
 */
UpdateRoutingProfileConcurrencyResponse * ConnectClient::updateRoutingProfileConcurrency(const UpdateRoutingProfileConcurrencyRequest &request)
{
    return qobject_cast<UpdateRoutingProfileConcurrencyResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateRoutingProfileDefaultOutboundQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the default outbound queue of a routing
 */
UpdateRoutingProfileDefaultOutboundQueueResponse * ConnectClient::updateRoutingProfileDefaultOutboundQueue(const UpdateRoutingProfileDefaultOutboundQueueRequest &request)
{
    return qobject_cast<UpdateRoutingProfileDefaultOutboundQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateRoutingProfileNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name and description of a routing profile. The request accepts the following data in JSON format. At least
 * <code>Name</code> or <code>Description</code> must be
 */
UpdateRoutingProfileNameResponse * ConnectClient::updateRoutingProfileName(const UpdateRoutingProfileNameRequest &request)
{
    return qobject_cast<UpdateRoutingProfileNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateRoutingProfileQueuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the properties associated with a set of queues for a routing
 */
UpdateRoutingProfileQueuesResponse * ConnectClient::updateRoutingProfileQueues(const UpdateRoutingProfileQueuesRequest &request)
{
    return qobject_cast<UpdateRoutingProfileQueuesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and is subject to
 *
 * change>
 *
 * Updates a security
 */
UpdateSecurityProfileResponse * ConnectClient::updateSecurityProfile(const UpdateSecurityProfileRequest &request)
{
    return qobject_cast<UpdateSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateTaskTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates details about a specific task template in the specified Amazon Connect instance. This operation does not support
 * partial updates. Instead it does a full update of template
 */
UpdateTaskTemplateResponse * ConnectClient::updateTaskTemplate(const UpdateTaskTemplateRequest &request)
{
    return qobject_cast<UpdateTaskTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateUserHierarchyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns the specified hierarchy group to the specified
 */
UpdateUserHierarchyResponse * ConnectClient::updateUserHierarchy(const UpdateUserHierarchyRequest &request)
{
    return qobject_cast<UpdateUserHierarchyResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateUserHierarchyGroupNameResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name of the user hierarchy group.
 */
UpdateUserHierarchyGroupNameResponse * ConnectClient::updateUserHierarchyGroupName(const UpdateUserHierarchyGroupNameRequest &request)
{
    return qobject_cast<UpdateUserHierarchyGroupNameResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateUserHierarchyStructureResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the user hierarchy structure: add, remove, and rename user hierarchy
 */
UpdateUserHierarchyStructureResponse * ConnectClient::updateUserHierarchyStructure(const UpdateUserHierarchyStructureRequest &request)
{
    return qobject_cast<UpdateUserHierarchyStructureResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateUserIdentityInfoResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the identity information for the specified
 *
 * user> <b>
 *
 * We strongly recommend limiting who has the ability to invoke <code>UpdateUserIdentityInfo</code>. Someone with that
 * ability can change the login credentials of other users by changing their email address. This poses a security risk to
 * your organization. They can change the email address of a user to the attacker's email address, and then reset the
 * password through email. For more information, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-best-practices.html">Best Practices for
 * Security Profiles</a> in the <i>Amazon Connect Administrator
 */
UpdateUserIdentityInfoResponse * ConnectClient::updateUserIdentityInfo(const UpdateUserIdentityInfoRequest &request)
{
    return qobject_cast<UpdateUserIdentityInfoResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateUserPhoneConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the phone configuration settings for the specified
 */
UpdateUserPhoneConfigResponse * ConnectClient::updateUserPhoneConfig(const UpdateUserPhoneConfigRequest &request)
{
    return qobject_cast<UpdateUserPhoneConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateUserRoutingProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns the specified routing profile to the specified
 */
UpdateUserRoutingProfileResponse * ConnectClient::updateUserRoutingProfile(const UpdateUserRoutingProfileRequest &request)
{
    return qobject_cast<UpdateUserRoutingProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateUserSecurityProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns the specified security profiles to the specified
 */
UpdateUserSecurityProfilesResponse * ConnectClient::updateUserSecurityProfiles(const UpdateUserSecurityProfilesRequest &request)
{
    return qobject_cast<UpdateUserSecurityProfilesResponse *>(send(request));
}

/*!
 * \class QtAws::Connect::ConnectClientPrivate
 * \brief The ConnectClientPrivate class provides private implementation for ConnectClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a ConnectClientPrivate object with public implementation \a q.
 */
ConnectClientPrivate::ConnectClientPrivate(ConnectClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Connect
} // namespace QtAws

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

#include "chimeclient.h"
#include "chimeclient_p.h"

#include "core/awssignaturev4.h"
#include "associatephonenumberwithuserrequest.h"
#include "associatephonenumberwithuserresponse.h"
#include "associatephonenumberswithvoiceconnectorrequest.h"
#include "associatephonenumberswithvoiceconnectorresponse.h"
#include "associatephonenumberswithvoiceconnectorgrouprequest.h"
#include "associatephonenumberswithvoiceconnectorgroupresponse.h"
#include "associatesignindelegategroupswithaccountrequest.h"
#include "associatesignindelegategroupswithaccountresponse.h"
#include "batchcreateattendeerequest.h"
#include "batchcreateattendeeresponse.h"
#include "batchcreatechannelmembershiprequest.h"
#include "batchcreatechannelmembershipresponse.h"
#include "batchcreateroommembershiprequest.h"
#include "batchcreateroommembershipresponse.h"
#include "batchdeletephonenumberrequest.h"
#include "batchdeletephonenumberresponse.h"
#include "batchsuspenduserrequest.h"
#include "batchsuspenduserresponse.h"
#include "batchunsuspenduserrequest.h"
#include "batchunsuspenduserresponse.h"
#include "batchupdatephonenumberrequest.h"
#include "batchupdatephonenumberresponse.h"
#include "batchupdateuserrequest.h"
#include "batchupdateuserresponse.h"
#include "createaccountrequest.h"
#include "createaccountresponse.h"
#include "createappinstancerequest.h"
#include "createappinstanceresponse.h"
#include "createappinstanceadminrequest.h"
#include "createappinstanceadminresponse.h"
#include "createappinstanceuserrequest.h"
#include "createappinstanceuserresponse.h"
#include "createattendeerequest.h"
#include "createattendeeresponse.h"
#include "createbotrequest.h"
#include "createbotresponse.h"
#include "createchannelrequest.h"
#include "createchannelresponse.h"
#include "createchannelbanrequest.h"
#include "createchannelbanresponse.h"
#include "createchannelmembershiprequest.h"
#include "createchannelmembershipresponse.h"
#include "createchannelmoderatorrequest.h"
#include "createchannelmoderatorresponse.h"
#include "createmediacapturepipelinerequest.h"
#include "createmediacapturepipelineresponse.h"
#include "createmeetingrequest.h"
#include "createmeetingresponse.h"
#include "createmeetingdialoutrequest.h"
#include "createmeetingdialoutresponse.h"
#include "createmeetingwithattendeesrequest.h"
#include "createmeetingwithattendeesresponse.h"
#include "createphonenumberorderrequest.h"
#include "createphonenumberorderresponse.h"
#include "createproxysessionrequest.h"
#include "createproxysessionresponse.h"
#include "createroomrequest.h"
#include "createroomresponse.h"
#include "createroommembershiprequest.h"
#include "createroommembershipresponse.h"
#include "createsipmediaapplicationrequest.h"
#include "createsipmediaapplicationresponse.h"
#include "createsipmediaapplicationcallrequest.h"
#include "createsipmediaapplicationcallresponse.h"
#include "createsiprulerequest.h"
#include "createsipruleresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "createvoiceconnectorrequest.h"
#include "createvoiceconnectorresponse.h"
#include "createvoiceconnectorgrouprequest.h"
#include "createvoiceconnectorgroupresponse.h"
#include "deleteaccountrequest.h"
#include "deleteaccountresponse.h"
#include "deleteappinstancerequest.h"
#include "deleteappinstanceresponse.h"
#include "deleteappinstanceadminrequest.h"
#include "deleteappinstanceadminresponse.h"
#include "deleteappinstancestreamingconfigurationsrequest.h"
#include "deleteappinstancestreamingconfigurationsresponse.h"
#include "deleteappinstanceuserrequest.h"
#include "deleteappinstanceuserresponse.h"
#include "deleteattendeerequest.h"
#include "deleteattendeeresponse.h"
#include "deletechannelrequest.h"
#include "deletechannelresponse.h"
#include "deletechannelbanrequest.h"
#include "deletechannelbanresponse.h"
#include "deletechannelmembershiprequest.h"
#include "deletechannelmembershipresponse.h"
#include "deletechannelmessagerequest.h"
#include "deletechannelmessageresponse.h"
#include "deletechannelmoderatorrequest.h"
#include "deletechannelmoderatorresponse.h"
#include "deleteeventsconfigurationrequest.h"
#include "deleteeventsconfigurationresponse.h"
#include "deletemediacapturepipelinerequest.h"
#include "deletemediacapturepipelineresponse.h"
#include "deletemeetingrequest.h"
#include "deletemeetingresponse.h"
#include "deletephonenumberrequest.h"
#include "deletephonenumberresponse.h"
#include "deleteproxysessionrequest.h"
#include "deleteproxysessionresponse.h"
#include "deleteroomrequest.h"
#include "deleteroomresponse.h"
#include "deleteroommembershiprequest.h"
#include "deleteroommembershipresponse.h"
#include "deletesipmediaapplicationrequest.h"
#include "deletesipmediaapplicationresponse.h"
#include "deletesiprulerequest.h"
#include "deletesipruleresponse.h"
#include "deletevoiceconnectorrequest.h"
#include "deletevoiceconnectorresponse.h"
#include "deletevoiceconnectoremergencycallingconfigurationrequest.h"
#include "deletevoiceconnectoremergencycallingconfigurationresponse.h"
#include "deletevoiceconnectorgrouprequest.h"
#include "deletevoiceconnectorgroupresponse.h"
#include "deletevoiceconnectororiginationrequest.h"
#include "deletevoiceconnectororiginationresponse.h"
#include "deletevoiceconnectorproxyrequest.h"
#include "deletevoiceconnectorproxyresponse.h"
#include "deletevoiceconnectorstreamingconfigurationrequest.h"
#include "deletevoiceconnectorstreamingconfigurationresponse.h"
#include "deletevoiceconnectorterminationrequest.h"
#include "deletevoiceconnectorterminationresponse.h"
#include "deletevoiceconnectorterminationcredentialsrequest.h"
#include "deletevoiceconnectorterminationcredentialsresponse.h"
#include "describeappinstancerequest.h"
#include "describeappinstanceresponse.h"
#include "describeappinstanceadminrequest.h"
#include "describeappinstanceadminresponse.h"
#include "describeappinstanceuserrequest.h"
#include "describeappinstanceuserresponse.h"
#include "describechannelrequest.h"
#include "describechannelresponse.h"
#include "describechannelbanrequest.h"
#include "describechannelbanresponse.h"
#include "describechannelmembershiprequest.h"
#include "describechannelmembershipresponse.h"
#include "describechannelmembershipforappinstanceuserrequest.h"
#include "describechannelmembershipforappinstanceuserresponse.h"
#include "describechannelmoderatedbyappinstanceuserrequest.h"
#include "describechannelmoderatedbyappinstanceuserresponse.h"
#include "describechannelmoderatorrequest.h"
#include "describechannelmoderatorresponse.h"
#include "disassociatephonenumberfromuserrequest.h"
#include "disassociatephonenumberfromuserresponse.h"
#include "disassociatephonenumbersfromvoiceconnectorrequest.h"
#include "disassociatephonenumbersfromvoiceconnectorresponse.h"
#include "disassociatephonenumbersfromvoiceconnectorgrouprequest.h"
#include "disassociatephonenumbersfromvoiceconnectorgroupresponse.h"
#include "disassociatesignindelegategroupsfromaccountrequest.h"
#include "disassociatesignindelegategroupsfromaccountresponse.h"
#include "getaccountrequest.h"
#include "getaccountresponse.h"
#include "getaccountsettingsrequest.h"
#include "getaccountsettingsresponse.h"
#include "getappinstanceretentionsettingsrequest.h"
#include "getappinstanceretentionsettingsresponse.h"
#include "getappinstancestreamingconfigurationsrequest.h"
#include "getappinstancestreamingconfigurationsresponse.h"
#include "getattendeerequest.h"
#include "getattendeeresponse.h"
#include "getbotrequest.h"
#include "getbotresponse.h"
#include "getchannelmessagerequest.h"
#include "getchannelmessageresponse.h"
#include "geteventsconfigurationrequest.h"
#include "geteventsconfigurationresponse.h"
#include "getglobalsettingsrequest.h"
#include "getglobalsettingsresponse.h"
#include "getmediacapturepipelinerequest.h"
#include "getmediacapturepipelineresponse.h"
#include "getmeetingrequest.h"
#include "getmeetingresponse.h"
#include "getmessagingsessionendpointrequest.h"
#include "getmessagingsessionendpointresponse.h"
#include "getphonenumberrequest.h"
#include "getphonenumberresponse.h"
#include "getphonenumberorderrequest.h"
#include "getphonenumberorderresponse.h"
#include "getphonenumbersettingsrequest.h"
#include "getphonenumbersettingsresponse.h"
#include "getproxysessionrequest.h"
#include "getproxysessionresponse.h"
#include "getretentionsettingsrequest.h"
#include "getretentionsettingsresponse.h"
#include "getroomrequest.h"
#include "getroomresponse.h"
#include "getsipmediaapplicationrequest.h"
#include "getsipmediaapplicationresponse.h"
#include "getsipmediaapplicationloggingconfigurationrequest.h"
#include "getsipmediaapplicationloggingconfigurationresponse.h"
#include "getsiprulerequest.h"
#include "getsipruleresponse.h"
#include "getuserrequest.h"
#include "getuserresponse.h"
#include "getusersettingsrequest.h"
#include "getusersettingsresponse.h"
#include "getvoiceconnectorrequest.h"
#include "getvoiceconnectorresponse.h"
#include "getvoiceconnectoremergencycallingconfigurationrequest.h"
#include "getvoiceconnectoremergencycallingconfigurationresponse.h"
#include "getvoiceconnectorgrouprequest.h"
#include "getvoiceconnectorgroupresponse.h"
#include "getvoiceconnectorloggingconfigurationrequest.h"
#include "getvoiceconnectorloggingconfigurationresponse.h"
#include "getvoiceconnectororiginationrequest.h"
#include "getvoiceconnectororiginationresponse.h"
#include "getvoiceconnectorproxyrequest.h"
#include "getvoiceconnectorproxyresponse.h"
#include "getvoiceconnectorstreamingconfigurationrequest.h"
#include "getvoiceconnectorstreamingconfigurationresponse.h"
#include "getvoiceconnectorterminationrequest.h"
#include "getvoiceconnectorterminationresponse.h"
#include "getvoiceconnectorterminationhealthrequest.h"
#include "getvoiceconnectorterminationhealthresponse.h"
#include "inviteusersrequest.h"
#include "inviteusersresponse.h"
#include "listaccountsrequest.h"
#include "listaccountsresponse.h"
#include "listappinstanceadminsrequest.h"
#include "listappinstanceadminsresponse.h"
#include "listappinstanceusersrequest.h"
#include "listappinstanceusersresponse.h"
#include "listappinstancesrequest.h"
#include "listappinstancesresponse.h"
#include "listattendeetagsrequest.h"
#include "listattendeetagsresponse.h"
#include "listattendeesrequest.h"
#include "listattendeesresponse.h"
#include "listbotsrequest.h"
#include "listbotsresponse.h"
#include "listchannelbansrequest.h"
#include "listchannelbansresponse.h"
#include "listchannelmembershipsrequest.h"
#include "listchannelmembershipsresponse.h"
#include "listchannelmembershipsforappinstanceuserrequest.h"
#include "listchannelmembershipsforappinstanceuserresponse.h"
#include "listchannelmessagesrequest.h"
#include "listchannelmessagesresponse.h"
#include "listchannelmoderatorsrequest.h"
#include "listchannelmoderatorsresponse.h"
#include "listchannelsrequest.h"
#include "listchannelsresponse.h"
#include "listchannelsmoderatedbyappinstanceuserrequest.h"
#include "listchannelsmoderatedbyappinstanceuserresponse.h"
#include "listmediacapturepipelinesrequest.h"
#include "listmediacapturepipelinesresponse.h"
#include "listmeetingtagsrequest.h"
#include "listmeetingtagsresponse.h"
#include "listmeetingsrequest.h"
#include "listmeetingsresponse.h"
#include "listphonenumberordersrequest.h"
#include "listphonenumberordersresponse.h"
#include "listphonenumbersrequest.h"
#include "listphonenumbersresponse.h"
#include "listproxysessionsrequest.h"
#include "listproxysessionsresponse.h"
#include "listroommembershipsrequest.h"
#include "listroommembershipsresponse.h"
#include "listroomsrequest.h"
#include "listroomsresponse.h"
#include "listsipmediaapplicationsrequest.h"
#include "listsipmediaapplicationsresponse.h"
#include "listsiprulesrequest.h"
#include "listsiprulesresponse.h"
#include "listsupportedphonenumbercountriesrequest.h"
#include "listsupportedphonenumbercountriesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "listvoiceconnectorgroupsrequest.h"
#include "listvoiceconnectorgroupsresponse.h"
#include "listvoiceconnectorterminationcredentialsrequest.h"
#include "listvoiceconnectorterminationcredentialsresponse.h"
#include "listvoiceconnectorsrequest.h"
#include "listvoiceconnectorsresponse.h"
#include "logoutuserrequest.h"
#include "logoutuserresponse.h"
#include "putappinstanceretentionsettingsrequest.h"
#include "putappinstanceretentionsettingsresponse.h"
#include "putappinstancestreamingconfigurationsrequest.h"
#include "putappinstancestreamingconfigurationsresponse.h"
#include "puteventsconfigurationrequest.h"
#include "puteventsconfigurationresponse.h"
#include "putretentionsettingsrequest.h"
#include "putretentionsettingsresponse.h"
#include "putsipmediaapplicationloggingconfigurationrequest.h"
#include "putsipmediaapplicationloggingconfigurationresponse.h"
#include "putvoiceconnectoremergencycallingconfigurationrequest.h"
#include "putvoiceconnectoremergencycallingconfigurationresponse.h"
#include "putvoiceconnectorloggingconfigurationrequest.h"
#include "putvoiceconnectorloggingconfigurationresponse.h"
#include "putvoiceconnectororiginationrequest.h"
#include "putvoiceconnectororiginationresponse.h"
#include "putvoiceconnectorproxyrequest.h"
#include "putvoiceconnectorproxyresponse.h"
#include "putvoiceconnectorstreamingconfigurationrequest.h"
#include "putvoiceconnectorstreamingconfigurationresponse.h"
#include "putvoiceconnectorterminationrequest.h"
#include "putvoiceconnectorterminationresponse.h"
#include "putvoiceconnectorterminationcredentialsrequest.h"
#include "putvoiceconnectorterminationcredentialsresponse.h"
#include "redactchannelmessagerequest.h"
#include "redactchannelmessageresponse.h"
#include "redactconversationmessagerequest.h"
#include "redactconversationmessageresponse.h"
#include "redactroommessagerequest.h"
#include "redactroommessageresponse.h"
#include "regeneratesecuritytokenrequest.h"
#include "regeneratesecuritytokenresponse.h"
#include "resetpersonalpinrequest.h"
#include "resetpersonalpinresponse.h"
#include "restorephonenumberrequest.h"
#include "restorephonenumberresponse.h"
#include "searchavailablephonenumbersrequest.h"
#include "searchavailablephonenumbersresponse.h"
#include "sendchannelmessagerequest.h"
#include "sendchannelmessageresponse.h"
#include "startmeetingtranscriptionrequest.h"
#include "startmeetingtranscriptionresponse.h"
#include "stopmeetingtranscriptionrequest.h"
#include "stopmeetingtranscriptionresponse.h"
#include "tagattendeerequest.h"
#include "tagattendeeresponse.h"
#include "tagmeetingrequest.h"
#include "tagmeetingresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagattendeerequest.h"
#include "untagattendeeresponse.h"
#include "untagmeetingrequest.h"
#include "untagmeetingresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaccountrequest.h"
#include "updateaccountresponse.h"
#include "updateaccountsettingsrequest.h"
#include "updateaccountsettingsresponse.h"
#include "updateappinstancerequest.h"
#include "updateappinstanceresponse.h"
#include "updateappinstanceuserrequest.h"
#include "updateappinstanceuserresponse.h"
#include "updatebotrequest.h"
#include "updatebotresponse.h"
#include "updatechannelrequest.h"
#include "updatechannelresponse.h"
#include "updatechannelmessagerequest.h"
#include "updatechannelmessageresponse.h"
#include "updatechannelreadmarkerrequest.h"
#include "updatechannelreadmarkerresponse.h"
#include "updateglobalsettingsrequest.h"
#include "updateglobalsettingsresponse.h"
#include "updatephonenumberrequest.h"
#include "updatephonenumberresponse.h"
#include "updatephonenumbersettingsrequest.h"
#include "updatephonenumbersettingsresponse.h"
#include "updateproxysessionrequest.h"
#include "updateproxysessionresponse.h"
#include "updateroomrequest.h"
#include "updateroomresponse.h"
#include "updateroommembershiprequest.h"
#include "updateroommembershipresponse.h"
#include "updatesipmediaapplicationrequest.h"
#include "updatesipmediaapplicationresponse.h"
#include "updatesipmediaapplicationcallrequest.h"
#include "updatesipmediaapplicationcallresponse.h"
#include "updatesiprulerequest.h"
#include "updatesipruleresponse.h"
#include "updateuserrequest.h"
#include "updateuserresponse.h"
#include "updateusersettingsrequest.h"
#include "updateusersettingsresponse.h"
#include "updatevoiceconnectorrequest.h"
#include "updatevoiceconnectorresponse.h"
#include "updatevoiceconnectorgrouprequest.h"
#include "updatevoiceconnectorgroupresponse.h"
#include "validatee911addressrequest.h"
#include "validatee911addressresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Chime
 * \brief Contains classess for accessing Amazon Chime.
 *
 * \inmodule QtAwsChime
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Chime {

/*!
 * \class QtAws::Chime::ChimeClient
 * \brief The ChimeClient class provides access to the Amazon Chime service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsChime
 *
 *  The Amazon Chime API (application programming interface) is designed for developers to perform key tasks, such as
 *  creating and managing Amazon Chime accounts, users, and Voice Connectors. This guide provides detailed information about
 *  the Amazon Chime API, including operations, types, inputs and outputs, and error codes. It also includes API actions for
 *  use with the Amazon Chime SDK, which developers use to build their own communication applications. For more information
 *  about the Amazon Chime SDK, see <a href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html"> Using the
 *  Amazon Chime SDK </a> in the <i>Amazon Chime Developer
 * 
 *  Guide</i>>
 * 
 *  You can use an AWS SDK, the AWS Command Line Interface (AWS CLI), or the REST API to make API calls. We recommend using
 *  an AWS SDK or the AWS CLI. Each API operation includes links to information about using it with a language-specific AWS
 *  SDK or the AWS
 * 
 *  CLI> <dl> <dt>Using an AWS SDK</dt> <dd>
 * 
 *  You don't need to write code to calculate a signature for request authentication. The SDK clients authenticate your
 *  requests by using access keys that you provide. For more information about AWS SDKs, see the <a
 *  href="http://aws.amazon.com/developer/">AWS Developer Center</a>.
 * 
 *  </p </dd> <dt>Using the AWS CLI</dt> <dd>
 * 
 *  Use your access keys with the AWS CLI to make API calls. For information about setting up the AWS CLI, see <a
 *  href="https://docs.aws.amazon.com/cli/latest/userguide/installing.html">Installing the AWS Command Line Interface</a> in
 *  the <i>AWS Command Line Interface User Guide</i>. For a list of available Amazon Chime commands, see the <a
 *  href="https://docs.aws.amazon.com/cli/latest/reference/chime/index.html">Amazon Chime commands</a> in the <i>AWS CLI
 *  Command Reference</i>.
 * 
 *  </p </dd> <dt>Using REST APIs</dt> <dd>
 * 
 *  If you use REST to make API calls, you must authenticate your request by providing a signature. Amazon Chime supports
 *  signature version 4. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a> in
 *  the <i>Amazon Web Services General
 * 
 *  Reference</i>>
 * 
 *  When making REST API calls, use the service name <code>chime</code> and REST endpoint
 * 
 *  <code>https://service.chime.aws.amazon.com</code>> </dd> </dl>
 * 
 *  Administrative permissions are controlled using AWS Identity and Access Management (IAM). For more information, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/ag/security-iam.html">Identity and Access Management for Amazon Chime</a>
 *  in the <i>Amazon Chime Administration
 */

/*!
 * \brief Constructs a ChimeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ChimeClient::ChimeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ChimeClientPrivate(this), parent)
{
    Q_D(ChimeClient);
    d->apiVersion = QStringLiteral("2018-05-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("chime");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Chime");
    d->serviceName = QStringLiteral("chime");
}

/*!
 * \overload ChimeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ChimeClient::ChimeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ChimeClientPrivate(this), parent)
{
    Q_D(ChimeClient);
    d->apiVersion = QStringLiteral("2018-05-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("chime");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Chime");
    d->serviceName = QStringLiteral("chime");
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * AssociatePhoneNumberWithUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a phone number with the specified Amazon Chime
 */
AssociatePhoneNumberWithUserResponse * ChimeClient::associatePhoneNumberWithUser(const AssociatePhoneNumberWithUserRequest &request)
{
    return qobject_cast<AssociatePhoneNumberWithUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * AssociatePhoneNumbersWithVoiceConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates phone numbers with the specified Amazon Chime Voice
 */
AssociatePhoneNumbersWithVoiceConnectorResponse * ChimeClient::associatePhoneNumbersWithVoiceConnector(const AssociatePhoneNumbersWithVoiceConnectorRequest &request)
{
    return qobject_cast<AssociatePhoneNumbersWithVoiceConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * AssociatePhoneNumbersWithVoiceConnectorGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates phone numbers with the specified Amazon Chime Voice Connector
 */
AssociatePhoneNumbersWithVoiceConnectorGroupResponse * ChimeClient::associatePhoneNumbersWithVoiceConnectorGroup(const AssociatePhoneNumbersWithVoiceConnectorGroupRequest &request)
{
    return qobject_cast<AssociatePhoneNumbersWithVoiceConnectorGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * AssociateSigninDelegateGroupsWithAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified sign-in delegate groups with the specified Amazon Chime
 */
AssociateSigninDelegateGroupsWithAccountResponse * ChimeClient::associateSigninDelegateGroupsWithAccount(const AssociateSigninDelegateGroupsWithAccountRequest &request)
{
    return qobject_cast<AssociateSigninDelegateGroupsWithAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * BatchCreateAttendeeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates up to 100 new attendees for an active Amazon Chime SDK meeting. For more information about the Amazon Chime SDK,
 * see <a href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the
 * <i>Amazon Chime Developer Guide</i>.
 */
BatchCreateAttendeeResponse * ChimeClient::batchCreateAttendee(const BatchCreateAttendeeRequest &request)
{
    return qobject_cast<BatchCreateAttendeeResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * BatchCreateChannelMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a specified number of users to a
 */
BatchCreateChannelMembershipResponse * ChimeClient::batchCreateChannelMembership(const BatchCreateChannelMembershipRequest &request)
{
    return qobject_cast<BatchCreateChannelMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * BatchCreateRoomMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds up to 50 members to a chat room in an Amazon Chime Enterprise account. Members can be users or bots. The member
 * role designates whether the member is a chat room administrator or a general chat room
 */
BatchCreateRoomMembershipResponse * ChimeClient::batchCreateRoomMembership(const BatchCreateRoomMembershipRequest &request)
{
    return qobject_cast<BatchCreateRoomMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * BatchDeletePhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Moves phone numbers into the <b>Deletion queue</b>. Phone numbers must be disassociated from any users or Amazon Chime
 * Voice Connectors before they can be deleted.
 *
 * </p
 *
 * Phone numbers remain in the <b>Deletion queue</b> for 7 days before they are deleted permanently.
 */
BatchDeletePhoneNumberResponse * ChimeClient::batchDeletePhoneNumber(const BatchDeletePhoneNumberRequest &request)
{
    return qobject_cast<BatchDeletePhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * BatchSuspendUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Suspends up to 50 users from a <code>Team</code> or <code>EnterpriseLWA</code> Amazon Chime account. For more
 * information about different account types, see <a
 * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing Your Amazon Chime Accounts</a> in
 * the <i>Amazon Chime Administration
 *
 * Guide</i>>
 *
 * Users suspended from a <code>Team</code> account are disassociated from the account,but they can continue to use Amazon
 * Chime as free users. To remove the suspension from suspended <code>Team</code> account users, invite them to the
 * <code>Team</code> account again. You can use the <a>InviteUsers</a> action to do
 *
 * so>
 *
 * Users suspended from an <code>EnterpriseLWA</code> account are immediately signed out of Amazon Chime and can no longer
 * sign in. To remove the suspension from suspended <code>EnterpriseLWA</code> account users, use the
 * <a>BatchUnsuspendUser</a>
 *
 * action>
 *
 * To sign out users without suspending them, use the <a>LogoutUser</a> action.
 */
BatchSuspendUserResponse * ChimeClient::batchSuspendUser(const BatchSuspendUserRequest &request)
{
    return qobject_cast<BatchSuspendUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * BatchUnsuspendUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the suspension from up to 50 previously suspended users for the specified Amazon Chime
 * <code>EnterpriseLWA</code> account. Only users on <code>EnterpriseLWA</code> accounts can be unsuspended using this
 * action. For more information about different account types, see <a
 * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html"> Managing Your Amazon Chime Accounts </a>
 * in the account types, in the <i>Amazon Chime Administration Guide</i>.
 *
 * </p
 *
 * Previously suspended users who are unsuspended using this action are returned to <code>Registered</code> status. Users
 * who are not previously suspended are ignored.
 */
BatchUnsuspendUserResponse * ChimeClient::batchUnsuspendUser(const BatchUnsuspendUserRequest &request)
{
    return qobject_cast<BatchUnsuspendUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * BatchUpdatePhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates phone number product types or calling names. You can update one attribute at a time for each
 * <code>UpdatePhoneNumberRequestItem</code>. For example, you can update the product type or the calling
 *
 * name>
 *
 * For toll-free numbers, you cannot use the Amazon Chime Business Calling product type. For numbers outside the U.S., you
 * must use the Amazon Chime SIP Media Application Dial-In product
 *
 * type>
 *
 * Updates to outbound calling names can take up to 72 hours to complete. Pending updates to outbound calling names must be
 * complete before you can request another
 */
BatchUpdatePhoneNumberResponse * ChimeClient::batchUpdatePhoneNumber(const BatchUpdatePhoneNumberRequest &request)
{
    return qobject_cast<BatchUpdatePhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * BatchUpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates user details within the <a>UpdateUserRequestItem</a> object for up to 20 users for the specified Amazon Chime
 * account. Currently, only <code>LicenseType</code> updates are supported for this
 */
BatchUpdateUserResponse * ChimeClient::batchUpdateUser(const BatchUpdateUserRequest &request)
{
    return qobject_cast<BatchUpdateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Chime account under the administrator's AWS account. Only <code>Team</code> account types are
 * currently supported for this action. For more information about different account types, see <a
 * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing Your Amazon Chime Accounts</a> in
 * the <i>Amazon Chime Administration
 */
CreateAccountResponse * ChimeClient::createAccount(const CreateAccountRequest &request)
{
    return qobject_cast<CreateAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateAppInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Chime SDK messaging <code>AppInstance</code> under an AWS account. Only SDK messaging customers use
 * this API. <code>CreateAppInstance</code> supports idempotency behavior as described in the AWS API
 */
CreateAppInstanceResponse * ChimeClient::createAppInstance(const CreateAppInstanceRequest &request)
{
    return qobject_cast<CreateAppInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateAppInstanceAdminResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Promotes an <code>AppInstanceUser</code> to an <code>AppInstanceAdmin</code>. The promoted user can perform the
 * following actions.
 *
 * </p <ul> <li>
 *
 * <code>ChannelModerator</code> actions across all channels in the
 *
 * <code>AppInstance</code>> </li> <li>
 *
 * <code>DeleteChannelMessage</code>
 *
 * actions> </li> </ul>
 *
 * Only an <code>AppInstanceUser</code> can be promoted to an <code>AppInstanceAdmin</code>
 */
CreateAppInstanceAdminResponse * ChimeClient::createAppInstanceAdmin(const CreateAppInstanceAdminRequest &request)
{
    return qobject_cast<CreateAppInstanceAdminResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a user under an Amazon Chime <code>AppInstance</code>. The request consists of a unique
 * <code>appInstanceUserId</code> and <code>Name</code> for that
 */
CreateAppInstanceUserResponse * ChimeClient::createAppInstanceUser(const CreateAppInstanceUserRequest &request)
{
    return qobject_cast<CreateAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateAttendeeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new attendee for an active Amazon Chime SDK meeting. For more information about the Amazon Chime SDK, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer Guide</i>.
 */
CreateAttendeeResponse * ChimeClient::createAttendee(const CreateAttendeeRequest &request)
{
    return qobject_cast<CreateAttendeeResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a bot for an Amazon Chime Enterprise
 */
CreateBotResponse * ChimeClient::createBot(const CreateBotRequest &request)
{
    return qobject_cast<CreateBotResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a channel to which you can add users and send
 *
 * messages>
 *
 * <b>Restriction</b>: You can't change a channel's
 *
 * privacy> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
CreateChannelResponse * ChimeClient::createChannel(const CreateChannelRequest &request)
{
    return qobject_cast<CreateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateChannelBanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently bans a member from a channel. Moderators can't add banned members to a channel. To undo a ban, you first
 * have to <code>DeleteChannelBan</code>, and then <code>CreateChannelMembership</code>. Bans are cleaned up when you
 * delete users or
 *
 * channels>
 *
 * If you ban a user who is already part of a channel, that user is automatically kicked from the
 *
 * channel> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
CreateChannelBanResponse * ChimeClient::createChannelBan(const CreateChannelBanRequest &request)
{
    return qobject_cast<CreateChannelBanResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateChannelMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a user to a channel. The <code>InvitedBy</code> response field is derived from the request header. A channel member
 *
 * can> <ul> <li>
 *
 * List
 *
 * message> </li> <li>
 *
 * Send
 *
 * message> </li> <li>
 *
 * Receive
 *
 * message> </li> <li>
 *
 * Edit their own
 *
 * message> </li> <li>
 *
 * Leave the
 *
 * channe> </li> </ul>
 *
 * Privacy settings impact this action as
 *
 * follows> <ul> <li>
 *
 * Public Channels: You do not need to be a member to list messages, but you must be a member to send
 *
 * messages> </li> <li>
 *
 * Private Channels: You must be a member to list or send
 *
 * messages> </li> </ul> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
CreateChannelMembershipResponse * ChimeClient::createChannelMembership(const CreateChannelMembershipRequest &request)
{
    return qobject_cast<CreateChannelMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateChannelModeratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new <code>ChannelModerator</code>. A channel moderator
 *
 * can> <ul> <li>
 *
 * Add and remove other members of the
 *
 * channel> </li> <li>
 *
 * Add and remove other moderators of the
 *
 * channel> </li> <li>
 *
 * Add and remove user bans for the
 *
 * channel> </li> <li>
 *
 * Redact messages in the
 *
 * channel> </li> <li>
 *
 * List messages in the
 *
 * channel> </li> </ul> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
CreateChannelModeratorResponse * ChimeClient::createChannelModerator(const CreateChannelModeratorRequest &request)
{
    return qobject_cast<CreateChannelModeratorResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateMediaCapturePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a media capture
 */
CreateMediaCapturePipelineResponse * ChimeClient::createMediaCapturePipeline(const CreateMediaCapturePipelineRequest &request)
{
    return qobject_cast<CreateMediaCapturePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateMeetingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Chime SDK meeting in the specified media Region with no initial attendees. For more information
 * about specifying media Regions, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon Chime SDK Media Regions</a> in
 * the <i>Amazon Chime Developer Guide</i> . For more information about the Amazon Chime SDK, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer Guide</i> .
 */
CreateMeetingResponse * ChimeClient::createMeeting(const CreateMeetingRequest &request)
{
    return qobject_cast<CreateMeetingResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateMeetingDialOutResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uses the join token and call metadata in a meeting request (From number, To number, and so forth) to initiate an
 * outbound call to a public switched telephone network (PSTN) and join them into a Chime meeting. Also ensures that the
 * From number belongs to the
 *
 * customer>
 *
 * To play welcome audio or implement an interactive voice response (IVR), use the
 * <code>CreateSipMediaApplicationCall</code> action with the corresponding SIP media application
 */
CreateMeetingDialOutResponse * ChimeClient::createMeetingDialOut(const CreateMeetingDialOutRequest &request)
{
    return qobject_cast<CreateMeetingDialOutResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateMeetingWithAttendeesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Chime SDK meeting in the specified media Region, with attendees. For more information about
 * specifying media Regions, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon Chime SDK Media Regions</a> in
 * the <i>Amazon Chime Developer Guide</i> . For more information about the Amazon Chime SDK, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer Guide</i> .
 */
CreateMeetingWithAttendeesResponse * ChimeClient::createMeetingWithAttendees(const CreateMeetingWithAttendeesRequest &request)
{
    return qobject_cast<CreateMeetingWithAttendeesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreatePhoneNumberOrderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an order for phone numbers to be provisioned. For toll-free numbers, you cannot use the Amazon Chime Business
 * Calling product type. For numbers outside the U.S., you must use the Amazon Chime SIP Media Application Dial-In product
 */
CreatePhoneNumberOrderResponse * ChimeClient::createPhoneNumberOrder(const CreatePhoneNumberOrderRequest &request)
{
    return qobject_cast<CreatePhoneNumberOrderResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateProxySessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a proxy session on the specified Amazon Chime Voice Connector for the specified participant phone
 */
CreateProxySessionResponse * ChimeClient::createProxySession(const CreateProxySessionRequest &request)
{
    return qobject_cast<CreateProxySessionResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a chat room for the specified Amazon Chime Enterprise
 */
CreateRoomResponse * ChimeClient::createRoom(const CreateRoomRequest &request)
{
    return qobject_cast<CreateRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateRoomMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a member to a chat room in an Amazon Chime Enterprise account. A member can be either a user or a bot. The member
 * role designates whether the member is a chat room administrator or a general chat room
 */
CreateRoomMembershipResponse * ChimeClient::createRoomMembership(const CreateRoomMembershipRequest &request)
{
    return qobject_cast<CreateRoomMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateSipMediaApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a SIP media
 */
CreateSipMediaApplicationResponse * ChimeClient::createSipMediaApplication(const CreateSipMediaApplicationRequest &request)
{
    return qobject_cast<CreateSipMediaApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateSipMediaApplicationCallResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an outbound call to a phone number from the phone number specified in the request, and it invokes the endpoint
 * of the specified
 */
CreateSipMediaApplicationCallResponse * ChimeClient::createSipMediaApplicationCall(const CreateSipMediaApplicationCallRequest &request)
{
    return qobject_cast<CreateSipMediaApplicationCallResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateSipRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a SIP rule which can be used to run a SIP media application as a target for a specific trigger
 */
CreateSipRuleResponse * ChimeClient::createSipRule(const CreateSipRuleRequest &request)
{
    return qobject_cast<CreateSipRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a user under the specified Amazon Chime
 */
CreateUserResponse * ChimeClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateVoiceConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Chime Voice Connector under the administrator's AWS account. You can choose to create an Amazon Chime
 * Voice Connector in a specific AWS
 *
 * Region>
 *
 * Enabling <a>CreateVoiceConnectorRequest$RequireEncryption</a> configures your Amazon Chime Voice Connector to use TLS
 * transport for SIP signaling and Secure RTP (SRTP) for media. Inbound calls use TLS transport, and unencrypted outbound
 * calls are blocked.
 */
CreateVoiceConnectorResponse * ChimeClient::createVoiceConnector(const CreateVoiceConnectorRequest &request)
{
    return qobject_cast<CreateVoiceConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * CreateVoiceConnectorGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Chime Voice Connector group under the administrator's AWS account. You can associate Amazon Chime
 * Voice Connectors with the Amazon Chime Voice Connector group by including <code>VoiceConnectorItems</code> in the
 *
 * request>
 *
 * You can include Amazon Chime Voice Connectors from different AWS Regions in your group. This creates a fault tolerant
 * mechanism for fallback in case of availability
 */
CreateVoiceConnectorGroupResponse * ChimeClient::createVoiceConnectorGroup(const CreateVoiceConnectorGroupRequest &request)
{
    return qobject_cast<CreateVoiceConnectorGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Amazon Chime account. You must suspend all users before deleting <code>Team</code> account. You
 * can use the <a>BatchSuspendUser</a> action to
 *
 * dodo>
 *
 * For <code>EnterpriseLWA</code> and <code>EnterpriseAD</code> accounts, you must release the claimed domains for your
 * Amazon Chime account before deletion. As soon as you release the domain, all users under that account are
 *
 * suspended>
 *
 * Deleted accounts appear in your <code>Disabled</code> accounts list for 90 days. To restore deleted account from your
 * <code>Disabled</code> accounts list, you must contact AWS
 *
 * Support>
 *
 * After 90 days, deleted accounts are permanently removed from your <code>Disabled</code> accounts
 */
DeleteAccountResponse * ChimeClient::deleteAccount(const DeleteAccountRequest &request)
{
    return qobject_cast<DeleteAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteAppInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an <code>AppInstance</code> and all associated data
 */
DeleteAppInstanceResponse * ChimeClient::deleteAppInstance(const DeleteAppInstanceRequest &request)
{
    return qobject_cast<DeleteAppInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteAppInstanceAdminResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Demotes an <code>AppInstanceAdmin</code> to an <code>AppInstanceUser</code>. This action does not delete the
 */
DeleteAppInstanceAdminResponse * ChimeClient::deleteAppInstanceAdmin(const DeleteAppInstanceAdminRequest &request)
{
    return qobject_cast<DeleteAppInstanceAdminResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteAppInstanceStreamingConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the streaming configurations of an
 */
DeleteAppInstanceStreamingConfigurationsResponse * ChimeClient::deleteAppInstanceStreamingConfigurations(const DeleteAppInstanceStreamingConfigurationsRequest &request)
{
    return qobject_cast<DeleteAppInstanceStreamingConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteAppInstanceUserResponse * ChimeClient::deleteAppInstanceUser(const DeleteAppInstanceUserRequest &request)
{
    return qobject_cast<DeleteAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteAttendeeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an attendee from the specified Amazon Chime SDK meeting and deletes their <code>JoinToken</code>. Attendees are
 * automatically deleted when a Amazon Chime SDK meeting is deleted. For more information about the Amazon Chime SDK, see
 * <a href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer
 */
DeleteAttendeeResponse * ChimeClient::deleteAttendee(const DeleteAttendeeRequest &request)
{
    return qobject_cast<DeleteAttendeeResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Immediately makes a channel and its memberships inaccessible and marks them for deletion. This is an irreversible
 *
 * process> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DeleteChannelResponse * ChimeClient::deleteChannel(const DeleteChannelRequest &request)
{
    return qobject_cast<DeleteChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteChannelBanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a user from a channel's ban
 *
 * list> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DeleteChannelBanResponse * ChimeClient::deleteChannelBan(const DeleteChannelBanRequest &request)
{
    return qobject_cast<DeleteChannelBanResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteChannelMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a member from a
 *
 * channel> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DeleteChannelMembershipResponse * ChimeClient::deleteChannelMembership(const DeleteChannelMembershipRequest &request)
{
    return qobject_cast<DeleteChannelMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteChannelMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a channel message. Only admins can perform this action. Deletion makes messages inaccessible immediately. A
 * background process deletes any revisions created by
 *
 * <code>UpdateChannelMessage</code>> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DeleteChannelMessageResponse * ChimeClient::deleteChannelMessage(const DeleteChannelMessageRequest &request)
{
    return qobject_cast<DeleteChannelMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteChannelModeratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a channel
 *
 * moderator> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DeleteChannelModeratorResponse * ChimeClient::deleteChannelModerator(const DeleteChannelModeratorRequest &request)
{
    return qobject_cast<DeleteChannelModeratorResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteEventsConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the events configuration that allows a bot to receive outgoing
 */
DeleteEventsConfigurationResponse * ChimeClient::deleteEventsConfiguration(const DeleteEventsConfigurationRequest &request)
{
    return qobject_cast<DeleteEventsConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteMediaCapturePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the media capture
 */
DeleteMediaCapturePipelineResponse * ChimeClient::deleteMediaCapturePipeline(const DeleteMediaCapturePipelineRequest &request)
{
    return qobject_cast<DeleteMediaCapturePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteMeetingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Amazon Chime SDK meeting. The operation deletes all attendees, disconnects all clients, and
 * prevents new clients from joining the meeting. For more information about the Amazon Chime SDK, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer
 */
DeleteMeetingResponse * ChimeClient::deleteMeeting(const DeleteMeetingRequest &request)
{
    return qobject_cast<DeleteMeetingResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeletePhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Moves the specified phone number into the <b>Deletion queue</b>. A phone number must be disassociated from any users or
 * Amazon Chime Voice Connectors before it can be
 *
 * deleted>
 *
 * Deleted phone numbers remain in the <b>Deletion queue</b> for 7 days before they are deleted
 */
DeletePhoneNumberResponse * ChimeClient::deletePhoneNumber(const DeletePhoneNumberRequest &request)
{
    return qobject_cast<DeletePhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteProxySessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified proxy session from the specified Amazon Chime Voice
 */
DeleteProxySessionResponse * ChimeClient::deleteProxySession(const DeleteProxySessionRequest &request)
{
    return qobject_cast<DeleteProxySessionResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a chat room in an Amazon Chime Enterprise
 */
DeleteRoomResponse * ChimeClient::deleteRoom(const DeleteRoomRequest &request)
{
    return qobject_cast<DeleteRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteRoomMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a member from a chat room in an Amazon Chime Enterprise
 */
DeleteRoomMembershipResponse * ChimeClient::deleteRoomMembership(const DeleteRoomMembershipRequest &request)
{
    return qobject_cast<DeleteRoomMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteSipMediaApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a SIP media
 */
DeleteSipMediaApplicationResponse * ChimeClient::deleteSipMediaApplication(const DeleteSipMediaApplicationRequest &request)
{
    return qobject_cast<DeleteSipMediaApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteSipRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a SIP rule. You must disable a SIP rule before you can delete
 */
DeleteSipRuleResponse * ChimeClient::deleteSipRule(const DeleteSipRuleRequest &request)
{
    return qobject_cast<DeleteSipRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteVoiceConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Amazon Chime Voice Connector. Any phone numbers associated with the Amazon Chime Voice Connector
 * must be disassociated from it before it can be
 */
DeleteVoiceConnectorResponse * ChimeClient::deleteVoiceConnector(const DeleteVoiceConnectorRequest &request)
{
    return qobject_cast<DeleteVoiceConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteVoiceConnectorEmergencyCallingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the emergency calling configuration details from the specified Amazon Chime Voice
 */
DeleteVoiceConnectorEmergencyCallingConfigurationResponse * ChimeClient::deleteVoiceConnectorEmergencyCallingConfiguration(const DeleteVoiceConnectorEmergencyCallingConfigurationRequest &request)
{
    return qobject_cast<DeleteVoiceConnectorEmergencyCallingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteVoiceConnectorGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Amazon Chime Voice Connector group. Any <code>VoiceConnectorItems</code> and phone numbers
 * associated with the group must be removed before it can be
 */
DeleteVoiceConnectorGroupResponse * ChimeClient::deleteVoiceConnectorGroup(const DeleteVoiceConnectorGroupRequest &request)
{
    return qobject_cast<DeleteVoiceConnectorGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteVoiceConnectorOriginationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the origination settings for the specified Amazon Chime Voice
 *
 * Connector> <note>
 *
 * If emergency calling is configured for the Amazon Chime Voice Connector, it must be deleted prior to deleting the
 * origination
 */
DeleteVoiceConnectorOriginationResponse * ChimeClient::deleteVoiceConnectorOrigination(const DeleteVoiceConnectorOriginationRequest &request)
{
    return qobject_cast<DeleteVoiceConnectorOriginationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteVoiceConnectorProxyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the proxy configuration from the specified Amazon Chime Voice
 */
DeleteVoiceConnectorProxyResponse * ChimeClient::deleteVoiceConnectorProxy(const DeleteVoiceConnectorProxyRequest &request)
{
    return qobject_cast<DeleteVoiceConnectorProxyResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteVoiceConnectorStreamingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the streaming configuration for the specified Amazon Chime Voice
 */
DeleteVoiceConnectorStreamingConfigurationResponse * ChimeClient::deleteVoiceConnectorStreamingConfiguration(const DeleteVoiceConnectorStreamingConfigurationRequest &request)
{
    return qobject_cast<DeleteVoiceConnectorStreamingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteVoiceConnectorTerminationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the termination settings for the specified Amazon Chime Voice
 *
 * Connector> <note>
 *
 * If emergency calling is configured for the Amazon Chime Voice Connector, it must be deleted prior to deleting the
 * termination
 */
DeleteVoiceConnectorTerminationResponse * ChimeClient::deleteVoiceConnectorTermination(const DeleteVoiceConnectorTerminationRequest &request)
{
    return qobject_cast<DeleteVoiceConnectorTerminationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DeleteVoiceConnectorTerminationCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified SIP credentials used by your equipment to authenticate during call
 */
DeleteVoiceConnectorTerminationCredentialsResponse * ChimeClient::deleteVoiceConnectorTerminationCredentials(const DeleteVoiceConnectorTerminationCredentialsRequest &request)
{
    return qobject_cast<DeleteVoiceConnectorTerminationCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DescribeAppInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of an
 */
DescribeAppInstanceResponse * ChimeClient::describeAppInstance(const DescribeAppInstanceRequest &request)
{
    return qobject_cast<DescribeAppInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DescribeAppInstanceAdminResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of an
 */
DescribeAppInstanceAdminResponse * ChimeClient::describeAppInstanceAdmin(const DescribeAppInstanceAdminRequest &request)
{
    return qobject_cast<DescribeAppInstanceAdminResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DescribeAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of an
 */
DescribeAppInstanceUserResponse * ChimeClient::describeAppInstanceUser(const DescribeAppInstanceUserRequest &request)
{
    return qobject_cast<DescribeAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DescribeChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of a channel in an Amazon Chime
 *
 * <code>AppInstance</code>> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DescribeChannelResponse * ChimeClient::describeChannel(const DescribeChannelRequest &request)
{
    return qobject_cast<DescribeChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DescribeChannelBanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of a channel
 *
 * ban> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DescribeChannelBanResponse * ChimeClient::describeChannelBan(const DescribeChannelBanRequest &request)
{
    return qobject_cast<DescribeChannelBanResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DescribeChannelMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of a user's channel
 *
 * membership> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DescribeChannelMembershipResponse * ChimeClient::describeChannelMembership(const DescribeChannelMembershipRequest &request)
{
    return qobject_cast<DescribeChannelMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DescribeChannelMembershipForAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details of a channel based on the membership of the specified
 *
 * <code>AppInstanceUser</code>> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DescribeChannelMembershipForAppInstanceUserResponse * ChimeClient::describeChannelMembershipForAppInstanceUser(const DescribeChannelMembershipForAppInstanceUserRequest &request)
{
    return qobject_cast<DescribeChannelMembershipForAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DescribeChannelModeratedByAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of a channel moderated by the specified
 *
 * <code>AppInstanceUser</code>> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DescribeChannelModeratedByAppInstanceUserResponse * ChimeClient::describeChannelModeratedByAppInstanceUser(const DescribeChannelModeratedByAppInstanceUserRequest &request)
{
    return qobject_cast<DescribeChannelModeratedByAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DescribeChannelModeratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of a single
 *
 * ChannelModerator> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
DescribeChannelModeratorResponse * ChimeClient::describeChannelModerator(const DescribeChannelModeratorRequest &request)
{
    return qobject_cast<DescribeChannelModeratorResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DisassociatePhoneNumberFromUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the primary provisioned phone number from the specified Amazon Chime
 */
DisassociatePhoneNumberFromUserResponse * ChimeClient::disassociatePhoneNumberFromUser(const DisassociatePhoneNumberFromUserRequest &request)
{
    return qobject_cast<DisassociatePhoneNumberFromUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DisassociatePhoneNumbersFromVoiceConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified phone numbers from the specified Amazon Chime Voice
 */
DisassociatePhoneNumbersFromVoiceConnectorResponse * ChimeClient::disassociatePhoneNumbersFromVoiceConnector(const DisassociatePhoneNumbersFromVoiceConnectorRequest &request)
{
    return qobject_cast<DisassociatePhoneNumbersFromVoiceConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DisassociatePhoneNumbersFromVoiceConnectorGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified phone numbers from the specified Amazon Chime Voice Connector
 */
DisassociatePhoneNumbersFromVoiceConnectorGroupResponse * ChimeClient::disassociatePhoneNumbersFromVoiceConnectorGroup(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest &request)
{
    return qobject_cast<DisassociatePhoneNumbersFromVoiceConnectorGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * DisassociateSigninDelegateGroupsFromAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified sign-in delegate groups from the specified Amazon Chime
 */
DisassociateSigninDelegateGroupsFromAccountResponse * ChimeClient::disassociateSigninDelegateGroupsFromAccount(const DisassociateSigninDelegateGroupsFromAccountRequest &request)
{
    return qobject_cast<DisassociateSigninDelegateGroupsFromAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details for the specified Amazon Chime account, such as account type and supported
 */
GetAccountResponse * ChimeClient::getAccount(const GetAccountRequest &request)
{
    return qobject_cast<GetAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetAccountSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves account settings for the specified Amazon Chime account ID, such as remote control and dialout settings. For
 * more information about these settings, see <a href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
 * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.
 */
GetAccountSettingsResponse * ChimeClient::getAccountSettings(const GetAccountSettingsRequest &request)
{
    return qobject_cast<GetAccountSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetAppInstanceRetentionSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the retention settings for an
 */
GetAppInstanceRetentionSettingsResponse * ChimeClient::getAppInstanceRetentionSettings(const GetAppInstanceRetentionSettingsRequest &request)
{
    return qobject_cast<GetAppInstanceRetentionSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetAppInstanceStreamingConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the streaming settings for an
 */
GetAppInstanceStreamingConfigurationsResponse * ChimeClient::getAppInstanceStreamingConfigurations(const GetAppInstanceStreamingConfigurationsRequest &request)
{
    return qobject_cast<GetAppInstanceStreamingConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetAttendeeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Amazon Chime SDK attendee details for a specified meeting ID and attendee ID. For more information about the
 * Amazon Chime SDK, see <a href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime
 * SDK</a> in the <i>Amazon Chime Developer Guide</i> .
 */
GetAttendeeResponse * ChimeClient::getAttendee(const GetAttendeeRequest &request)
{
    return qobject_cast<GetAttendeeResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details for the specified bot, such as bot email address, bot type, status, and display
 */
GetBotResponse * ChimeClient::getBot(const GetBotRequest &request)
{
    return qobject_cast<GetBotResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetChannelMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the full details of a channel
 *
 * message> <note>
 *
 * The x-amz-chime-bearer request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that makes the
 * API call as the value in the
 */
GetChannelMessageResponse * ChimeClient::getChannelMessage(const GetChannelMessageRequest &request)
{
    return qobject_cast<GetChannelMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetEventsConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details for an events configuration that allows a bot to receive outgoing events, such as an HTTPS endpoint or
 * Lambda function
 */
GetEventsConfigurationResponse * ChimeClient::getEventsConfiguration(const GetEventsConfigurationRequest &request)
{
    return qobject_cast<GetEventsConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetGlobalSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves global settings for the administrator's AWS account, such as Amazon Chime Business Calling and Amazon Chime
 * Voice Connector
 */
GetGlobalSettingsResponse * ChimeClient::getGlobalSettings(const GetGlobalSettingsRequest &request)
{
    return qobject_cast<GetGlobalSettingsResponse *>(send(request));
}

/*!
 * Sends a GetGlobalSettings request to the ChimeClient service, and returns a pointer to an
 * GetGlobalSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves global settings for the administrator's AWS account, such as Amazon Chime Business Calling and Amazon Chime
 * Voice Connector
 */
GetGlobalSettingsResponse * ChimeClient::getGlobalSettings()
{
    return getGlobalSettings(GetGlobalSettingsRequest());
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetMediaCapturePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an existing media capture
 */
GetMediaCapturePipelineResponse * ChimeClient::getMediaCapturePipeline(const GetMediaCapturePipelineRequest &request)
{
    return qobject_cast<GetMediaCapturePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetMeetingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the Amazon Chime SDK meeting details for the specified meeting ID. For more information about the Amazon Chime SDK,
 * see <a href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the
 * <i>Amazon Chime Developer Guide</i> .
 */
GetMeetingResponse * ChimeClient::getMeeting(const GetMeetingRequest &request)
{
    return qobject_cast<GetMeetingResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetMessagingSessionEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The details of the endpoint for the messaging
 */
GetMessagingSessionEndpointResponse * ChimeClient::getMessagingSessionEndpoint(const GetMessagingSessionEndpointRequest &request)
{
    return qobject_cast<GetMessagingSessionEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetPhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details for the specified phone number ID, such as associations, capabilities, and product
 */
GetPhoneNumberResponse * ChimeClient::getPhoneNumber(const GetPhoneNumberRequest &request)
{
    return qobject_cast<GetPhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetPhoneNumberOrderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details for the specified phone number order, such as the order creation timestamp, phone numbers in E.164
 * format, product type, and order
 */
GetPhoneNumberOrderResponse * ChimeClient::getPhoneNumberOrder(const GetPhoneNumberOrderRequest &request)
{
    return qobject_cast<GetPhoneNumberOrderResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetPhoneNumberSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the phone number settings for the administrator's AWS account, such as the default outbound calling
 */
GetPhoneNumberSettingsResponse * ChimeClient::getPhoneNumberSettings(const GetPhoneNumberSettingsRequest &request)
{
    return qobject_cast<GetPhoneNumberSettingsResponse *>(send(request));
}

/*!
 * Sends a GetPhoneNumberSettings request to the ChimeClient service, and returns a pointer to an
 * GetPhoneNumberSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the phone number settings for the administrator's AWS account, such as the default outbound calling
 */
GetPhoneNumberSettingsResponse * ChimeClient::getPhoneNumberSettings()
{
    return getPhoneNumberSettings(GetPhoneNumberSettingsRequest());
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetProxySessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the specified proxy session details for the specified Amazon Chime Voice
 */
GetProxySessionResponse * ChimeClient::getProxySession(const GetProxySessionRequest &request)
{
    return qobject_cast<GetProxySessionResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetRetentionSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the retention settings for the specified Amazon Chime Enterprise account. For more information about retention
 * settings, see <a href="https://docs.aws.amazon.com/chime/latest/ag/chat-retention.html">Managing Chat Retention
 * Policies</a> in the <i>Amazon Chime Administration Guide</i>.
 */
GetRetentionSettingsResponse * ChimeClient::getRetentionSettings(const GetRetentionSettingsRequest &request)
{
    return qobject_cast<GetRetentionSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves room details, such as the room name, for a room in an Amazon Chime Enterprise
 */
GetRoomResponse * ChimeClient::getRoom(const GetRoomRequest &request)
{
    return qobject_cast<GetRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetSipMediaApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the information for a SIP media application, including name, AWS Region, and
 */
GetSipMediaApplicationResponse * ChimeClient::getSipMediaApplication(const GetSipMediaApplicationRequest &request)
{
    return qobject_cast<GetSipMediaApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetSipMediaApplicationLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the logging configuration for the specified SIP media
 */
GetSipMediaApplicationLoggingConfigurationResponse * ChimeClient::getSipMediaApplicationLoggingConfiguration(const GetSipMediaApplicationLoggingConfigurationRequest &request)
{
    return qobject_cast<GetSipMediaApplicationLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetSipRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the details of a SIP rule, such as the rule ID, name, triggers, and target
 */
GetSipRuleResponse * ChimeClient::getSipRule(const GetSipRuleRequest &request)
{
    return qobject_cast<GetSipRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details for the specified user ID, such as primary email address, license type,and personal meeting
 *
 * PIN>
 *
 * To retrieve user details with an email address instead of a user ID, use the <a>ListUsers</a> action, and then filter by
 * email address.
 */
GetUserResponse * ChimeClient::getUser(const GetUserRequest &request)
{
    return qobject_cast<GetUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetUserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves settings for the specified user ID, such as any associated phone number
 */
GetUserSettingsResponse * ChimeClient::getUserSettings(const GetUserSettingsRequest &request)
{
    return qobject_cast<GetUserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetVoiceConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details for the specified Amazon Chime Voice Connector, such as timestamps,name, outbound host, and encryption
 */
GetVoiceConnectorResponse * ChimeClient::getVoiceConnector(const GetVoiceConnectorRequest &request)
{
    return qobject_cast<GetVoiceConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetVoiceConnectorEmergencyCallingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the emergency calling configuration details for the specified Amazon Chime Voice
 */
GetVoiceConnectorEmergencyCallingConfigurationResponse * ChimeClient::getVoiceConnectorEmergencyCallingConfiguration(const GetVoiceConnectorEmergencyCallingConfigurationRequest &request)
{
    return qobject_cast<GetVoiceConnectorEmergencyCallingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetVoiceConnectorGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details for the specified Amazon Chime Voice Connector group, such as timestamps,name, and associated
 */
GetVoiceConnectorGroupResponse * ChimeClient::getVoiceConnectorGroup(const GetVoiceConnectorGroupRequest &request)
{
    return qobject_cast<GetVoiceConnectorGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetVoiceConnectorLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the logging configuration details for the specified Amazon Chime Voice Connector. Shows whether SIP message
 * logs are enabled for sending to Amazon CloudWatch
 */
GetVoiceConnectorLoggingConfigurationResponse * ChimeClient::getVoiceConnectorLoggingConfiguration(const GetVoiceConnectorLoggingConfigurationRequest &request)
{
    return qobject_cast<GetVoiceConnectorLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetVoiceConnectorOriginationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves origination setting details for the specified Amazon Chime Voice
 */
GetVoiceConnectorOriginationResponse * ChimeClient::getVoiceConnectorOrigination(const GetVoiceConnectorOriginationRequest &request)
{
    return qobject_cast<GetVoiceConnectorOriginationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetVoiceConnectorProxyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the proxy configuration details for the specified Amazon Chime Voice
 */
GetVoiceConnectorProxyResponse * ChimeClient::getVoiceConnectorProxy(const GetVoiceConnectorProxyRequest &request)
{
    return qobject_cast<GetVoiceConnectorProxyResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetVoiceConnectorStreamingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the streaming configuration details for the specified Amazon Chime Voice Connector. Shows whether media
 * streaming is enabled for sending to Amazon Kinesis. It also shows the retention period, in hours, for the Amazon Kinesis
 */
GetVoiceConnectorStreamingConfigurationResponse * ChimeClient::getVoiceConnectorStreamingConfiguration(const GetVoiceConnectorStreamingConfigurationRequest &request)
{
    return qobject_cast<GetVoiceConnectorStreamingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetVoiceConnectorTerminationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves termination setting details for the specified Amazon Chime Voice
 */
GetVoiceConnectorTerminationResponse * ChimeClient::getVoiceConnectorTermination(const GetVoiceConnectorTerminationRequest &request)
{
    return qobject_cast<GetVoiceConnectorTerminationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * GetVoiceConnectorTerminationHealthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the last time a SIP <code>OPTIONS</code> ping was received from your SIP infrastructure for
 * the specified Amazon Chime Voice
 */
GetVoiceConnectorTerminationHealthResponse * ChimeClient::getVoiceConnectorTerminationHealth(const GetVoiceConnectorTerminationHealthRequest &request)
{
    return qobject_cast<GetVoiceConnectorTerminationHealthResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * InviteUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends email to a maximum of 50 users, inviting them to the specified Amazon Chime <code>Team</code> account. Only
 * <code>Team</code> account types are currently supported for this
 */
InviteUsersResponse * ChimeClient::inviteUsers(const InviteUsersRequest &request)
{
    return qobject_cast<InviteUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon Chime accounts under the administrator's AWS account. You can filter accounts by account name prefix.
 * To find out which Amazon Chime account a user belongs to, you can filter by the user's email address, which returns one
 * account
 */
ListAccountsResponse * ChimeClient::listAccounts(const ListAccountsRequest &request)
{
    return qobject_cast<ListAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListAppInstanceAdminsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the administrators in the
 */
ListAppInstanceAdminsResponse * ChimeClient::listAppInstanceAdmins(const ListAppInstanceAdminsRequest &request)
{
    return qobject_cast<ListAppInstanceAdminsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListAppInstanceUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all <code>AppInstanceUsers</code> created under a single <code>AppInstance</code>.
 */
ListAppInstanceUsersResponse * ChimeClient::listAppInstanceUsers(const ListAppInstanceUsersRequest &request)
{
    return qobject_cast<ListAppInstanceUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListAppInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Amazon Chime <code>AppInstance</code>s created under a single AWS
 */
ListAppInstancesResponse * ChimeClient::listAppInstances(const ListAppInstancesRequest &request)
{
    return qobject_cast<ListAppInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListAttendeeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags applied to an Amazon Chime SDK attendee
 */
ListAttendeeTagsResponse * ChimeClient::listAttendeeTags(const ListAttendeeTagsRequest &request)
{
    return qobject_cast<ListAttendeeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListAttendeesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the attendees for the specified Amazon Chime SDK meeting. For more information about the Amazon Chime SDK, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer Guide</i>.
 */
ListAttendeesResponse * ChimeClient::listAttendees(const ListAttendeesRequest &request)
{
    return qobject_cast<ListAttendeesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListBotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the bots associated with the administrator's Amazon Chime Enterprise account
 */
ListBotsResponse * ChimeClient::listBots(const ListBotsRequest &request)
{
    return qobject_cast<ListBotsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListChannelBansResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the users banned from a particular
 *
 * channel> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
ListChannelBansResponse * ChimeClient::listChannelBans(const ListChannelBansRequest &request)
{
    return qobject_cast<ListChannelBansResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListChannelMembershipsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all channel memberships in a
 *
 * channel> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
ListChannelMembershipsResponse * ChimeClient::listChannelMemberships(const ListChannelMembershipsRequest &request)
{
    return qobject_cast<ListChannelMembershipsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListChannelMembershipsForAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all channels that a particular <code>AppInstanceUser</code> is a part of. Only an <code>AppInstanceAdmin</code>
 * can call the API with a user ARN that is not their own.
 *
 * </p <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
ListChannelMembershipsForAppInstanceUserResponse * ChimeClient::listChannelMembershipsForAppInstanceUser(const ListChannelMembershipsForAppInstanceUserRequest &request)
{
    return qobject_cast<ListChannelMembershipsForAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListChannelMessagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all the messages in a channel. Returns a paginated list of <code>ChannelMessages</code>. By default, sorted by
 * creation timestamp in descending
 *
 * order> <note>
 *
 * Redacted messages appear in the results as empty, since they are only redacted, not deleted. Deleted messages do not
 * appear in the results. This action always returns the latest version of an edited
 *
 * message>
 *
 * Also, the x-amz-chime-bearer request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user that makes
 * the API call as the value in the
 */
ListChannelMessagesResponse * ChimeClient::listChannelMessages(const ListChannelMessagesRequest &request)
{
    return qobject_cast<ListChannelMessagesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListChannelModeratorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the moderators for a
 *
 * channel> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
ListChannelModeratorsResponse * ChimeClient::listChannelModerators(const ListChannelModeratorsRequest &request)
{
    return qobject_cast<ListChannelModeratorsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Channels created under a single Chime App as a paginated list. You can specify filters to narrow
 *
 * results> <p class="title"> <b>Functionality & restrictions</b>
 *
 * </p <ul> <li>
 *
 * Use privacy = <code>PUBLIC</code> to retrieve all public channels in the
 *
 * account> </li> <li>
 *
 * Only an <code>AppInstanceAdmin</code> can set privacy = <code>PRIVATE</code> to list the private channels in an
 *
 * account> </li> </ul> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
ListChannelsResponse * ChimeClient::listChannels(const ListChannelsRequest &request)
{
    return qobject_cast<ListChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListChannelsModeratedByAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list of the channels moderated by an
 *
 * <code>AppInstanceUser</code>> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
ListChannelsModeratedByAppInstanceUserResponse * ChimeClient::listChannelsModeratedByAppInstanceUser(const ListChannelsModeratedByAppInstanceUserRequest &request)
{
    return qobject_cast<ListChannelsModeratedByAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListMediaCapturePipelinesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of media capture
 */
ListMediaCapturePipelinesResponse * ChimeClient::listMediaCapturePipelines(const ListMediaCapturePipelinesRequest &request)
{
    return qobject_cast<ListMediaCapturePipelinesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListMeetingTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags applied to an Amazon Chime SDK meeting
 */
ListMeetingTagsResponse * ChimeClient::listMeetingTags(const ListMeetingTagsRequest &request)
{
    return qobject_cast<ListMeetingTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListMeetingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists up to 100 active Amazon Chime SDK meetings. For more information about the Amazon Chime SDK, see <a
 * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the Amazon Chime SDK</a> in the <i>Amazon
 * Chime Developer
 */
ListMeetingsResponse * ChimeClient::listMeetings(const ListMeetingsRequest &request)
{
    return qobject_cast<ListMeetingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListPhoneNumberOrdersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the phone number orders for the administrator's Amazon Chime
 */
ListPhoneNumberOrdersResponse * ChimeClient::listPhoneNumberOrders(const ListPhoneNumberOrdersRequest &request)
{
    return qobject_cast<ListPhoneNumberOrdersResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListPhoneNumbersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the phone numbers for the specified Amazon Chime account, Amazon Chime user, Amazon Chime Voice Connector, or
 * Amazon Chime Voice Connector
 */
ListPhoneNumbersResponse * ChimeClient::listPhoneNumbers(const ListPhoneNumbersRequest &request)
{
    return qobject_cast<ListPhoneNumbersResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListProxySessionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the proxy sessions for the specified Amazon Chime Voice
 */
ListProxySessionsResponse * ChimeClient::listProxySessions(const ListProxySessionsRequest &request)
{
    return qobject_cast<ListProxySessionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListRoomMembershipsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the membership details for the specified room in an Amazon Chime Enterprise account, such as the members' IDs,
 * email addresses, and
 */
ListRoomMembershipsResponse * ChimeClient::listRoomMemberships(const ListRoomMembershipsRequest &request)
{
    return qobject_cast<ListRoomMembershipsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListRoomsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the room details for the specified Amazon Chime Enterprise account. Optionally, filter the results by a member ID
 * (user ID or bot ID) to see a list of rooms that the member belongs
 */
ListRoomsResponse * ChimeClient::listRooms(const ListRoomsRequest &request)
{
    return qobject_cast<ListRoomsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListSipMediaApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the SIP media applications under the administrator's AWS
 */
ListSipMediaApplicationsResponse * ChimeClient::listSipMediaApplications(const ListSipMediaApplicationsRequest &request)
{
    return qobject_cast<ListSipMediaApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListSipRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the SIP rules under the administrator's AWS
 */
ListSipRulesResponse * ChimeClient::listSipRules(const ListSipRulesRequest &request)
{
    return qobject_cast<ListSipRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListSupportedPhoneNumberCountriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists supported phone number
 */
ListSupportedPhoneNumberCountriesResponse * ChimeClient::listSupportedPhoneNumberCountries(const ListSupportedPhoneNumberCountriesRequest &request)
{
    return qobject_cast<ListSupportedPhoneNumberCountriesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags applied to an Amazon Chime SDK meeting
 */
ListTagsForResourceResponse * ChimeClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the users that belong to the specified Amazon Chime account. You can specify an email address to list only the
 * user that the email address belongs
 */
ListUsersResponse * ChimeClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListVoiceConnectorGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon Chime Voice Connector groups for the administrator's AWS
 */
ListVoiceConnectorGroupsResponse * ChimeClient::listVoiceConnectorGroups(const ListVoiceConnectorGroupsRequest &request)
{
    return qobject_cast<ListVoiceConnectorGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListVoiceConnectorTerminationCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the SIP credentials for the specified Amazon Chime Voice
 */
ListVoiceConnectorTerminationCredentialsResponse * ChimeClient::listVoiceConnectorTerminationCredentials(const ListVoiceConnectorTerminationCredentialsRequest &request)
{
    return qobject_cast<ListVoiceConnectorTerminationCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ListVoiceConnectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon Chime Voice Connectors for the administrator's AWS
 */
ListVoiceConnectorsResponse * ChimeClient::listVoiceConnectors(const ListVoiceConnectorsRequest &request)
{
    return qobject_cast<ListVoiceConnectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * LogoutUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Logs out the specified user from all of the devices they are currently logged
 */
LogoutUserResponse * ChimeClient::logoutUser(const LogoutUserRequest &request)
{
    return qobject_cast<LogoutUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * PutAppInstanceRetentionSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the amount of time in days that a given <code>AppInstance</code> retains
 */
PutAppInstanceRetentionSettingsResponse * ChimeClient::putAppInstanceRetentionSettings(const PutAppInstanceRetentionSettingsRequest &request)
{
    return qobject_cast<PutAppInstanceRetentionSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * PutAppInstanceStreamingConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The data streaming configurations of an
 */
PutAppInstanceStreamingConfigurationsResponse * ChimeClient::putAppInstanceStreamingConfigurations(const PutAppInstanceStreamingConfigurationsRequest &request)
{
    return qobject_cast<PutAppInstanceStreamingConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * PutEventsConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an events configuration that allows a bot to receive outgoing events sent by Amazon Chime. Choose either an
 * HTTPS endpoint or a Lambda function ARN. For more information, see
 */
PutEventsConfigurationResponse * ChimeClient::putEventsConfiguration(const PutEventsConfigurationRequest &request)
{
    return qobject_cast<PutEventsConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * PutRetentionSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Puts retention settings for the specified Amazon Chime Enterprise account. We recommend using AWS CloudTrail to monitor
 * usage of this API for your account. For more information, see <a
 * href="https://docs.aws.amazon.com/chime/latest/ag/cloudtrail.html">Logging Amazon Chime API Calls with AWS
 * CloudTrail</a> in the <i>Amazon Chime Administration
 *
 * Guide</i>>
 *
 * To turn off existing retention settings, remove the number of days from the corresponding <b>RetentionDays</b> field in
 * the <b>RetentionSettings</b> object. For more information about retention settings, see <a
 * href="https://docs.aws.amazon.com/chime/latest/ag/chat-retention.html">Managing Chat Retention Policies</a> in the
 * <i>Amazon Chime Administration
 */
PutRetentionSettingsResponse * ChimeClient::putRetentionSettings(const PutRetentionSettingsRequest &request)
{
    return qobject_cast<PutRetentionSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * PutSipMediaApplicationLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the logging configuration for the specified SIP media
 */
PutSipMediaApplicationLoggingConfigurationResponse * ChimeClient::putSipMediaApplicationLoggingConfiguration(const PutSipMediaApplicationLoggingConfigurationRequest &request)
{
    return qobject_cast<PutSipMediaApplicationLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * PutVoiceConnectorEmergencyCallingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Puts emergency calling configuration details to the specified Amazon Chime Voice Connector, such as emergency phone
 * numbers and calling countries. Origination and termination settings must be enabled for the Amazon Chime Voice Connector
 * before emergency calling can be
 */
PutVoiceConnectorEmergencyCallingConfigurationResponse * ChimeClient::putVoiceConnectorEmergencyCallingConfiguration(const PutVoiceConnectorEmergencyCallingConfigurationRequest &request)
{
    return qobject_cast<PutVoiceConnectorEmergencyCallingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * PutVoiceConnectorLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a logging configuration for the specified Amazon Chime Voice Connector. The logging configuration specifies whether
 * SIP message logs are enabled for sending to Amazon CloudWatch
 */
PutVoiceConnectorLoggingConfigurationResponse * ChimeClient::putVoiceConnectorLoggingConfiguration(const PutVoiceConnectorLoggingConfigurationRequest &request)
{
    return qobject_cast<PutVoiceConnectorLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * PutVoiceConnectorOriginationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds origination settings for the specified Amazon Chime Voice
 *
 * Connector> <note>
 *
 * If emergency calling is configured for the Amazon Chime Voice Connector, it must be deleted prior to turning off
 * origination
 */
PutVoiceConnectorOriginationResponse * ChimeClient::putVoiceConnectorOrigination(const PutVoiceConnectorOriginationRequest &request)
{
    return qobject_cast<PutVoiceConnectorOriginationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * PutVoiceConnectorProxyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Puts the specified proxy configuration to the specified Amazon Chime Voice
 */
PutVoiceConnectorProxyResponse * ChimeClient::putVoiceConnectorProxy(const PutVoiceConnectorProxyRequest &request)
{
    return qobject_cast<PutVoiceConnectorProxyResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * PutVoiceConnectorStreamingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a streaming configuration for the specified Amazon Chime Voice Connector. The streaming configuration specifies
 * whether media streaming is enabled for sending to Kinesis. It also sets the retention period, in hours, for the Amazon
 * Kinesis
 */
PutVoiceConnectorStreamingConfigurationResponse * ChimeClient::putVoiceConnectorStreamingConfiguration(const PutVoiceConnectorStreamingConfigurationRequest &request)
{
    return qobject_cast<PutVoiceConnectorStreamingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * PutVoiceConnectorTerminationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds termination settings for the specified Amazon Chime Voice
 *
 * Connector> <note>
 *
 * If emergency calling is configured for the Amazon Chime Voice Connector, it must be deleted prior to turning off
 * termination
 */
PutVoiceConnectorTerminationResponse * ChimeClient::putVoiceConnectorTermination(const PutVoiceConnectorTerminationRequest &request)
{
    return qobject_cast<PutVoiceConnectorTerminationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * PutVoiceConnectorTerminationCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds termination SIP credentials for the specified Amazon Chime Voice
 */
PutVoiceConnectorTerminationCredentialsResponse * ChimeClient::putVoiceConnectorTerminationCredentials(const PutVoiceConnectorTerminationCredentialsRequest &request)
{
    return qobject_cast<PutVoiceConnectorTerminationCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * RedactChannelMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Redacts message content, but not metadata. The message exists in the back end, but the action returns null content, and
 * the state shows as
 *
 * redacted> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
RedactChannelMessageResponse * ChimeClient::redactChannelMessage(const RedactChannelMessageRequest &request)
{
    return qobject_cast<RedactChannelMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * RedactConversationMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Redacts the specified message from the specified Amazon Chime
 */
RedactConversationMessageResponse * ChimeClient::redactConversationMessage(const RedactConversationMessageRequest &request)
{
    return qobject_cast<RedactConversationMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * RedactRoomMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Redacts the specified message from the specified Amazon Chime
 */
RedactRoomMessageResponse * ChimeClient::redactRoomMessage(const RedactRoomMessageRequest &request)
{
    return qobject_cast<RedactRoomMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * RegenerateSecurityTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Regenerates the security token for a
 */
RegenerateSecurityTokenResponse * ChimeClient::regenerateSecurityToken(const RegenerateSecurityTokenRequest &request)
{
    return qobject_cast<RegenerateSecurityTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ResetPersonalPINResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets the personal meeting PIN for the specified user on an Amazon Chime account. Returns the <a>User</a> object with
 * the updated personal meeting
 */
ResetPersonalPINResponse * ChimeClient::resetPersonalPIN(const ResetPersonalPINRequest &request)
{
    return qobject_cast<ResetPersonalPINResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * RestorePhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Moves a phone number from the <b>Deletion queue</b> back into the phone number
 */
RestorePhoneNumberResponse * ChimeClient::restorePhoneNumber(const RestorePhoneNumberRequest &request)
{
    return qobject_cast<RestorePhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * SearchAvailablePhoneNumbersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for phone numbers that can be ordered. For US numbers, provide at least one of the following search filters:
 * <code>AreaCode</code>, <code>City</code>, <code>State</code>, or <code>TollFreePrefix</code>. If you provide
 * <code>City</code>, you must also provide <code>State</code>. Numbers outside the US only support the
 * <code>PhoneNumberType</code> filter, which you must
 */
SearchAvailablePhoneNumbersResponse * ChimeClient::searchAvailablePhoneNumbers(const SearchAvailablePhoneNumbersRequest &request)
{
    return qobject_cast<SearchAvailablePhoneNumbersResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * SendChannelMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a message to a particular channel that the member is a part
 *
 * of> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 *
 * header>
 *
 * Also, <code>STANDARD</code> messages can contain 4KB of data and the 1KB of metadata. <code>CONTROL</code> messages can
 * contain 30 bytes of data and no
 */
SendChannelMessageResponse * ChimeClient::sendChannelMessage(const SendChannelMessageRequest &request)
{
    return qobject_cast<SendChannelMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * StartMeetingTranscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts transcription for the specified <code>meetingId</code>.
 */
StartMeetingTranscriptionResponse * ChimeClient::startMeetingTranscription(const StartMeetingTranscriptionRequest &request)
{
    return qobject_cast<StartMeetingTranscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * StopMeetingTranscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops transcription for the specified
 */
StopMeetingTranscriptionResponse * ChimeClient::stopMeetingTranscription(const StopMeetingTranscriptionRequest &request)
{
    return qobject_cast<StopMeetingTranscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * TagAttendeeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies the specified tags to the specified Amazon Chime SDK
 */
TagAttendeeResponse * ChimeClient::tagAttendee(const TagAttendeeRequest &request)
{
    return qobject_cast<TagAttendeeResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * TagMeetingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies the specified tags to the specified Amazon Chime SDK
 */
TagMeetingResponse * ChimeClient::tagMeeting(const TagMeetingRequest &request)
{
    return qobject_cast<TagMeetingResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies the specified tags to the specified Amazon Chime SDK meeting
 */
TagResourceResponse * ChimeClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UntagAttendeeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Untags the specified tags from the specified Amazon Chime SDK
 */
UntagAttendeeResponse * ChimeClient::untagAttendee(const UntagAttendeeRequest &request)
{
    return qobject_cast<UntagAttendeeResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UntagMeetingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Untags the specified tags from the specified Amazon Chime SDK
 */
UntagMeetingResponse * ChimeClient::untagMeeting(const UntagMeetingRequest &request)
{
    return qobject_cast<UntagMeetingResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Untags the specified tags from the specified Amazon Chime SDK meeting
 */
UntagResourceResponse * ChimeClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates account details for the specified Amazon Chime account. Currently, only account name and default license updates
 * are supported for this
 */
UpdateAccountResponse * ChimeClient::updateAccount(const UpdateAccountRequest &request)
{
    return qobject_cast<UpdateAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateAccountSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings for the specified Amazon Chime account. You can update settings for remote control of shared
 * screens, or for the dial-out option. For more information about these settings, see <a
 * href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the Policies Page</a> in the <i>Amazon Chime
 * Administration
 */
UpdateAccountSettingsResponse * ChimeClient::updateAccountSettings(const UpdateAccountSettingsRequest &request)
{
    return qobject_cast<UpdateAccountSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateAppInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates <code>AppInstance</code>
 */
UpdateAppInstanceResponse * ChimeClient::updateAppInstance(const UpdateAppInstanceRequest &request)
{
    return qobject_cast<UpdateAppInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the details of an <code>AppInstanceUser</code>. You can update names and
 */
UpdateAppInstanceUserResponse * ChimeClient::updateAppInstanceUser(const UpdateAppInstanceUserRequest &request)
{
    return qobject_cast<UpdateAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateBotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status of the specified bot, such as starting or stopping the bot from running in your Amazon Chime
 * Enterprise
 */
UpdateBotResponse * ChimeClient::updateBot(const UpdateBotRequest &request)
{
    return qobject_cast<UpdateBotResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a channel's
 *
 * attributes>
 *
 * <b>Restriction</b>: You can't change a channel's privacy.
 *
 * </p <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
UpdateChannelResponse * ChimeClient::updateChannel(const UpdateChannelRequest &request)
{
    return qobject_cast<UpdateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateChannelMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the content of a
 *
 * message> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
UpdateChannelMessageResponse * ChimeClient::updateChannelMessage(const UpdateChannelMessageRequest &request)
{
    return qobject_cast<UpdateChannelMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateChannelReadMarkerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The details of the time when a user last read messages in a
 *
 * channel> <note>
 *
 * The <code>x-amz-chime-bearer</code> request header is mandatory. Use the <code>AppInstanceUserArn</code> of the user
 * that makes the API call as the value in the
 */
UpdateChannelReadMarkerResponse * ChimeClient::updateChannelReadMarker(const UpdateChannelReadMarkerRequest &request)
{
    return qobject_cast<UpdateChannelReadMarkerResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateGlobalSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates global settings for the administrator's AWS account, such as Amazon Chime Business Calling and Amazon Chime
 * Voice Connector
 */
UpdateGlobalSettingsResponse * ChimeClient::updateGlobalSettings(const UpdateGlobalSettingsRequest &request)
{
    return qobject_cast<UpdateGlobalSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdatePhoneNumberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates phone number details, such as product type or calling name, for the specified phone number ID. You can update
 * one phone number detail at a time. For example, you can update either the product type or the calling name in one
 *
 * action>
 *
 * For toll-free numbers, you cannot use the Amazon Chime Business Calling product type. For numbers outside the U.S., you
 * must use the Amazon Chime SIP Media Application Dial-In product
 *
 * type>
 *
 * Updates to outbound calling names can take 72 hours to complete. Pending updates to outbound calling names must be
 * complete before you can request another
 */
UpdatePhoneNumberResponse * ChimeClient::updatePhoneNumber(const UpdatePhoneNumberRequest &request)
{
    return qobject_cast<UpdatePhoneNumberResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdatePhoneNumberSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the phone number settings for the administrator's AWS account, such as the default outbound calling name. You
 * can update the default outbound calling name once every seven days. Outbound calling names can take up to 72 hours to
 */
UpdatePhoneNumberSettingsResponse * ChimeClient::updatePhoneNumberSettings(const UpdatePhoneNumberSettingsRequest &request)
{
    return qobject_cast<UpdatePhoneNumberSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateProxySessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified proxy session details, such as voice or SMS
 */
UpdateProxySessionResponse * ChimeClient::updateProxySession(const UpdateProxySessionRequest &request)
{
    return qobject_cast<UpdateProxySessionResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates room details, such as the room name, for a room in an Amazon Chime Enterprise
 */
UpdateRoomResponse * ChimeClient::updateRoom(const UpdateRoomRequest &request)
{
    return qobject_cast<UpdateRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateRoomMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates room membership details, such as the member role, for a room in an Amazon Chime Enterprise account. The member
 * role designates whether the member is a chat room administrator or a general chat room member. The member role can be
 * updated only for user
 */
UpdateRoomMembershipResponse * ChimeClient::updateRoomMembership(const UpdateRoomMembershipRequest &request)
{
    return qobject_cast<UpdateRoomMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateSipMediaApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the details of the specified SIP media
 */
UpdateSipMediaApplicationResponse * ChimeClient::updateSipMediaApplication(const UpdateSipMediaApplicationRequest &request)
{
    return qobject_cast<UpdateSipMediaApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateSipMediaApplicationCallResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Invokes the AWS Lambda function associated with the SIP media application and transaction ID in an update request. The
 * Lambda function can then return a new set of
 */
UpdateSipMediaApplicationCallResponse * ChimeClient::updateSipMediaApplicationCall(const UpdateSipMediaApplicationCallRequest &request)
{
    return qobject_cast<UpdateSipMediaApplicationCallResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateSipRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the details of the specified SIP
 */
UpdateSipRuleResponse * ChimeClient::updateSipRule(const UpdateSipRuleRequest &request)
{
    return qobject_cast<UpdateSipRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates user details for a specified user ID. Currently, only <code>LicenseType</code> updates are supported for this
 */
UpdateUserResponse * ChimeClient::updateUser(const UpdateUserRequest &request)
{
    return qobject_cast<UpdateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateUserSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the settings for the specified user, such as phone number
 */
UpdateUserSettingsResponse * ChimeClient::updateUserSettings(const UpdateUserSettingsRequest &request)
{
    return qobject_cast<UpdateUserSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateVoiceConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates details for the specified Amazon Chime Voice
 */
UpdateVoiceConnectorResponse * ChimeClient::updateVoiceConnector(const UpdateVoiceConnectorRequest &request)
{
    return qobject_cast<UpdateVoiceConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * UpdateVoiceConnectorGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates details of the specified Amazon Chime Voice Connector group, such as the name and Amazon Chime Voice Connector
 * priority
 */
UpdateVoiceConnectorGroupResponse * ChimeClient::updateVoiceConnectorGroup(const UpdateVoiceConnectorGroupRequest &request)
{
    return qobject_cast<UpdateVoiceConnectorGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeClient service, and returns a pointer to an
 * ValidateE911AddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Validates an address to be used for 911 calls made with Amazon Chime Voice Connectors. You can use validated addresses
 * in a Presence Information Data Format Location Object file that you include in SIP requests. That helps ensure that
 * addresses are routed to the appropriate Public Safety Answering
 */
ValidateE911AddressResponse * ChimeClient::validateE911Address(const ValidateE911AddressRequest &request)
{
    return qobject_cast<ValidateE911AddressResponse *>(send(request));
}

/*!
 * \class QtAws::Chime::ChimeClientPrivate
 * \brief The ChimeClientPrivate class provides private implementation for ChimeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsChime
 */

/*!
 * Constructs a ChimeClientPrivate object with public implementation \a q.
 */
ChimeClientPrivate::ChimeClientPrivate(ChimeClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Chime
} // namespace QtAws

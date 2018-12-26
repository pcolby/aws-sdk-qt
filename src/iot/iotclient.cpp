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

#include "iotclient.h"
#include "iotclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptcertificatetransferrequest.h"
#include "acceptcertificatetransferresponse.h"
#include "addthingtobillinggrouprequest.h"
#include "addthingtobillinggroupresponse.h"
#include "addthingtothinggrouprequest.h"
#include "addthingtothinggroupresponse.h"
#include "associatetargetswithjobrequest.h"
#include "associatetargetswithjobresponse.h"
#include "attachpolicyrequest.h"
#include "attachpolicyresponse.h"
#include "attachprincipalpolicyrequest.h"
#include "attachprincipalpolicyresponse.h"
#include "attachsecurityprofilerequest.h"
#include "attachsecurityprofileresponse.h"
#include "attachthingprincipalrequest.h"
#include "attachthingprincipalresponse.h"
#include "cancelaudittaskrequest.h"
#include "cancelaudittaskresponse.h"
#include "cancelcertificatetransferrequest.h"
#include "cancelcertificatetransferresponse.h"
#include "canceljobrequest.h"
#include "canceljobresponse.h"
#include "canceljobexecutionrequest.h"
#include "canceljobexecutionresponse.h"
#include "cleardefaultauthorizerrequest.h"
#include "cleardefaultauthorizerresponse.h"
#include "createauthorizerrequest.h"
#include "createauthorizerresponse.h"
#include "createbillinggrouprequest.h"
#include "createbillinggroupresponse.h"
#include "createcertificatefromcsrrequest.h"
#include "createcertificatefromcsrresponse.h"
#include "createdynamicthinggrouprequest.h"
#include "createdynamicthinggroupresponse.h"
#include "createjobrequest.h"
#include "createjobresponse.h"
#include "createkeysandcertificaterequest.h"
#include "createkeysandcertificateresponse.h"
#include "createotaupdaterequest.h"
#include "createotaupdateresponse.h"
#include "createpolicyrequest.h"
#include "createpolicyresponse.h"
#include "createpolicyversionrequest.h"
#include "createpolicyversionresponse.h"
#include "createrolealiasrequest.h"
#include "createrolealiasresponse.h"
#include "createscheduledauditrequest.h"
#include "createscheduledauditresponse.h"
#include "createsecurityprofilerequest.h"
#include "createsecurityprofileresponse.h"
#include "createstreamrequest.h"
#include "createstreamresponse.h"
#include "createthingrequest.h"
#include "createthingresponse.h"
#include "createthinggrouprequest.h"
#include "createthinggroupresponse.h"
#include "createthingtyperequest.h"
#include "createthingtyperesponse.h"
#include "createtopicrulerequest.h"
#include "createtopicruleresponse.h"
#include "deleteaccountauditconfigurationrequest.h"
#include "deleteaccountauditconfigurationresponse.h"
#include "deleteauthorizerrequest.h"
#include "deleteauthorizerresponse.h"
#include "deletebillinggrouprequest.h"
#include "deletebillinggroupresponse.h"
#include "deletecacertificaterequest.h"
#include "deletecacertificateresponse.h"
#include "deletecertificaterequest.h"
#include "deletecertificateresponse.h"
#include "deletedynamicthinggrouprequest.h"
#include "deletedynamicthinggroupresponse.h"
#include "deletejobrequest.h"
#include "deletejobresponse.h"
#include "deletejobexecutionrequest.h"
#include "deletejobexecutionresponse.h"
#include "deleteotaupdaterequest.h"
#include "deleteotaupdateresponse.h"
#include "deletepolicyrequest.h"
#include "deletepolicyresponse.h"
#include "deletepolicyversionrequest.h"
#include "deletepolicyversionresponse.h"
#include "deleteregistrationcoderequest.h"
#include "deleteregistrationcoderesponse.h"
#include "deleterolealiasrequest.h"
#include "deleterolealiasresponse.h"
#include "deletescheduledauditrequest.h"
#include "deletescheduledauditresponse.h"
#include "deletesecurityprofilerequest.h"
#include "deletesecurityprofileresponse.h"
#include "deletestreamrequest.h"
#include "deletestreamresponse.h"
#include "deletethingrequest.h"
#include "deletethingresponse.h"
#include "deletethinggrouprequest.h"
#include "deletethinggroupresponse.h"
#include "deletethingtyperequest.h"
#include "deletethingtyperesponse.h"
#include "deletetopicrulerequest.h"
#include "deletetopicruleresponse.h"
#include "deletev2logginglevelrequest.h"
#include "deletev2logginglevelresponse.h"
#include "deprecatethingtyperequest.h"
#include "deprecatethingtyperesponse.h"
#include "describeaccountauditconfigurationrequest.h"
#include "describeaccountauditconfigurationresponse.h"
#include "describeaudittaskrequest.h"
#include "describeaudittaskresponse.h"
#include "describeauthorizerrequest.h"
#include "describeauthorizerresponse.h"
#include "describebillinggrouprequest.h"
#include "describebillinggroupresponse.h"
#include "describecacertificaterequest.h"
#include "describecacertificateresponse.h"
#include "describecertificaterequest.h"
#include "describecertificateresponse.h"
#include "describedefaultauthorizerrequest.h"
#include "describedefaultauthorizerresponse.h"
#include "describeendpointrequest.h"
#include "describeendpointresponse.h"
#include "describeeventconfigurationsrequest.h"
#include "describeeventconfigurationsresponse.h"
#include "describeindexrequest.h"
#include "describeindexresponse.h"
#include "describejobrequest.h"
#include "describejobresponse.h"
#include "describejobexecutionrequest.h"
#include "describejobexecutionresponse.h"
#include "describerolealiasrequest.h"
#include "describerolealiasresponse.h"
#include "describescheduledauditrequest.h"
#include "describescheduledauditresponse.h"
#include "describesecurityprofilerequest.h"
#include "describesecurityprofileresponse.h"
#include "describestreamrequest.h"
#include "describestreamresponse.h"
#include "describethingrequest.h"
#include "describethingresponse.h"
#include "describethinggrouprequest.h"
#include "describethinggroupresponse.h"
#include "describethingregistrationtaskrequest.h"
#include "describethingregistrationtaskresponse.h"
#include "describethingtyperequest.h"
#include "describethingtyperesponse.h"
#include "detachpolicyrequest.h"
#include "detachpolicyresponse.h"
#include "detachprincipalpolicyrequest.h"
#include "detachprincipalpolicyresponse.h"
#include "detachsecurityprofilerequest.h"
#include "detachsecurityprofileresponse.h"
#include "detachthingprincipalrequest.h"
#include "detachthingprincipalresponse.h"
#include "disabletopicrulerequest.h"
#include "disabletopicruleresponse.h"
#include "enabletopicrulerequest.h"
#include "enabletopicruleresponse.h"
#include "geteffectivepoliciesrequest.h"
#include "geteffectivepoliciesresponse.h"
#include "getindexingconfigurationrequest.h"
#include "getindexingconfigurationresponse.h"
#include "getjobdocumentrequest.h"
#include "getjobdocumentresponse.h"
#include "getloggingoptionsrequest.h"
#include "getloggingoptionsresponse.h"
#include "getotaupdaterequest.h"
#include "getotaupdateresponse.h"
#include "getpolicyrequest.h"
#include "getpolicyresponse.h"
#include "getpolicyversionrequest.h"
#include "getpolicyversionresponse.h"
#include "getregistrationcoderequest.h"
#include "getregistrationcoderesponse.h"
#include "gettopicrulerequest.h"
#include "gettopicruleresponse.h"
#include "getv2loggingoptionsrequest.h"
#include "getv2loggingoptionsresponse.h"
#include "listactiveviolationsrequest.h"
#include "listactiveviolationsresponse.h"
#include "listattachedpoliciesrequest.h"
#include "listattachedpoliciesresponse.h"
#include "listauditfindingsrequest.h"
#include "listauditfindingsresponse.h"
#include "listaudittasksrequest.h"
#include "listaudittasksresponse.h"
#include "listauthorizersrequest.h"
#include "listauthorizersresponse.h"
#include "listbillinggroupsrequest.h"
#include "listbillinggroupsresponse.h"
#include "listcacertificatesrequest.h"
#include "listcacertificatesresponse.h"
#include "listcertificatesrequest.h"
#include "listcertificatesresponse.h"
#include "listcertificatesbycarequest.h"
#include "listcertificatesbycaresponse.h"
#include "listindicesrequest.h"
#include "listindicesresponse.h"
#include "listjobexecutionsforjobrequest.h"
#include "listjobexecutionsforjobresponse.h"
#include "listjobexecutionsforthingrequest.h"
#include "listjobexecutionsforthingresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "listotaupdatesrequest.h"
#include "listotaupdatesresponse.h"
#include "listoutgoingcertificatesrequest.h"
#include "listoutgoingcertificatesresponse.h"
#include "listpoliciesrequest.h"
#include "listpoliciesresponse.h"
#include "listpolicyprincipalsrequest.h"
#include "listpolicyprincipalsresponse.h"
#include "listpolicyversionsrequest.h"
#include "listpolicyversionsresponse.h"
#include "listprincipalpoliciesrequest.h"
#include "listprincipalpoliciesresponse.h"
#include "listprincipalthingsrequest.h"
#include "listprincipalthingsresponse.h"
#include "listrolealiasesrequest.h"
#include "listrolealiasesresponse.h"
#include "listscheduledauditsrequest.h"
#include "listscheduledauditsresponse.h"
#include "listsecurityprofilesrequest.h"
#include "listsecurityprofilesresponse.h"
#include "listsecurityprofilesfortargetrequest.h"
#include "listsecurityprofilesfortargetresponse.h"
#include "liststreamsrequest.h"
#include "liststreamsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtargetsforpolicyrequest.h"
#include "listtargetsforpolicyresponse.h"
#include "listtargetsforsecurityprofilerequest.h"
#include "listtargetsforsecurityprofileresponse.h"
#include "listthinggroupsrequest.h"
#include "listthinggroupsresponse.h"
#include "listthinggroupsforthingrequest.h"
#include "listthinggroupsforthingresponse.h"
#include "listthingprincipalsrequest.h"
#include "listthingprincipalsresponse.h"
#include "listthingregistrationtaskreportsrequest.h"
#include "listthingregistrationtaskreportsresponse.h"
#include "listthingregistrationtasksrequest.h"
#include "listthingregistrationtasksresponse.h"
#include "listthingtypesrequest.h"
#include "listthingtypesresponse.h"
#include "listthingsrequest.h"
#include "listthingsresponse.h"
#include "listthingsinbillinggrouprequest.h"
#include "listthingsinbillinggroupresponse.h"
#include "listthingsinthinggrouprequest.h"
#include "listthingsinthinggroupresponse.h"
#include "listtopicrulesrequest.h"
#include "listtopicrulesresponse.h"
#include "listv2logginglevelsrequest.h"
#include "listv2logginglevelsresponse.h"
#include "listviolationeventsrequest.h"
#include "listviolationeventsresponse.h"
#include "registercacertificaterequest.h"
#include "registercacertificateresponse.h"
#include "registercertificaterequest.h"
#include "registercertificateresponse.h"
#include "registerthingrequest.h"
#include "registerthingresponse.h"
#include "rejectcertificatetransferrequest.h"
#include "rejectcertificatetransferresponse.h"
#include "removethingfrombillinggrouprequest.h"
#include "removethingfrombillinggroupresponse.h"
#include "removethingfromthinggrouprequest.h"
#include "removethingfromthinggroupresponse.h"
#include "replacetopicrulerequest.h"
#include "replacetopicruleresponse.h"
#include "searchindexrequest.h"
#include "searchindexresponse.h"
#include "setdefaultauthorizerrequest.h"
#include "setdefaultauthorizerresponse.h"
#include "setdefaultpolicyversionrequest.h"
#include "setdefaultpolicyversionresponse.h"
#include "setloggingoptionsrequest.h"
#include "setloggingoptionsresponse.h"
#include "setv2logginglevelrequest.h"
#include "setv2logginglevelresponse.h"
#include "setv2loggingoptionsrequest.h"
#include "setv2loggingoptionsresponse.h"
#include "startondemandaudittaskrequest.h"
#include "startondemandaudittaskresponse.h"
#include "startthingregistrationtaskrequest.h"
#include "startthingregistrationtaskresponse.h"
#include "stopthingregistrationtaskrequest.h"
#include "stopthingregistrationtaskresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testauthorizationrequest.h"
#include "testauthorizationresponse.h"
#include "testinvokeauthorizerrequest.h"
#include "testinvokeauthorizerresponse.h"
#include "transfercertificaterequest.h"
#include "transfercertificateresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaccountauditconfigurationrequest.h"
#include "updateaccountauditconfigurationresponse.h"
#include "updateauthorizerrequest.h"
#include "updateauthorizerresponse.h"
#include "updatebillinggrouprequest.h"
#include "updatebillinggroupresponse.h"
#include "updatecacertificaterequest.h"
#include "updatecacertificateresponse.h"
#include "updatecertificaterequest.h"
#include "updatecertificateresponse.h"
#include "updatedynamicthinggrouprequest.h"
#include "updatedynamicthinggroupresponse.h"
#include "updateeventconfigurationsrequest.h"
#include "updateeventconfigurationsresponse.h"
#include "updateindexingconfigurationrequest.h"
#include "updateindexingconfigurationresponse.h"
#include "updatejobrequest.h"
#include "updatejobresponse.h"
#include "updaterolealiasrequest.h"
#include "updaterolealiasresponse.h"
#include "updatescheduledauditrequest.h"
#include "updatescheduledauditresponse.h"
#include "updatesecurityprofilerequest.h"
#include "updatesecurityprofileresponse.h"
#include "updatestreamrequest.h"
#include "updatestreamresponse.h"
#include "updatethingrequest.h"
#include "updatethingresponse.h"
#include "updatethinggrouprequest.h"
#include "updatethinggroupresponse.h"
#include "updatethinggroupsforthingrequest.h"
#include "updatethinggroupsforthingresponse.h"
#include "validatesecurityprofilebehaviorsrequest.h"
#include "validatesecurityprofilebehaviorsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoT
 * \brief Contains classess for accessing AWS IoT.
 *
 * \inmodule QtAwsIoT
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::IoTClient
 * \brief The IoTClient class provides access to the AWS IoT service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 */

/*!
 * \brief Constructs a IoTClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTClient::IoTClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTClientPrivate(this), parent)
{
    Q_D(IoTClient);
    d->apiVersion = QStringLiteral("2015-05-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("iot");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT");
    d->serviceName = QStringLiteral("execute-api");
}

/*!
 * \overload IoTClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTClient::IoTClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTClientPrivate(this), parent)
{
    Q_D(IoTClient);
    d->apiVersion = QStringLiteral("2015-05-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("iot");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT");
    d->serviceName = QStringLiteral("execute-api");
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AcceptCertificateTransferResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts a pending certificate transfer. The default state of the certificate is
 *
 * INACTIVE>
 *
 * To check for pending certificate transfers, call <a>ListCertificates</a> to enumerate your
 */
AcceptCertificateTransferResponse * IoTClient::acceptCertificateTransfer(const AcceptCertificateTransferRequest &request)
{
    return qobject_cast<AcceptCertificateTransferResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AddThingToBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a thing to a billing
 */
AddThingToBillingGroupResponse * IoTClient::addThingToBillingGroup(const AddThingToBillingGroupRequest &request)
{
    return qobject_cast<AddThingToBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AddThingToThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a thing to a thing
 */
AddThingToThingGroupResponse * IoTClient::addThingToThingGroup(const AddThingToThingGroupRequest &request)
{
    return qobject_cast<AddThingToThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AssociateTargetsWithJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a group with a continuous job. The following criteria must be met:
 *
 * </p <ul> <li>
 *
 * The job must have been created with the <code>targetSelection</code> field set to
 *
 * "CONTINUOUS"> </li> <li>
 *
 * The job status must currently be
 *
 * "IN_PROGRESS"> </li> <li>
 *
 * The total number of targets associated with a job must not exceed
 */
AssociateTargetsWithJobResponse * IoTClient::associateTargetsWithJob(const AssociateTargetsWithJobRequest &request)
{
    return qobject_cast<AssociateTargetsWithJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AttachPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a policy to the specified
 */
AttachPolicyResponse * IoTClient::attachPolicy(const AttachPolicyRequest &request)
{
    return qobject_cast<AttachPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AttachPrincipalPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches the specified policy to the specified principal (certificate or other
 *
 * credential)>
 *
 * <b>Note:</b> This API is deprecated. Please use <a>AttachPolicy</a>
 */
AttachPrincipalPolicyResponse * IoTClient::attachPrincipalPolicy(const AttachPrincipalPolicyRequest &request)
{
    return qobject_cast<AttachPrincipalPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AttachSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a Device Defender security profile with a thing group or with this account. Each thing group or account can
 * have up to five security profiles associated with
 */
AttachSecurityProfileResponse * IoTClient::attachSecurityProfile(const AttachSecurityProfileRequest &request)
{
    return qobject_cast<AttachSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AttachThingPrincipalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches the specified principal to the specified
 */
AttachThingPrincipalResponse * IoTClient::attachThingPrincipal(const AttachThingPrincipalRequest &request)
{
    return qobject_cast<AttachThingPrincipalResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CancelAuditTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an audit that is in progress. The audit can be either scheduled or on-demand. If the audit is not in progress,
 * an "InvalidRequestException"
 */
CancelAuditTaskResponse * IoTClient::cancelAuditTask(const CancelAuditTaskRequest &request)
{
    return qobject_cast<CancelAuditTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CancelCertificateTransferResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a pending transfer for the specified
 *
 * certificate>
 *
 * <b>Note</b> Only the transfer source account can use this operation to cancel a transfer. (Transfer destinations can use
 * <a>RejectCertificateTransfer</a> instead.) After transfer, AWS IoT returns the certificate to the source account in the
 * INACTIVE state. After the destination account has accepted the transfer, the transfer cannot be
 *
 * cancelled>
 *
 * After a certificate transfer is cancelled, the status of the certificate changes from PENDING_TRANSFER to
 */
CancelCertificateTransferResponse * IoTClient::cancelCertificateTransfer(const CancelCertificateTransferRequest &request)
{
    return qobject_cast<CancelCertificateTransferResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CancelJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a
 */
CancelJobResponse * IoTClient::cancelJob(const CancelJobRequest &request)
{
    return qobject_cast<CancelJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CancelJobExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the execution of a job for a given
 */
CancelJobExecutionResponse * IoTClient::cancelJobExecution(const CancelJobExecutionRequest &request)
{
    return qobject_cast<CancelJobExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ClearDefaultAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Clears the default
 */
ClearDefaultAuthorizerResponse * IoTClient::clearDefaultAuthorizer(const ClearDefaultAuthorizerRequest &request)
{
    return qobject_cast<ClearDefaultAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an
 */
CreateAuthorizerResponse * IoTClient::createAuthorizer(const CreateAuthorizerRequest &request)
{
    return qobject_cast<CreateAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a billing
 */
CreateBillingGroupResponse * IoTClient::createBillingGroup(const CreateBillingGroupRequest &request)
{
    return qobject_cast<CreateBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateCertificateFromCsrResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an X.509 certificate using the specified certificate signing
 *
 * request>
 *
 * <b>Note:</b> The CSR must include a public key that is either an RSA key with a length of at least 2048 bits or an ECC
 * key from NIST P-256 or NIST P-384 curves.
 *
 * </p
 *
 * <b>Note:</b> Reusing the same certificate signing request (CSR) results in a distinct
 *
 * certificate>
 *
 * You can create multiple certificates in a batch by creating a directory, copying multiple .csr files into that
 * directory, and then specifying that directory on the command line. The following commands show how to create a batch of
 * certificates given a batch of
 *
 * CSRs>
 *
 * Assuming a set of CSRs are located inside of the directory
 *
 * my-csr-directory>
 *
 * On Linux and OS X, the command
 *
 * is>
 *
 * $ ls my-csr-directory/ | xargs -I {} aws iot create-certificate-from-csr --certificate-signing-request
 *
 * file://my-csr-directory/{>
 *
 * This command lists all of the CSRs in my-csr-directory and pipes each CSR file name to the aws iot
 * create-certificate-from-csr AWS CLI command to create a certificate for the corresponding
 *
 * CSR>
 *
 * The aws iot create-certificate-from-csr part of the command can also be run in parallel to speed up the certificate
 * creation
 *
 * process>
 *
 * $ ls my-csr-directory/ | xargs -P 10 -I {} aws iot create-certificate-from-csr --certificate-signing-request
 *
 * file://my-csr-directory/{>
 *
 * On Windows PowerShell, the command to create certificates for all CSRs in my-csr-directory
 *
 * is>
 *
 * &gt; ls -Name my-csr-directory | %{aws iot create-certificate-from-csr --certificate-signing-request
 *
 * file://my-csr-directory/$_>
 *
 * On a Windows command prompt, the command to create certificates for all CSRs in my-csr-directory
 *
 * is>
 *
 * &gt; forfiles /p my-csr-directory /c "cmd /c aws iot create-certificate-from-csr --certificate-signing-request
 */
CreateCertificateFromCsrResponse * IoTClient::createCertificateFromCsr(const CreateCertificateFromCsrRequest &request)
{
    return qobject_cast<CreateCertificateFromCsrResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateDynamicThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a dynamic thing
 */
CreateDynamicThingGroupResponse * IoTClient::createDynamicThingGroup(const CreateDynamicThingGroupRequest &request)
{
    return qobject_cast<CreateDynamicThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateJobResponse * IoTClient::createJob(const CreateJobRequest &request)
{
    return qobject_cast<CreateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateKeysAndCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a 2048-bit RSA key pair and issues an X.509 certificate using the issued public
 *
 * key>
 *
 * <b>Note</b> This is the only time AWS IoT issues the private key for this certificate, so it is important to keep it in
 * a secure
 */
CreateKeysAndCertificateResponse * IoTClient::createKeysAndCertificate(const CreateKeysAndCertificateRequest &request)
{
    return qobject_cast<CreateKeysAndCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateOTAUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS IoT OTAUpdate on a target group of things or
 */
CreateOTAUpdateResponse * IoTClient::createOTAUpdate(const CreateOTAUpdateRequest &request)
{
    return qobject_cast<CreateOTAUpdateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreatePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS IoT
 *
 * policy>
 *
 * The created policy is the default version for the policy. This operation creates a policy version with a version
 * identifier of <b>1</b> and sets <b>1</b> as the policy's default
 */
CreatePolicyResponse * IoTClient::createPolicy(const CreatePolicyRequest &request)
{
    return qobject_cast<CreatePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreatePolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new version of the specified AWS IoT policy. To update a policy, create a new policy version. A managed policy
 * can have up to five versions. If the policy has five versions, you must use <a>DeletePolicyVersion</a> to delete an
 * existing version before you create a new
 *
 * one>
 *
 * Optionally, you can set the new version as the policy's default version. The default version is the operative version
 * (that is, the version that is in effect for the certificates to which the policy is
 */
CreatePolicyVersionResponse * IoTClient::createPolicyVersion(const CreatePolicyVersionRequest &request)
{
    return qobject_cast<CreatePolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateRoleAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a role
 */
CreateRoleAliasResponse * IoTClient::createRoleAlias(const CreateRoleAliasRequest &request)
{
    return qobject_cast<CreateRoleAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateScheduledAuditResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a scheduled audit that is run at a specified time
 */
CreateScheduledAuditResponse * IoTClient::createScheduledAudit(const CreateScheduledAuditRequest &request)
{
    return qobject_cast<CreateScheduledAuditResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Device Defender security
 */
CreateSecurityProfileResponse * IoTClient::createSecurityProfile(const CreateSecurityProfileRequest &request)
{
    return qobject_cast<CreateSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a stream for delivering one or more large files in chunks over MQTT. A stream transports data bytes in chunks or
 * blocks packaged as MQTT messages from a source like S3. You can have one or more files associated with a stream. The
 * total size of a file associated with the stream cannot exceed more than 2 MB. The stream will be created with version 0.
 * If a stream is created with the same streamID as a stream that existed and was deleted within last 90 days, we will
 * resurrect that old stream by incrementing the version by
 */
CreateStreamResponse * IoTClient::createStream(const CreateStreamRequest &request)
{
    return qobject_cast<CreateStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a thing record in the
 *
 * registry> <note>
 *
 * This is a control plane operation. See <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/authorization.html">Authorization</a> for information about
 * authorizing control plane
 */
CreateThingResponse * IoTClient::createThing(const CreateThingRequest &request)
{
    return qobject_cast<CreateThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a thing
 *
 * group> <note>
 *
 * This is a control plane operation. See <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/authorization.html">Authorization</a> for information about
 * authorizing control plane
 */
CreateThingGroupResponse * IoTClient::createThingGroup(const CreateThingGroupRequest &request)
{
    return qobject_cast<CreateThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateThingTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new thing
 */
CreateThingTypeResponse * IoTClient::createThingType(const CreateThingTypeRequest &request)
{
    return qobject_cast<CreateThingTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateTopicRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a rule. Creating rules is an administrator-level action. Any user who has permission to create rules will be
 * able to access data processed by the
 */
CreateTopicRuleResponse * IoTClient::createTopicRule(const CreateTopicRuleRequest &request)
{
    return qobject_cast<CreateTopicRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteAccountAuditConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores the default settings for Device Defender audits for this account. Any configuration data you entered is deleted
 * and all audit checks are reset to disabled.
 */
DeleteAccountAuditConfigurationResponse * IoTClient::deleteAccountAuditConfiguration(const DeleteAccountAuditConfigurationRequest &request)
{
    return qobject_cast<DeleteAccountAuditConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteAuthorizerResponse * IoTClient::deleteAuthorizer(const DeleteAuthorizerRequest &request)
{
    return qobject_cast<DeleteAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the billing
 */
DeleteBillingGroupResponse * IoTClient::deleteBillingGroup(const DeleteBillingGroupRequest &request)
{
    return qobject_cast<DeleteBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteCACertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a registered CA
 */
DeleteCACertificateResponse * IoTClient::deleteCACertificate(const DeleteCACertificateRequest &request)
{
    return qobject_cast<DeleteCACertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * certificate>
 *
 * A certificate cannot be deleted if it has a policy attached to it or if its status is set to ACTIVE. To delete a
 * certificate, first use the <a>DetachPrincipalPolicy</a> API to detach all policies. Next, use the
 * <a>UpdateCertificate</a> API to set the certificate to the INACTIVE
 */
DeleteCertificateResponse * IoTClient::deleteCertificate(const DeleteCertificateRequest &request)
{
    return qobject_cast<DeleteCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteDynamicThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a dynamic thing
 */
DeleteDynamicThingGroupResponse * IoTClient::deleteDynamicThingGroup(const DeleteDynamicThingGroupRequest &request)
{
    return qobject_cast<DeleteDynamicThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a job and its related job
 *
 * executions>
 *
 * Deleting a job may take time, depending on the number of job executions created for the job and various other factors.
 * While the job is being deleted, the status of the job will be shown as "DELETION_IN_PROGRESS". Attempting to delete or
 * cancel a job whose status is already "DELETION_IN_PROGRESS" will result in an
 *
 * error>
 *
 * Only 10 jobs may have status "DELETION_IN_PROGRESS" at the same time, or a LimitExceededException will
 */
DeleteJobResponse * IoTClient::deleteJob(const DeleteJobRequest &request)
{
    return qobject_cast<DeleteJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteJobExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a job
 */
DeleteJobExecutionResponse * IoTClient::deleteJobExecution(const DeleteJobExecutionRequest &request)
{
    return qobject_cast<DeleteJobExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteOTAUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an OTA
 */
DeleteOTAUpdateResponse * IoTClient::deleteOTAUpdate(const DeleteOTAUpdateRequest &request)
{
    return qobject_cast<DeleteOTAUpdateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeletePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * policy>
 *
 * A policy cannot be deleted if it has non-default versions or it is attached to any
 *
 * certificate>
 *
 * To delete a policy, use the DeletePolicyVersion API to delete all non-default versions of the policy; use the
 * DetachPrincipalPolicy API to detach the policy from any certificate; and then use the DeletePolicy API to delete the
 *
 * policy>
 *
 * When a policy is deleted using DeletePolicy, its default version is deleted with
 */
DeletePolicyResponse * IoTClient::deletePolicy(const DeletePolicyRequest &request)
{
    return qobject_cast<DeletePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeletePolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified version of the specified policy. You cannot delete the default version of a policy using this API.
 * To delete the default version of a policy, use <a>DeletePolicy</a>. To find out which version of a policy is marked as
 * the default version, use
 */
DeletePolicyVersionResponse * IoTClient::deletePolicyVersion(const DeletePolicyVersionRequest &request)
{
    return qobject_cast<DeletePolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteRegistrationCodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a CA certificate registration
 */
DeleteRegistrationCodeResponse * IoTClient::deleteRegistrationCode(const DeleteRegistrationCodeRequest &request)
{
    return qobject_cast<DeleteRegistrationCodeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteRoleAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a role
 */
DeleteRoleAliasResponse * IoTClient::deleteRoleAlias(const DeleteRoleAliasRequest &request)
{
    return qobject_cast<DeleteRoleAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteScheduledAuditResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a scheduled
 */
DeleteScheduledAuditResponse * IoTClient::deleteScheduledAudit(const DeleteScheduledAuditRequest &request)
{
    return qobject_cast<DeleteScheduledAuditResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Device Defender security
 */
DeleteSecurityProfileResponse * IoTClient::deleteSecurityProfile(const DeleteSecurityProfileRequest &request)
{
    return qobject_cast<DeleteSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteStreamResponse * IoTClient::deleteStream(const DeleteStreamRequest &request)
{
    return qobject_cast<DeleteStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified thing. Returns successfully with no error if the deletion is successful or you specify a thing
 * that doesn't
 */
DeleteThingResponse * IoTClient::deleteThing(const DeleteThingRequest &request)
{
    return qobject_cast<DeleteThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a thing
 */
DeleteThingGroupResponse * IoTClient::deleteThingGroup(const DeleteThingGroupRequest &request)
{
    return qobject_cast<DeleteThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteThingTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified thing type. You cannot delete a thing type if it has things associated with it. To delete a thing
 * type, first mark it as deprecated by calling <a>DeprecateThingType</a>, then remove any associated things by calling
 * <a>UpdateThing</a> to change the thing type on any associated thing, and finally use <a>DeleteThingType</a> to delete
 * the thing
 */
DeleteThingTypeResponse * IoTClient::deleteThingType(const DeleteThingTypeRequest &request)
{
    return qobject_cast<DeleteThingTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteTopicRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the
 */
DeleteTopicRuleResponse * IoTClient::deleteTopicRule(const DeleteTopicRuleRequest &request)
{
    return qobject_cast<DeleteTopicRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteV2LoggingLevelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a logging
 */
DeleteV2LoggingLevelResponse * IoTClient::deleteV2LoggingLevel(const DeleteV2LoggingLevelRequest &request)
{
    return qobject_cast<DeleteV2LoggingLevelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeprecateThingTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecates a thing type. You can not associate new things with deprecated thing
 */
DeprecateThingTypeResponse * IoTClient::deprecateThingType(const DeprecateThingTypeRequest &request)
{
    return qobject_cast<DeprecateThingTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeAccountAuditConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the Device Defender audit settings for this account. Settings include how audit notifications are
 * sent and which audit checks are enabled or
 */
DescribeAccountAuditConfigurationResponse * IoTClient::describeAccountAuditConfiguration(const DescribeAccountAuditConfigurationRequest &request)
{
    return qobject_cast<DescribeAccountAuditConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeAuditTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Device Defender
 */
DescribeAuditTaskResponse * IoTClient::describeAuditTask(const DescribeAuditTaskRequest &request)
{
    return qobject_cast<DescribeAuditTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an
 */
DescribeAuthorizerResponse * IoTClient::describeAuthorizer(const DescribeAuthorizerRequest &request)
{
    return qobject_cast<DescribeAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a billing
 */
DescribeBillingGroupResponse * IoTClient::describeBillingGroup(const DescribeBillingGroupRequest &request)
{
    return qobject_cast<DescribeBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeCACertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a registered CA
 */
DescribeCACertificateResponse * IoTClient::describeCACertificate(const DescribeCACertificateRequest &request)
{
    return qobject_cast<DescribeCACertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified
 */
DescribeCertificateResponse * IoTClient::describeCertificate(const DescribeCertificateRequest &request)
{
    return qobject_cast<DescribeCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeDefaultAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the default
 */
DescribeDefaultAuthorizerResponse * IoTClient::describeDefaultAuthorizer(const DescribeDefaultAuthorizerRequest &request)
{
    return qobject_cast<DescribeDefaultAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a unique endpoint specific to the AWS account making the
 */
DescribeEndpointResponse * IoTClient::describeEndpoint(const DescribeEndpointRequest &request)
{
    return qobject_cast<DescribeEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeEventConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes event
 */
DescribeEventConfigurationsResponse * IoTClient::describeEventConfigurations(const DescribeEventConfigurationsRequest &request)
{
    return qobject_cast<DescribeEventConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a search
 */
DescribeIndexResponse * IoTClient::describeIndex(const DescribeIndexRequest &request)
{
    return qobject_cast<DescribeIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a
 */
DescribeJobResponse * IoTClient::describeJob(const DescribeJobRequest &request)
{
    return qobject_cast<DescribeJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeJobExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a job
 */
DescribeJobExecutionResponse * IoTClient::describeJobExecution(const DescribeJobExecutionRequest &request)
{
    return qobject_cast<DescribeJobExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeRoleAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a role
 */
DescribeRoleAliasResponse * IoTClient::describeRoleAlias(const DescribeRoleAliasRequest &request)
{
    return qobject_cast<DescribeRoleAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeScheduledAuditResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a scheduled
 */
DescribeScheduledAuditResponse * IoTClient::describeScheduledAudit(const DescribeScheduledAuditRequest &request)
{
    return qobject_cast<DescribeScheduledAuditResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Device Defender security
 */
DescribeSecurityProfileResponse * IoTClient::describeSecurityProfile(const DescribeSecurityProfileRequest &request)
{
    return qobject_cast<DescribeSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 */
DescribeStreamResponse * IoTClient::describeStream(const DescribeStreamRequest &request)
{
    return qobject_cast<DescribeStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified
 */
DescribeThingResponse * IoTClient::describeThing(const DescribeThingRequest &request)
{
    return qobject_cast<DescribeThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe a thing
 */
DescribeThingGroupResponse * IoTClient::describeThingGroup(const DescribeThingGroupRequest &request)
{
    return qobject_cast<DescribeThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeThingRegistrationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a bulk thing provisioning
 */
DescribeThingRegistrationTaskResponse * IoTClient::describeThingRegistrationTask(const DescribeThingRegistrationTaskRequest &request)
{
    return qobject_cast<DescribeThingRegistrationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeThingTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified thing
 */
DescribeThingTypeResponse * IoTClient::describeThingType(const DescribeThingTypeRequest &request)
{
    return qobject_cast<DescribeThingTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DetachPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches a policy from the specified
 */
DetachPolicyResponse * IoTClient::detachPolicy(const DetachPolicyRequest &request)
{
    return qobject_cast<DetachPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DetachPrincipalPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified policy from the specified
 *
 * certificate>
 *
 * <b>Note:</b> This API is deprecated. Please use <a>DetachPolicy</a>
 */
DetachPrincipalPolicyResponse * IoTClient::detachPrincipalPolicy(const DetachPrincipalPolicyRequest &request)
{
    return qobject_cast<DetachPrincipalPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DetachSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a Device Defender security profile from a thing group or from this
 */
DetachSecurityProfileResponse * IoTClient::detachSecurityProfile(const DetachSecurityProfileRequest &request)
{
    return qobject_cast<DetachSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DetachThingPrincipalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches the specified principal from the specified
 *
 * thing> <note>
 *
 * This call is asynchronous. It might take several seconds for the detachment to
 */
DetachThingPrincipalResponse * IoTClient::detachThingPrincipal(const DetachThingPrincipalRequest &request)
{
    return qobject_cast<DetachThingPrincipalResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DisableTopicRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the
 */
DisableTopicRuleResponse * IoTClient::disableTopicRule(const DisableTopicRuleRequest &request)
{
    return qobject_cast<DisableTopicRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * EnableTopicRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the
 */
EnableTopicRuleResponse * IoTClient::enableTopicRule(const EnableTopicRuleRequest &request)
{
    return qobject_cast<EnableTopicRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetEffectivePoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the policies that have an effect on the authorization behavior of the specified device when it connects
 * to the AWS IoT device
 */
GetEffectivePoliciesResponse * IoTClient::getEffectivePolicies(const GetEffectivePoliciesRequest &request)
{
    return qobject_cast<GetEffectivePoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetIndexingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the search
 */
GetIndexingConfigurationResponse * IoTClient::getIndexingConfiguration(const GetIndexingConfigurationRequest &request)
{
    return qobject_cast<GetIndexingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetJobDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a job
 */
GetJobDocumentResponse * IoTClient::getJobDocument(const GetJobDocumentRequest &request)
{
    return qobject_cast<GetJobDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetLoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the logging
 *
 * options>
 *
 * NOTE: use of this command is not recommended. Use <code>GetV2LoggingOptions</code>
 */
GetLoggingOptionsResponse * IoTClient::getLoggingOptions(const GetLoggingOptionsRequest &request)
{
    return qobject_cast<GetLoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetOTAUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an OTA
 */
GetOTAUpdateResponse * IoTClient::getOTAUpdate(const GetOTAUpdateRequest &request)
{
    return qobject_cast<GetOTAUpdateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified policy with the policy document of the default
 */
GetPolicyResponse * IoTClient::getPolicy(const GetPolicyRequest &request)
{
    return qobject_cast<GetPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetPolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified policy
 */
GetPolicyVersionResponse * IoTClient::getPolicyVersion(const GetPolicyVersionRequest &request)
{
    return qobject_cast<GetPolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetRegistrationCodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a registration code used to register a CA certificate with AWS
 */
GetRegistrationCodeResponse * IoTClient::getRegistrationCode(const GetRegistrationCodeRequest &request)
{
    return qobject_cast<GetRegistrationCodeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetTopicRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the
 */
GetTopicRuleResponse * IoTClient::getTopicRule(const GetTopicRuleRequest &request)
{
    return qobject_cast<GetTopicRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetV2LoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the fine grained logging
 */
GetV2LoggingOptionsResponse * IoTClient::getV2LoggingOptions(const GetV2LoggingOptionsRequest &request)
{
    return qobject_cast<GetV2LoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListActiveViolationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the active violations for a given Device Defender security
 */
ListActiveViolationsResponse * IoTClient::listActiveViolations(const ListActiveViolationsRequest &request)
{
    return qobject_cast<ListActiveViolationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListAttachedPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the policies attached to the specified thing
 */
ListAttachedPoliciesResponse * IoTClient::listAttachedPolicies(const ListAttachedPoliciesRequest &request)
{
    return qobject_cast<ListAttachedPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListAuditFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the findings (results) of a Device Defender audit or of the audits performed during a specified time period.
 * (Findings are retained for 180
 */
ListAuditFindingsResponse * IoTClient::listAuditFindings(const ListAuditFindingsRequest &request)
{
    return qobject_cast<ListAuditFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListAuditTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Device Defender audits that have been performed during a given time
 */
ListAuditTasksResponse * IoTClient::listAuditTasks(const ListAuditTasksRequest &request)
{
    return qobject_cast<ListAuditTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListAuthorizersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the authorizers registered in your
 */
ListAuthorizersResponse * IoTClient::listAuthorizers(const ListAuthorizersRequest &request)
{
    return qobject_cast<ListAuthorizersResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListBillingGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the billing groups you have
 */
ListBillingGroupsResponse * IoTClient::listBillingGroups(const ListBillingGroupsRequest &request)
{
    return qobject_cast<ListBillingGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListCACertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the CA certificates registered for your AWS
 *
 * account>
 *
 * The results are paginated with a default page size of 25. You can use the returned marker to retrieve additional
 */
ListCACertificatesResponse * IoTClient::listCACertificates(const ListCACertificatesRequest &request)
{
    return qobject_cast<ListCACertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the certificates registered in your AWS
 *
 * account>
 *
 * The results are paginated with a default page size of 25. You can use the returned marker to retrieve additional
 */
ListCertificatesResponse * IoTClient::listCertificates(const ListCertificatesRequest &request)
{
    return qobject_cast<ListCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListCertificatesByCAResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the device certificates signed by the specified CA
 */
ListCertificatesByCAResponse * IoTClient::listCertificatesByCA(const ListCertificatesByCARequest &request)
{
    return qobject_cast<ListCertificatesByCAResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListIndicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the search
 */
ListIndicesResponse * IoTClient::listIndices(const ListIndicesRequest &request)
{
    return qobject_cast<ListIndicesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListJobExecutionsForJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the job executions for a
 */
ListJobExecutionsForJobResponse * IoTClient::listJobExecutionsForJob(const ListJobExecutionsForJobRequest &request)
{
    return qobject_cast<ListJobExecutionsForJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListJobExecutionsForThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the job executions for the specified
 */
ListJobExecutionsForThingResponse * IoTClient::listJobExecutionsForThing(const ListJobExecutionsForThingRequest &request)
{
    return qobject_cast<ListJobExecutionsForThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists
 */
ListJobsResponse * IoTClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListOTAUpdatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists OTA
 */
ListOTAUpdatesResponse * IoTClient::listOTAUpdates(const ListOTAUpdatesRequest &request)
{
    return qobject_cast<ListOTAUpdatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListOutgoingCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists certificates that are being transferred but not yet
 */
ListOutgoingCertificatesResponse * IoTClient::listOutgoingCertificates(const ListOutgoingCertificatesRequest &request)
{
    return qobject_cast<ListOutgoingCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your
 */
ListPoliciesResponse * IoTClient::listPolicies(const ListPoliciesRequest &request)
{
    return qobject_cast<ListPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListPolicyPrincipalsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the principals associated with the specified
 *
 * policy>
 *
 * <b>Note:</b> This API is deprecated. Please use <a>ListTargetsForPolicy</a>
 */
ListPolicyPrincipalsResponse * IoTClient::listPolicyPrincipals(const ListPolicyPrincipalsRequest &request)
{
    return qobject_cast<ListPolicyPrincipalsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListPolicyVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the versions of the specified policy and identifies the default
 */
ListPolicyVersionsResponse * IoTClient::listPolicyVersions(const ListPolicyVersionsRequest &request)
{
    return qobject_cast<ListPolicyVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListPrincipalPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the policies attached to the specified principal. If you use an Cognito identity, the ID must be in <a
 * href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/API_GetCredentialsForIdentity.html#API_GetCredentialsForIdentity_RequestSyntax">AmazonCognito
 * Identity
 *
 * format</a>>
 *
 * <b>Note:</b> This API is deprecated. Please use <a>ListAttachedPolicies</a>
 */
ListPrincipalPoliciesResponse * IoTClient::listPrincipalPolicies(const ListPrincipalPoliciesRequest &request)
{
    return qobject_cast<ListPrincipalPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListPrincipalThingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the things associated with the specified
 */
ListPrincipalThingsResponse * IoTClient::listPrincipalThings(const ListPrincipalThingsRequest &request)
{
    return qobject_cast<ListPrincipalThingsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListRoleAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the role aliases registered in your
 */
ListRoleAliasesResponse * IoTClient::listRoleAliases(const ListRoleAliasesRequest &request)
{
    return qobject_cast<ListRoleAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListScheduledAuditsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of your scheduled
 */
ListScheduledAuditsResponse * IoTClient::listScheduledAudits(const ListScheduledAuditsRequest &request)
{
    return qobject_cast<ListScheduledAuditsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListSecurityProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Device Defender security profiles you have created. You can use filters to list only those security profiles
 * associated with a thing group or only those associated with your
 */
ListSecurityProfilesResponse * IoTClient::listSecurityProfiles(const ListSecurityProfilesRequest &request)
{
    return qobject_cast<ListSecurityProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListSecurityProfilesForTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Device Defender security profiles attached to a target (thing
 */
ListSecurityProfilesForTargetResponse * IoTClient::listSecurityProfilesForTarget(const ListSecurityProfilesForTargetRequest &request)
{
    return qobject_cast<ListSecurityProfilesForTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the streams in your AWS
 */
ListStreamsResponse * IoTClient::listStreams(const ListStreamsRequest &request)
{
    return qobject_cast<ListStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags (metadata) you have assigned to the
 */
ListTagsForResourceResponse * IoTClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListTargetsForPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List targets for the specified
 */
ListTargetsForPolicyResponse * IoTClient::listTargetsForPolicy(const ListTargetsForPolicyRequest &request)
{
    return qobject_cast<ListTargetsForPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListTargetsForSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the targets (thing groups) associated with a given Device Defender security
 */
ListTargetsForSecurityProfileResponse * IoTClient::listTargetsForSecurityProfile(const ListTargetsForSecurityProfileRequest &request)
{
    return qobject_cast<ListTargetsForSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the thing groups in your
 */
ListThingGroupsResponse * IoTClient::listThingGroups(const ListThingGroupsRequest &request)
{
    return qobject_cast<ListThingGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingGroupsForThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the thing groups to which the specified thing
 */
ListThingGroupsForThingResponse * IoTClient::listThingGroupsForThing(const ListThingGroupsForThingRequest &request)
{
    return qobject_cast<ListThingGroupsForThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingPrincipalsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the principals associated with the specified
 */
ListThingPrincipalsResponse * IoTClient::listThingPrincipals(const ListThingPrincipalsRequest &request)
{
    return qobject_cast<ListThingPrincipalsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingRegistrationTaskReportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Information about the thing registration
 */
ListThingRegistrationTaskReportsResponse * IoTClient::listThingRegistrationTaskReports(const ListThingRegistrationTaskReportsRequest &request)
{
    return qobject_cast<ListThingRegistrationTaskReportsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingRegistrationTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List bulk thing provisioning
 */
ListThingRegistrationTasksResponse * IoTClient::listThingRegistrationTasks(const ListThingRegistrationTasksRequest &request)
{
    return qobject_cast<ListThingRegistrationTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the existing thing
 */
ListThingTypesResponse * IoTClient::listThingTypes(const ListThingTypesRequest &request)
{
    return qobject_cast<ListThingTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your things. Use the <b>attributeName</b> and <b>attributeValue</b> parameters to filter your things. For example,
 * calling <code>ListThings</code> with attributeName=Color and attributeValue=Red retrieves all things in the registry
 * that contain an attribute <b>Color</b> with the value <b>Red</b>.
 */
ListThingsResponse * IoTClient::listThings(const ListThingsRequest &request)
{
    return qobject_cast<ListThingsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingsInBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the things you have added to the given billing
 */
ListThingsInBillingGroupResponse * IoTClient::listThingsInBillingGroup(const ListThingsInBillingGroupRequest &request)
{
    return qobject_cast<ListThingsInBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingsInThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the things in the specified
 */
ListThingsInThingGroupResponse * IoTClient::listThingsInThingGroup(const ListThingsInThingGroupRequest &request)
{
    return qobject_cast<ListThingsInThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListTopicRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the rules for the specific
 */
ListTopicRulesResponse * IoTClient::listTopicRules(const ListTopicRulesRequest &request)
{
    return qobject_cast<ListTopicRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListV2LoggingLevelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists logging
 */
ListV2LoggingLevelsResponse * IoTClient::listV2LoggingLevels(const ListV2LoggingLevelsRequest &request)
{
    return qobject_cast<ListV2LoggingLevelsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListViolationEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Device Defender security profile violations discovered during the given time period. You can use filters to
 * limit the results to those alerts issued for a particular security profile, behavior or thing
 */
ListViolationEventsResponse * IoTClient::listViolationEvents(const ListViolationEventsRequest &request)
{
    return qobject_cast<ListViolationEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RegisterCACertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a CA certificate with AWS IoT. This CA certificate can then be used to sign device certificates, which can be
 * then registered with AWS IoT. You can register up to 10 CA certificates per AWS account that have the same subject
 * field. This enables you to have up to 10 certificate authorities sign your device certificates. If you have more than
 * one CA certificate registered, make sure you pass the CA certificate when you register your device certificates with the
 * RegisterCertificate
 */
RegisterCACertificateResponse * IoTClient::registerCACertificate(const RegisterCACertificateRequest &request)
{
    return qobject_cast<RegisterCACertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RegisterCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a device certificate with AWS IoT. If you have more than one CA certificate that has the same subject field,
 * you must specify the CA certificate that was used to sign the device certificate being
 */
RegisterCertificateResponse * IoTClient::registerCertificate(const RegisterCertificateRequest &request)
{
    return qobject_cast<RegisterCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RegisterThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provisions a
 */
RegisterThingResponse * IoTClient::registerThing(const RegisterThingRequest &request)
{
    return qobject_cast<RegisterThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RejectCertificateTransferResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rejects a pending certificate transfer. After AWS IoT rejects a certificate transfer, the certificate status changes
 * from <b>PENDING_TRANSFER</b> to
 *
 * <b>INACTIVE</b>>
 *
 * To check for pending certificate transfers, call <a>ListCertificates</a> to enumerate your
 *
 * certificates>
 *
 * This operation can only be called by the transfer destination. After it is called, the certificate will be returned to
 * the source's account in the INACTIVE
 */
RejectCertificateTransferResponse * IoTClient::rejectCertificateTransfer(const RejectCertificateTransferRequest &request)
{
    return qobject_cast<RejectCertificateTransferResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RemoveThingFromBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the given thing from the billing
 */
RemoveThingFromBillingGroupResponse * IoTClient::removeThingFromBillingGroup(const RemoveThingFromBillingGroupRequest &request)
{
    return qobject_cast<RemoveThingFromBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RemoveThingFromThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove the specified thing from the specified
 */
RemoveThingFromThingGroupResponse * IoTClient::removeThingFromThingGroup(const RemoveThingFromThingGroupRequest &request)
{
    return qobject_cast<RemoveThingFromThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ReplaceTopicRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces the rule. You must specify all parameters for the new rule. Creating rules is an administrator-level action.
 * Any user who has permission to create rules will be able to access data processed by the
 */
ReplaceTopicRuleResponse * IoTClient::replaceTopicRule(const ReplaceTopicRuleRequest &request)
{
    return qobject_cast<ReplaceTopicRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * SearchIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The query search
 */
SearchIndexResponse * IoTClient::searchIndex(const SearchIndexRequest &request)
{
    return qobject_cast<SearchIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * SetDefaultAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the default authorizer. This will be used if a websocket connection is made without specifying an
 */
SetDefaultAuthorizerResponse * IoTClient::setDefaultAuthorizer(const SetDefaultAuthorizerRequest &request)
{
    return qobject_cast<SetDefaultAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * SetDefaultPolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the specified version of the specified policy as the policy's default (operative) version. This action affects all
 * certificates to which the policy is attached. To list the principals the policy is attached to, use the
 * ListPrincipalPolicy
 */
SetDefaultPolicyVersionResponse * IoTClient::setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request)
{
    return qobject_cast<SetDefaultPolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * SetLoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the logging
 *
 * options>
 *
 * NOTE: use of this command is not recommended. Use <code>SetV2LoggingOptions</code>
 */
SetLoggingOptionsResponse * IoTClient::setLoggingOptions(const SetLoggingOptionsRequest &request)
{
    return qobject_cast<SetLoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * SetV2LoggingLevelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the logging
 */
SetV2LoggingLevelResponse * IoTClient::setV2LoggingLevel(const SetV2LoggingLevelRequest &request)
{
    return qobject_cast<SetV2LoggingLevelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * SetV2LoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the logging options for the V2 logging
 */
SetV2LoggingOptionsResponse * IoTClient::setV2LoggingOptions(const SetV2LoggingOptionsRequest &request)
{
    return qobject_cast<SetV2LoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * StartOnDemandAuditTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an on-demand Device Defender
 */
StartOnDemandAuditTaskResponse * IoTClient::startOnDemandAuditTask(const StartOnDemandAuditTaskRequest &request)
{
    return qobject_cast<StartOnDemandAuditTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * StartThingRegistrationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a bulk thing provisioning
 */
StartThingRegistrationTaskResponse * IoTClient::startThingRegistrationTask(const StartThingRegistrationTaskRequest &request)
{
    return qobject_cast<StartThingRegistrationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * StopThingRegistrationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a bulk thing provisioning
 */
StopThingRegistrationTaskResponse * IoTClient::stopThingRegistrationTask(const StopThingRegistrationTaskRequest &request)
{
    return qobject_cast<StopThingRegistrationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds to or modifies the tags of the given resource. Tags are metadata which can be used to manage a
 */
TagResourceResponse * IoTClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * TestAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests if a specified principal is authorized to perform an AWS IoT action on a specified resource. Use this to test and
 * debug the authorization behavior of devices that connect to the AWS IoT device
 */
TestAuthorizationResponse * IoTClient::testAuthorization(const TestAuthorizationRequest &request)
{
    return qobject_cast<TestAuthorizationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * TestInvokeAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests a custom authorization behavior by invoking a specified custom authorizer. Use this to test and debug the custom
 * authorization behavior of devices that connect to the AWS IoT device
 */
TestInvokeAuthorizerResponse * IoTClient::testInvokeAuthorizer(const TestInvokeAuthorizerRequest &request)
{
    return qobject_cast<TestInvokeAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * TransferCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Transfers the specified certificate to the specified AWS
 *
 * account>
 *
 * You can cancel the transfer until it is acknowledged by the
 *
 * recipient>
 *
 * No notification is sent to the transfer destination's account. It is up to the caller to notify the transfer
 *
 * target>
 *
 * The certificate being transferred must not be in the ACTIVE state. You can use the UpdateCertificate API to deactivate
 *
 * it>
 *
 * The certificate must not have any policies attached to it. You can use the DetachPrincipalPolicy API to detach
 */
TransferCertificateResponse * IoTClient::transferCertificate(const TransferCertificateRequest &request)
{
    return qobject_cast<TransferCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the given tags (metadata) from the
 */
UntagResourceResponse * IoTClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateAccountAuditConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures or reconfigures the Device Defender audit settings for this account. Settings include how audit notifications
 * are sent and which audit checks are enabled or
 */
UpdateAccountAuditConfigurationResponse * IoTClient::updateAccountAuditConfiguration(const UpdateAccountAuditConfigurationRequest &request)
{
    return qobject_cast<UpdateAccountAuditConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 */
UpdateAuthorizerResponse * IoTClient::updateAuthorizer(const UpdateAuthorizerRequest &request)
{
    return qobject_cast<UpdateAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates information about the billing
 */
UpdateBillingGroupResponse * IoTClient::updateBillingGroup(const UpdateBillingGroupRequest &request)
{
    return qobject_cast<UpdateBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateCACertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a registered CA
 */
UpdateCACertificateResponse * IoTClient::updateCACertificate(const UpdateCACertificateRequest &request)
{
    return qobject_cast<UpdateCACertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status of the specified certificate. This operation is
 *
 * idempotent>
 *
 * Moving a certificate from the ACTIVE state (including REVOKED) will not disconnect currently connected devices, but
 * these devices will be unable to
 *
 * reconnect>
 *
 * The ACTIVE state is required to authenticate devices connecting to AWS IoT using a
 */
UpdateCertificateResponse * IoTClient::updateCertificate(const UpdateCertificateRequest &request)
{
    return qobject_cast<UpdateCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateDynamicThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a dynamic thing
 */
UpdateDynamicThingGroupResponse * IoTClient::updateDynamicThingGroup(const UpdateDynamicThingGroupRequest &request)
{
    return qobject_cast<UpdateDynamicThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateEventConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the event
 */
UpdateEventConfigurationsResponse * IoTClient::updateEventConfigurations(const UpdateEventConfigurationsRequest &request)
{
    return qobject_cast<UpdateEventConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateIndexingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the search
 */
UpdateIndexingConfigurationResponse * IoTClient::updateIndexingConfiguration(const UpdateIndexingConfigurationRequest &request)
{
    return qobject_cast<UpdateIndexingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates supported fields of the specified
 */
UpdateJobResponse * IoTClient::updateJob(const UpdateJobRequest &request)
{
    return qobject_cast<UpdateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateRoleAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a role
 */
UpdateRoleAliasResponse * IoTClient::updateRoleAlias(const UpdateRoleAliasRequest &request)
{
    return qobject_cast<UpdateRoleAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateScheduledAuditResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a scheduled audit, including what checks are performed and how often the audit takes
 */
UpdateScheduledAuditResponse * IoTClient::updateScheduledAudit(const UpdateScheduledAuditRequest &request)
{
    return qobject_cast<UpdateScheduledAuditResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a Device Defender security
 */
UpdateSecurityProfileResponse * IoTClient::updateSecurityProfile(const UpdateSecurityProfileRequest &request)
{
    return qobject_cast<UpdateSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing stream. The stream version will be incremented by
 */
UpdateStreamResponse * IoTClient::updateStream(const UpdateStreamRequest &request)
{
    return qobject_cast<UpdateStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the data for a
 */
UpdateThingResponse * IoTClient::updateThing(const UpdateThingRequest &request)
{
    return qobject_cast<UpdateThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a thing
 */
UpdateThingGroupResponse * IoTClient::updateThingGroup(const UpdateThingGroupRequest &request)
{
    return qobject_cast<UpdateThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateThingGroupsForThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the groups to which the thing
 */
UpdateThingGroupsForThingResponse * IoTClient::updateThingGroupsForThing(const UpdateThingGroupsForThingRequest &request)
{
    return qobject_cast<UpdateThingGroupsForThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ValidateSecurityProfileBehaviorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Validates a Device Defender security profile behaviors
 */
ValidateSecurityProfileBehaviorsResponse * IoTClient::validateSecurityProfileBehaviors(const ValidateSecurityProfileBehaviorsRequest &request)
{
    return qobject_cast<ValidateSecurityProfileBehaviorsResponse *>(send(request));
}

/*!
 * \class QtAws::IoT::IoTClientPrivate
 * \brief The IoTClientPrivate class provides private implementation for IoTClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a IoTClientPrivate object with public implementation \a q.
 */
IoTClientPrivate::IoTClientPrivate(IoTClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IoT
} // namespace QtAws

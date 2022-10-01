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

#include "ssmclient.h"
#include "ssmclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagstoresourcerequest.h"
#include "addtagstoresourceresponse.h"
#include "associateopsitemrelateditemrequest.h"
#include "associateopsitemrelateditemresponse.h"
#include "cancelcommandrequest.h"
#include "cancelcommandresponse.h"
#include "cancelmaintenancewindowexecutionrequest.h"
#include "cancelmaintenancewindowexecutionresponse.h"
#include "createactivationrequest.h"
#include "createactivationresponse.h"
#include "createassociationrequest.h"
#include "createassociationresponse.h"
#include "createassociationbatchrequest.h"
#include "createassociationbatchresponse.h"
#include "createdocumentrequest.h"
#include "createdocumentresponse.h"
#include "createmaintenancewindowrequest.h"
#include "createmaintenancewindowresponse.h"
#include "createopsitemrequest.h"
#include "createopsitemresponse.h"
#include "createopsmetadatarequest.h"
#include "createopsmetadataresponse.h"
#include "createpatchbaselinerequest.h"
#include "createpatchbaselineresponse.h"
#include "createresourcedatasyncrequest.h"
#include "createresourcedatasyncresponse.h"
#include "deleteactivationrequest.h"
#include "deleteactivationresponse.h"
#include "deleteassociationrequest.h"
#include "deleteassociationresponse.h"
#include "deletedocumentrequest.h"
#include "deletedocumentresponse.h"
#include "deleteinventoryrequest.h"
#include "deleteinventoryresponse.h"
#include "deletemaintenancewindowrequest.h"
#include "deletemaintenancewindowresponse.h"
#include "deleteopsmetadatarequest.h"
#include "deleteopsmetadataresponse.h"
#include "deleteparameterrequest.h"
#include "deleteparameterresponse.h"
#include "deleteparametersrequest.h"
#include "deleteparametersresponse.h"
#include "deletepatchbaselinerequest.h"
#include "deletepatchbaselineresponse.h"
#include "deleteresourcedatasyncrequest.h"
#include "deleteresourcedatasyncresponse.h"
#include "deregistermanagedinstancerequest.h"
#include "deregistermanagedinstanceresponse.h"
#include "deregisterpatchbaselineforpatchgrouprequest.h"
#include "deregisterpatchbaselineforpatchgroupresponse.h"
#include "deregistertargetfrommaintenancewindowrequest.h"
#include "deregistertargetfrommaintenancewindowresponse.h"
#include "deregistertaskfrommaintenancewindowrequest.h"
#include "deregistertaskfrommaintenancewindowresponse.h"
#include "describeactivationsrequest.h"
#include "describeactivationsresponse.h"
#include "describeassociationrequest.h"
#include "describeassociationresponse.h"
#include "describeassociationexecutiontargetsrequest.h"
#include "describeassociationexecutiontargetsresponse.h"
#include "describeassociationexecutionsrequest.h"
#include "describeassociationexecutionsresponse.h"
#include "describeautomationexecutionsrequest.h"
#include "describeautomationexecutionsresponse.h"
#include "describeautomationstepexecutionsrequest.h"
#include "describeautomationstepexecutionsresponse.h"
#include "describeavailablepatchesrequest.h"
#include "describeavailablepatchesresponse.h"
#include "describedocumentrequest.h"
#include "describedocumentresponse.h"
#include "describedocumentpermissionrequest.h"
#include "describedocumentpermissionresponse.h"
#include "describeeffectiveinstanceassociationsrequest.h"
#include "describeeffectiveinstanceassociationsresponse.h"
#include "describeeffectivepatchesforpatchbaselinerequest.h"
#include "describeeffectivepatchesforpatchbaselineresponse.h"
#include "describeinstanceassociationsstatusrequest.h"
#include "describeinstanceassociationsstatusresponse.h"
#include "describeinstanceinformationrequest.h"
#include "describeinstanceinformationresponse.h"
#include "describeinstancepatchstatesrequest.h"
#include "describeinstancepatchstatesresponse.h"
#include "describeinstancepatchstatesforpatchgrouprequest.h"
#include "describeinstancepatchstatesforpatchgroupresponse.h"
#include "describeinstancepatchesrequest.h"
#include "describeinstancepatchesresponse.h"
#include "describeinventorydeletionsrequest.h"
#include "describeinventorydeletionsresponse.h"
#include "describemaintenancewindowexecutiontaskinvocationsrequest.h"
#include "describemaintenancewindowexecutiontaskinvocationsresponse.h"
#include "describemaintenancewindowexecutiontasksrequest.h"
#include "describemaintenancewindowexecutiontasksresponse.h"
#include "describemaintenancewindowexecutionsrequest.h"
#include "describemaintenancewindowexecutionsresponse.h"
#include "describemaintenancewindowschedulerequest.h"
#include "describemaintenancewindowscheduleresponse.h"
#include "describemaintenancewindowtargetsrequest.h"
#include "describemaintenancewindowtargetsresponse.h"
#include "describemaintenancewindowtasksrequest.h"
#include "describemaintenancewindowtasksresponse.h"
#include "describemaintenancewindowsrequest.h"
#include "describemaintenancewindowsresponse.h"
#include "describemaintenancewindowsfortargetrequest.h"
#include "describemaintenancewindowsfortargetresponse.h"
#include "describeopsitemsrequest.h"
#include "describeopsitemsresponse.h"
#include "describeparametersrequest.h"
#include "describeparametersresponse.h"
#include "describepatchbaselinesrequest.h"
#include "describepatchbaselinesresponse.h"
#include "describepatchgroupstaterequest.h"
#include "describepatchgroupstateresponse.h"
#include "describepatchgroupsrequest.h"
#include "describepatchgroupsresponse.h"
#include "describepatchpropertiesrequest.h"
#include "describepatchpropertiesresponse.h"
#include "describesessionsrequest.h"
#include "describesessionsresponse.h"
#include "disassociateopsitemrelateditemrequest.h"
#include "disassociateopsitemrelateditemresponse.h"
#include "getautomationexecutionrequest.h"
#include "getautomationexecutionresponse.h"
#include "getcalendarstaterequest.h"
#include "getcalendarstateresponse.h"
#include "getcommandinvocationrequest.h"
#include "getcommandinvocationresponse.h"
#include "getconnectionstatusrequest.h"
#include "getconnectionstatusresponse.h"
#include "getdefaultpatchbaselinerequest.h"
#include "getdefaultpatchbaselineresponse.h"
#include "getdeployablepatchsnapshotforinstancerequest.h"
#include "getdeployablepatchsnapshotforinstanceresponse.h"
#include "getdocumentrequest.h"
#include "getdocumentresponse.h"
#include "getinventoryrequest.h"
#include "getinventoryresponse.h"
#include "getinventoryschemarequest.h"
#include "getinventoryschemaresponse.h"
#include "getmaintenancewindowrequest.h"
#include "getmaintenancewindowresponse.h"
#include "getmaintenancewindowexecutionrequest.h"
#include "getmaintenancewindowexecutionresponse.h"
#include "getmaintenancewindowexecutiontaskrequest.h"
#include "getmaintenancewindowexecutiontaskresponse.h"
#include "getmaintenancewindowexecutiontaskinvocationrequest.h"
#include "getmaintenancewindowexecutiontaskinvocationresponse.h"
#include "getmaintenancewindowtaskrequest.h"
#include "getmaintenancewindowtaskresponse.h"
#include "getopsitemrequest.h"
#include "getopsitemresponse.h"
#include "getopsmetadatarequest.h"
#include "getopsmetadataresponse.h"
#include "getopssummaryrequest.h"
#include "getopssummaryresponse.h"
#include "getparameterrequest.h"
#include "getparameterresponse.h"
#include "getparameterhistoryrequest.h"
#include "getparameterhistoryresponse.h"
#include "getparametersrequest.h"
#include "getparametersresponse.h"
#include "getparametersbypathrequest.h"
#include "getparametersbypathresponse.h"
#include "getpatchbaselinerequest.h"
#include "getpatchbaselineresponse.h"
#include "getpatchbaselineforpatchgrouprequest.h"
#include "getpatchbaselineforpatchgroupresponse.h"
#include "getservicesettingrequest.h"
#include "getservicesettingresponse.h"
#include "labelparameterversionrequest.h"
#include "labelparameterversionresponse.h"
#include "listassociationversionsrequest.h"
#include "listassociationversionsresponse.h"
#include "listassociationsrequest.h"
#include "listassociationsresponse.h"
#include "listcommandinvocationsrequest.h"
#include "listcommandinvocationsresponse.h"
#include "listcommandsrequest.h"
#include "listcommandsresponse.h"
#include "listcomplianceitemsrequest.h"
#include "listcomplianceitemsresponse.h"
#include "listcompliancesummariesrequest.h"
#include "listcompliancesummariesresponse.h"
#include "listdocumentmetadatahistoryrequest.h"
#include "listdocumentmetadatahistoryresponse.h"
#include "listdocumentversionsrequest.h"
#include "listdocumentversionsresponse.h"
#include "listdocumentsrequest.h"
#include "listdocumentsresponse.h"
#include "listinventoryentriesrequest.h"
#include "listinventoryentriesresponse.h"
#include "listopsitemeventsrequest.h"
#include "listopsitemeventsresponse.h"
#include "listopsitemrelateditemsrequest.h"
#include "listopsitemrelateditemsresponse.h"
#include "listopsmetadatarequest.h"
#include "listopsmetadataresponse.h"
#include "listresourcecompliancesummariesrequest.h"
#include "listresourcecompliancesummariesresponse.h"
#include "listresourcedatasyncrequest.h"
#include "listresourcedatasyncresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "modifydocumentpermissionrequest.h"
#include "modifydocumentpermissionresponse.h"
#include "putcomplianceitemsrequest.h"
#include "putcomplianceitemsresponse.h"
#include "putinventoryrequest.h"
#include "putinventoryresponse.h"
#include "putparameterrequest.h"
#include "putparameterresponse.h"
#include "registerdefaultpatchbaselinerequest.h"
#include "registerdefaultpatchbaselineresponse.h"
#include "registerpatchbaselineforpatchgrouprequest.h"
#include "registerpatchbaselineforpatchgroupresponse.h"
#include "registertargetwithmaintenancewindowrequest.h"
#include "registertargetwithmaintenancewindowresponse.h"
#include "registertaskwithmaintenancewindowrequest.h"
#include "registertaskwithmaintenancewindowresponse.h"
#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourceresponse.h"
#include "resetservicesettingrequest.h"
#include "resetservicesettingresponse.h"
#include "resumesessionrequest.h"
#include "resumesessionresponse.h"
#include "sendautomationsignalrequest.h"
#include "sendautomationsignalresponse.h"
#include "sendcommandrequest.h"
#include "sendcommandresponse.h"
#include "startassociationsoncerequest.h"
#include "startassociationsonceresponse.h"
#include "startautomationexecutionrequest.h"
#include "startautomationexecutionresponse.h"
#include "startchangerequestexecutionrequest.h"
#include "startchangerequestexecutionresponse.h"
#include "startsessionrequest.h"
#include "startsessionresponse.h"
#include "stopautomationexecutionrequest.h"
#include "stopautomationexecutionresponse.h"
#include "terminatesessionrequest.h"
#include "terminatesessionresponse.h"
#include "unlabelparameterversionrequest.h"
#include "unlabelparameterversionresponse.h"
#include "updateassociationrequest.h"
#include "updateassociationresponse.h"
#include "updateassociationstatusrequest.h"
#include "updateassociationstatusresponse.h"
#include "updatedocumentrequest.h"
#include "updatedocumentresponse.h"
#include "updatedocumentdefaultversionrequest.h"
#include "updatedocumentdefaultversionresponse.h"
#include "updatedocumentmetadatarequest.h"
#include "updatedocumentmetadataresponse.h"
#include "updatemaintenancewindowrequest.h"
#include "updatemaintenancewindowresponse.h"
#include "updatemaintenancewindowtargetrequest.h"
#include "updatemaintenancewindowtargetresponse.h"
#include "updatemaintenancewindowtaskrequest.h"
#include "updatemaintenancewindowtaskresponse.h"
#include "updatemanagedinstancerolerequest.h"
#include "updatemanagedinstanceroleresponse.h"
#include "updateopsitemrequest.h"
#include "updateopsitemresponse.h"
#include "updateopsmetadatarequest.h"
#include "updateopsmetadataresponse.h"
#include "updatepatchbaselinerequest.h"
#include "updatepatchbaselineresponse.h"
#include "updateresourcedatasyncrequest.h"
#include "updateresourcedatasyncresponse.h"
#include "updateservicesettingrequest.h"
#include "updateservicesettingresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Ssm
 * \brief Contains classess for accessing Amazon Simple Systems Manager (SSM).
 *
 * \inmodule QtAwsSsm
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::SsmClient
 * \brief The SsmClient class provides access to the Amazon Simple Systems Manager (SSM) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
 */

/*!
 * \brief Constructs a SsmClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SsmClient::SsmClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SsmClientPrivate(this), parent)
{
    Q_D(SsmClient);
    d->apiVersion = QStringLiteral("2014-11-06");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ssm");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Simple Systems Manager (SSM)");
    d->serviceName = QStringLiteral("ssm");
}

/*!
 * \overload SsmClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SsmClient::SsmClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SsmClientPrivate(this), parent)
{
    Q_D(SsmClient);
    d->apiVersion = QStringLiteral("2014-11-06");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ssm");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Simple Systems Manager (SSM)");
    d->serviceName = QStringLiteral("ssm");
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * AddTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites one or more tags for the specified resource. <i>Tags</i> are metadata that you can assign to your
 * automations, documents, managed nodes, maintenance windows, Parameter Store parameters, and patch baselines. Tags enable
 * you to categorize your resources in different ways, for example, by purpose, owner, or environment. Each tag consists of
 * a key and an optional value, both of which you define. For example, you could define a set of tags for your account's
 * managed nodes that helps you track each node's owner and stack level. For
 *
 * example> <ul> <li>
 *
 * <code>Key=Owner,Value=DbAdmin</code>
 *
 * </p </li> <li>
 *
 * <code>Key=Owner,Value=SysAdmin</code>
 *
 * </p </li> <li>
 *
 * <code>Key=Owner,Value=Dev</code>
 *
 * </p </li> <li>
 *
 * <code>Key=Stack,Value=Production</code>
 *
 * </p </li> <li>
 *
 * <code>Key=Stack,Value=Pre-Production</code>
 *
 * </p </li> <li>
 *
 * <code>Key=Stack,Value=Test</code>
 *
 * </p </li> </ul>
 *
 * Most resources can have a maximum of 50 tags. Automations can have a maximum of 5
 *
 * tags>
 *
 * We recommend that you devise a set of tag keys that meets your needs for each resource type. Using a consistent set of
 * tag keys makes it easier for you to manage your resources. You can search and filter the resources based on the tags you
 * add. Tags don't have any semantic meaning to and are interpreted strictly as a string of
 *
 * characters>
 *
 * For more information about using tags with Amazon Elastic Compute Cloud (Amazon EC2) instances, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging your Amazon EC2 resources</a> in the
 * <i>Amazon EC2 User
 */
AddTagsToResourceResponse * SsmClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * AssociateOpsItemRelatedItemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a related item to a Systems Manager OpsCenter OpsItem. For example, you can associate an Incident Manager
 * incident or analysis with an OpsItem. Incident Manager and OpsCenter are capabilities of Amazon Web Services Systems
 */
AssociateOpsItemRelatedItemResponse * SsmClient::associateOpsItemRelatedItem(const AssociateOpsItemRelatedItemRequest &request)
{
    return qobject_cast<AssociateOpsItemRelatedItemResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * CancelCommandResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to cancel the command specified by the Command ID. There is no guarantee that the command will be terminated
 * and the underlying process
 */
CancelCommandResponse * SsmClient::cancelCommand(const CancelCommandRequest &request)
{
    return qobject_cast<CancelCommandResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * CancelMaintenanceWindowExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a maintenance window execution that is already in progress and cancels any tasks in the window that haven't
 * already starting running. Tasks already in progress will continue to
 */
CancelMaintenanceWindowExecutionResponse * SsmClient::cancelMaintenanceWindowExecution(const CancelMaintenanceWindowExecutionRequest &request)
{
    return qobject_cast<CancelMaintenanceWindowExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * CreateActivationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates an activation code and activation ID you can use to register your on-premises servers, edge devices, or
 * virtual machine (VM) with Amazon Web Services Systems Manager. Registering these machines with Systems Manager makes it
 * possible to manage them using Systems Manager capabilities. You use the activation code and ID when installing SSM Agent
 * on machines in your hybrid environment. For more information about requirements for managing on-premises machines using
 * Systems Manager, see <a
 * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-managedinstances.html">Setting up
 * Amazon Web Services Systems Manager for hybrid environments</a> in the <i>Amazon Web Services Systems Manager User
 * Guide</i>.
 *
 * </p <note>
 *
 * Amazon Elastic Compute Cloud (Amazon EC2) instances, edge devices, and on-premises servers and VMs that are configured
 * for Systems Manager are all called <i>managed
 */
CreateActivationResponse * SsmClient::createActivation(const CreateActivationRequest &request)
{
    return qobject_cast<CreateActivationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * CreateAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A State Manager association defines the state that you want to maintain on your managed nodes. For example, an
 * association can specify that anti-virus software must be installed and running on your managed nodes, or that certain
 * ports must be closed. For static targets, the association specifies a schedule for when the configuration is reapplied.
 * For dynamic targets, such as an Amazon Web Services resource group or an Amazon Web Services autoscaling group, State
 * Manager, a capability of Amazon Web Services Systems Manager applies the configuration when new managed nodes are added
 * to the group. The association also specifies actions to take when applying the configuration. For example, an
 * association for anti-virus software might run once a day. If the software isn't installed, then State Manager installs
 * it. If the software is installed, but the service isn't running, then the association might instruct State Manager to
 * start the service.
 */
CreateAssociationResponse * SsmClient::createAssociation(const CreateAssociationRequest &request)
{
    return qobject_cast<CreateAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * CreateAssociationBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified Amazon Web Services Systems Manager document (SSM document) with the specified managed nodes or
 *
 * targets>
 *
 * When you associate a document with one or more managed nodes using IDs or tags, Amazon Web Services Systems Manager
 * Agent (SSM Agent) running on the managed node processes the document and configures the node as
 *
 * specified>
 *
 * If you associate a document with a managed node that already has an associated document, the system returns the
 * AssociationAlreadyExists
 */
CreateAssociationBatchResponse * SsmClient::createAssociationBatch(const CreateAssociationBatchRequest &request)
{
    return qobject_cast<CreateAssociationBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * CreateDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Amazon Web Services Systems Manager (SSM document). An SSM document defines the actions that Systems Manager
 * performs on your managed nodes. For more information about SSM documents, including information about supported schemas,
 * features, and syntax, see <a
 * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-ssm-docs.html">Amazon Web Services Systems
 * Manager Documents</a> in the <i>Amazon Web Services Systems Manager User
 */
CreateDocumentResponse * SsmClient::createDocument(const CreateDocumentRequest &request)
{
    return qobject_cast<CreateDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * CreateMaintenanceWindowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new maintenance
 *
 * window> <note>
 *
 * The value you specify for <code>Duration</code> determines the specific end time for the maintenance window based on the
 * time it begins. No maintenance window tasks are permitted to start after the resulting endtime minus the number of hours
 * you specify for <code>Cutoff</code>. For example, if the maintenance window starts at 3 PM, the duration is three hours,
 * and the value you specify for <code>Cutoff</code> is one hour, no maintenance window tasks can start after 5
 */
CreateMaintenanceWindowResponse * SsmClient::createMaintenanceWindow(const CreateMaintenanceWindowRequest &request)
{
    return qobject_cast<CreateMaintenanceWindowResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * CreateOpsItemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new OpsItem. You must have permission in Identity and Access Management (IAM) to create a new OpsItem. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting started with
 * OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
 *
 * Guide</i>>
 *
 * Operations engineers and IT professionals use Amazon Web Services Systems Manager OpsCenter to view, investigate, and
 * remediate operational issues impacting the performance and health of their Amazon Web Services resources. For more
 * information, see <a href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">Amazon Web
 * Services Systems Manager OpsCenter</a> in the <i>Amazon Web Services Systems Manager User Guide</i>.
 */
CreateOpsItemResponse * SsmClient::createOpsItem(const CreateOpsItemRequest &request)
{
    return qobject_cast<CreateOpsItemResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * CreateOpsMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * If you create a new application in Application Manager, Amazon Web Services Systems Manager calls this API operation to
 * specify information about the new application, including the application
 */
CreateOpsMetadataResponse * SsmClient::createOpsMetadata(const CreateOpsMetadataRequest &request)
{
    return qobject_cast<CreateOpsMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * CreatePatchBaselineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a patch
 *
 * baseline> <note>
 *
 * For information about valid key-value pairs in <code>PatchFilters</code> for each supported operating system type, see
 */
CreatePatchBaselineResponse * SsmClient::createPatchBaseline(const CreatePatchBaselineRequest &request)
{
    return qobject_cast<CreatePatchBaselineResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * CreateResourceDataSyncResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A resource data sync helps you view data from multiple sources in a single location. Amazon Web Services Systems Manager
 * offers two types of resource data sync: <code>SyncToDestination</code> and
 *
 * <code>SyncFromSource</code>>
 *
 * You can configure Systems Manager Inventory to use the <code>SyncToDestination</code> type to synchronize Inventory data
 * from multiple Amazon Web Services Regions to a single Amazon Simple Storage Service (Amazon S3) bucket. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-datasync.html">Configuring resource
 * data sync for Inventory</a> in the <i>Amazon Web Services Systems Manager User
 *
 * Guide</i>>
 *
 * You can configure Systems Manager Explorer to use the <code>SyncFromSource</code> type to synchronize operational work
 * items (OpsItems) and operational data (OpsData) from multiple Amazon Web Services Regions to a single Amazon S3 bucket.
 * This type can synchronize OpsItems and OpsData from multiple Amazon Web Services accounts and Amazon Web Services
 * Regions or <code>EntireOrganization</code> by using Organizations. For more information, see <a
 * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/Explorer-resource-data-sync.html">Setting up Systems
 * Manager Explorer to display data from multiple accounts and Regions</a> in the <i>Amazon Web Services Systems Manager
 * User
 *
 * Guide</i>>
 *
 * A resource data sync is an asynchronous operation that returns immediately. After a successful initial sync is
 * completed, the system continuously syncs data. To check the status of a sync, use the
 *
 * <a>ListResourceDataSync</a>> <note>
 *
 * By default, data isn't encrypted in Amazon S3. We strongly recommend that you enable encryption in Amazon S3 to ensure
 * secure data storage. We also recommend that you secure access to the Amazon S3 bucket by creating a restrictive bucket
 * policy.
 */
CreateResourceDataSyncResponse * SsmClient::createResourceDataSync(const CreateResourceDataSyncRequest &request)
{
    return qobject_cast<CreateResourceDataSyncResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeleteActivationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an activation. You aren't required to delete an activation. If you delete an activation, you can no longer use
 * it to register additional managed nodes. Deleting an activation doesn't de-register managed nodes. You must manually
 * de-register managed
 */
DeleteActivationResponse * SsmClient::deleteActivation(const DeleteActivationRequest &request)
{
    return qobject_cast<DeleteActivationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeleteAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified Amazon Web Services Systems Manager document (SSM document) from the specified managed node.
 * If you created the association by using the <code>Targets</code> parameter, then you must delete the association by
 * using the association
 *
 * ID>
 *
 * When you disassociate a document from a managed node, it doesn't change the configuration of the node. To change the
 * configuration state of a managed node after you disassociate a document, you must create a new document with the desired
 * configuration and associate it with the
 */
DeleteAssociationResponse * SsmClient::deleteAssociation(const DeleteAssociationRequest &request)
{
    return qobject_cast<DeleteAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeleteDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the Amazon Web Services Systems Manager document (SSM document) and all managed node associations to the
 *
 * document>
 *
 * Before you delete the document, we recommend that you use <a>DeleteAssociation</a> to disassociate all managed nodes
 * that are associated with the
 */
DeleteDocumentResponse * SsmClient::deleteDocument(const DeleteDocumentRequest &request)
{
    return qobject_cast<DeleteDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeleteInventoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a custom inventory type or the data associated with a custom Inventory type. Deleting a custom inventory type is
 * also referred to as deleting a custom inventory
 */
DeleteInventoryResponse * SsmClient::deleteInventory(const DeleteInventoryRequest &request)
{
    return qobject_cast<DeleteInventoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeleteMaintenanceWindowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a maintenance
 */
DeleteMaintenanceWindowResponse * SsmClient::deleteMaintenanceWindow(const DeleteMaintenanceWindowRequest &request)
{
    return qobject_cast<DeleteMaintenanceWindowResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeleteOpsMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete OpsMetadata related to an
 */
DeleteOpsMetadataResponse * SsmClient::deleteOpsMetadata(const DeleteOpsMetadataRequest &request)
{
    return qobject_cast<DeleteOpsMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeleteParameterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a parameter from the system. After deleting a parameter, wait for at least 30 seconds to create a parameter with
 * the same
 */
DeleteParameterResponse * SsmClient::deleteParameter(const DeleteParameterRequest &request)
{
    return qobject_cast<DeleteParameterResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeleteParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a list of parameters. After deleting a parameter, wait for at least 30 seconds to create a parameter with the
 * same
 */
DeleteParametersResponse * SsmClient::deleteParameters(const DeleteParametersRequest &request)
{
    return qobject_cast<DeleteParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeletePatchBaselineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a patch
 */
DeletePatchBaselineResponse * SsmClient::deletePatchBaseline(const DeletePatchBaselineRequest &request)
{
    return qobject_cast<DeletePatchBaselineResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeleteResourceDataSyncResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a resource data sync configuration. After the configuration is deleted, changes to data on managed nodes are no
 * longer synced to or from the target. Deleting a sync configuration doesn't delete
 */
DeleteResourceDataSyncResponse * SsmClient::deleteResourceDataSync(const DeleteResourceDataSyncRequest &request)
{
    return qobject_cast<DeleteResourceDataSyncResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeregisterManagedInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the server or virtual machine from the list of registered servers. You can reregister the node again at any
 * time. If you don't plan to use Run Command on the server, we suggest uninstalling SSM Agent
 */
DeregisterManagedInstanceResponse * SsmClient::deregisterManagedInstance(const DeregisterManagedInstanceRequest &request)
{
    return qobject_cast<DeregisterManagedInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeregisterPatchBaselineForPatchGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a patch group from a patch
 */
DeregisterPatchBaselineForPatchGroupResponse * SsmClient::deregisterPatchBaselineForPatchGroup(const DeregisterPatchBaselineForPatchGroupRequest &request)
{
    return qobject_cast<DeregisterPatchBaselineForPatchGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeregisterTargetFromMaintenanceWindowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a target from a maintenance
 */
DeregisterTargetFromMaintenanceWindowResponse * SsmClient::deregisterTargetFromMaintenanceWindow(const DeregisterTargetFromMaintenanceWindowRequest &request)
{
    return qobject_cast<DeregisterTargetFromMaintenanceWindowResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeregisterTaskFromMaintenanceWindowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a task from a maintenance
 */
DeregisterTaskFromMaintenanceWindowResponse * SsmClient::deregisterTaskFromMaintenanceWindow(const DeregisterTaskFromMaintenanceWindowRequest &request)
{
    return qobject_cast<DeregisterTaskFromMaintenanceWindowResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeActivationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes details about the activation, such as the date and time the activation was created, its expiration date, the
 * Identity and Access Management (IAM) role assigned to the managed nodes in the activation, and the number of nodes
 * registered by using this
 */
DescribeActivationsResponse * SsmClient::describeActivations(const DescribeActivationsRequest &request)
{
    return qobject_cast<DescribeActivationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the association for the specified target or managed node. If you created the association by using the
 * <code>Targets</code> parameter, then you must retrieve the association by using the association
 */
DescribeAssociationResponse * SsmClient::describeAssociation(const DescribeAssociationRequest &request)
{
    return qobject_cast<DescribeAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeAssociationExecutionTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Views information about a specific execution of a specific
 */
DescribeAssociationExecutionTargetsResponse * SsmClient::describeAssociationExecutionTargets(const DescribeAssociationExecutionTargetsRequest &request)
{
    return qobject_cast<DescribeAssociationExecutionTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeAssociationExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Views all executions for a specific association ID.
 */
DescribeAssociationExecutionsResponse * SsmClient::describeAssociationExecutions(const DescribeAssociationExecutionsRequest &request)
{
    return qobject_cast<DescribeAssociationExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeAutomationExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides details about all active and terminated Automation
 */
DescribeAutomationExecutionsResponse * SsmClient::describeAutomationExecutions(const DescribeAutomationExecutionsRequest &request)
{
    return qobject_cast<DescribeAutomationExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeAutomationStepExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Information about all active and terminated step executions in an Automation
 */
DescribeAutomationStepExecutionsResponse * SsmClient::describeAutomationStepExecutions(const DescribeAutomationStepExecutionsRequest &request)
{
    return qobject_cast<DescribeAutomationStepExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeAvailablePatchesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all patches eligible to be included in a patch
 */
DescribeAvailablePatchesResponse * SsmClient::describeAvailablePatches(const DescribeAvailablePatchesRequest &request)
{
    return qobject_cast<DescribeAvailablePatchesResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified Amazon Web Services Systems Manager document (SSM
 */
DescribeDocumentResponse * SsmClient::describeDocument(const DescribeDocumentRequest &request)
{
    return qobject_cast<DescribeDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeDocumentPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the permissions for a Amazon Web Services Systems Manager document (SSM document). If you created the
 * document, you are the owner. If a document is shared, it can either be shared privately (by specifying a user's Amazon
 * Web Services account ID) or publicly (<i>All</i>).
 */
DescribeDocumentPermissionResponse * SsmClient::describeDocumentPermission(const DescribeDocumentPermissionRequest &request)
{
    return qobject_cast<DescribeDocumentPermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeEffectiveInstanceAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * All associations for the managed
 */
DescribeEffectiveInstanceAssociationsResponse * SsmClient::describeEffectiveInstanceAssociations(const DescribeEffectiveInstanceAssociationsRequest &request)
{
    return qobject_cast<DescribeEffectiveInstanceAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeEffectivePatchesForPatchBaselineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the current effective patches (the patch and the approval state) for the specified patch baseline. Applies to
 * patch baselines for Windows
 */
DescribeEffectivePatchesForPatchBaselineResponse * SsmClient::describeEffectivePatchesForPatchBaseline(const DescribeEffectivePatchesForPatchBaselineRequest &request)
{
    return qobject_cast<DescribeEffectivePatchesForPatchBaselineResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeInstanceAssociationsStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The status of the associations for the managed
 */
DescribeInstanceAssociationsStatusResponse * SsmClient::describeInstanceAssociationsStatus(const DescribeInstanceAssociationsStatusRequest &request)
{
    return qobject_cast<DescribeInstanceAssociationsStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeInstanceInformationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your managed nodes, including information about the operating system platform, the version of
 * SSM Agent installed on the managed node, node status, and so
 *
 * on>
 *
 * If you specify one or more managed node IDs, it returns information for those managed nodes. If you don't specify node
 * IDs, it returns information for all your managed nodes. If you specify a node ID that isn't valid or a node that you
 * don't own, you receive an
 *
 * error> <note>
 *
 * The <code>IamRole</code> field for this API operation is the Identity and Access Management (IAM) role assigned to
 * on-premises managed nodes. This call doesn't return the IAM role for EC2
 */
DescribeInstanceInformationResponse * SsmClient::describeInstanceInformation(const DescribeInstanceInformationRequest &request)
{
    return qobject_cast<DescribeInstanceInformationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeInstancePatchStatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the high-level patch state of one or more managed
 */
DescribeInstancePatchStatesResponse * SsmClient::describeInstancePatchStates(const DescribeInstancePatchStatesRequest &request)
{
    return qobject_cast<DescribeInstancePatchStatesResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeInstancePatchStatesForPatchGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the high-level patch state for the managed nodes in the specified patch
 */
DescribeInstancePatchStatesForPatchGroupResponse * SsmClient::describeInstancePatchStatesForPatchGroup(const DescribeInstancePatchStatesForPatchGroupRequest &request)
{
    return qobject_cast<DescribeInstancePatchStatesForPatchGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeInstancePatchesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the patches on the specified managed node and their state relative to the patch baseline
 * being used for the
 */
DescribeInstancePatchesResponse * SsmClient::describeInstancePatches(const DescribeInstancePatchesRequest &request)
{
    return qobject_cast<DescribeInstancePatchesResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeInventoryDeletionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a specific delete inventory
 */
DescribeInventoryDeletionsResponse * SsmClient::describeInventoryDeletions(const DescribeInventoryDeletionsRequest &request)
{
    return qobject_cast<DescribeInventoryDeletionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeMaintenanceWindowExecutionTaskInvocationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the individual task executions (one per target) for a particular task run as part of a maintenance window
 */
DescribeMaintenanceWindowExecutionTaskInvocationsResponse * SsmClient::describeMaintenanceWindowExecutionTaskInvocations(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest &request)
{
    return qobject_cast<DescribeMaintenanceWindowExecutionTaskInvocationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeMaintenanceWindowExecutionTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For a given maintenance window execution, lists the tasks that were
 */
DescribeMaintenanceWindowExecutionTasksResponse * SsmClient::describeMaintenanceWindowExecutionTasks(const DescribeMaintenanceWindowExecutionTasksRequest &request)
{
    return qobject_cast<DescribeMaintenanceWindowExecutionTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeMaintenanceWindowExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the executions of a maintenance window. This includes information about when the maintenance window was scheduled
 * to be active, and information about tasks registered and run with the maintenance
 */
DescribeMaintenanceWindowExecutionsResponse * SsmClient::describeMaintenanceWindowExecutions(const DescribeMaintenanceWindowExecutionsRequest &request)
{
    return qobject_cast<DescribeMaintenanceWindowExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeMaintenanceWindowScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about upcoming executions of a maintenance
 */
DescribeMaintenanceWindowScheduleResponse * SsmClient::describeMaintenanceWindowSchedule(const DescribeMaintenanceWindowScheduleRequest &request)
{
    return qobject_cast<DescribeMaintenanceWindowScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeMaintenanceWindowTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the targets registered with the maintenance
 */
DescribeMaintenanceWindowTargetsResponse * SsmClient::describeMaintenanceWindowTargets(const DescribeMaintenanceWindowTargetsRequest &request)
{
    return qobject_cast<DescribeMaintenanceWindowTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeMaintenanceWindowTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tasks in a maintenance
 *
 * window> <note>
 *
 * For maintenance window tasks without a specified target, you can't supply values for <code>--max-errors</code> and
 * <code>--max-concurrency</code>. Instead, the system inserts a placeholder value of <code>1</code>, which may be reported
 * in the response to this command. These values don't affect the running of your task and can be
 */
DescribeMaintenanceWindowTasksResponse * SsmClient::describeMaintenanceWindowTasks(const DescribeMaintenanceWindowTasksRequest &request)
{
    return qobject_cast<DescribeMaintenanceWindowTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeMaintenanceWindowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the maintenance windows in an Amazon Web Services
 */
DescribeMaintenanceWindowsResponse * SsmClient::describeMaintenanceWindows(const DescribeMaintenanceWindowsRequest &request)
{
    return qobject_cast<DescribeMaintenanceWindowsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeMaintenanceWindowsForTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the maintenance window targets or tasks that a managed node is associated
 */
DescribeMaintenanceWindowsForTargetResponse * SsmClient::describeMaintenanceWindowsForTarget(const DescribeMaintenanceWindowsForTargetRequest &request)
{
    return qobject_cast<DescribeMaintenanceWindowsForTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeOpsItemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Query a set of OpsItems. You must have permission in Identity and Access Management (IAM) to query a list of OpsItems.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting started with
 * OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
 *
 * Guide</i>>
 *
 * Operations engineers and IT professionals use Amazon Web Services Systems Manager OpsCenter to view, investigate, and
 * remediate operational issues impacting the performance and health of their Amazon Web Services resources. For more
 * information, see <a href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a> in
 * the <i>Amazon Web Services Systems Manager User Guide</i>.
 */
DescribeOpsItemsResponse * SsmClient::describeOpsItems(const DescribeOpsItemsRequest &request)
{
    return qobject_cast<DescribeOpsItemsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about a
 *
 * parameter>
 *
 * Request results are returned on a best-effort basis. If you specify <code>MaxResults</code> in the request, the response
 * includes information up to the limit specified. The number of items returned, however, can be between zero and the value
 * of <code>MaxResults</code>. If the service reaches an internal limit while processing the results, it stops the
 * operation and returns the matching values up to that point and a <code>NextToken</code>. You can specify the
 * <code>NextToken</code> in a subsequent call to get the next set of
 *
 * results> <b>
 *
 * If you change the KMS key alias for the KMS key used to encrypt a parameter, then you must also update the key alias the
 * parameter uses to reference KMS. Otherwise, <code>DescribeParameters</code> retrieves whatever the original key alias
 * was
 */
DescribeParametersResponse * SsmClient::describeParameters(const DescribeParametersRequest &request)
{
    return qobject_cast<DescribeParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribePatchBaselinesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the patch baselines in your Amazon Web Services
 */
DescribePatchBaselinesResponse * SsmClient::describePatchBaselines(const DescribePatchBaselinesRequest &request)
{
    return qobject_cast<DescribePatchBaselinesResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribePatchGroupStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns high-level aggregated patch compliance state information for a patch
 */
DescribePatchGroupStateResponse * SsmClient::describePatchGroupState(const DescribePatchGroupStateRequest &request)
{
    return qobject_cast<DescribePatchGroupStateResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribePatchGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all patch groups that have been registered with patch
 */
DescribePatchGroupsResponse * SsmClient::describePatchGroups(const DescribePatchGroupsRequest &request)
{
    return qobject_cast<DescribePatchGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribePatchPropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the properties of available patches organized by product, product family, classification, severity, and other
 * properties of available patches. You can use the reported properties in the filters you specify in requests for
 * operations such as <a>CreatePatchBaseline</a>, <a>UpdatePatchBaseline</a>, <a>DescribeAvailablePatches</a>, and
 *
 * <a>DescribePatchBaselines</a>>
 *
 * The following section lists the properties that can be used in filters for each major operating system
 *
 * type> <dl> <dt>AMAZON_LINUX</dt> <dd>
 *
 * Valid properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> | <code>SEVERITY</code>
 *
 * </p </dd> <dt>AMAZON_LINUX_2</dt> <dd>
 *
 * Valid properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> | <code>SEVERITY</code>
 *
 * </p </dd> <dt>CENTOS</dt> <dd>
 *
 * Valid properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> | <code>SEVERITY</code>
 *
 * </p </dd> <dt>DEBIAN</dt> <dd>
 *
 * Valid properties: <code>PRODUCT</code> | <code>PRIORITY</code>
 *
 * </p </dd> <dt>MACOS</dt> <dd>
 *
 * Valid properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code>
 *
 * </p </dd> <dt>ORACLE_LINUX</dt> <dd>
 *
 * Valid properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> | <code>SEVERITY</code>
 *
 * </p </dd> <dt>REDHAT_ENTERPRISE_LINUX</dt> <dd>
 *
 * Valid properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> | <code>SEVERITY</code>
 *
 * </p </dd> <dt>SUSE</dt> <dd>
 *
 * Valid properties: <code>PRODUCT</code> | <code>CLASSIFICATION</code> | <code>SEVERITY</code>
 *
 * </p </dd> <dt>UBUNTU</dt> <dd>
 *
 * Valid properties: <code>PRODUCT</code> | <code>PRIORITY</code>
 *
 * </p </dd> <dt>WINDOWS</dt> <dd>
 *
 * Valid properties: <code>PRODUCT</code> | <code>PRODUCT_FAMILY</code> | <code>CLASSIFICATION</code> |
 * <code>MSRC_SEVERITY</code>
 */
DescribePatchPropertiesResponse * SsmClient::describePatchProperties(const DescribePatchPropertiesRequest &request)
{
    return qobject_cast<DescribePatchPropertiesResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeSessionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of all active sessions (both connected and disconnected) or terminated sessions from the past 30
 */
DescribeSessionsResponse * SsmClient::describeSessions(const DescribeSessionsRequest &request)
{
    return qobject_cast<DescribeSessionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DisassociateOpsItemRelatedItemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the association between an OpsItem and a related item. For example, this API operation can delete an Incident
 * Manager incident from an OpsItem. Incident Manager is a capability of Amazon Web Services Systems
 */
DisassociateOpsItemRelatedItemResponse * SsmClient::disassociateOpsItemRelatedItem(const DisassociateOpsItemRelatedItemRequest &request)
{
    return qobject_cast<DisassociateOpsItemRelatedItemResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetAutomationExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get detailed information about a particular Automation
 */
GetAutomationExecutionResponse * SsmClient::getAutomationExecution(const GetAutomationExecutionRequest &request)
{
    return qobject_cast<GetAutomationExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetCalendarStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the state of a Amazon Web Services Systems Manager change calendar at the current time or a specified time. If you
 * specify a time, <code>GetCalendarState</code> returns the state of the calendar at that specific time, and returns the
 * next time that the change calendar state will transition. If you don't specify a time, <code>GetCalendarState</code>
 * uses the current time. Change Calendar entries have two possible states: <code>OPEN</code> or
 *
 * <code>CLOSED</code>>
 *
 * If you specify more than one calendar in a request, the command returns the status of <code>OPEN</code> only if all
 * calendars in the request are open. If one or more calendars in the request are closed, the status returned is
 *
 * <code>CLOSED</code>>
 *
 * For more information about Change Calendar, a capability of Amazon Web Services Systems Manager, see <a
 * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-change-calendar.html">Amazon Web
 * Services Systems Manager Change Calendar</a> in the <i>Amazon Web Services Systems Manager User
 */
GetCalendarStateResponse * SsmClient::getCalendarState(const GetCalendarStateRequest &request)
{
    return qobject_cast<GetCalendarStateResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetCommandInvocationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed information about command execution for an invocation or
 *
 * plugin>
 *
 * <code>GetCommandInvocation</code> only gives the execution status of a plugin in a document. To get the command
 * execution status on a specific managed node, use <a>ListCommandInvocations</a>. To get the command execution status
 * across managed nodes, use
 */
GetCommandInvocationResponse * SsmClient::getCommandInvocation(const GetCommandInvocationRequest &request)
{
    return qobject_cast<GetCommandInvocationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetConnectionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the Session Manager connection status for a managed node to determine whether it is running and ready to
 * receive Session Manager
 */
GetConnectionStatusResponse * SsmClient::getConnectionStatus(const GetConnectionStatusRequest &request)
{
    return qobject_cast<GetConnectionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetDefaultPatchBaselineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the default patch baseline. Amazon Web Services Systems Manager supports creating multiple default patch
 * baselines. For example, you can create a default patch baseline for each operating
 *
 * system>
 *
 * If you don't specify an operating system value, the default patch baseline for Windows is
 */
GetDefaultPatchBaselineResponse * SsmClient::getDefaultPatchBaseline(const GetDefaultPatchBaselineRequest &request)
{
    return qobject_cast<GetDefaultPatchBaselineResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetDeployablePatchSnapshotForInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the current snapshot for the patch baseline the managed node uses. This API is primarily used by the
 * <code>AWS-RunPatchBaseline</code> Systems Manager document (SSM
 *
 * document)> <note>
 *
 * If you run the command locally, such as with the Command Line Interface (CLI), the system attempts to use your local
 * Amazon Web Services credentials and the operation fails. To avoid this, you can run the command in the Amazon Web
 * Services Systems Manager console. Use Run Command, a capability of Amazon Web Services Systems Manager, with an SSM
 * document that enables you to target a managed node with a script or command. For example, run the command using the
 * <code>AWS-RunShellScript</code> document or the <code>AWS-RunPowerShellScript</code>
 */
GetDeployablePatchSnapshotForInstanceResponse * SsmClient::getDeployablePatchSnapshotForInstance(const GetDeployablePatchSnapshotForInstanceRequest &request)
{
    return qobject_cast<GetDeployablePatchSnapshotForInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the contents of the specified Amazon Web Services Systems Manager document (SSM
 */
GetDocumentResponse * SsmClient::getDocument(const GetDocumentRequest &request)
{
    return qobject_cast<GetDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetInventoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Query inventory information. This includes managed node status, such as <code>Stopped</code> or
 */
GetInventoryResponse * SsmClient::getInventory(const GetInventoryRequest &request)
{
    return qobject_cast<GetInventoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetInventorySchemaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Return a list of inventory type names for the account, or return a list of attribute names for a specific Inventory item
 */
GetInventorySchemaResponse * SsmClient::getInventorySchema(const GetInventorySchemaRequest &request)
{
    return qobject_cast<GetInventorySchemaResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetMaintenanceWindowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a maintenance
 */
GetMaintenanceWindowResponse * SsmClient::getMaintenanceWindow(const GetMaintenanceWindowRequest &request)
{
    return qobject_cast<GetMaintenanceWindowResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetMaintenanceWindowExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details about a specific a maintenance window
 */
GetMaintenanceWindowExecutionResponse * SsmClient::getMaintenanceWindowExecution(const GetMaintenanceWindowExecutionRequest &request)
{
    return qobject_cast<GetMaintenanceWindowExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetMaintenanceWindowExecutionTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the details about a specific task run as part of a maintenance window
 */
GetMaintenanceWindowExecutionTaskResponse * SsmClient::getMaintenanceWindowExecutionTask(const GetMaintenanceWindowExecutionTaskRequest &request)
{
    return qobject_cast<GetMaintenanceWindowExecutionTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetMaintenanceWindowExecutionTaskInvocationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a specific task running on a specific
 */
GetMaintenanceWindowExecutionTaskInvocationResponse * SsmClient::getMaintenanceWindowExecutionTaskInvocation(const GetMaintenanceWindowExecutionTaskInvocationRequest &request)
{
    return qobject_cast<GetMaintenanceWindowExecutionTaskInvocationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetMaintenanceWindowTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the details of a maintenance window
 *
 * task> <note>
 *
 * For maintenance window tasks without a specified target, you can't supply values for <code>--max-errors</code> and
 * <code>--max-concurrency</code>. Instead, the system inserts a placeholder value of <code>1</code>, which may be reported
 * in the response to this command. These values don't affect the running of your task and can be
 *
 * ignored> </note>
 *
 * To retrieve a list of tasks in a maintenance window, instead use the <a>DescribeMaintenanceWindowTasks</a>
 */
GetMaintenanceWindowTaskResponse * SsmClient::getMaintenanceWindowTask(const GetMaintenanceWindowTaskRequest &request)
{
    return qobject_cast<GetMaintenanceWindowTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetOpsItemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about an OpsItem by using the ID. You must have permission in Identity and Access Management (IAM) to
 * view information about an OpsItem. For more information, see <a
 * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting started with
 * OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
 *
 * Guide</i>>
 *
 * Operations engineers and IT professionals use Amazon Web Services Systems Manager OpsCenter to view, investigate, and
 * remediate operational issues impacting the performance and health of their Amazon Web Services resources. For more
 * information, see <a href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a> in
 * the <i>Amazon Web Services Systems Manager User Guide</i>.
 */
GetOpsItemResponse * SsmClient::getOpsItem(const GetOpsItemRequest &request)
{
    return qobject_cast<GetOpsItemResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetOpsMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * View operational metadata related to an application in Application
 */
GetOpsMetadataResponse * SsmClient::getOpsMetadata(const GetOpsMetadataRequest &request)
{
    return qobject_cast<GetOpsMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetOpsSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * View a summary of operations metadata (OpsData) based on specified filters and aggregators. OpsData can include
 * information about Amazon Web Services Systems Manager OpsCenter operational workitems (OpsItems) as well as information
 * about any Amazon Web Services resource or service configured to report OpsData to Amazon Web Services Systems Manager
 * Explorer.
 */
GetOpsSummaryResponse * SsmClient::getOpsSummary(const GetOpsSummaryRequest &request)
{
    return qobject_cast<GetOpsSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetParameterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about a single parameter by specifying the parameter
 *
 * name> <note>
 *
 * To get information about more than one parameter at a time, use the <a>GetParameters</a>
 */
GetParameterResponse * SsmClient::getParameter(const GetParameterRequest &request)
{
    return qobject_cast<GetParameterResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetParameterHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the history of all changes to a
 *
 * parameter> <b>
 *
 * If you change the KMS key alias for the KMS key used to encrypt a parameter, then you must also update the key alias the
 * parameter uses to reference KMS. Otherwise, <code>GetParameterHistory</code> retrieves whatever the original key alias
 * was
 */
GetParameterHistoryResponse * SsmClient::getParameterHistory(const GetParameterHistoryRequest &request)
{
    return qobject_cast<GetParameterHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about one or more parameters by specifying multiple parameter
 *
 * names> <note>
 *
 * To get information about a single parameter, you can use the <a>GetParameter</a> operation
 */
GetParametersResponse * SsmClient::getParameters(const GetParametersRequest &request)
{
    return qobject_cast<GetParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetParametersByPathResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve information about one or more parameters in a specific hierarchy.
 *
 * </p
 *
 * Request results are returned on a best-effort basis. If you specify <code>MaxResults</code> in the request, the response
 * includes information up to the limit specified. The number of items returned, however, can be between zero and the value
 * of <code>MaxResults</code>. If the service reaches an internal limit while processing the results, it stops the
 * operation and returns the matching values up to that point and a <code>NextToken</code>. You can specify the
 * <code>NextToken</code> in a subsequent call to get the next set of
 */
GetParametersByPathResponse * SsmClient::getParametersByPath(const GetParametersByPathRequest &request)
{
    return qobject_cast<GetParametersByPathResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetPatchBaselineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a patch
 */
GetPatchBaselineResponse * SsmClient::getPatchBaseline(const GetPatchBaselineRequest &request)
{
    return qobject_cast<GetPatchBaselineResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetPatchBaselineForPatchGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the patch baseline that should be used for the specified patch
 */
GetPatchBaselineForPatchGroupResponse * SsmClient::getPatchBaselineForPatchGroup(const GetPatchBaselineForPatchGroupRequest &request)
{
    return qobject_cast<GetPatchBaselineForPatchGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetServiceSettingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <code>ServiceSetting</code> is an account-level setting for an Amazon Web Services service. This setting defines how a
 * user interacts with or uses a service or a feature of a service. For example, if an Amazon Web Services service charges
 * money to the account based on feature or service usage, then the Amazon Web Services service team might create a default
 * setting of <code>false</code>. This means the user can't use this feature unless they change the setting to
 * <code>true</code> and intentionally opt in for a paid
 *
 * feature>
 *
 * Services map a <code>SettingId</code> object to a setting value. Amazon Web Services services teams define the default
 * value for a <code>SettingId</code>. You can't create a new <code>SettingId</code>, but you can overwrite the default
 * value if you have the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
 * <a>UpdateServiceSetting</a> API operation to change the default setting. Or use the <a>ResetServiceSetting</a> to change
 * the value back to the original value defined by the Amazon Web Services service
 *
 * team>
 *
 * Query the current service setting for the Amazon Web Services account.
 */
GetServiceSettingResponse * SsmClient::getServiceSetting(const GetServiceSettingRequest &request)
{
    return qobject_cast<GetServiceSettingResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * LabelParameterVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A parameter label is a user-defined alias to help you manage different versions of a parameter. When you modify a
 * parameter, Amazon Web Services Systems Manager automatically saves a new version and increments the version number by
 * one. A label can help you remember the purpose of a parameter when there are multiple versions.
 *
 * </p
 *
 * Parameter labels have the following requirements and
 *
 * restrictions> <ul> <li>
 *
 * A version of a parameter can have a maximum of 10
 *
 * labels> </li> <li>
 *
 * You can't attach the same label to different versions of the same parameter. For example, if version 1 has the label
 * Production, then you can't attach Production to version
 *
 * 2> </li> <li>
 *
 * You can move a label from one version of a parameter to
 *
 * another> </li> <li>
 *
 * You can't create a label when you create a new parameter. You must attach a label to a specific version of a
 *
 * parameter> </li> <li>
 *
 * If you no longer want to use a parameter label, then you can either delete it or move it to a different version of a
 *
 * parameter> </li> <li>
 *
 * A label can have a maximum of 100
 *
 * characters> </li> <li>
 *
 * Labels can contain letters (case sensitive), numbers, periods (.), hyphens (-), or underscores
 *
 * (_)> </li> <li>
 *
 * Labels can't begin with a number, "<code>aws</code>" or "<code>ssm</code>" (not case sensitive). If a label fails to
 * meet these requirements, then the label isn't associated with a parameter and the system displays it in the list of
 */
LabelParameterVersionResponse * SsmClient::labelParameterVersion(const LabelParameterVersionRequest &request)
{
    return qobject_cast<LabelParameterVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListAssociationVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all versions of an association for a specific association
 */
ListAssociationVersionsResponse * SsmClient::listAssociationVersions(const ListAssociationVersionsRequest &request)
{
    return qobject_cast<ListAssociationVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all State Manager associations in the current Amazon Web Services account and Amazon Web Services Region. You
 * can limit the results to a specific State Manager association document or managed node by specifying a filter. State
 * Manager is a capability of Amazon Web Services Systems
 */
ListAssociationsResponse * SsmClient::listAssociations(const ListAssociationsRequest &request)
{
    return qobject_cast<ListAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListCommandInvocationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * An invocation is copy of a command sent to a specific managed node. A command can apply to one or more managed nodes. A
 * command invocation applies to one managed node. For example, if a user runs <code>SendCommand</code> against three
 * managed nodes, then a command invocation is created for each requested managed node ID.
 * <code>ListCommandInvocations</code> provide status about command
 */
ListCommandInvocationsResponse * SsmClient::listCommandInvocations(const ListCommandInvocationsRequest &request)
{
    return qobject_cast<ListCommandInvocationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListCommandsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the commands requested by users of the Amazon Web Services
 */
ListCommandsResponse * SsmClient::listCommands(const ListCommandsRequest &request)
{
    return qobject_cast<ListCommandsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListComplianceItemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For a specified resource ID, this API operation returns a list of compliance statuses for different resource types.
 * Currently, you can only specify one resource ID per call. List results depend on the criteria specified in the
 */
ListComplianceItemsResponse * SsmClient::listComplianceItems(const ListComplianceItemsRequest &request)
{
    return qobject_cast<ListComplianceItemsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListComplianceSummariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a summary count of compliant and non-compliant resources for a compliance type. For example, this call can
 * return State Manager associations, patches, or custom compliance types according to the filter criteria that you
 */
ListComplianceSummariesResponse * SsmClient::listComplianceSummaries(const ListComplianceSummariesRequest &request)
{
    return qobject_cast<ListComplianceSummariesResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListDocumentMetadataHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Information about approval reviews for a version of a change template in Change
 */
ListDocumentMetadataHistoryResponse * SsmClient::listDocumentMetadataHistory(const ListDocumentMetadataHistoryRequest &request)
{
    return qobject_cast<ListDocumentMetadataHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListDocumentVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all versions for a
 */
ListDocumentVersionsResponse * SsmClient::listDocumentVersions(const ListDocumentVersionsRequest &request)
{
    return qobject_cast<ListDocumentVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListDocumentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all Systems Manager (SSM) documents in the current Amazon Web Services account and Amazon Web Services Region.
 * You can limit the results of this request by using a
 */
ListDocumentsResponse * SsmClient::listDocuments(const ListDocumentsRequest &request)
{
    return qobject_cast<ListDocumentsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListInventoryEntriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list of inventory items returned by the
 */
ListInventoryEntriesResponse * SsmClient::listInventoryEntries(const ListInventoryEntriesRequest &request)
{
    return qobject_cast<ListInventoryEntriesResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListOpsItemEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all OpsItem events in the current Amazon Web Services Region and Amazon Web Services account. You can
 * limit the results to events associated with specific OpsItems by specifying a
 */
ListOpsItemEventsResponse * SsmClient::listOpsItemEvents(const ListOpsItemEventsRequest &request)
{
    return qobject_cast<ListOpsItemEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListOpsItemRelatedItemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all related-item resources associated with a Systems Manager OpsCenter OpsItem. OpsCenter is a capability of
 * Amazon Web Services Systems
 */
ListOpsItemRelatedItemsResponse * SsmClient::listOpsItemRelatedItems(const ListOpsItemRelatedItemsRequest &request)
{
    return qobject_cast<ListOpsItemRelatedItemsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListOpsMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Amazon Web Services Systems Manager calls this API operation when displaying all Application Manager OpsMetadata objects
 * or
 */
ListOpsMetadataResponse * SsmClient::listOpsMetadata(const ListOpsMetadataRequest &request)
{
    return qobject_cast<ListOpsMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListResourceComplianceSummariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a resource-level summary count. The summary includes information about compliant and non-compliant statuses and
 * detailed compliance-item severity counts, according to the filter criteria you
 */
ListResourceComplianceSummariesResponse * SsmClient::listResourceComplianceSummaries(const ListResourceComplianceSummariesRequest &request)
{
    return qobject_cast<ListResourceComplianceSummariesResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListResourceDataSyncResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your resource data sync configurations. Includes information about the last time a sync attempted to start, the
 * last sync status, and the last time a sync successfully
 *
 * completed>
 *
 * The number of sync configurations might be too large to return using a single call to <code>ListResourceDataSync</code>.
 * You can limit the number of sync configurations returned by using the <code>MaxResults</code> parameter. To determine
 * whether there are more sync configurations to list, check the value of <code>NextToken</code> in the output. If there
 * are more sync configurations to list, you can request them by specifying the <code>NextToken</code> returned in the call
 * to the parameter of a subsequent call.
 */
ListResourceDataSyncResponse * SsmClient::listResourceDataSync(const ListResourceDataSyncRequest &request)
{
    return qobject_cast<ListResourceDataSyncResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the tags assigned to the specified
 *
 * resource>
 *
 * For information about the ID format for each supported resource type, see
 */
ListTagsForResourceResponse * SsmClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ModifyDocumentPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Shares a Amazon Web Services Systems Manager document (SSM document)publicly or privately. If you share a document
 * privately, you must specify the Amazon Web Services user account IDs for those people who can use the document. If you
 * share a document publicly, you must specify <i>All</i> as the account
 */
ModifyDocumentPermissionResponse * SsmClient::modifyDocumentPermission(const ModifyDocumentPermissionRequest &request)
{
    return qobject_cast<ModifyDocumentPermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * PutComplianceItemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a compliance type and other compliance details on a designated resource. This operation lets you register
 * custom compliance details with a resource. This call overwrites existing compliance information on the resource, so you
 * must provide a full list of compliance items each time that you send the
 *
 * request>
 *
 * ComplianceType can be one of the
 *
 * following> <ul> <li>
 *
 * ExecutionId: The execution ID when the patch, association, or custom compliance item was
 *
 * applied> </li> <li>
 *
 * ExecutionType: Specify patch, association, or
 *
 * Custom:<code>string</code>> </li> <li>
 *
 * ExecutionTime. The time the patch, association, or custom compliance item was applied to the managed
 *
 * node> </li> <li>
 *
 * Id: The patch, association, or custom compliance
 *
 * ID> </li> <li>
 *
 * Title: A
 *
 * title> </li> <li>
 *
 * Status: The status of the compliance item. For example, <code>approved</code> for patches, or <code>Failed</code> for
 *
 * associations> </li> <li>
 *
 * Severity: A patch severity. For example,
 *
 * <code>Critical</code>> </li> <li>
 *
 * DocumentName: An SSM document name. For example,
 *
 * <code>AWS-RunPatchBaseline</code>> </li> <li>
 *
 * DocumentVersion: An SSM document version number. For example,
 *
 * 4> </li> <li>
 *
 * Classification: A patch classification. For example, <code>security
 *
 * updates</code>> </li> <li>
 *
 * PatchBaselineId: A patch baseline
 *
 * ID> </li> <li>
 *
 * PatchSeverity: A patch severity. For example,
 *
 * <code>Critical</code>> </li> <li>
 *
 * PatchState: A patch state. For example,
 *
 * <code>InstancesWithFailedPatches</code>> </li> <li>
 *
 * PatchGroup: The name of a patch
 *
 * group> </li> <li>
 *
 * InstalledTime: The time the association, patch, or custom compliance item was applied to the resource. Specify the time
 * by using the following format:
 */
PutComplianceItemsResponse * SsmClient::putComplianceItems(const PutComplianceItemsRequest &request)
{
    return qobject_cast<PutComplianceItemsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * PutInventoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Bulk update custom inventory items on one or more managed nodes. The request adds an inventory item, if it doesn't
 * already exist, or updates an inventory item, if it does
 */
PutInventoryResponse * SsmClient::putInventory(const PutInventoryRequest &request)
{
    return qobject_cast<PutInventoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * PutParameterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add a parameter to the
 */
PutParameterResponse * SsmClient::putParameter(const PutParameterRequest &request)
{
    return qobject_cast<PutParameterResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * RegisterDefaultPatchBaselineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Defines the default patch baseline for the relevant operating
 *
 * system>
 *
 * To reset the Amazon Web Services-predefined patch baseline as the default, specify the full patch baseline Amazon
 * Resource Name (ARN) as the baseline ID value. For example, for CentOS, specify
 * <code>arn:aws:ssm:us-east-2:733109147000:patchbaseline/pb-0574b43a65ea646ed</code> instead of
 */
RegisterDefaultPatchBaselineResponse * SsmClient::registerDefaultPatchBaseline(const RegisterDefaultPatchBaselineRequest &request)
{
    return qobject_cast<RegisterDefaultPatchBaselineResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * RegisterPatchBaselineForPatchGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a patch baseline for a patch
 */
RegisterPatchBaselineForPatchGroupResponse * SsmClient::registerPatchBaselineForPatchGroup(const RegisterPatchBaselineForPatchGroupRequest &request)
{
    return qobject_cast<RegisterPatchBaselineForPatchGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * RegisterTargetWithMaintenanceWindowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a target with a maintenance
 */
RegisterTargetWithMaintenanceWindowResponse * SsmClient::registerTargetWithMaintenanceWindow(const RegisterTargetWithMaintenanceWindowRequest &request)
{
    return qobject_cast<RegisterTargetWithMaintenanceWindowResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * RegisterTaskWithMaintenanceWindowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new task to a maintenance
 */
RegisterTaskWithMaintenanceWindowResponse * SsmClient::registerTaskWithMaintenanceWindow(const RegisterTaskWithMaintenanceWindowRequest &request)
{
    return qobject_cast<RegisterTaskWithMaintenanceWindowResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * RemoveTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tag keys from the specified
 */
RemoveTagsFromResourceResponse * SsmClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ResetServiceSettingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <code>ServiceSetting</code> is an account-level setting for an Amazon Web Services service. This setting defines how a
 * user interacts with or uses a service or a feature of a service. For example, if an Amazon Web Services service charges
 * money to the account based on feature or service usage, then the Amazon Web Services service team might create a default
 * setting of "false". This means the user can't use this feature unless they change the setting to "true" and
 * intentionally opt in for a paid
 *
 * feature>
 *
 * Services map a <code>SettingId</code> object to a setting value. Amazon Web Services services teams define the default
 * value for a <code>SettingId</code>. You can't create a new <code>SettingId</code>, but you can overwrite the default
 * value if you have the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the <a>GetServiceSetting</a>
 * API operation to view the current value. Use the <a>UpdateServiceSetting</a> API operation to change the default
 * setting.
 *
 * </p
 *
 * Reset the service setting for the account to the default value as provisioned by the Amazon Web Services service team.
 */
ResetServiceSettingResponse * SsmClient::resetServiceSetting(const ResetServiceSettingRequest &request)
{
    return qobject_cast<ResetServiceSettingResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * ResumeSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reconnects a session to a managed node after it has been disconnected. Connections can be resumed for disconnected
 * sessions, but not terminated
 *
 * sessions> <note>
 *
 * This command is primarily for use by client machines to automatically reconnect during intermittent network issues. It
 * isn't intended for any other
 */
ResumeSessionResponse * SsmClient::resumeSession(const ResumeSessionRequest &request)
{
    return qobject_cast<ResumeSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * SendAutomationSignalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a signal to an Automation execution to change the current behavior or status of the execution.
 */
SendAutomationSignalResponse * SsmClient::sendAutomationSignal(const SendAutomationSignalRequest &request)
{
    return qobject_cast<SendAutomationSignalResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * SendCommandResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs commands on one or more managed
 */
SendCommandResponse * SsmClient::sendCommand(const SendCommandRequest &request)
{
    return qobject_cast<SendCommandResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * StartAssociationsOnceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs an association immediately and only one time. This operation can be helpful when troubleshooting
 */
StartAssociationsOnceResponse * SsmClient::startAssociationsOnce(const StartAssociationsOnceRequest &request)
{
    return qobject_cast<StartAssociationsOnceResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * StartAutomationExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates execution of an Automation
 */
StartAutomationExecutionResponse * SsmClient::startAutomationExecution(const StartAutomationExecutionRequest &request)
{
    return qobject_cast<StartAutomationExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * StartChangeRequestExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a change request for Change Manager. The Automation runbooks specified in the change request run only after all
 * required approvals for the change request have been
 */
StartChangeRequestExecutionResponse * SsmClient::startChangeRequestExecution(const StartChangeRequestExecutionRequest &request)
{
    return qobject_cast<StartChangeRequestExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * StartSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates a connection to a target (for example, a managed node) for a Session Manager session. Returns a URL and token
 * that can be used to open a WebSocket connection for sending input and receiving
 *
 * outputs> <note>
 *
 * Amazon Web Services CLI usage: <code>start-session</code> is an interactive command that requires the Session Manager
 * plugin to be installed on the client machine making the call. For information, see <a
 * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/session-manager-working-with-install-plugin.html">Install
 * the Session Manager plugin for the Amazon Web Services CLI</a> in the <i>Amazon Web Services Systems Manager User
 *
 * Guide</i>>
 *
 * Amazon Web Services Tools for PowerShell usage: Start-SSMSession isn't currently supported by Amazon Web Services Tools
 * for PowerShell on Windows local
 */
StartSessionResponse * SsmClient::startSession(const StartSessionRequest &request)
{
    return qobject_cast<StartSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * StopAutomationExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stop an Automation that is currently
 */
StopAutomationExecutionResponse * SsmClient::stopAutomationExecution(const StopAutomationExecutionRequest &request)
{
    return qobject_cast<StopAutomationExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * TerminateSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently ends a session and closes the data connection between the Session Manager client and SSM Agent on the
 * managed node. A terminated session can't be
 */
TerminateSessionResponse * SsmClient::terminateSession(const TerminateSessionRequest &request)
{
    return qobject_cast<TerminateSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UnlabelParameterVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove a label or labels from a
 */
UnlabelParameterVersionResponse * SsmClient::unlabelParameterVersion(const UnlabelParameterVersionRequest &request)
{
    return qobject_cast<UnlabelParameterVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an association. You can update the association name and version, the document version, schedule, parameters, and
 * Amazon Simple Storage Service (Amazon S3) output. When you call <code>UpdateAssociation</code>, the system removes all
 * optional parameters from the request and overwrites the association with null values for those parameters. This is by
 * design. You must specify all optional parameters in the call, even if you are not changing the parameters. This includes
 * the <code>Name</code> parameter. Before calling this API action, we recommend that you call the
 * <a>DescribeAssociation</a> API operation and make a note of all optional parameters required for your
 * <code>UpdateAssociation</code>
 *
 * call>
 *
 * In order to call this API operation, your Identity and Access Management (IAM) user account, group, or role must be
 * configured with permission to call the <a>DescribeAssociation</a> API operation. If you don't have permission to call
 * <code>DescribeAssociation</code>, then you receive the following error: <code>An error occurred (AccessDeniedException)
 * when calling the UpdateAssociation operation: User: <user_arn> isn't authorized to perform: ssm:DescribeAssociation on
 * resource: <resource_arn></code>
 *
 * </p <b>
 *
 * When you update an association, the association immediately runs against the specified targets. You can add the
 * <code>ApplyOnlyAtCronInterval</code> parameter to run the association during the next schedule
 */
UpdateAssociationResponse * SsmClient::updateAssociation(const UpdateAssociationRequest &request)
{
    return qobject_cast<UpdateAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateAssociationStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status of the Amazon Web Services Systems Manager document (SSM document) associated with the specified
 * managed
 *
 * node>
 *
 * <code>UpdateAssociationStatus</code> is primarily used by the Amazon Web Services Systems Manager Agent (SSM Agent) to
 * report status updates about your associations and is only used for associations created with the <code>InstanceId</code>
 * legacy
 */
UpdateAssociationStatusResponse * SsmClient::updateAssociationStatus(const UpdateAssociationStatusRequest &request)
{
    return qobject_cast<UpdateAssociationStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates one or more values for an SSM
 */
UpdateDocumentResponse * SsmClient::updateDocument(const UpdateDocumentRequest &request)
{
    return qobject_cast<UpdateDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateDocumentDefaultVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set the default version of a document.
 *
 * </p <note>
 *
 * If you change a document version for a State Manager association, Systems Manager immediately runs the association
 * unless you previously specifed the <code>apply-only-at-cron-interval</code>
 */
UpdateDocumentDefaultVersionResponse * SsmClient::updateDocumentDefaultVersion(const UpdateDocumentDefaultVersionRequest &request)
{
    return qobject_cast<UpdateDocumentDefaultVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateDocumentMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates information related to approval reviews for a specific version of a change template in Change
 */
UpdateDocumentMetadataResponse * SsmClient::updateDocumentMetadata(const UpdateDocumentMetadataRequest &request)
{
    return qobject_cast<UpdateDocumentMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateMaintenanceWindowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing maintenance window. Only specified parameters are
 *
 * modified> <note>
 *
 * The value you specify for <code>Duration</code> determines the specific end time for the maintenance window based on the
 * time it begins. No maintenance window tasks are permitted to start after the resulting endtime minus the number of hours
 * you specify for <code>Cutoff</code>. For example, if the maintenance window starts at 3 PM, the duration is three hours,
 * and the value you specify for <code>Cutoff</code> is one hour, no maintenance window tasks can start after 5
 */
UpdateMaintenanceWindowResponse * SsmClient::updateMaintenanceWindow(const UpdateMaintenanceWindowRequest &request)
{
    return qobject_cast<UpdateMaintenanceWindowResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateMaintenanceWindowTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the target of an existing maintenance window. You can change the
 *
 * following> <ul> <li>
 *
 * Nam> </li> <li>
 *
 * Descriptio> </li> <li>
 *
 * Owne> </li> <li>
 *
 * IDs for an ID
 *
 * targe> </li> <li>
 *
 * Tags for a Tag
 *
 * targe> </li> <li>
 *
 * From any supported tag type to another. The three supported tag types are ID target, Tag target, and resource group. For
 * more information, see
 *
 * <a>Target</a>> </li> </ul> <note>
 *
 * If a parameter is null, then the corresponding field isn't
 */
UpdateMaintenanceWindowTargetResponse * SsmClient::updateMaintenanceWindowTarget(const UpdateMaintenanceWindowTargetRequest &request)
{
    return qobject_cast<UpdateMaintenanceWindowTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateMaintenanceWindowTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies a task assigned to a maintenance window. You can't change the task type, but you can change the following
 *
 * values> <ul> <li>
 *
 * <code>TaskARN</code>. For example, you can change a <code>RUN_COMMAND</code> task from
 * <code>AWS-RunPowerShellScript</code> to
 *
 * <code>AWS-RunShellScript</code>> </li> <li>
 *
 * <code>ServiceRoleArn</code>
 *
 * </p </li> <li>
 *
 * <code>TaskInvocationParameters</code>
 *
 * </p </li> <li>
 *
 * <code>Priority</code>
 *
 * </p </li> <li>
 *
 * <code>MaxConcurrency</code>
 *
 * </p </li> <li>
 *
 * <code>MaxErrors</code>
 *
 * </p </li> </ul> <note>
 *
 * One or more targets must be specified for maintenance window Run Command-type tasks. Depending on the task, targets are
 * optional for other maintenance window task types (Automation, Lambda, and Step Functions). For more information about
 * running tasks that don't specify targets, see <a
 * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">Registering
 * maintenance window tasks without targets</a> in the <i>Amazon Web Services Systems Manager User
 *
 * Guide</i>> </note>
 *
 * If the value for a parameter in <code>UpdateMaintenanceWindowTask</code> is null, then the corresponding field isn't
 * modified. If you set <code>Replace</code> to true, then all fields required by the
 * <a>RegisterTaskWithMaintenanceWindow</a> operation are required for this request. Optional fields that aren't specified
 * are set to
 *
 * null> <b>
 *
 * When you update a maintenance window task that has options specified in <code>TaskInvocationParameters</code>, you must
 * provide again all the <code>TaskInvocationParameters</code> values that you want to retain. The values you don't specify
 * again are removed. For example, suppose that when you registered a Run Command task, you specified
 * <code>TaskInvocationParameters</code> values for <code>Comment</code>, <code>NotificationConfig</code>, and
 * <code>OutputS3BucketName</code>. If you update the maintenance window task and specify only a different
 * <code>OutputS3BucketName</code> value, the values for <code>Comment</code> and <code>NotificationConfig</code> are
 */
UpdateMaintenanceWindowTaskResponse * SsmClient::updateMaintenanceWindowTask(const UpdateMaintenanceWindowTaskRequest &request)
{
    return qobject_cast<UpdateMaintenanceWindowTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateManagedInstanceRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the Identity and Access Management (IAM) role that is assigned to the on-premises server, edge device, or
 * virtual machines (VM). IAM roles are first assigned to these hybrid nodes during the activation process. For more
 * information, see
 */
UpdateManagedInstanceRoleResponse * SsmClient::updateManagedInstanceRole(const UpdateManagedInstanceRoleRequest &request)
{
    return qobject_cast<UpdateManagedInstanceRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateOpsItemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Edit or change an OpsItem. You must have permission in Identity and Access Management (IAM) to update an OpsItem. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-getting-started.html">Getting started with
 * OpsCenter</a> in the <i>Amazon Web Services Systems Manager User
 *
 * Guide</i>>
 *
 * Operations engineers and IT professionals use Amazon Web Services Systems Manager OpsCenter to view, investigate, and
 * remediate operational issues impacting the performance and health of their Amazon Web Services resources. For more
 * information, see <a href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter.html">OpsCenter</a> in
 * the <i>Amazon Web Services Systems Manager User Guide</i>.
 */
UpdateOpsItemResponse * SsmClient::updateOpsItem(const UpdateOpsItemRequest &request)
{
    return qobject_cast<UpdateOpsItemResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateOpsMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Amazon Web Services Systems Manager calls this API operation when you edit OpsMetadata in Application
 */
UpdateOpsMetadataResponse * SsmClient::updateOpsMetadata(const UpdateOpsMetadataRequest &request)
{
    return qobject_cast<UpdateOpsMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdatePatchBaselineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing patch baseline. Fields not specified in the request are left
 *
 * unchanged> <note>
 *
 * For information about valid key-value pairs in <code>PatchFilters</code> for each supported operating system type, see
 */
UpdatePatchBaselineResponse * SsmClient::updatePatchBaseline(const UpdatePatchBaselineRequest &request)
{
    return qobject_cast<UpdatePatchBaselineResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateResourceDataSyncResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a resource data sync. After you create a resource data sync for a Region, you can't change the account options
 * for that sync. For example, if you create a sync in the us-east-2 (Ohio) Region and you choose the <code>Include only
 * the current account</code> option, you can't edit that sync later and choose the <code>Include all accounts from my
 * Organizations configuration</code> option. Instead, you must delete the first resource data sync, and create a new
 *
 * one> <note>
 *
 * This API operation only supports a resource data sync that was created with a SyncFromSource
 */
UpdateResourceDataSyncResponse * SsmClient::updateResourceDataSync(const UpdateResourceDataSyncRequest &request)
{
    return qobject_cast<UpdateResourceDataSyncResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateServiceSettingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <code>ServiceSetting</code> is an account-level setting for an Amazon Web Services service. This setting defines how a
 * user interacts with or uses a service or a feature of a service. For example, if an Amazon Web Services service charges
 * money to the account based on feature or service usage, then the Amazon Web Services service team might create a default
 * setting of "false". This means the user can't use this feature unless they change the setting to "true" and
 * intentionally opt in for a paid
 *
 * feature>
 *
 * Services map a <code>SettingId</code> object to a setting value. Amazon Web Services services teams define the default
 * value for a <code>SettingId</code>. You can't create a new <code>SettingId</code>, but you can overwrite the default
 * value if you have the <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the <a>GetServiceSetting</a>
 * API operation to view the current value. Or, use the <a>ResetServiceSetting</a> to change the value back to the original
 * value defined by the Amazon Web Services service
 *
 * team>
 *
 * Update the service setting for the account.
 */
UpdateServiceSettingResponse * SsmClient::updateServiceSetting(const UpdateServiceSettingRequest &request)
{
    return qobject_cast<UpdateServiceSettingResponse *>(send(request));
}

/*!
 * \class QtAws::Ssm::SsmClientPrivate
 * \brief The SsmClientPrivate class provides private implementation for SsmClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a SsmClientPrivate object with public implementation \a q.
 */
SsmClientPrivate::SsmClientPrivate(SsmClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Ssm
} // namespace QtAws

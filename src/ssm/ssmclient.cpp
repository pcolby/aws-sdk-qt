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

#include "ssmclient.h"
#include "ssmclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagstoresourcerequest.h"
#include "addtagstoresourceresponse.h"
#include "cancelcommandrequest.h"
#include "cancelcommandresponse.h"
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
#include "describemaintenancewindowtargetsrequest.h"
#include "describemaintenancewindowtargetsresponse.h"
#include "describemaintenancewindowtasksrequest.h"
#include "describemaintenancewindowtasksresponse.h"
#include "describemaintenancewindowsrequest.h"
#include "describemaintenancewindowsresponse.h"
#include "describeparametersrequest.h"
#include "describeparametersresponse.h"
#include "describepatchbaselinesrequest.h"
#include "describepatchbaselinesresponse.h"
#include "describepatchgroupstaterequest.h"
#include "describepatchgroupstateresponse.h"
#include "describepatchgroupsrequest.h"
#include "describepatchgroupsresponse.h"
#include "getautomationexecutionrequest.h"
#include "getautomationexecutionresponse.h"
#include "getcommandinvocationrequest.h"
#include "getcommandinvocationresponse.h"
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
#include "listdocumentversionsrequest.h"
#include "listdocumentversionsresponse.h"
#include "listdocumentsrequest.h"
#include "listdocumentsresponse.h"
#include "listinventoryentriesrequest.h"
#include "listinventoryentriesresponse.h"
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
#include "sendautomationsignalrequest.h"
#include "sendautomationsignalresponse.h"
#include "sendcommandrequest.h"
#include "sendcommandresponse.h"
#include "startassociationsoncerequest.h"
#include "startassociationsonceresponse.h"
#include "startautomationexecutionrequest.h"
#include "startautomationexecutionresponse.h"
#include "stopautomationexecutionrequest.h"
#include "stopautomationexecutionresponse.h"
#include "updateassociationrequest.h"
#include "updateassociationresponse.h"
#include "updateassociationstatusrequest.h"
#include "updateassociationstatusresponse.h"
#include "updatedocumentrequest.h"
#include "updatedocumentresponse.h"
#include "updatedocumentdefaultversionrequest.h"
#include "updatedocumentdefaultversionresponse.h"
#include "updatemaintenancewindowrequest.h"
#include "updatemaintenancewindowresponse.h"
#include "updatemaintenancewindowtargetrequest.h"
#include "updatemaintenancewindowtargetresponse.h"
#include "updatemaintenancewindowtaskrequest.h"
#include "updatemaintenancewindowtaskresponse.h"
#include "updatemanagedinstancerolerequest.h"
#include "updatemanagedinstanceroleresponse.h"
#include "updatepatchbaselinerequest.h"
#include "updatepatchbaselineresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SSM
 * \brief Contains classess for accessing Amazon Simple Systems Manager (SSM) ( SSM).
 *
 * \inmodule QtAwsSsm
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::SsmClient
 * \brief The SsmClient class provides access to the Amazon Simple Systems Manager (SSM) ( SSM) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon EC2 instance or on-premises machine in
 *  your hybrid environment that has been configured for Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Systems Manager
 *  Prerequisites</a> in the <i>AWS Systems Manager User
 * 
 *  Guide</i>>
 * 
 *  For information about other API actions you can perform on Amazon EC2 instances, see the <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 *  use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 *  Requests</a>.
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
 * Adds or overwrites one or more tags for the specified resource. Tags are metadata that you can assign to your documents,
 * managed instances, Maintenance Windows, Parameter Store parameters, and patch baselines. Tags enable you to categorize
 * your resources in different ways, for example, by purpose, owner, or environment. Each tag consists of a key and an
 * optional value, both of which you define. For example, you could define a set of tags for your account's managed
 * instances that helps you track each instance's owner and stack level. For example: Key=Owner and Value=DbAdmin,
 * SysAdmin, or Dev. Or Key=Stack and Value=Production, Pre-Production, or
 *
 * Test>
 *
 * Each resource can have a maximum of 50 tags.
 *
 * </p
 *
 * We recommend that you devise a set of tag keys that meets your needs for each resource type. Using a consistent set of
 * tag keys makes it easier for you to manage your resources. You can search and filter the resources based on the tags you
 * add. Tags don't have any semantic meaning to Amazon EC2 and are interpreted strictly as a string of characters.
 *
 * </p
 *
 * For more information about tags, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging Your Amazon EC2 Resources</a> in the
 * <i>Amazon EC2 User
 */
AddTagsToResourceResponse * SsmClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
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
 * CreateActivationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers your on-premises server or virtual machine with Amazon EC2 so that you can manage these resources using Run
 * Command. An on-premises server or virtual machine that has been registered with EC2 is called a managed instance. For
 * more information about activations, see <a
 * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-managedinstances.html">Setting Up
 * Systems Manager in Hybrid
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
 * Associates the specified Systems Manager document with the specified instances or
 *
 * targets>
 *
 * When you associate a document with one or more instances using instance IDs or tags, the SSM Agent running on the
 * instance processes the document and configures the instance as
 *
 * specified>
 *
 * If you associate a document with an instance that already has an associated document, the system throws the
 * AssociationAlreadyExists
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
 * Associates the specified Systems Manager document with the specified instances or
 *
 * targets>
 *
 * When you associate a document with one or more instances using instance IDs or tags, the SSM Agent running on the
 * instance processes the document and configures the instance as
 *
 * specified>
 *
 * If you associate a document with an instance that already has an associated document, the system throws the
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
 * Creates a Systems Manager
 *
 * document>
 *
 * After you create a document, you can use CreateAssociation to associate it with one or more running
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
 * Creates a new Maintenance
 */
CreateMaintenanceWindowResponse * SsmClient::createMaintenanceWindow(const CreateMaintenanceWindowRequest &request)
{
    return qobject_cast<CreateMaintenanceWindowResponse *>(send(request));
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
 * For information about valid key and value pairs in <code>PatchFilters</code> for each supported operating system type,
 * see <a
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
 * Creates a resource data sync configuration to a single bucket in Amazon S3. This is an asynchronous operation that
 * returns immediately. After a successful initial sync is completed, the system continuously syncs data to the Amazon S3
 * bucket. To check the status of the sync, use the
 *
 * <a>ListResourceDataSync</a>>
 *
 * By default, data is not encrypted in Amazon S3. We strongly recommend that you enable encryption in Amazon S3 to ensure
 * secure data storage. We also recommend that you secure access to the Amazon S3 bucket by creating a restrictive bucket
 * policy. To view an example of a restrictive Amazon S3 bucket policy for Resource Data Sync, see <a
 * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-inventory-datasync-create.html">Create a
 * Resource Data Sync for Inventory</a> in the <i>AWS Systems Manager User
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
 * Deletes an activation. You are not required to delete an activation. If you delete an activation, you can no longer use
 * it to register additional managed instances. Deleting an activation does not de-register managed instances. You must
 * manually de-register managed
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
 * Disassociates the specified Systems Manager document from the specified
 *
 * instance>
 *
 * When you disassociate a document from an instance, it does not change the configuration of the instance. To change the
 * configuration state of an instance after you disassociate a document, you must create a new document with the desired
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
 * Deletes the Systems Manager document and all instance associations to the
 *
 * document>
 *
 * Before you delete the document, we recommend that you use <a>DeleteAssociation</a> to disassociate all instances that
 * are associated with the
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
 * Delete a custom inventory type, or the data associated with a custom Inventory type. Deleting a custom inventory type is
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
 * Deletes a Maintenance
 */
DeleteMaintenanceWindowResponse * SsmClient::deleteMaintenanceWindow(const DeleteMaintenanceWindowRequest &request)
{
    return qobject_cast<DeleteMaintenanceWindowResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DeleteParameterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a parameter from the
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
 * Delete a list of parameters. This API is used to delete parameters by using the Amazon EC2
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
 * Deletes a Resource Data Sync configuration. After the configuration is deleted, changes to inventory data on managed
 * instances are no longer synced with the target Amazon S3 bucket. Deleting a sync configuration does not delete data in
 * the target Amazon S3
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
 * Removes the server or virtual machine from the list of registered servers. You can reregister the instance again at any
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
 * Removes a target from a Maintenance
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
 * Removes a task from a Maintenance
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
 * Details about the activation, including: the date and time the activation was created, the expiration date, the IAM role
 * assigned to the instances in the activation, and the number of instances activated by this
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
 * Describes the association for the specified target or instance. If you created the association by using the
 * <code>Targets</code> parameter, then you must retrieve the association by using the association ID. If you created the
 * association by specifying an instance ID and a Systems Manager document, then you retrieve the association by specifying
 * the document name and the instance ID.
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
 * Use this API action to view information about a specific execution of a specific
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
 * Use this API action to view all executions for a specific association ID.
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
 * Lists all patches that could possibly be included in a patch
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
 * Describes the specified Systems Manager
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
 * Describes the permissions for a Systems Manager document. If you created the document, you are the owner. If a document
 * is shared, it can either be shared privately (by specifying a user's AWS account ID) or publicly (<i>All</i>).
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
 * All associations for the
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
 * Retrieves the current effective patches (the patch and the approval state) for the specified patch baseline. Note that
 * this API applies only to Windows patch
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
 * The status of the associations for the
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
 * Describes one or more of your instances. You can use this to get information about instances like the operating system
 * platform, the SSM Agent version (Linux), status etc. If you specify one or more instance IDs, it returns information for
 * those instances. If you do not specify instance IDs, it returns information for all your instances. If you specify an
 * instance ID that is not valid or an instance that you do not own, you receive an error.
 *
 * </p <note>
 *
 * The IamRole field for this API action is the Amazon Identity and Access Management (IAM) role assigned to on-premises
 * instances. This call does not return the IAM role for Amazon EC2
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
 * Retrieves the high-level patch state of one or more
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
 * Retrieves the high-level patch state for the instances in the specified patch
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
 * Retrieves information about the patches on the specified instance and their state relative to the patch baseline being
 * used for the
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
 * Retrieves the individual task executions (one per target) for a particular task executed as part of a Maintenance Window
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
 * For a given Maintenance Window execution, lists the tasks that were
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
 * Lists the executions of a Maintenance Window. This includes information about when the Maintenance Window was scheduled
 * to be active, and information about tasks registered and run with the Maintenance
 */
DescribeMaintenanceWindowExecutionsResponse * SsmClient::describeMaintenanceWindowExecutions(const DescribeMaintenanceWindowExecutionsRequest &request)
{
    return qobject_cast<DescribeMaintenanceWindowExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * DescribeMaintenanceWindowTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the targets registered with the Maintenance
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
 * Lists the tasks in a Maintenance
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
 * Retrieves the Maintenance Windows in an AWS
 */
DescribeMaintenanceWindowsResponse * SsmClient::describeMaintenanceWindows(const DescribeMaintenanceWindowsRequest &request)
{
    return qobject_cast<DescribeMaintenanceWindowsResponse *>(send(request));
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
 * Lists the patch baselines in your AWS
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
 * Returns high-level aggregated patch compliance state for a patch
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
 * GetCommandInvocationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed information about command execution for an invocation or plugin.
 */
GetCommandInvocationResponse * SsmClient::getCommandInvocation(const GetCommandInvocationRequest &request)
{
    return qobject_cast<GetCommandInvocationResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetDefaultPatchBaselineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the default patch baseline. Note that Systems Manager supports creating multiple default patch baselines. For
 * example, you can create a default patch baseline for each operating
 *
 * system>
 *
 * If you do not specify an operating system value, the default patch baseline for Windows is
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
 * Retrieves the current snapshot for the patch baseline the instance uses. This API is primarily used by the
 * AWS-RunPatchBaseline Systems Manager document.
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
 * Gets the contents of the specified Systems Manager
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
 * Query inventory
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
 * type.
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
 * Retrieves a Maintenance
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
 * Retrieves details about a specific task executed as part of a Maintenance Window
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
 * Retrieves the details about a specific task executed as part of a Maintenance Window
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
 * Retrieves a task invocation. A task invocation is a specific task executing on a specific target. Maintenance Windows
 * report status for all invocations.
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
 * Lists the tasks in a Maintenance
 */
GetMaintenanceWindowTaskResponse * SsmClient::getMaintenanceWindowTask(const GetMaintenanceWindowTaskRequest &request)
{
    return qobject_cast<GetMaintenanceWindowTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * GetParameterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about a parameter by using the parameter name. Don't confuse this API action with the
 * <a>GetParameters</a> API
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
 * Query a list of all parameters used by the AWS
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
 * Get details of a parameter. Don't confuse this API action with the <a>GetParameter</a> API
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
 * Retrieve parameters in a specific hierarchy. For more information, see <a
 * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/sysman-paramstore-working.html">Working with Systems
 * Manager Parameters</a> in the <i>AWS Systems Manager User Guide</i>.
 *
 * </p
 *
 * Request results are returned on a best-effort basis. If you specify <code>MaxResults</code> in the request, the response
 * includes information up to the limit specified. The number of items returned, however, can be between zero and the value
 * of <code>MaxResults</code>. If the service reaches an internal limit while processing the results, it stops the
 * operation and returns the matching values up to that point and a <code>NextToken</code>. You can specify the
 * <code>NextToken</code> in a subsequent call to get the next set of
 *
 * results> <note>
 *
 * This API action doesn't support filtering by tags.
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
 * LabelParameterVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * Lists the associations for the specified Systems Manager document or
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
 * An invocation is copy of a command sent to a specific instance. A command can apply to one or more instances. A command
 * invocation applies to one instance. For example, if a user executes SendCommand against three instances, then a command
 * invocation is created for each requested instance ID. ListCommandInvocations provide status about command
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
 * Lists the commands requested by users of the AWS
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
 * For a specified resource ID, this API action returns a list of compliance statuses for different resource types.
 * Currently, you can only specify one resource ID per call. List results depend on the criteria specified in the filter.
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
 * specify.
 */
ListComplianceSummariesResponse * SsmClient::listComplianceSummaries(const ListComplianceSummariesRequest &request)
{
    return qobject_cast<ListComplianceSummariesResponse *>(send(request));
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
 * Describes one or more of your Systems Manager
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
 * Shares a Systems Manager document publicly or privately. If you share a document privately, you must specify the AWS
 * user account IDs for those people who can use the document. If you share a document publicly, you must specify
 * <i>All</i> as the account
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
 * Registers a compliance type and other compliance details on a designated resource. This action lets you register custom
 * compliance details with a resource. This call overwrites existing compliance information on the resource, so you must
 * provide a full list of compliance items each time that you send the
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
 * ExecutionTime. The time the patch, association, or custom compliance item was applied to the
 *
 * instance> </li> <li>
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
 * <code>critical</code>> </li> <li>
 *
 * DocumentName: A SSM document name. For example,
 *
 * AWS-RunPatchBaseline> </li> <li>
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
 * Bulk update custom inventory items on one more instance. The request adds an inventory item, if it doesn't already
 * exist, or updates an inventory item, if it does
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
 * Defines the default patch
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
 * Registers a target with a Maintenance
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
 * Adds a new task to a Maintenance
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
 * Removes all tags from the specified
 */
RemoveTagsFromResourceResponse * SsmClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
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
 * Executes commands on one or more managed
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
 * Use this API action to execute an association immediately and only one time. This action can be helpful when
 * troubleshooting
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
 * UpdateAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an association. You can update the association name and version, the document version, schedule, parameters, and
 * Amazon S3
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
 * Updates the status of the Systems Manager document associated with the specified
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
 * The document you want to
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
 */
UpdateDocumentDefaultVersionResponse * SsmClient::updateDocumentDefaultVersion(const UpdateDocumentDefaultVersionRequest &request)
{
    return qobject_cast<UpdateDocumentDefaultVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the SsmClient service, and returns a pointer to an
 * UpdateMaintenanceWindowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Maintenance Window. Only specified parameters are
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
 * Modifies the target of an existing Maintenance Window. You can't change the target type, but you can change the
 *
 * following>
 *
 * The target from being an ID target to a Tag target, or a Tag target to an ID
 *
 * target>
 *
 * IDs for an ID
 *
 * target>
 *
 * Tags for a Tag
 *
 * target>
 *
 * Owner>
 *
 * Name>
 *
 * Description>
 *
 * If a parameter is null, then the corresponding field is not
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
 * Modifies a task assigned to a Maintenance Window. You can't change the task type, but you can change the following
 *
 * values> <ul> <li>
 *
 * TaskARN. For example, you can change a RUN_COMMAND task from AWS-RunPowerShellScript to
 *
 * AWS-RunShellScript> </li> <li>
 *
 * ServiceRoleAr> </li> <li>
 *
 * TaskInvocationParameter> </li> <li>
 *
 * Priorit> </li> <li>
 *
 * MaxConcurrenc> </li> <li>
 *
 * MaxError> </li> </ul>
 *
 * If a parameter is null, then the corresponding field is not modified. Also, if you set Replace to true, then all fields
 * required by the <a>RegisterTaskWithMaintenanceWindow</a> action are required for this request. Optional fields that
 * aren't specified are set to
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
 * Assigns or changes an Amazon Identity and Access Management (IAM) role to the managed
 */
UpdateManagedInstanceRoleResponse * SsmClient::updateManagedInstanceRole(const UpdateManagedInstanceRoleRequest &request)
{
    return qobject_cast<UpdateManagedInstanceRoleResponse *>(send(request));
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
 * For information about valid key and value pairs in <code>PatchFilters</code> for each supported operating system type,
 * see <a
 */
UpdatePatchBaselineResponse * SsmClient::updatePatchBaseline(const UpdatePatchBaselineRequest &request)
{
    return qobject_cast<UpdatePatchBaselineResponse *>(send(request));
}

/*!
 * \class QtAws::SSM::SsmClientPrivate
 * \brief The SsmClientPrivate class provides private implementation for SsmClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a SsmClientPrivate object with public implementation \a q.
 */
SsmClientPrivate::SsmClientPrivate(SsmClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SSM
} // namespace QtAws

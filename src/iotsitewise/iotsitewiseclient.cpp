// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotsitewiseclient.h"
#include "iotsitewiseclient_p.h"

#include "core/awssignaturev4.h"
#include "associateassetsrequest.h"
#include "associateassetsresponse.h"
#include "associatetimeseriestoassetpropertyrequest.h"
#include "associatetimeseriestoassetpropertyresponse.h"
#include "batchassociateprojectassetsrequest.h"
#include "batchassociateprojectassetsresponse.h"
#include "batchdisassociateprojectassetsrequest.h"
#include "batchdisassociateprojectassetsresponse.h"
#include "batchgetassetpropertyaggregatesrequest.h"
#include "batchgetassetpropertyaggregatesresponse.h"
#include "batchgetassetpropertyvaluerequest.h"
#include "batchgetassetpropertyvalueresponse.h"
#include "batchgetassetpropertyvaluehistoryrequest.h"
#include "batchgetassetpropertyvaluehistoryresponse.h"
#include "batchputassetpropertyvaluerequest.h"
#include "batchputassetpropertyvalueresponse.h"
#include "createaccesspolicyrequest.h"
#include "createaccesspolicyresponse.h"
#include "createassetrequest.h"
#include "createassetresponse.h"
#include "createassetmodelrequest.h"
#include "createassetmodelresponse.h"
#include "createbulkimportjobrequest.h"
#include "createbulkimportjobresponse.h"
#include "createdashboardrequest.h"
#include "createdashboardresponse.h"
#include "creategatewayrequest.h"
#include "creategatewayresponse.h"
#include "createportalrequest.h"
#include "createportalresponse.h"
#include "createprojectrequest.h"
#include "createprojectresponse.h"
#include "deleteaccesspolicyrequest.h"
#include "deleteaccesspolicyresponse.h"
#include "deleteassetrequest.h"
#include "deleteassetresponse.h"
#include "deleteassetmodelrequest.h"
#include "deleteassetmodelresponse.h"
#include "deletedashboardrequest.h"
#include "deletedashboardresponse.h"
#include "deletegatewayrequest.h"
#include "deletegatewayresponse.h"
#include "deleteportalrequest.h"
#include "deleteportalresponse.h"
#include "deleteprojectrequest.h"
#include "deleteprojectresponse.h"
#include "deletetimeseriesrequest.h"
#include "deletetimeseriesresponse.h"
#include "describeaccesspolicyrequest.h"
#include "describeaccesspolicyresponse.h"
#include "describeassetrequest.h"
#include "describeassetresponse.h"
#include "describeassetmodelrequest.h"
#include "describeassetmodelresponse.h"
#include "describeassetpropertyrequest.h"
#include "describeassetpropertyresponse.h"
#include "describebulkimportjobrequest.h"
#include "describebulkimportjobresponse.h"
#include "describedashboardrequest.h"
#include "describedashboardresponse.h"
#include "describedefaultencryptionconfigurationrequest.h"
#include "describedefaultencryptionconfigurationresponse.h"
#include "describegatewayrequest.h"
#include "describegatewayresponse.h"
#include "describegatewaycapabilityconfigurationrequest.h"
#include "describegatewaycapabilityconfigurationresponse.h"
#include "describeloggingoptionsrequest.h"
#include "describeloggingoptionsresponse.h"
#include "describeportalrequest.h"
#include "describeportalresponse.h"
#include "describeprojectrequest.h"
#include "describeprojectresponse.h"
#include "describestorageconfigurationrequest.h"
#include "describestorageconfigurationresponse.h"
#include "describetimeseriesrequest.h"
#include "describetimeseriesresponse.h"
#include "disassociateassetsrequest.h"
#include "disassociateassetsresponse.h"
#include "disassociatetimeseriesfromassetpropertyrequest.h"
#include "disassociatetimeseriesfromassetpropertyresponse.h"
#include "getassetpropertyaggregatesrequest.h"
#include "getassetpropertyaggregatesresponse.h"
#include "getassetpropertyvaluerequest.h"
#include "getassetpropertyvalueresponse.h"
#include "getassetpropertyvaluehistoryrequest.h"
#include "getassetpropertyvaluehistoryresponse.h"
#include "getinterpolatedassetpropertyvaluesrequest.h"
#include "getinterpolatedassetpropertyvaluesresponse.h"
#include "listaccesspoliciesrequest.h"
#include "listaccesspoliciesresponse.h"
#include "listassetmodelsrequest.h"
#include "listassetmodelsresponse.h"
#include "listassetrelationshipsrequest.h"
#include "listassetrelationshipsresponse.h"
#include "listassetsrequest.h"
#include "listassetsresponse.h"
#include "listassociatedassetsrequest.h"
#include "listassociatedassetsresponse.h"
#include "listbulkimportjobsrequest.h"
#include "listbulkimportjobsresponse.h"
#include "listdashboardsrequest.h"
#include "listdashboardsresponse.h"
#include "listgatewaysrequest.h"
#include "listgatewaysresponse.h"
#include "listportalsrequest.h"
#include "listportalsresponse.h"
#include "listprojectassetsrequest.h"
#include "listprojectassetsresponse.h"
#include "listprojectsrequest.h"
#include "listprojectsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtimeseriesrequest.h"
#include "listtimeseriesresponse.h"
#include "putdefaultencryptionconfigurationrequest.h"
#include "putdefaultencryptionconfigurationresponse.h"
#include "putloggingoptionsrequest.h"
#include "putloggingoptionsresponse.h"
#include "putstorageconfigurationrequest.h"
#include "putstorageconfigurationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaccesspolicyrequest.h"
#include "updateaccesspolicyresponse.h"
#include "updateassetrequest.h"
#include "updateassetresponse.h"
#include "updateassetmodelrequest.h"
#include "updateassetmodelresponse.h"
#include "updateassetpropertyrequest.h"
#include "updateassetpropertyresponse.h"
#include "updatedashboardrequest.h"
#include "updatedashboardresponse.h"
#include "updategatewayrequest.h"
#include "updategatewayresponse.h"
#include "updategatewaycapabilityconfigurationrequest.h"
#include "updategatewaycapabilityconfigurationresponse.h"
#include "updateportalrequest.h"
#include "updateportalresponse.h"
#include "updateprojectrequest.h"
#include "updateprojectresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTSiteWise
 * \brief Contains classess for accessing AWS IoT SiteWise.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::IoTSiteWiseClient
 * \brief The IoTSiteWiseClient class provides access to the AWS IoT SiteWise service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 */

/*!
 * \brief Constructs a IoTSiteWiseClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTSiteWiseClient::IoTSiteWiseClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTSiteWiseClientPrivate(this), parent)
{
    Q_D(IoTSiteWiseClient);
    d->apiVersion = QStringLiteral("2019-12-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("iotsitewise");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT SiteWise");
    d->serviceName = QStringLiteral("iotsitewise");
}

/*!
 * \overload IoTSiteWiseClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTSiteWiseClient::IoTSiteWiseClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTSiteWiseClientPrivate(this), parent)
{
    Q_D(IoTSiteWiseClient);
    d->apiVersion = QStringLiteral("2019-12-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("iotsitewise");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT SiteWise");
    d->serviceName = QStringLiteral("iotsitewise");
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * AssociateAssetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a child asset with the given parent asset through a hierarchy defined in the parent asset's model. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/add-associated-assets.html">Associating assets</a> in
 * the <i>IoT SiteWise User
 */
AssociateAssetsResponse * IoTSiteWiseClient::associateAssets(const AssociateAssetsRequest &request)
{
    return qobject_cast<AssociateAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * AssociateTimeSeriesToAssetPropertyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a time series (data stream) with an asset
 */
AssociateTimeSeriesToAssetPropertyResponse * IoTSiteWiseClient::associateTimeSeriesToAssetProperty(const AssociateTimeSeriesToAssetPropertyRequest &request)
{
    return qobject_cast<AssociateTimeSeriesToAssetPropertyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * BatchAssociateProjectAssetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a group (batch) of assets with an IoT SiteWise Monitor
 */
BatchAssociateProjectAssetsResponse * IoTSiteWiseClient::batchAssociateProjectAssets(const BatchAssociateProjectAssetsRequest &request)
{
    return qobject_cast<BatchAssociateProjectAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * BatchDisassociateProjectAssetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a group (batch) of assets from an IoT SiteWise Monitor
 */
BatchDisassociateProjectAssetsResponse * IoTSiteWiseClient::batchDisassociateProjectAssets(const BatchDisassociateProjectAssetsRequest &request)
{
    return qobject_cast<BatchDisassociateProjectAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * BatchGetAssetPropertyAggregatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets aggregated values (for example, average, minimum, and maximum) for one or more asset properties. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#aggregates">Querying
 * aggregates</a> in the <i>IoT SiteWise User
 */
BatchGetAssetPropertyAggregatesResponse * IoTSiteWiseClient::batchGetAssetPropertyAggregates(const BatchGetAssetPropertyAggregatesRequest &request)
{
    return qobject_cast<BatchGetAssetPropertyAggregatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * BatchGetAssetPropertyValueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the current value for one or more asset properties. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#current-values">Querying
 * current values</a> in the <i>IoT SiteWise User
 */
BatchGetAssetPropertyValueResponse * IoTSiteWiseClient::batchGetAssetPropertyValue(const BatchGetAssetPropertyValueRequest &request)
{
    return qobject_cast<BatchGetAssetPropertyValueResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * BatchGetAssetPropertyValueHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the historical values for one or more asset properties. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#historical-values">Querying
 * historical values</a> in the <i>IoT SiteWise User
 */
BatchGetAssetPropertyValueHistoryResponse * IoTSiteWiseClient::batchGetAssetPropertyValueHistory(const BatchGetAssetPropertyValueHistoryRequest &request)
{
    return qobject_cast<BatchGetAssetPropertyValueHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * BatchPutAssetPropertyValueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a list of asset property values to IoT SiteWise. Each value is a timestamp-quality-value (TQV) data point. For
 * more information, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/ingest-api.html">Ingesting data
 * using the API</a> in the <i>IoT SiteWise User
 *
 * Guide</i>>
 *
 * To identify an asset property, you must specify one of the
 *
 * following> <ul> <li>
 *
 * The <code>assetId</code> and <code>propertyId</code> of an asset
 *
 * property> </li> <li>
 *
 * A <code>propertyAlias</code>, which is a data stream alias (for example,
 * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset property's alias, see <a
 *
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>>
 * </li> </ul> <b>
 *
 * With respect to Unix epoch time, IoT SiteWise accepts only TQVs that have a timestamp of no more than 7 days in the past
 * and no more than 10 minutes in the future. IoT SiteWise rejects timestamps outside of the inclusive range of [-7 days,
 * +10 minutes] and returns a <code>TimestampOutOfRangeException</code>
 *
 * error>
 *
 * For each asset property, IoT SiteWise overwrites TQVs with duplicate timestamps unless the newer TQV has a different
 * quality. For example, if you store a TQV <code>{T1, GOOD, V1}</code>, then storing <code>{T1, GOOD, V2}</code> replaces
 * the existing
 *
 * TQV> </b>
 *
 * IoT SiteWise authorizes access to each <code>BatchPutAssetPropertyValue</code> entry individually. For more information,
 * see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-batchputassetpropertyvalue-action">BatchPutAssetPropertyValue
 * authorization</a> in the <i>IoT SiteWise User
 */
BatchPutAssetPropertyValueResponse * IoTSiteWiseClient::batchPutAssetPropertyValue(const BatchPutAssetPropertyValueRequest &request)
{
    return qobject_cast<BatchPutAssetPropertyValueResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * CreateAccessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an access policy that grants the specified identity (Amazon Web Services SSO user, Amazon Web Services SSO
 * group, or IAM user) access to the specified IoT SiteWise Monitor portal or project
 */
CreateAccessPolicyResponse * IoTSiteWiseClient::createAccessPolicy(const CreateAccessPolicyRequest &request)
{
    return qobject_cast<CreateAccessPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * CreateAssetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an asset from an existing asset model. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-assets.html">Creating assets</a> in the <i>IoT
 * SiteWise User
 */
CreateAssetResponse * IoTSiteWiseClient::createAsset(const CreateAssetRequest &request)
{
    return qobject_cast<CreateAssetResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * CreateAssetModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an asset model from specified property and hierarchy definitions. You create assets from asset models. With
 * asset models, you can easily create assets of the same type that have standardized definitions. Each asset created from
 * a model inherits the asset model's property and hierarchy definitions. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/define-models.html">Defining asset models</a> in the
 * <i>IoT SiteWise User
 */
CreateAssetModelResponse * IoTSiteWiseClient::createAssetModel(const CreateAssetModelRequest &request)
{
    return qobject_cast<CreateAssetModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * CreateBulkImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Defines a job to ingest data to IoT SiteWise from Amazon S3. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/CreateBulkImportJob.html">Create a bulk import job
 * (CLI)</a> in the <i>Amazon Simple Storage Service User
 *
 * Guide</i>> <b>
 *
 * You must enable IoT SiteWise to export data to Amazon S3 before you create a bulk import job. For more information about
 * how to configure storage settings, see <a
 *
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_PutStorageConfiguration.html">PutStorageConfiguration</a>>
 */
CreateBulkImportJobResponse * IoTSiteWiseClient::createBulkImportJob(const CreateBulkImportJobRequest &request)
{
    return qobject_cast<CreateBulkImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * CreateDashboardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a dashboard in an IoT SiteWise Monitor
 */
CreateDashboardResponse * IoTSiteWiseClient::createDashboard(const CreateDashboardRequest &request)
{
    return qobject_cast<CreateDashboardResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * CreateGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a gateway, which is a virtual or edge device that delivers industrial data streams from local servers to IoT
 * SiteWise. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/gateway-connector.html">Ingesting data using a
 * gateway</a> in the <i>IoT SiteWise User
 */
CreateGatewayResponse * IoTSiteWiseClient::createGateway(const CreateGatewayRequest &request)
{
    return qobject_cast<CreateGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * CreatePortalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a portal, which can contain projects and dashboards. IoT SiteWise Monitor uses Amazon Web Services SSO or IAM to
 * authenticate portal users and manage user
 *
 * permissions> <note>
 *
 * Before you can sign in to a new portal, you must add at least one identity to that portal. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/administer-portals.html#portal-change-admins">Adding or
 * removing portal administrators</a> in the <i>IoT SiteWise User
 */
CreatePortalResponse * IoTSiteWiseClient::createPortal(const CreatePortalRequest &request)
{
    return qobject_cast<CreatePortalResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * CreateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a project in the specified
 *
 * portal> <note>
 *
 * Make sure that the project name and description don't contain confidential
 */
CreateProjectResponse * IoTSiteWiseClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DeleteAccessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an access policy that grants the specified identity access to the specified IoT SiteWise Monitor resource. You
 * can use this operation to revoke access to an IoT SiteWise Monitor
 */
DeleteAccessPolicyResponse * IoTSiteWiseClient::deleteAccessPolicy(const DeleteAccessPolicyRequest &request)
{
    return qobject_cast<DeleteAccessPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DeleteAssetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an asset. This action can't be undone. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/delete-assets-and-models.html">Deleting assets and
 * models</a> in the <i>IoT SiteWise User Guide</i>.
 *
 * </p <note>
 *
 * You can't delete an asset that's associated to another asset. For more information, see <a
 *
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DisassociateAssets.html">DisassociateAssets</a>>
 */
DeleteAssetResponse * IoTSiteWiseClient::deleteAsset(const DeleteAssetRequest &request)
{
    return qobject_cast<DeleteAssetResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DeleteAssetModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an asset model. This action can't be undone. You must delete all assets created from an asset model before you
 * can delete the model. Also, you can't delete an asset model if a parent asset model exists that contains a property
 * formula expression that depends on the asset model that you want to delete. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/delete-assets-and-models.html">Deleting assets and
 * models</a> in the <i>IoT SiteWise User
 */
DeleteAssetModelResponse * IoTSiteWiseClient::deleteAssetModel(const DeleteAssetModelRequest &request)
{
    return qobject_cast<DeleteAssetModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DeleteDashboardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a dashboard from IoT SiteWise
 */
DeleteDashboardResponse * IoTSiteWiseClient::deleteDashboard(const DeleteDashboardRequest &request)
{
    return qobject_cast<DeleteDashboardResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DeleteGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a gateway from IoT SiteWise. When you delete a gateway, some of the gateway's files remain in your gateway's
 * file
 */
DeleteGatewayResponse * IoTSiteWiseClient::deleteGateway(const DeleteGatewayRequest &request)
{
    return qobject_cast<DeleteGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DeletePortalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a portal from IoT SiteWise
 */
DeletePortalResponse * IoTSiteWiseClient::deletePortal(const DeletePortalRequest &request)
{
    return qobject_cast<DeletePortalResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DeleteProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a project from IoT SiteWise
 */
DeleteProjectResponse * IoTSiteWiseClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DeleteTimeSeriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a time series (data stream). If you delete a time series that's associated with an asset property, the asset
 * property still exists, but the time series will no longer be associated with this asset
 *
 * property>
 *
 * To identify a time series, do one of the
 *
 * following> <ul> <li>
 *
 * If the time series isn't associated with an asset property, specify the <code>alias</code> of the time
 *
 * series> </li> <li>
 *
 * If the time series is associated with an asset property, specify one of the following:
 *
 * </p <ul> <li>
 *
 * The <code>alias</code> of the time
 *
 * series> </li> <li>
 *
 * The <code>assetId</code> and <code>propertyId</code> that identifies the asset
 */
DeleteTimeSeriesResponse * IoTSiteWiseClient::deleteTimeSeries(const DeleteTimeSeriesRequest &request)
{
    return qobject_cast<DeleteTimeSeriesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeAccessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an access policy, which specifies an identity's access to an IoT SiteWise Monitor portal or
 */
DescribeAccessPolicyResponse * IoTSiteWiseClient::describeAccessPolicy(const DescribeAccessPolicyRequest &request)
{
    return qobject_cast<DescribeAccessPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeAssetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about an
 */
DescribeAssetResponse * IoTSiteWiseClient::describeAsset(const DescribeAssetRequest &request)
{
    return qobject_cast<DescribeAssetResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeAssetModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about an asset
 */
DescribeAssetModelResponse * IoTSiteWiseClient::describeAssetModel(const DescribeAssetModelRequest &request)
{
    return qobject_cast<DescribeAssetModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeAssetPropertyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about an asset
 *
 * property> <note>
 *
 * When you call this operation for an attribute property, this response includes the default attribute value that you
 * define in the asset model. If you update the default value in the model, this operation's response includes the new
 * default
 *
 * value> </note>
 *
 * This operation doesn't return the value of the asset property. To get the value of an asset property, use <a
 */
DescribeAssetPropertyResponse * IoTSiteWiseClient::describeAssetProperty(const DescribeAssetPropertyRequest &request)
{
    return qobject_cast<DescribeAssetPropertyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeBulkImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a bulk import job request. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/DescribeBulkImportJob.html">Describe a bulk import job
 * (CLI)</a> in the <i>Amazon Simple Storage Service User
 */
DescribeBulkImportJobResponse * IoTSiteWiseClient::describeBulkImportJob(const DescribeBulkImportJobRequest &request)
{
    return qobject_cast<DescribeBulkImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeDashboardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a
 */
DescribeDashboardResponse * IoTSiteWiseClient::describeDashboard(const DescribeDashboardRequest &request)
{
    return qobject_cast<DescribeDashboardResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeDefaultEncryptionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the default encryption configuration for the Amazon Web Services account in the default or
 * specified Region. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key management</a> in the <i>IoT
 * SiteWise User
 */
DescribeDefaultEncryptionConfigurationResponse * IoTSiteWiseClient::describeDefaultEncryptionConfiguration(const DescribeDefaultEncryptionConfigurationRequest &request)
{
    return qobject_cast<DescribeDefaultEncryptionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a
 */
DescribeGatewayResponse * IoTSiteWiseClient::describeGateway(const DescribeGatewayRequest &request)
{
    return qobject_cast<DescribeGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeGatewayCapabilityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a gateway capability configuration. Each gateway capability defines data sources for a
 * gateway. A capability configuration can contain multiple data source configurations. If you define OPC-UA sources for a
 * gateway in the IoT SiteWise console, all of your OPC-UA sources are stored in one capability configuration. To list all
 * capability configurations for a gateway, use <a
 */
DescribeGatewayCapabilityConfigurationResponse * IoTSiteWiseClient::describeGatewayCapabilityConfiguration(const DescribeGatewayCapabilityConfigurationRequest &request)
{
    return qobject_cast<DescribeGatewayCapabilityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeLoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the current IoT SiteWise logging
 */
DescribeLoggingOptionsResponse * IoTSiteWiseClient::describeLoggingOptions(const DescribeLoggingOptionsRequest &request)
{
    return qobject_cast<DescribeLoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribePortalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a
 */
DescribePortalResponse * IoTSiteWiseClient::describePortal(const DescribePortalRequest &request)
{
    return qobject_cast<DescribePortalResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a
 */
DescribeProjectResponse * IoTSiteWiseClient::describeProject(const DescribeProjectRequest &request)
{
    return qobject_cast<DescribeProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeStorageConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the storage configuration for IoT
 */
DescribeStorageConfigurationResponse * IoTSiteWiseClient::describeStorageConfiguration(const DescribeStorageConfigurationRequest &request)
{
    return qobject_cast<DescribeStorageConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeTimeSeriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a time series (data
 *
 * stream)>
 *
 * To identify a time series, do one of the
 *
 * following> <ul> <li>
 *
 * If the time series isn't associated with an asset property, specify the <code>alias</code> of the time
 *
 * series> </li> <li>
 *
 * If the time series is associated with an asset property, specify one of the following:
 *
 * </p <ul> <li>
 *
 * The <code>alias</code> of the time
 *
 * series> </li> <li>
 *
 * The <code>assetId</code> and <code>propertyId</code> that identifies the asset
 */
DescribeTimeSeriesResponse * IoTSiteWiseClient::describeTimeSeries(const DescribeTimeSeriesRequest &request)
{
    return qobject_cast<DescribeTimeSeriesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DisassociateAssetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a child asset from the given parent asset through a hierarchy defined in the parent asset's
 */
DisassociateAssetsResponse * IoTSiteWiseClient::disassociateAssets(const DisassociateAssetsRequest &request)
{
    return qobject_cast<DisassociateAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DisassociateTimeSeriesFromAssetPropertyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a time series (data stream) from an asset
 */
DisassociateTimeSeriesFromAssetPropertyResponse * IoTSiteWiseClient::disassociateTimeSeriesFromAssetProperty(const DisassociateTimeSeriesFromAssetPropertyRequest &request)
{
    return qobject_cast<DisassociateTimeSeriesFromAssetPropertyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * GetAssetPropertyAggregatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets aggregated values for an asset property. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#aggregates">Querying
 * aggregates</a> in the <i>IoT SiteWise User
 *
 * Guide</i>>
 *
 * To identify an asset property, you must specify one of the
 *
 * following> <ul> <li>
 *
 * The <code>assetId</code> and <code>propertyId</code> of an asset
 *
 * property> </li> <li>
 *
 * A <code>propertyAlias</code>, which is a data stream alias (for example,
 * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset property's alias, see <a
 *
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>>
 */
GetAssetPropertyAggregatesResponse * IoTSiteWiseClient::getAssetPropertyAggregates(const GetAssetPropertyAggregatesRequest &request)
{
    return qobject_cast<GetAssetPropertyAggregatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * GetAssetPropertyValueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an asset property's current value. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#current-values">Querying
 * current values</a> in the <i>IoT SiteWise User
 *
 * Guide</i>>
 *
 * To identify an asset property, you must specify one of the
 *
 * following> <ul> <li>
 *
 * The <code>assetId</code> and <code>propertyId</code> of an asset
 *
 * property> </li> <li>
 *
 * A <code>propertyAlias</code>, which is a data stream alias (for example,
 * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset property's alias, see <a
 *
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>>
 */
GetAssetPropertyValueResponse * IoTSiteWiseClient::getAssetPropertyValue(const GetAssetPropertyValueRequest &request)
{
    return qobject_cast<GetAssetPropertyValueResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * GetAssetPropertyValueHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the history of an asset property's values. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#historical-values">Querying
 * historical values</a> in the <i>IoT SiteWise User
 *
 * Guide</i>>
 *
 * To identify an asset property, you must specify one of the
 *
 * following> <ul> <li>
 *
 * The <code>assetId</code> and <code>propertyId</code> of an asset
 *
 * property> </li> <li>
 *
 * A <code>propertyAlias</code>, which is a data stream alias (for example,
 * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset property's alias, see <a
 *
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>>
 */
GetAssetPropertyValueHistoryResponse * IoTSiteWiseClient::getAssetPropertyValueHistory(const GetAssetPropertyValueHistoryRequest &request)
{
    return qobject_cast<GetAssetPropertyValueHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * GetInterpolatedAssetPropertyValuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get interpolated values for an asset property for a specified time interval, during a period of time. If your time
 * series is missing data points during the specified time interval, you can use interpolation to estimate the missing
 *
 * data>
 *
 * For example, you can use this operation to return the interpolated temperature values for a wind turbine every 24 hours
 * over a duration of 7
 *
 * days>
 *
 * To identify an asset property, you must specify one of the
 *
 * following> <ul> <li>
 *
 * The <code>assetId</code> and <code>propertyId</code> of an asset
 *
 * property> </li> <li>
 *
 * A <code>propertyAlias</code>, which is a data stream alias (for example,
 * <code>/company/windfarm/3/turbine/7/temperature</code>). To define an asset property's alias, see <a
 *
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetProperty.html">UpdateAssetProperty</a>>
 */
GetInterpolatedAssetPropertyValuesResponse * IoTSiteWiseClient::getInterpolatedAssetPropertyValues(const GetInterpolatedAssetPropertyValuesRequest &request)
{
    return qobject_cast<GetInterpolatedAssetPropertyValuesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListAccessPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of access policies for an identity (an Amazon Web Services SSO user, an Amazon Web Services
 * SSO group, or an IAM user) or an IoT SiteWise Monitor resource (a portal or
 */
ListAccessPoliciesResponse * IoTSiteWiseClient::listAccessPolicies(const ListAccessPoliciesRequest &request)
{
    return qobject_cast<ListAccessPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListAssetModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of summaries of all asset
 */
ListAssetModelsResponse * IoTSiteWiseClient::listAssetModels(const ListAssetModelsRequest &request)
{
    return qobject_cast<ListAssetModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListAssetRelationshipsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of asset relationships for an asset. You can use this operation to identify an asset's root
 * asset and all associated assets between that asset and its
 */
ListAssetRelationshipsResponse * IoTSiteWiseClient::listAssetRelationships(const ListAssetRelationshipsRequest &request)
{
    return qobject_cast<ListAssetRelationshipsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListAssetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of asset
 *
 * summaries>
 *
 * You can use this operation to do the
 *
 * following> <ul> <li>
 *
 * List assets based on a specific asset
 *
 * model> </li> <li>
 *
 * List top-level
 *
 * assets> </li> </ul>
 *
 * You can't use this operation to list all assets. To retrieve summaries for all of your assets, use <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_ListAssetModels.html">ListAssetModels</a> to get
 * all of your asset model IDs. Then, use ListAssets to get all assets for each asset
 */
ListAssetsResponse * IoTSiteWiseClient::listAssets(const ListAssetsRequest &request)
{
    return qobject_cast<ListAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListAssociatedAssetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of associated
 *
 * assets>
 *
 * You can use this operation to do the
 *
 * following> <ul> <li>
 *
 * List child assets associated to a parent asset by a hierarchy that you
 *
 * specify> </li> <li>
 *
 * List an asset's parent
 */
ListAssociatedAssetsResponse * IoTSiteWiseClient::listAssociatedAssets(const ListAssociatedAssetsRequest &request)
{
    return qobject_cast<ListAssociatedAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListBulkImportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of bulk import job requests. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/ListBulkImportJobs.html">List bulk import jobs (CLI)</a>
 * in the <i>IoT SiteWise User
 */
ListBulkImportJobsResponse * IoTSiteWiseClient::listBulkImportJobs(const ListBulkImportJobsRequest &request)
{
    return qobject_cast<ListBulkImportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListDashboardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of dashboards for an IoT SiteWise Monitor
 */
ListDashboardsResponse * IoTSiteWiseClient::listDashboards(const ListDashboardsRequest &request)
{
    return qobject_cast<ListDashboardsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListGatewaysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of
 */
ListGatewaysResponse * IoTSiteWiseClient::listGateways(const ListGatewaysRequest &request)
{
    return qobject_cast<ListGatewaysResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListPortalsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of IoT SiteWise Monitor
 */
ListPortalsResponse * IoTSiteWiseClient::listPortals(const ListPortalsRequest &request)
{
    return qobject_cast<ListPortalsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListProjectAssetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of assets associated with an IoT SiteWise Monitor
 */
ListProjectAssetsResponse * IoTSiteWiseClient::listProjectAssets(const ListProjectAssetsRequest &request)
{
    return qobject_cast<ListProjectAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListProjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of projects for an IoT SiteWise Monitor
 */
ListProjectsResponse * IoTSiteWiseClient::listProjects(const ListProjectsRequest &request)
{
    return qobject_cast<ListProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the list of tags for an IoT SiteWise
 */
ListTagsForResourceResponse * IoTSiteWiseClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * ListTimeSeriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of time series (data
 */
ListTimeSeriesResponse * IoTSiteWiseClient::listTimeSeries(const ListTimeSeriesRequest &request)
{
    return qobject_cast<ListTimeSeriesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * PutDefaultEncryptionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the default encryption configuration for the Amazon Web Services account. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key management</a> in the <i>IoT
 * SiteWise User
 */
PutDefaultEncryptionConfigurationResponse * IoTSiteWiseClient::putDefaultEncryptionConfiguration(const PutDefaultEncryptionConfigurationRequest &request)
{
    return qobject_cast<PutDefaultEncryptionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * PutLoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets logging options for IoT
 */
PutLoggingOptionsResponse * IoTSiteWiseClient::putLoggingOptions(const PutLoggingOptionsRequest &request)
{
    return qobject_cast<PutLoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * PutStorageConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures storage settings for IoT
 */
PutStorageConfigurationResponse * IoTSiteWiseClient::putStorageConfiguration(const PutStorageConfigurationRequest &request)
{
    return qobject_cast<PutStorageConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to an IoT SiteWise resource. If a tag already exists for the resource, this operation updates the tag's
 */
TagResourceResponse * IoTSiteWiseClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from an IoT SiteWise
 */
UntagResourceResponse * IoTSiteWiseClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * UpdateAccessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing access policy that specifies an identity's access to an IoT SiteWise Monitor portal or project
 */
UpdateAccessPolicyResponse * IoTSiteWiseClient::updateAccessPolicy(const UpdateAccessPolicyRequest &request)
{
    return qobject_cast<UpdateAccessPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * UpdateAssetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an asset's name. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-assets-and-models.html">Updating assets and
 * models</a> in the <i>IoT SiteWise User
 */
UpdateAssetResponse * IoTSiteWiseClient::updateAsset(const UpdateAssetRequest &request)
{
    return qobject_cast<UpdateAssetResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * UpdateAssetModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an asset model and all of the assets that were created from the model. Each asset created from the model
 * inherits the updated asset model's property and hierarchy definitions. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/update-assets-and-models.html">Updating assets and
 * models</a> in the <i>IoT SiteWise User
 *
 * Guide</i>> <b>
 *
 * This operation overwrites the existing model with the provided model. To avoid deleting your asset model's properties or
 * hierarchies, you must include their IDs and definitions in the updated asset model payload. For more information, see <a
 *
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>>
 *
 * If you remove a property from an asset model, IoT SiteWise deletes all previous data for that property. If you remove a
 * hierarchy definition from an asset model, IoT SiteWise disassociates every asset associated with that hierarchy. You
 * can't change the type or data type of an existing
 */
UpdateAssetModelResponse * IoTSiteWiseClient::updateAssetModel(const UpdateAssetModelRequest &request)
{
    return qobject_cast<UpdateAssetModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * UpdateAssetPropertyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an asset property's alias and notification
 *
 * state> <b>
 *
 * This operation overwrites the property's existing alias and notification state. To keep your existing property's alias
 * or notification state, you must include the existing values in the UpdateAssetProperty request. For more information,
 * see <a
 *
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetProperty.html">DescribeAssetProperty</a>>
 */
UpdateAssetPropertyResponse * IoTSiteWiseClient::updateAssetProperty(const UpdateAssetPropertyRequest &request)
{
    return qobject_cast<UpdateAssetPropertyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * UpdateDashboardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an IoT SiteWise Monitor
 */
UpdateDashboardResponse * IoTSiteWiseClient::updateDashboard(const UpdateDashboardRequest &request)
{
    return qobject_cast<UpdateDashboardResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * UpdateGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a gateway's
 */
UpdateGatewayResponse * IoTSiteWiseClient::updateGateway(const UpdateGatewayRequest &request)
{
    return qobject_cast<UpdateGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * UpdateGatewayCapabilityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a gateway capability configuration or defines a new capability configuration. Each gateway capability defines
 * data sources for a gateway. A capability configuration can contain multiple data source configurations. If you define
 * OPC-UA sources for a gateway in the IoT SiteWise console, all of your OPC-UA sources are stored in one capability
 * configuration. To list all capability configurations for a gateway, use <a
 */
UpdateGatewayCapabilityConfigurationResponse * IoTSiteWiseClient::updateGatewayCapabilityConfiguration(const UpdateGatewayCapabilityConfigurationRequest &request)
{
    return qobject_cast<UpdateGatewayCapabilityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * UpdatePortalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an IoT SiteWise Monitor
 */
UpdatePortalResponse * IoTSiteWiseClient::updatePortal(const UpdatePortalRequest &request)
{
    return qobject_cast<UpdatePortalResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * UpdateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an IoT SiteWise Monitor
 */
UpdateProjectResponse * IoTSiteWiseClient::updateProject(const UpdateProjectRequest &request)
{
    return qobject_cast<UpdateProjectResponse *>(send(request));
}

/*!
 * \class QtAws::IoTSiteWise::IoTSiteWiseClientPrivate
 * \brief The IoTSiteWiseClientPrivate class provides private implementation for IoTSiteWiseClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a IoTSiteWiseClientPrivate object with public implementation \a q.
 */
IoTSiteWiseClientPrivate::IoTSiteWiseClientPrivate(IoTSiteWiseClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IoTSiteWise
} // namespace QtAws

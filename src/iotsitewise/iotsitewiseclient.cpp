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

#include "iotsitewiseclient.h"
#include "iotsitewiseclient_p.h"

#include "core/awssignaturev4.h"
#include "associateassetsrequest.h"
#include "associateassetsresponse.h"
#include "batchassociateprojectassetsrequest.h"
#include "batchassociateprojectassetsresponse.h"
#include "batchdisassociateprojectassetsrequest.h"
#include "batchdisassociateprojectassetsresponse.h"
#include "batchputassetpropertyvaluerequest.h"
#include "batchputassetpropertyvalueresponse.h"
#include "createaccesspolicyrequest.h"
#include "createaccesspolicyresponse.h"
#include "createassetrequest.h"
#include "createassetresponse.h"
#include "createassetmodelrequest.h"
#include "createassetmodelresponse.h"
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
#include "describeaccesspolicyrequest.h"
#include "describeaccesspolicyresponse.h"
#include "describeassetrequest.h"
#include "describeassetresponse.h"
#include "describeassetmodelrequest.h"
#include "describeassetmodelresponse.h"
#include "describeassetpropertyrequest.h"
#include "describeassetpropertyresponse.h"
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
#include "disassociateassetsrequest.h"
#include "disassociateassetsresponse.h"
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
#include "putdefaultencryptionconfigurationrequest.h"
#include "putdefaultencryptionconfigurationresponse.h"
#include "putloggingoptionsrequest.h"
#include "putloggingoptionsresponse.h"
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
 *  Welcome to the AWS IoT SiteWise API Reference. AWS IoT SiteWise is an AWS service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the AWS Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">AWS IoT SiteWise User Guide</a>. For information about
 *  AWS IoT SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a>
 *  in the <i>AWS IoT SiteWise User
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
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-12-02"),
    QStringLiteral("iotsitewise"),
    QStringLiteral("AWS IoT SiteWise"),
    QStringLiteral("iotsitewise"),
    parent), d_ptr(new IoTSiteWiseClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-12-02"),
    QStringLiteral("iotsitewise"),
    QStringLiteral("AWS IoT SiteWise"),
    QStringLiteral("iotsitewise"),
    parent), d_ptr(new IoTSiteWiseClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
 * the <i>AWS IoT SiteWise User
 */
AssociateAssetsResponse * IoTSiteWiseClient::associateAssets(const AssociateAssetsRequest &request)
{
    return qobject_cast<AssociateAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * BatchAssociateProjectAssetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a group (batch) of assets with an AWS IoT SiteWise Monitor
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
 * Disassociates a group (batch) of assets from an AWS IoT SiteWise Monitor
 */
BatchDisassociateProjectAssetsResponse * IoTSiteWiseClient::batchDisassociateProjectAssets(const BatchDisassociateProjectAssetsRequest &request)
{
    return qobject_cast<BatchDisassociateProjectAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * BatchPutAssetPropertyValueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a list of asset property values to AWS IoT SiteWise. Each value is a timestamp-quality-value (TQV) data point. For
 * more information, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/ingest-api.html">Ingesting data
 * using the API</a> in the <i>AWS IoT SiteWise User
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
 * With respect to Unix epoch time, AWS IoT SiteWise accepts only TQVs that have a timestamp of no more than 7 days in the
 * past and no more than 10 minutes in the future. AWS IoT SiteWise rejects timestamps outside of the inclusive range of
 * [-7 days, +10 minutes] and returns a <code>TimestampOutOfRangeException</code>
 *
 * error>
 *
 * For each asset property, AWS IoT SiteWise overwrites TQVs with duplicate timestamps unless the newer TQV has a different
 * quality. For example, if you store a TQV <code>{T1, GOOD, V1}</code>, then storing <code>{T1, GOOD, V2}</code> replaces
 * the existing
 *
 * TQV> </b>
 *
 * AWS IoT SiteWise authorizes access to each <code>BatchPutAssetPropertyValue</code> entry individually. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/security_iam_service-with-iam.html#security_iam_service-with-iam-id-based-policies-batchputassetpropertyvalue-action">BatchPutAssetPropertyValue
 * authorization</a> in the <i>AWS IoT SiteWise User
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
 * Creates an access policy that grants the specified identity (AWS SSO user, AWS SSO group, or IAM user) access to the
 * specified AWS IoT SiteWise Monitor portal or project
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
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-assets.html">Creating assets</a> in the <i>AWS
 * IoT SiteWise User
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
 * <i>AWS IoT SiteWise User
 */
CreateAssetModelResponse * IoTSiteWiseClient::createAssetModel(const CreateAssetModelRequest &request)
{
    return qobject_cast<CreateAssetModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * CreateDashboardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a dashboard in an AWS IoT SiteWise Monitor
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
 * Creates a gateway, which is a virtual or edge device that delivers industrial data streams from local servers to AWS IoT
 * SiteWise. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/gateway-connector.html">Ingesting data using a
 * gateway</a> in the <i>AWS IoT SiteWise User
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
 * Creates a portal, which can contain projects and dashboards. AWS IoT SiteWise Monitor uses AWS SSO or IAM to
 * authenticate portal users and manage user
 *
 * permissions> <note>
 *
 * Before you can sign in to a new portal, you must add at least one identity to that portal. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/administer-portals.html#portal-change-admins">Adding or
 * removing portal administrators</a> in the <i>AWS IoT SiteWise User
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
 * Deletes an access policy that grants the specified identity access to the specified AWS IoT SiteWise Monitor resource.
 * You can use this operation to revoke access to an AWS IoT SiteWise Monitor
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
 * models</a> in the <i>AWS IoT SiteWise User Guide</i>.
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
 * models</a> in the <i>AWS IoT SiteWise User
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
 * Deletes a dashboard from AWS IoT SiteWise
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
 * Deletes a gateway from AWS IoT SiteWise. When you delete a gateway, some of the gateway's files remain in your gateway's
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
 * Deletes a portal from AWS IoT SiteWise
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
 * Deletes a project from AWS IoT SiteWise
 */
DeleteProjectResponse * IoTSiteWiseClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * DescribeAccessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an access policy, which specifies an identity's access to an AWS IoT SiteWise Monitor portal or
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
 * Retrieves information about the default encryption configuration for the AWS account in the default or specified region.
 * For more information, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key
 * management</a> in the <i>AWS IoT SiteWise User
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
 * gateway in the AWS IoT SiteWise console, all of your OPC-UA sources are stored in one capability configuration. To list
 * all capability configurations for a gateway, use <a
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
 * Retrieves the current AWS IoT SiteWise logging
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
 * GetAssetPropertyAggregatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets aggregated values for an asset property. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/query-industrial-data.html#aggregates">Querying
 * aggregates</a> in the <i>AWS IoT SiteWise User
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
 * current values</a> in the <i>AWS IoT SiteWise User
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
 * historical values</a> in the <i>AWS IoT SiteWise User
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
 * Get interpolated values for an asset property for a specified time interval, during a period of time. For example, you
 * can use the this operation to return the interpolated temperature values for a wind turbine every 24 hours over a
 * duration of 7
 *
 * days> <note>
 *
 * This API isn't available in China
 *
 * (Beijing)> </note>
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
 * Retrieves a paginated list of access policies for an identity (an AWS SSO user, an AWS SSO group, or an IAM user) or an
 * AWS IoT SiteWise Monitor resource (a portal or
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
 * ListDashboardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a paginated list of dashboards for an AWS IoT SiteWise Monitor
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
 * Retrieves a paginated list of AWS IoT SiteWise Monitor
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
 * Retrieves a paginated list of assets associated with an AWS IoT SiteWise Monitor
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
 * Retrieves a paginated list of projects for an AWS IoT SiteWise Monitor
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
 * Retrieves the list of tags for an AWS IoT SiteWise
 */
ListTagsForResourceResponse * IoTSiteWiseClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * PutDefaultEncryptionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the default encryption configuration for the AWS account. For more information, see <a
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key management</a> in the <i>AWS
 * IoT SiteWise User
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
 * Sets logging options for AWS IoT
 */
PutLoggingOptionsResponse * IoTSiteWiseClient::putLoggingOptions(const PutLoggingOptionsRequest &request)
{
    return qobject_cast<PutLoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTSiteWiseClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to an AWS IoT SiteWise resource. If a tag already exists for the resource, this operation updates the tag's
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
 * Removes a tag from an AWS IoT SiteWise
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
 * Updates an existing access policy that specifies an identity's access to an AWS IoT SiteWise Monitor portal or project
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
 * models</a> in the <i>AWS IoT SiteWise User
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
 * models</a> in the <i>AWS IoT SiteWise User
 *
 * Guide</i>> <b>
 *
 * This operation overwrites the existing model with the provided model. To avoid deleting your asset model's properties or
 * hierarchies, you must include their IDs and definitions in the updated asset model payload. For more information, see <a
 *
 * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_DescribeAssetModel.html">DescribeAssetModel</a>>
 *
 * If you remove a property from an asset model, AWS IoT SiteWise deletes all previous data for that property. If you
 * remove a hierarchy definition from an asset model, AWS IoT SiteWise disassociates every asset associated with that
 * hierarchy. You can't change the type or data type of an existing
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
 * Updates an AWS IoT SiteWise Monitor
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
 * OPC-UA sources for a gateway in the AWS IoT SiteWise console, all of your OPC-UA sources are stored in one capability
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
 * Updates an AWS IoT SiteWise Monitor
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
 * Updates an AWS IoT SiteWise Monitor
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
IoTSiteWiseClientPrivate::IoTSiteWiseClientPrivate(IoTSiteWiseClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace IoTSiteWise
} // namespace QtAws

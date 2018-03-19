/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "servicecatalogclient.h"
#include "servicecatalogclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ServiceCatalogClient
 *
 * @brief  Client for AWS Service Catalog
 *
 * <fullname>AWS Service Catalog</fullname>
 *
 * <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 * catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 * familiar with the terminology discussed in <a
 * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 */

/**
 * @brief  Constructs a new ServiceCatalogClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ServiceCatalogClient::ServiceCatalogClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ServiceCatalogClientPrivate(this), parent)
{
    Q_D(ServiceCatalogClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("servicecatalog");
}

/**
 * @brief  Constructs a new ServiceCatalogClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
ServiceCatalogClient::ServiceCatalogClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ServiceCatalogClientPrivate(this), parent)
{
    Q_D(ServiceCatalogClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("servicecatalog");
}

/// @todo override getEndpoint() to use servicecatalog.

/**
 * Accepts an offer to share the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AcceptPortfolioShareResponse * ServiceCatalogClient::acceptPortfolioShare(const AcceptPortfolioShareRequest &request)
{

}

/**
 * Associates the specified principal ARN with the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociatePrincipalWithPortfolioResponse * ServiceCatalogClient::associatePrincipalWithPortfolio(const AssociatePrincipalWithPortfolioRequest &request)
{

}

/**
 * Associates the specified product with the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateProductWithPortfolioResponse * ServiceCatalogClient::associateProductWithPortfolio(const AssociateProductWithPortfolioRequest &request)
{

}

/**
 * Associate the specified TagOption with the specified portfolio or
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateTagOptionWithResourceResponse * ServiceCatalogClient::associateTagOptionWithResource(const AssociateTagOptionWithResourceRequest &request)
{

}

/**
 * Copies the specified source product to the specified target product or a new
 *
 * product>
 *
 * You can copy a product to the same account or another account. You can copy a product to the same region or another
 *
 * region>
 *
 * This operation is performed asynchronously. To track the progress of the operation, use
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CopyProductResponse * ServiceCatalogClient::copyProduct(const CopyProductRequest &request)
{

}

/**
 * Creates a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateConstraintResponse * ServiceCatalogClient::createConstraint(const CreateConstraintRequest &request)
{

}

/**
 * Creates a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePortfolioResponse * ServiceCatalogClient::createPortfolio(const CreatePortfolioRequest &request)
{

}

/**
 * Shares the specified portfolio with the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePortfolioShareResponse * ServiceCatalogClient::createPortfolioShare(const CreatePortfolioShareRequest &request)
{

}

/**
 * Creates a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProductResponse * ServiceCatalogClient::createProduct(const CreateProductRequest &request)
{

}

/**
 * Creates a plan. A plan includes the list of resources to be created (when provisioning a new product) or modified (when
 * updating a provisioned product) when the plan is
 *
 * executed>
 *
 * You can create one plan per provisioned product. To create a plan for an existing provisioned product, the product
 * status must be AVAILBLE or
 *
 * TAINTED>
 *
 * To view the resource changes in the change set, use <a>DescribeProvisionedProductPlan</a>. To create or modify the
 * provisioned product, use
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProvisionedProductPlanResponse * ServiceCatalogClient::createProvisionedProductPlan(const CreateProvisionedProductPlanRequest &request)
{

}

/**
 * Creates a provisioning artifact (also known as a version) for the specified
 *
 * product>
 *
 * You cannot create a provisioning artifact for a product that was shared with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProvisioningArtifactResponse * ServiceCatalogClient::createProvisioningArtifact(const CreateProvisioningArtifactRequest &request)
{

}

/**
 * Creates a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTagOptionResponse * ServiceCatalogClient::createTagOption(const CreateTagOptionRequest &request)
{

}

/**
 * Deletes the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteConstraintResponse * ServiceCatalogClient::deleteConstraint(const DeleteConstraintRequest &request)
{

}

/**
 * Deletes the specified
 *
 * portfolio>
 *
 * You cannot delete a portfolio if it was shared with you or if it has associated products, users, constraints, or shared
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePortfolioResponse * ServiceCatalogClient::deletePortfolio(const DeletePortfolioRequest &request)
{

}

/**
 * Stops sharing the specified portfolio with the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePortfolioShareResponse * ServiceCatalogClient::deletePortfolioShare(const DeletePortfolioShareRequest &request)
{

}

/**
 * Deletes the specified
 *
 * product>
 *
 * You cannot delete a product if it was shared with you or is associated with a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProductResponse * ServiceCatalogClient::deleteProduct(const DeleteProductRequest &request)
{

}

/**
 * Deletes the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProvisionedProductPlanResponse * ServiceCatalogClient::deleteProvisionedProductPlan(const DeleteProvisionedProductPlanRequest &request)
{

}

/**
 * Deletes the specified provisioning artifact (also known as a version) for the specified
 *
 * product>
 *
 * You cannot delete a provisioning artifact associated with a product that was shared with you. You cannot delete the last
 * provisioning artifact for a product, because a product must have at least one provisioning
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProvisioningArtifactResponse * ServiceCatalogClient::deleteProvisioningArtifact(const DeleteProvisioningArtifactRequest &request)
{

}

/**
 * Deletes the specified
 *
 * TagOption>
 *
 * You cannot delete a TagOption if it is associated with a product or
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTagOptionResponse * ServiceCatalogClient::deleteTagOption(const DeleteTagOptionRequest &request)
{

}

/**
 * Gets information about the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConstraintResponse * ServiceCatalogClient::describeConstraint(const DescribeConstraintRequest &request)
{

}

/**
 * Gets the status of the specified copy product
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCopyProductStatusResponse * ServiceCatalogClient::describeCopyProductStatus(const DescribeCopyProductStatusRequest &request)
{

}

/**
 * Gets information about the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribePortfolioResponse * ServiceCatalogClient::describePortfolio(const DescribePortfolioRequest &request)
{

}

/**
 * Gets information about the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProductResponse * ServiceCatalogClient::describeProduct(const DescribeProductRequest &request)
{

}

/**
 * Gets information about the specified product. This operation is run with administrator
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProductAsAdminResponse * ServiceCatalogClient::describeProductAsAdmin(const DescribeProductAsAdminRequest &request)
{

}

/**
 * Gets information about the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProductViewResponse * ServiceCatalogClient::describeProductView(const DescribeProductViewRequest &request)
{

}

/**
 * Gets information about the specified provisioned
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProvisionedProductResponse * ServiceCatalogClient::describeProvisionedProduct(const DescribeProvisionedProductRequest &request)
{

}

/**
 * Gets information about the resource changes for the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProvisionedProductPlanResponse * ServiceCatalogClient::describeProvisionedProductPlan(const DescribeProvisionedProductPlanRequest &request)
{

}

/**
 * Gets information about the specified provisioning artifact (also known as a version) for the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProvisioningArtifactResponse * ServiceCatalogClient::describeProvisioningArtifact(const DescribeProvisioningArtifactRequest &request)
{

}

/**
 * Gets information about the configuration required to provision the specified product using the specified provisioning
 *
 * artifact>
 *
 * If the output contains a TagOption key with an empty list of values, there is a TagOption conflict for that key. The end
 * user cannot take action to fix the conflict, and launch is not blocked. In subsequent calls to <a>ProvisionProduct</a>,
 * do not include conflicted TagOption keys as tags, or this causes the error "Parameter validation failed: Missing
 * required parameter in Tags[<i>N</i>]:<i>Value</i>". Tag the provisioned product with the value
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProvisioningParametersResponse * ServiceCatalogClient::describeProvisioningParameters(const DescribeProvisioningParametersRequest &request)
{

}

/**
 * Gets information about the specified request
 *
 * operation>
 *
 * Use this operation after calling a request operation (for example, <a>ProvisionProduct</a>,
 * <a>TerminateProvisionedProduct</a>, or <a>UpdateProvisionedProduct</a>).
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeRecordResponse * ServiceCatalogClient::describeRecord(const DescribeRecordRequest &request)
{

}

/**
 * Gets information about the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTagOptionResponse * ServiceCatalogClient::describeTagOption(const DescribeTagOptionRequest &request)
{

}

/**
 * Disassociates a previously associated principal ARN from a specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociatePrincipalFromPortfolioResponse * ServiceCatalogClient::disassociatePrincipalFromPortfolio(const DisassociatePrincipalFromPortfolioRequest &request)
{

}

/**
 * Disassociates the specified product from the specified portfolio.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateProductFromPortfolioResponse * ServiceCatalogClient::disassociateProductFromPortfolio(const DisassociateProductFromPortfolioRequest &request)
{

}

/**
 * Disassociates the specified TagOption from the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateTagOptionFromResourceResponse * ServiceCatalogClient::disassociateTagOptionFromResource(const DisassociateTagOptionFromResourceRequest &request)
{

}

/**
 * Provisions or modifies a product based on the resource changes for the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ExecuteProvisionedProductPlanResponse * ServiceCatalogClient::executeProvisionedProductPlan(const ExecuteProvisionedProductPlanRequest &request)
{

}

/**
 * Lists all portfolios for which sharing was accepted by this
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAcceptedPortfolioSharesResponse * ServiceCatalogClient::listAcceptedPortfolioShares(const ListAcceptedPortfolioSharesRequest &request)
{

}

/**
 * Lists the constraints for the specified portfolio and
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListConstraintsForPortfolioResponse * ServiceCatalogClient::listConstraintsForPortfolio(const ListConstraintsForPortfolioRequest &request)
{

}

/**
 * Lists the paths to the specified product. A path is how the user has access to a specified product, and is necessary
 * when provisioning a product. A path also determines the constraints put on the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListLaunchPathsResponse * ServiceCatalogClient::listLaunchPaths(const ListLaunchPathsRequest &request)
{

}

/**
 * Lists the account IDs that have access to the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPortfolioAccessResponse * ServiceCatalogClient::listPortfolioAccess(const ListPortfolioAccessRequest &request)
{

}

/**
 * Lists all portfolios in the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPortfoliosResponse * ServiceCatalogClient::listPortfolios(const ListPortfoliosRequest &request)
{

}

/**
 * Lists all portfolios that the specified product is associated
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPortfoliosForProductResponse * ServiceCatalogClient::listPortfoliosForProduct(const ListPortfoliosForProductRequest &request)
{

}

/**
 * Lists all principal ARNs associated with the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPrincipalsForPortfolioResponse * ServiceCatalogClient::listPrincipalsForPortfolio(const ListPrincipalsForPortfolioRequest &request)
{

}

/**
 * Lists the plans for the specified provisioned product or all plans to which the user has
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListProvisionedProductPlansResponse * ServiceCatalogClient::listProvisionedProductPlans(const ListProvisionedProductPlansRequest &request)
{

}

/**
 * Lists all provisioning artifacts (also known as versions) for the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListProvisioningArtifactsResponse * ServiceCatalogClient::listProvisioningArtifacts(const ListProvisioningArtifactsRequest &request)
{

}

/**
 * Lists the specified requests or all performed
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRecordHistoryResponse * ServiceCatalogClient::listRecordHistory(const ListRecordHistoryRequest &request)
{

}

/**
 * Lists the resources associated with the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListResourcesForTagOptionResponse * ServiceCatalogClient::listResourcesForTagOption(const ListResourcesForTagOptionRequest &request)
{

}

/**
 * Lists the specified TagOptions or all
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagOptionsResponse * ServiceCatalogClient::listTagOptions(const ListTagOptionsRequest &request)
{

}

/**
 * Provisions the specified
 *
 * product>
 *
 * A provisioned product is a resourced instance of a product. For example, provisioning a product based on a
 * CloudFormation template launches a CloudFormation stack and its underlying resources. You can check the status of this
 * request using
 *
 * <a>DescribeRecord</a>>
 *
 * If the request contains a tag key with an empty list of values, there is a tag conflict for that key. Do not include
 * conflicted keys as tags, or this causes the error "Parameter validation failed: Missing required parameter in
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ProvisionProductResponse * ServiceCatalogClient::provisionProduct(const ProvisionProductRequest &request)
{

}

/**
 * Rejects an offer to share the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RejectPortfolioShareResponse * ServiceCatalogClient::rejectPortfolioShare(const RejectPortfolioShareRequest &request)
{

}

/**
 * Lists the provisioned products that are available (not
 *
 * terminated)>
 *
 * To use additional filtering, see
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ScanProvisionedProductsResponse * ServiceCatalogClient::scanProvisionedProducts(const ScanProvisionedProductsRequest &request)
{

}

/**
 * Gets information about the products to which the caller has
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchProductsResponse * ServiceCatalogClient::searchProducts(const SearchProductsRequest &request)
{

}

/**
 * Gets information about the products for the specified portfolio or all
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchProductsAsAdminResponse * ServiceCatalogClient::searchProductsAsAdmin(const SearchProductsAsAdminRequest &request)
{

}

/**
 * Gets information about the provisioned products that meet the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchProvisionedProductsResponse * ServiceCatalogClient::searchProvisionedProducts(const SearchProvisionedProductsRequest &request)
{

}

/**
 * Terminates the specified provisioned
 *
 * product>
 *
 * This operation does not delete any records associated with the provisioned
 *
 * product>
 *
 * You can check the status of this request using
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TerminateProvisionedProductResponse * ServiceCatalogClient::terminateProvisionedProduct(const TerminateProvisionedProductRequest &request)
{

}

/**
 * Updates the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateConstraintResponse * ServiceCatalogClient::updateConstraint(const UpdateConstraintRequest &request)
{

}

/**
 * Updates the specified
 *
 * portfolio>
 *
 * You cannot update a product that was shared with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePortfolioResponse * ServiceCatalogClient::updatePortfolio(const UpdatePortfolioRequest &request)
{

}

/**
 * Updates the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateProductResponse * ServiceCatalogClient::updateProduct(const UpdateProductRequest &request)
{

}

/**
 * Requests updates to the configuration of the specified provisioned
 *
 * product>
 *
 * If there are tags associated with the object, they cannot be updated or added. Depending on the specific updates
 * requested, this operation can update with no interruption, with some interruption, or replace the provisioned product
 *
 * entirely>
 *
 * You can check the status of this request using
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateProvisionedProductResponse * ServiceCatalogClient::updateProvisionedProduct(const UpdateProvisionedProductRequest &request)
{

}

/**
 * Updates the specified provisioning artifact (also known as a version) for the specified
 *
 * product>
 *
 * You cannot update a provisioning artifact for a product that was shared with
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateProvisioningArtifactResponse * ServiceCatalogClient::updateProvisioningArtifact(const UpdateProvisioningArtifactRequest &request)
{

}

/**
 * Updates the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateTagOptionResponse * ServiceCatalogClient::updateTagOption(const UpdateTagOptionRequest &request)
{

}

/**
 * @internal
 *
 * @class  ServiceCatalogClientPrivate
 *
 * @brief  Private implementation for ServiceCatalogClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ServiceCatalogClientPrivate object.
 *
 * @param  q  Pointer to this object's public ServiceCatalogClient instance.
 */
ServiceCatalogClientPrivate::ServiceCatalogClientPrivate(ServiceCatalogClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ServiceCatalog
} // namespace AWS

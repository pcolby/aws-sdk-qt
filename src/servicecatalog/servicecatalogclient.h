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

#ifndef QTAWS_SERVICECATALOGCLIENT_H
#define QTAWS_SERVICECATALOGCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace ServiceCatalog {

class ServiceCatalogClientPrivate;
class AcceptPortfolioShareResponse;
class AssociatePrincipalWithPortfolioResponse;
class AssociateProductWithPortfolioResponse;
class AssociateTagOptionWithResourceResponse;
class CopyProductResponse;
class CreateConstraintResponse;
class CreatePortfolioResponse;
class CreatePortfolioShareResponse;
class CreateProductResponse;
class CreateProvisionedProductPlanResponse;
class CreateProvisioningArtifactResponse;
class CreateTagOptionResponse;
class DeleteConstraintResponse;
class DeletePortfolioResponse;
class DeletePortfolioShareResponse;
class DeleteProductResponse;
class DeleteProvisionedProductPlanResponse;
class DeleteProvisioningArtifactResponse;
class DeleteTagOptionResponse;
class DescribeConstraintResponse;
class DescribeCopyProductStatusResponse;
class DescribePortfolioResponse;
class DescribeProductResponse;
class DescribeProductAsAdminResponse;
class DescribeProductViewResponse;
class DescribeProvisionedProductResponse;
class DescribeProvisionedProductPlanResponse;
class DescribeProvisioningArtifactResponse;
class DescribeProvisioningParametersResponse;
class DescribeRecordResponse;
class DescribeTagOptionResponse;
class DisassociatePrincipalFromPortfolioResponse;
class DisassociateProductFromPortfolioResponse;
class DisassociateTagOptionFromResourceResponse;
class ExecuteProvisionedProductPlanResponse;
class ListAcceptedPortfolioSharesResponse;
class ListConstraintsForPortfolioResponse;
class ListLaunchPathsResponse;
class ListPortfolioAccessResponse;
class ListPortfoliosResponse;
class ListPortfoliosForProductResponse;
class ListPrincipalsForPortfolioResponse;
class ListProvisionedProductPlansResponse;
class ListProvisioningArtifactsResponse;
class ListRecordHistoryResponse;
class ListResourcesForTagOptionResponse;
class ListTagOptionsResponse;
class ProvisionProductResponse;
class RejectPortfolioShareResponse;
class ScanProvisionedProductsResponse;
class SearchProductsResponse;
class SearchProductsAsAdminResponse;
class SearchProvisionedProductsResponse;
class TerminateProvisionedProductResponse;
class UpdateConstraintResponse;
class UpdatePortfolioResponse;
class UpdateProductResponse;
class UpdateProvisionedProductResponse;
class UpdateProvisioningArtifactResponse;
class UpdateTagOptionResponse;

class QTAWS_EXPORT ServiceCatalogClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ServiceCatalogClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ServiceCatalogClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptPortfolioShareResponse * acceptPortfolioShare(const AcceptPortfolioShareRequest &request);
    AssociatePrincipalWithPortfolioResponse * associatePrincipalWithPortfolio(const AssociatePrincipalWithPortfolioRequest &request);
    AssociateProductWithPortfolioResponse * associateProductWithPortfolio(const AssociateProductWithPortfolioRequest &request);
    AssociateTagOptionWithResourceResponse * associateTagOptionWithResource(const AssociateTagOptionWithResourceRequest &request);
    CopyProductResponse * copyProduct(const CopyProductRequest &request);
    CreateConstraintResponse * createConstraint(const CreateConstraintRequest &request);
    CreatePortfolioResponse * createPortfolio(const CreatePortfolioRequest &request);
    CreatePortfolioShareResponse * createPortfolioShare(const CreatePortfolioShareRequest &request);
    CreateProductResponse * createProduct(const CreateProductRequest &request);
    CreateProvisionedProductPlanResponse * createProvisionedProductPlan(const CreateProvisionedProductPlanRequest &request);
    CreateProvisioningArtifactResponse * createProvisioningArtifact(const CreateProvisioningArtifactRequest &request);
    CreateTagOptionResponse * createTagOption(const CreateTagOptionRequest &request);
    DeleteConstraintResponse * deleteConstraint(const DeleteConstraintRequest &request);
    DeletePortfolioResponse * deletePortfolio(const DeletePortfolioRequest &request);
    DeletePortfolioShareResponse * deletePortfolioShare(const DeletePortfolioShareRequest &request);
    DeleteProductResponse * deleteProduct(const DeleteProductRequest &request);
    DeleteProvisionedProductPlanResponse * deleteProvisionedProductPlan(const DeleteProvisionedProductPlanRequest &request);
    DeleteProvisioningArtifactResponse * deleteProvisioningArtifact(const DeleteProvisioningArtifactRequest &request);
    DeleteTagOptionResponse * deleteTagOption(const DeleteTagOptionRequest &request);
    DescribeConstraintResponse * describeConstraint(const DescribeConstraintRequest &request);
    DescribeCopyProductStatusResponse * describeCopyProductStatus(const DescribeCopyProductStatusRequest &request);
    DescribePortfolioResponse * describePortfolio(const DescribePortfolioRequest &request);
    DescribeProductResponse * describeProduct(const DescribeProductRequest &request);
    DescribeProductAsAdminResponse * describeProductAsAdmin(const DescribeProductAsAdminRequest &request);
    DescribeProductViewResponse * describeProductView(const DescribeProductViewRequest &request);
    DescribeProvisionedProductResponse * describeProvisionedProduct(const DescribeProvisionedProductRequest &request);
    DescribeProvisionedProductPlanResponse * describeProvisionedProductPlan(const DescribeProvisionedProductPlanRequest &request);
    DescribeProvisioningArtifactResponse * describeProvisioningArtifact(const DescribeProvisioningArtifactRequest &request);
    DescribeProvisioningParametersResponse * describeProvisioningParameters(const DescribeProvisioningParametersRequest &request);
    DescribeRecordResponse * describeRecord(const DescribeRecordRequest &request);
    DescribeTagOptionResponse * describeTagOption(const DescribeTagOptionRequest &request);
    DisassociatePrincipalFromPortfolioResponse * disassociatePrincipalFromPortfolio(const DisassociatePrincipalFromPortfolioRequest &request);
    DisassociateProductFromPortfolioResponse * disassociateProductFromPortfolio(const DisassociateProductFromPortfolioRequest &request);
    DisassociateTagOptionFromResourceResponse * disassociateTagOptionFromResource(const DisassociateTagOptionFromResourceRequest &request);
    ExecuteProvisionedProductPlanResponse * executeProvisionedProductPlan(const ExecuteProvisionedProductPlanRequest &request);
    ListAcceptedPortfolioSharesResponse * listAcceptedPortfolioShares(const ListAcceptedPortfolioSharesRequest &request);
    ListConstraintsForPortfolioResponse * listConstraintsForPortfolio(const ListConstraintsForPortfolioRequest &request);
    ListLaunchPathsResponse * listLaunchPaths(const ListLaunchPathsRequest &request);
    ListPortfolioAccessResponse * listPortfolioAccess(const ListPortfolioAccessRequest &request);
    ListPortfoliosResponse * listPortfolios(const ListPortfoliosRequest &request);
    ListPortfoliosForProductResponse * listPortfoliosForProduct(const ListPortfoliosForProductRequest &request);
    ListPrincipalsForPortfolioResponse * listPrincipalsForPortfolio(const ListPrincipalsForPortfolioRequest &request);
    ListProvisionedProductPlansResponse * listProvisionedProductPlans(const ListProvisionedProductPlansRequest &request);
    ListProvisioningArtifactsResponse * listProvisioningArtifacts(const ListProvisioningArtifactsRequest &request);
    ListRecordHistoryResponse * listRecordHistory(const ListRecordHistoryRequest &request);
    ListResourcesForTagOptionResponse * listResourcesForTagOption(const ListResourcesForTagOptionRequest &request);
    ListTagOptionsResponse * listTagOptions(const ListTagOptionsRequest &request);
    ProvisionProductResponse * provisionProduct(const ProvisionProductRequest &request);
    RejectPortfolioShareResponse * rejectPortfolioShare(const RejectPortfolioShareRequest &request);
    ScanProvisionedProductsResponse * scanProvisionedProducts(const ScanProvisionedProductsRequest &request);
    SearchProductsResponse * searchProducts(const SearchProductsRequest &request);
    SearchProductsAsAdminResponse * searchProductsAsAdmin(const SearchProductsAsAdminRequest &request);
    SearchProvisionedProductsResponse * searchProvisionedProducts(const SearchProvisionedProductsRequest &request);
    TerminateProvisionedProductResponse * terminateProvisionedProduct(const TerminateProvisionedProductRequest &request);
    UpdateConstraintResponse * updateConstraint(const UpdateConstraintRequest &request);
    UpdatePortfolioResponse * updatePortfolio(const UpdatePortfolioRequest &request);
    UpdateProductResponse * updateProduct(const UpdateProductRequest &request);
    UpdateProvisionedProductResponse * updateProvisionedProduct(const UpdateProvisionedProductRequest &request);
    UpdateProvisioningArtifactResponse * updateProvisioningArtifact(const UpdateProvisioningArtifactRequest &request);
    UpdateTagOptionResponse * updateTagOption(const UpdateTagOptionRequest &request);

private:
    Q_DECLARE_PRIVATE(ServiceCatalogClient)
    Q_DISABLE_COPY(ServiceCatalogClient)

};

} // namespace ServiceCatalog
} // namespace AWS

#endif

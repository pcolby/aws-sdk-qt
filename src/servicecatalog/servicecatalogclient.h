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

#ifndef QTAWS_SERVICECATALOGCLIENT_H
#define QTAWS_SERVICECATALOGCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ServiceCatalog {

class ServiceCatalogClientPrivate;
class AcceptPortfolioShareRequest;
class AcceptPortfolioShareResponse;
class AssociatePrincipalWithPortfolioRequest;
class AssociatePrincipalWithPortfolioResponse;
class AssociateProductWithPortfolioRequest;
class AssociateProductWithPortfolioResponse;
class AssociateTagOptionWithResourceRequest;
class AssociateTagOptionWithResourceResponse;
class CopyProductRequest;
class CopyProductResponse;
class CreateConstraintRequest;
class CreateConstraintResponse;
class CreatePortfolioRequest;
class CreatePortfolioResponse;
class CreatePortfolioShareRequest;
class CreatePortfolioShareResponse;
class CreateProductRequest;
class CreateProductResponse;
class CreateProvisionedProductPlanRequest;
class CreateProvisionedProductPlanResponse;
class CreateProvisioningArtifactRequest;
class CreateProvisioningArtifactResponse;
class CreateTagOptionRequest;
class CreateTagOptionResponse;
class DeleteConstraintRequest;
class DeleteConstraintResponse;
class DeletePortfolioRequest;
class DeletePortfolioResponse;
class DeletePortfolioShareRequest;
class DeletePortfolioShareResponse;
class DeleteProductRequest;
class DeleteProductResponse;
class DeleteProvisionedProductPlanRequest;
class DeleteProvisionedProductPlanResponse;
class DeleteProvisioningArtifactRequest;
class DeleteProvisioningArtifactResponse;
class DeleteTagOptionRequest;
class DeleteTagOptionResponse;
class DescribeConstraintRequest;
class DescribeConstraintResponse;
class DescribeCopyProductStatusRequest;
class DescribeCopyProductStatusResponse;
class DescribePortfolioRequest;
class DescribePortfolioResponse;
class DescribeProductRequest;
class DescribeProductResponse;
class DescribeProductAsAdminRequest;
class DescribeProductAsAdminResponse;
class DescribeProductViewRequest;
class DescribeProductViewResponse;
class DescribeProvisionedProductRequest;
class DescribeProvisionedProductResponse;
class DescribeProvisionedProductPlanRequest;
class DescribeProvisionedProductPlanResponse;
class DescribeProvisioningArtifactRequest;
class DescribeProvisioningArtifactResponse;
class DescribeProvisioningParametersRequest;
class DescribeProvisioningParametersResponse;
class DescribeRecordRequest;
class DescribeRecordResponse;
class DescribeTagOptionRequest;
class DescribeTagOptionResponse;
class DisassociatePrincipalFromPortfolioRequest;
class DisassociatePrincipalFromPortfolioResponse;
class DisassociateProductFromPortfolioRequest;
class DisassociateProductFromPortfolioResponse;
class DisassociateTagOptionFromResourceRequest;
class DisassociateTagOptionFromResourceResponse;
class ExecuteProvisionedProductPlanRequest;
class ExecuteProvisionedProductPlanResponse;
class ListAcceptedPortfolioSharesRequest;
class ListAcceptedPortfolioSharesResponse;
class ListConstraintsForPortfolioRequest;
class ListConstraintsForPortfolioResponse;
class ListLaunchPathsRequest;
class ListLaunchPathsResponse;
class ListPortfolioAccessRequest;
class ListPortfolioAccessResponse;
class ListPortfoliosRequest;
class ListPortfoliosResponse;
class ListPortfoliosForProductRequest;
class ListPortfoliosForProductResponse;
class ListPrincipalsForPortfolioRequest;
class ListPrincipalsForPortfolioResponse;
class ListProvisionedProductPlansRequest;
class ListProvisionedProductPlansResponse;
class ListProvisioningArtifactsRequest;
class ListProvisioningArtifactsResponse;
class ListRecordHistoryRequest;
class ListRecordHistoryResponse;
class ListResourcesForTagOptionRequest;
class ListResourcesForTagOptionResponse;
class ListTagOptionsRequest;
class ListTagOptionsResponse;
class ProvisionProductRequest;
class ProvisionProductResponse;
class RejectPortfolioShareRequest;
class RejectPortfolioShareResponse;
class ScanProvisionedProductsRequest;
class ScanProvisionedProductsResponse;
class SearchProductsRequest;
class SearchProductsResponse;
class SearchProductsAsAdminRequest;
class SearchProductsAsAdminResponse;
class SearchProvisionedProductsRequest;
class SearchProvisionedProductsResponse;
class TerminateProvisionedProductRequest;
class TerminateProvisionedProductResponse;
class UpdateConstraintRequest;
class UpdateConstraintResponse;
class UpdatePortfolioRequest;
class UpdatePortfolioResponse;
class UpdateProductRequest;
class UpdateProductResponse;
class UpdateProvisionedProductRequest;
class UpdateProvisionedProductResponse;
class UpdateProvisioningArtifactRequest;
class UpdateProvisioningArtifactResponse;
class UpdateTagOptionRequest;
class UpdateTagOptionResponse;

class QTAWS_EXPORT ServiceCatalogClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ServiceCatalogClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ServiceCatalogClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
} // namespace QtAws

#endif

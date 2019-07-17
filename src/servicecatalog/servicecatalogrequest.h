/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_SERVICECATALOGREQUEST_H
#define QTAWS_SERVICECATALOGREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ServiceCatalog {

class ServiceCatalogRequestPrivate;

class QTAWS_EXPORT ServiceCatalogRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ServiceCatalog.
    enum Action {
        AcceptPortfolioShareAction,
        AssociatePrincipalWithPortfolioAction,
        AssociateProductWithPortfolioAction,
        AssociateServiceActionWithProvisioningArtifactAction,
        AssociateTagOptionWithResourceAction,
        BatchAssociateServiceActionWithProvisioningArtifactAction,
        BatchDisassociateServiceActionFromProvisioningArtifactAction,
        CopyProductAction,
        CreateConstraintAction,
        CreatePortfolioAction,
        CreatePortfolioShareAction,
        CreateProductAction,
        CreateProvisionedProductPlanAction,
        CreateProvisioningArtifactAction,
        CreateServiceActionAction,
        CreateTagOptionAction,
        DeleteConstraintAction,
        DeletePortfolioAction,
        DeletePortfolioShareAction,
        DeleteProductAction,
        DeleteProvisionedProductPlanAction,
        DeleteProvisioningArtifactAction,
        DeleteServiceActionAction,
        DeleteTagOptionAction,
        DescribeConstraintAction,
        DescribeCopyProductStatusAction,
        DescribePortfolioAction,
        DescribePortfolioShareStatusAction,
        DescribeProductAction,
        DescribeProductAsAdminAction,
        DescribeProductViewAction,
        DescribeProvisionedProductAction,
        DescribeProvisionedProductPlanAction,
        DescribeProvisioningArtifactAction,
        DescribeProvisioningParametersAction,
        DescribeRecordAction,
        DescribeServiceActionAction,
        DescribeTagOptionAction,
        DisableAWSOrganizationsAccessAction,
        DisassociatePrincipalFromPortfolioAction,
        DisassociateProductFromPortfolioAction,
        DisassociateServiceActionFromProvisioningArtifactAction,
        DisassociateTagOptionFromResourceAction,
        EnableAWSOrganizationsAccessAction,
        ExecuteProvisionedProductPlanAction,
        ExecuteProvisionedProductServiceActionAction,
        GetAWSOrganizationsAccessStatusAction,
        ListAcceptedPortfolioSharesAction,
        ListConstraintsForPortfolioAction,
        ListLaunchPathsAction,
        ListOrganizationPortfolioAccessAction,
        ListPortfolioAccessAction,
        ListPortfoliosAction,
        ListPortfoliosForProductAction,
        ListPrincipalsForPortfolioAction,
        ListProvisionedProductPlansAction,
        ListProvisioningArtifactsAction,
        ListProvisioningArtifactsForServiceActionAction,
        ListRecordHistoryAction,
        ListResourcesForTagOptionAction,
        ListServiceActionsAction,
        ListServiceActionsForProvisioningArtifactAction,
        ListTagOptionsAction,
        ProvisionProductAction,
        RejectPortfolioShareAction,
        ScanProvisionedProductsAction,
        SearchProductsAction,
        SearchProductsAsAdminAction,
        SearchProvisionedProductsAction,
        TerminateProvisionedProductAction,
        UpdateConstraintAction,
        UpdatePortfolioAction,
        UpdateProductAction,
        UpdateProvisionedProductAction,
        UpdateProvisioningArtifactAction,
        UpdateServiceActionAction,
        UpdateTagOptionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ServiceCatalogRequest(const Action action);
    ServiceCatalogRequest(const ServiceCatalogRequest &other);
    ServiceCatalogRequest &operator=(const ServiceCatalogRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ServiceCatalogRequest &other) const;


protected:
    /// @cond internal
    ServiceCatalogRequest(ServiceCatalogRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ServiceCatalogRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif

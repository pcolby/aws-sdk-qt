// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICECATALOGREQUEST_H
#define QTAWS_SERVICECATALOGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsservicecatalogglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ServiceCatalog {

class ServiceCatalogRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ServiceCatalogRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ServiceCatalog.
    enum Action {
        AcceptPortfolioShareAction,
        AssociateBudgetWithResourceAction,
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
        DescribePortfolioSharesAction,
        DescribeProductAction,
        DescribeProductAsAdminAction,
        DescribeProductViewAction,
        DescribeProvisionedProductAction,
        DescribeProvisionedProductPlanAction,
        DescribeProvisioningArtifactAction,
        DescribeProvisioningParametersAction,
        DescribeRecordAction,
        DescribeServiceActionAction,
        DescribeServiceActionExecutionParametersAction,
        DescribeTagOptionAction,
        DisableAWSOrganizationsAccessAction,
        DisassociateBudgetFromResourceAction,
        DisassociatePrincipalFromPortfolioAction,
        DisassociateProductFromPortfolioAction,
        DisassociateServiceActionFromProvisioningArtifactAction,
        DisassociateTagOptionFromResourceAction,
        EnableAWSOrganizationsAccessAction,
        ExecuteProvisionedProductPlanAction,
        ExecuteProvisionedProductServiceActionAction,
        GetAWSOrganizationsAccessStatusAction,
        GetProvisionedProductOutputsAction,
        ImportAsProvisionedProductAction,
        ListAcceptedPortfolioSharesAction,
        ListBudgetsForResourceAction,
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
        ListStackInstancesForProvisionedProductAction,
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
        UpdatePortfolioShareAction,
        UpdateProductAction,
        UpdateProvisionedProductAction,
        UpdateProvisionedProductPropertiesAction,
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
    explicit ServiceCatalogRequest(ServiceCatalogRequestPrivate * const d);
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

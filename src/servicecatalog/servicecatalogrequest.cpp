// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "servicecatalogrequest.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ServiceCatalogRequest
 * \brief The ServiceCatalogRequest class provides an interface for ServiceCatalog requests.
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * \enum ServiceCatalogRequest::Action
 *
 * This enum describes the actions that can be performed as ServiceCatalog
 * requests.
 *
 * \value AcceptPortfolioShareAction ServiceCatalog AcceptPortfolioShare action.
 * \value AssociateBudgetWithResourceAction ServiceCatalog AssociateBudgetWithResource action.
 * \value AssociatePrincipalWithPortfolioAction ServiceCatalog AssociatePrincipalWithPortfolio action.
 * \value AssociateProductWithPortfolioAction ServiceCatalog AssociateProductWithPortfolio action.
 * \value AssociateServiceActionWithProvisioningArtifactAction ServiceCatalog AssociateServiceActionWithProvisioningArtifact action.
 * \value AssociateTagOptionWithResourceAction ServiceCatalog AssociateTagOptionWithResource action.
 * \value BatchAssociateServiceActionWithProvisioningArtifactAction ServiceCatalog BatchAssociateServiceActionWithProvisioningArtifact action.
 * \value BatchDisassociateServiceActionFromProvisioningArtifactAction ServiceCatalog BatchDisassociateServiceActionFromProvisioningArtifact action.
 * \value CopyProductAction ServiceCatalog CopyProduct action.
 * \value CreateConstraintAction ServiceCatalog CreateConstraint action.
 * \value CreatePortfolioAction ServiceCatalog CreatePortfolio action.
 * \value CreatePortfolioShareAction ServiceCatalog CreatePortfolioShare action.
 * \value CreateProductAction ServiceCatalog CreateProduct action.
 * \value CreateProvisionedProductPlanAction ServiceCatalog CreateProvisionedProductPlan action.
 * \value CreateProvisioningArtifactAction ServiceCatalog CreateProvisioningArtifact action.
 * \value CreateServiceActionAction ServiceCatalog CreateServiceAction action.
 * \value CreateTagOptionAction ServiceCatalog CreateTagOption action.
 * \value DeleteConstraintAction ServiceCatalog DeleteConstraint action.
 * \value DeletePortfolioAction ServiceCatalog DeletePortfolio action.
 * \value DeletePortfolioShareAction ServiceCatalog DeletePortfolioShare action.
 * \value DeleteProductAction ServiceCatalog DeleteProduct action.
 * \value DeleteProvisionedProductPlanAction ServiceCatalog DeleteProvisionedProductPlan action.
 * \value DeleteProvisioningArtifactAction ServiceCatalog DeleteProvisioningArtifact action.
 * \value DeleteServiceActionAction ServiceCatalog DeleteServiceAction action.
 * \value DeleteTagOptionAction ServiceCatalog DeleteTagOption action.
 * \value DescribeConstraintAction ServiceCatalog DescribeConstraint action.
 * \value DescribeCopyProductStatusAction ServiceCatalog DescribeCopyProductStatus action.
 * \value DescribePortfolioAction ServiceCatalog DescribePortfolio action.
 * \value DescribePortfolioShareStatusAction ServiceCatalog DescribePortfolioShareStatus action.
 * \value DescribePortfolioSharesAction ServiceCatalog DescribePortfolioShares action.
 * \value DescribeProductAction ServiceCatalog DescribeProduct action.
 * \value DescribeProductAsAdminAction ServiceCatalog DescribeProductAsAdmin action.
 * \value DescribeProductViewAction ServiceCatalog DescribeProductView action.
 * \value DescribeProvisionedProductAction ServiceCatalog DescribeProvisionedProduct action.
 * \value DescribeProvisionedProductPlanAction ServiceCatalog DescribeProvisionedProductPlan action.
 * \value DescribeProvisioningArtifactAction ServiceCatalog DescribeProvisioningArtifact action.
 * \value DescribeProvisioningParametersAction ServiceCatalog DescribeProvisioningParameters action.
 * \value DescribeRecordAction ServiceCatalog DescribeRecord action.
 * \value DescribeServiceActionAction ServiceCatalog DescribeServiceAction action.
 * \value DescribeServiceActionExecutionParametersAction ServiceCatalog DescribeServiceActionExecutionParameters action.
 * \value DescribeTagOptionAction ServiceCatalog DescribeTagOption action.
 * \value DisableAWSOrganizationsAccessAction ServiceCatalog DisableAWSOrganizationsAccess action.
 * \value DisassociateBudgetFromResourceAction ServiceCatalog DisassociateBudgetFromResource action.
 * \value DisassociatePrincipalFromPortfolioAction ServiceCatalog DisassociatePrincipalFromPortfolio action.
 * \value DisassociateProductFromPortfolioAction ServiceCatalog DisassociateProductFromPortfolio action.
 * \value DisassociateServiceActionFromProvisioningArtifactAction ServiceCatalog DisassociateServiceActionFromProvisioningArtifact action.
 * \value DisassociateTagOptionFromResourceAction ServiceCatalog DisassociateTagOptionFromResource action.
 * \value EnableAWSOrganizationsAccessAction ServiceCatalog EnableAWSOrganizationsAccess action.
 * \value ExecuteProvisionedProductPlanAction ServiceCatalog ExecuteProvisionedProductPlan action.
 * \value ExecuteProvisionedProductServiceActionAction ServiceCatalog ExecuteProvisionedProductServiceAction action.
 * \value GetAWSOrganizationsAccessStatusAction ServiceCatalog GetAWSOrganizationsAccessStatus action.
 * \value GetProvisionedProductOutputsAction ServiceCatalog GetProvisionedProductOutputs action.
 * \value ImportAsProvisionedProductAction ServiceCatalog ImportAsProvisionedProduct action.
 * \value ListAcceptedPortfolioSharesAction ServiceCatalog ListAcceptedPortfolioShares action.
 * \value ListBudgetsForResourceAction ServiceCatalog ListBudgetsForResource action.
 * \value ListConstraintsForPortfolioAction ServiceCatalog ListConstraintsForPortfolio action.
 * \value ListLaunchPathsAction ServiceCatalog ListLaunchPaths action.
 * \value ListOrganizationPortfolioAccessAction ServiceCatalog ListOrganizationPortfolioAccess action.
 * \value ListPortfolioAccessAction ServiceCatalog ListPortfolioAccess action.
 * \value ListPortfoliosAction ServiceCatalog ListPortfolios action.
 * \value ListPortfoliosForProductAction ServiceCatalog ListPortfoliosForProduct action.
 * \value ListPrincipalsForPortfolioAction ServiceCatalog ListPrincipalsForPortfolio action.
 * \value ListProvisionedProductPlansAction ServiceCatalog ListProvisionedProductPlans action.
 * \value ListProvisioningArtifactsAction ServiceCatalog ListProvisioningArtifacts action.
 * \value ListProvisioningArtifactsForServiceActionAction ServiceCatalog ListProvisioningArtifactsForServiceAction action.
 * \value ListRecordHistoryAction ServiceCatalog ListRecordHistory action.
 * \value ListResourcesForTagOptionAction ServiceCatalog ListResourcesForTagOption action.
 * \value ListServiceActionsAction ServiceCatalog ListServiceActions action.
 * \value ListServiceActionsForProvisioningArtifactAction ServiceCatalog ListServiceActionsForProvisioningArtifact action.
 * \value ListStackInstancesForProvisionedProductAction ServiceCatalog ListStackInstancesForProvisionedProduct action.
 * \value ListTagOptionsAction ServiceCatalog ListTagOptions action.
 * \value ProvisionProductAction ServiceCatalog ProvisionProduct action.
 * \value RejectPortfolioShareAction ServiceCatalog RejectPortfolioShare action.
 * \value ScanProvisionedProductsAction ServiceCatalog ScanProvisionedProducts action.
 * \value SearchProductsAction ServiceCatalog SearchProducts action.
 * \value SearchProductsAsAdminAction ServiceCatalog SearchProductsAsAdmin action.
 * \value SearchProvisionedProductsAction ServiceCatalog SearchProvisionedProducts action.
 * \value TerminateProvisionedProductAction ServiceCatalog TerminateProvisionedProduct action.
 * \value UpdateConstraintAction ServiceCatalog UpdateConstraint action.
 * \value UpdatePortfolioAction ServiceCatalog UpdatePortfolio action.
 * \value UpdatePortfolioShareAction ServiceCatalog UpdatePortfolioShare action.
 * \value UpdateProductAction ServiceCatalog UpdateProduct action.
 * \value UpdateProvisionedProductAction ServiceCatalog UpdateProvisionedProduct action.
 * \value UpdateProvisionedProductPropertiesAction ServiceCatalog UpdateProvisionedProductProperties action.
 * \value UpdateProvisioningArtifactAction ServiceCatalog UpdateProvisioningArtifact action.
 * \value UpdateServiceActionAction ServiceCatalog UpdateServiceAction action.
 * \value UpdateTagOptionAction ServiceCatalog UpdateTagOption action.
 */

/*!
 * Constructs a ServiceCatalogRequest object for ServiceCatalog \a action.
 */
ServiceCatalogRequest::ServiceCatalogRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ServiceCatalogRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ServiceCatalogRequest::ServiceCatalogRequest(const ServiceCatalogRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ServiceCatalogRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ServiceCatalogRequest object to be equal to \a other.
 */
ServiceCatalogRequest& ServiceCatalogRequest::operator=(const ServiceCatalogRequest &other)
{
    Q_D(ServiceCatalogRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ServiceCatalogRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ServiceCatalogRequestPrivate.
 */
ServiceCatalogRequest::ServiceCatalogRequest(ServiceCatalogRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ServiceCatalog action to be performed by this request.
 */
ServiceCatalogRequest::Action ServiceCatalogRequest::action() const
{
    Q_D(const ServiceCatalogRequest);
    return d->action;
}

/*!
 * Returns the name of the ServiceCatalog action to be performed by this request.
 */
QString ServiceCatalogRequest::actionString() const
{
    return ServiceCatalogRequestPrivate::toString(action());
}

/*!
 * Returns the ServiceCatalog API version implemented by this request.
 */
QString ServiceCatalogRequest::apiVersion() const
{
    Q_D(const ServiceCatalogRequest);
    return d->apiVersion;
}

/*!
 * Sets the ServiceCatalog action to be performed by this request to \a action.
 */
void ServiceCatalogRequest::setAction(const Action action)
{
    Q_D(ServiceCatalogRequest);
    d->action = action;
}

/*!
 * Sets the ServiceCatalog API version to include in this request to \a version.
 */
void ServiceCatalogRequest::setApiVersion(const QString &version)
{
    Q_D(ServiceCatalogRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool ServiceCatalogRequest::operator==(const ServiceCatalogRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ServiceCatalog queue name.
 *
 * @par From ServiceCatalog FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ServiceCatalog queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ServiceCatalogRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ServiceCatalogRequest::clearParameter(const QString &name)
{
    Q_D(ServiceCatalogRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ServiceCatalogRequest::clearParameters()
{
    Q_D(ServiceCatalogRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ServiceCatalogRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ServiceCatalogRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ServiceCatalogRequest::parameters() const
{
    Q_D(const ServiceCatalogRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ServiceCatalogRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ServiceCatalogRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ServiceCatalogRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ServiceCatalogRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ServiceCatalog request using the given
 * \a endpoint.
 *
 * This ServiceCatalog implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ServiceCatalogRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ServiceCatalogRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ServiceCatalog::ServiceCatalogRequestPrivate
 * \brief The ServiceCatalogRequestPrivate class provides private implementation for ServiceCatalogRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ServiceCatalogRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ServiceCatalogRequestPrivate::ServiceCatalogRequestPrivate(const ServiceCatalogRequest::Action action, ServiceCatalogRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2015-12-10"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ServiceCatalogRequest class's copy constructor.
 */
ServiceCatalogRequestPrivate::ServiceCatalogRequestPrivate(const ServiceCatalogRequestPrivate &other,
                                     ServiceCatalogRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ServiceCatalogRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ServiceCatalog service's Action
 * query parameters.
 */
QString ServiceCatalogRequestPrivate::toString(const ServiceCatalogRequest::Action &action)
{
    #define ActionToString(action) \
        case ServiceCatalogRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptPortfolioShare);
        ActionToString(AssociateBudgetWithResource);
        ActionToString(AssociatePrincipalWithPortfolio);
        ActionToString(AssociateProductWithPortfolio);
        ActionToString(AssociateServiceActionWithProvisioningArtifact);
        ActionToString(AssociateTagOptionWithResource);
        ActionToString(BatchAssociateServiceActionWithProvisioningArtifact);
        ActionToString(BatchDisassociateServiceActionFromProvisioningArtifact);
        ActionToString(CopyProduct);
        ActionToString(CreateConstraint);
        ActionToString(CreatePortfolio);
        ActionToString(CreatePortfolioShare);
        ActionToString(CreateProduct);
        ActionToString(CreateProvisionedProductPlan);
        ActionToString(CreateProvisioningArtifact);
        ActionToString(CreateServiceAction);
        ActionToString(CreateTagOption);
        ActionToString(DeleteConstraint);
        ActionToString(DeletePortfolio);
        ActionToString(DeletePortfolioShare);
        ActionToString(DeleteProduct);
        ActionToString(DeleteProvisionedProductPlan);
        ActionToString(DeleteProvisioningArtifact);
        ActionToString(DeleteServiceAction);
        ActionToString(DeleteTagOption);
        ActionToString(DescribeConstraint);
        ActionToString(DescribeCopyProductStatus);
        ActionToString(DescribePortfolio);
        ActionToString(DescribePortfolioShareStatus);
        ActionToString(DescribePortfolioShares);
        ActionToString(DescribeProduct);
        ActionToString(DescribeProductAsAdmin);
        ActionToString(DescribeProductView);
        ActionToString(DescribeProvisionedProduct);
        ActionToString(DescribeProvisionedProductPlan);
        ActionToString(DescribeProvisioningArtifact);
        ActionToString(DescribeProvisioningParameters);
        ActionToString(DescribeRecord);
        ActionToString(DescribeServiceAction);
        ActionToString(DescribeServiceActionExecutionParameters);
        ActionToString(DescribeTagOption);
        ActionToString(DisableAWSOrganizationsAccess);
        ActionToString(DisassociateBudgetFromResource);
        ActionToString(DisassociatePrincipalFromPortfolio);
        ActionToString(DisassociateProductFromPortfolio);
        ActionToString(DisassociateServiceActionFromProvisioningArtifact);
        ActionToString(DisassociateTagOptionFromResource);
        ActionToString(EnableAWSOrganizationsAccess);
        ActionToString(ExecuteProvisionedProductPlan);
        ActionToString(ExecuteProvisionedProductServiceAction);
        ActionToString(GetAWSOrganizationsAccessStatus);
        ActionToString(GetProvisionedProductOutputs);
        ActionToString(ImportAsProvisionedProduct);
        ActionToString(ListAcceptedPortfolioShares);
        ActionToString(ListBudgetsForResource);
        ActionToString(ListConstraintsForPortfolio);
        ActionToString(ListLaunchPaths);
        ActionToString(ListOrganizationPortfolioAccess);
        ActionToString(ListPortfolioAccess);
        ActionToString(ListPortfolios);
        ActionToString(ListPortfoliosForProduct);
        ActionToString(ListPrincipalsForPortfolio);
        ActionToString(ListProvisionedProductPlans);
        ActionToString(ListProvisioningArtifacts);
        ActionToString(ListProvisioningArtifactsForServiceAction);
        ActionToString(ListRecordHistory);
        ActionToString(ListResourcesForTagOption);
        ActionToString(ListServiceActions);
        ActionToString(ListServiceActionsForProvisioningArtifact);
        ActionToString(ListStackInstancesForProvisionedProduct);
        ActionToString(ListTagOptions);
        ActionToString(ProvisionProduct);
        ActionToString(RejectPortfolioShare);
        ActionToString(ScanProvisionedProducts);
        ActionToString(SearchProducts);
        ActionToString(SearchProductsAsAdmin);
        ActionToString(SearchProvisionedProducts);
        ActionToString(TerminateProvisionedProduct);
        ActionToString(UpdateConstraint);
        ActionToString(UpdatePortfolio);
        ActionToString(UpdatePortfolioShare);
        ActionToString(UpdateProduct);
        ActionToString(UpdateProvisionedProduct);
        ActionToString(UpdateProvisionedProductProperties);
        ActionToString(UpdateProvisioningArtifact);
        ActionToString(UpdateServiceAction);
        ActionToString(UpdateTagOption);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ServiceCatalog
} // namespace QtAws

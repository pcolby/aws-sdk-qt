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

#include "servicecatalogclient.h"
#include "servicecatalogclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptportfoliosharerequest.h"
#include "acceptportfolioshareresponse.h"
#include "associatebudgetwithresourcerequest.h"
#include "associatebudgetwithresourceresponse.h"
#include "associateprincipalwithportfoliorequest.h"
#include "associateprincipalwithportfolioresponse.h"
#include "associateproductwithportfoliorequest.h"
#include "associateproductwithportfolioresponse.h"
#include "associateserviceactionwithprovisioningartifactrequest.h"
#include "associateserviceactionwithprovisioningartifactresponse.h"
#include "associatetagoptionwithresourcerequest.h"
#include "associatetagoptionwithresourceresponse.h"
#include "batchassociateserviceactionwithprovisioningartifactrequest.h"
#include "batchassociateserviceactionwithprovisioningartifactresponse.h"
#include "batchdisassociateserviceactionfromprovisioningartifactrequest.h"
#include "batchdisassociateserviceactionfromprovisioningartifactresponse.h"
#include "copyproductrequest.h"
#include "copyproductresponse.h"
#include "createconstraintrequest.h"
#include "createconstraintresponse.h"
#include "createportfoliorequest.h"
#include "createportfolioresponse.h"
#include "createportfoliosharerequest.h"
#include "createportfolioshareresponse.h"
#include "createproductrequest.h"
#include "createproductresponse.h"
#include "createprovisionedproductplanrequest.h"
#include "createprovisionedproductplanresponse.h"
#include "createprovisioningartifactrequest.h"
#include "createprovisioningartifactresponse.h"
#include "createserviceactionrequest.h"
#include "createserviceactionresponse.h"
#include "createtagoptionrequest.h"
#include "createtagoptionresponse.h"
#include "deleteconstraintrequest.h"
#include "deleteconstraintresponse.h"
#include "deleteportfoliorequest.h"
#include "deleteportfolioresponse.h"
#include "deleteportfoliosharerequest.h"
#include "deleteportfolioshareresponse.h"
#include "deleteproductrequest.h"
#include "deleteproductresponse.h"
#include "deleteprovisionedproductplanrequest.h"
#include "deleteprovisionedproductplanresponse.h"
#include "deleteprovisioningartifactrequest.h"
#include "deleteprovisioningartifactresponse.h"
#include "deleteserviceactionrequest.h"
#include "deleteserviceactionresponse.h"
#include "deletetagoptionrequest.h"
#include "deletetagoptionresponse.h"
#include "describeconstraintrequest.h"
#include "describeconstraintresponse.h"
#include "describecopyproductstatusrequest.h"
#include "describecopyproductstatusresponse.h"
#include "describeportfoliorequest.h"
#include "describeportfolioresponse.h"
#include "describeportfoliosharestatusrequest.h"
#include "describeportfoliosharestatusresponse.h"
#include "describeportfoliosharesrequest.h"
#include "describeportfoliosharesresponse.h"
#include "describeproductrequest.h"
#include "describeproductresponse.h"
#include "describeproductasadminrequest.h"
#include "describeproductasadminresponse.h"
#include "describeproductviewrequest.h"
#include "describeproductviewresponse.h"
#include "describeprovisionedproductrequest.h"
#include "describeprovisionedproductresponse.h"
#include "describeprovisionedproductplanrequest.h"
#include "describeprovisionedproductplanresponse.h"
#include "describeprovisioningartifactrequest.h"
#include "describeprovisioningartifactresponse.h"
#include "describeprovisioningparametersrequest.h"
#include "describeprovisioningparametersresponse.h"
#include "describerecordrequest.h"
#include "describerecordresponse.h"
#include "describeserviceactionrequest.h"
#include "describeserviceactionresponse.h"
#include "describeserviceactionexecutionparametersrequest.h"
#include "describeserviceactionexecutionparametersresponse.h"
#include "describetagoptionrequest.h"
#include "describetagoptionresponse.h"
#include "disableawsorganizationsaccessrequest.h"
#include "disableawsorganizationsaccessresponse.h"
#include "disassociatebudgetfromresourcerequest.h"
#include "disassociatebudgetfromresourceresponse.h"
#include "disassociateprincipalfromportfoliorequest.h"
#include "disassociateprincipalfromportfolioresponse.h"
#include "disassociateproductfromportfoliorequest.h"
#include "disassociateproductfromportfolioresponse.h"
#include "disassociateserviceactionfromprovisioningartifactrequest.h"
#include "disassociateserviceactionfromprovisioningartifactresponse.h"
#include "disassociatetagoptionfromresourcerequest.h"
#include "disassociatetagoptionfromresourceresponse.h"
#include "enableawsorganizationsaccessrequest.h"
#include "enableawsorganizationsaccessresponse.h"
#include "executeprovisionedproductplanrequest.h"
#include "executeprovisionedproductplanresponse.h"
#include "executeprovisionedproductserviceactionrequest.h"
#include "executeprovisionedproductserviceactionresponse.h"
#include "getawsorganizationsaccessstatusrequest.h"
#include "getawsorganizationsaccessstatusresponse.h"
#include "getprovisionedproductoutputsrequest.h"
#include "getprovisionedproductoutputsresponse.h"
#include "importasprovisionedproductrequest.h"
#include "importasprovisionedproductresponse.h"
#include "listacceptedportfoliosharesrequest.h"
#include "listacceptedportfoliosharesresponse.h"
#include "listbudgetsforresourcerequest.h"
#include "listbudgetsforresourceresponse.h"
#include "listconstraintsforportfoliorequest.h"
#include "listconstraintsforportfolioresponse.h"
#include "listlaunchpathsrequest.h"
#include "listlaunchpathsresponse.h"
#include "listorganizationportfolioaccessrequest.h"
#include "listorganizationportfolioaccessresponse.h"
#include "listportfolioaccessrequest.h"
#include "listportfolioaccessresponse.h"
#include "listportfoliosrequest.h"
#include "listportfoliosresponse.h"
#include "listportfoliosforproductrequest.h"
#include "listportfoliosforproductresponse.h"
#include "listprincipalsforportfoliorequest.h"
#include "listprincipalsforportfolioresponse.h"
#include "listprovisionedproductplansrequest.h"
#include "listprovisionedproductplansresponse.h"
#include "listprovisioningartifactsrequest.h"
#include "listprovisioningartifactsresponse.h"
#include "listprovisioningartifactsforserviceactionrequest.h"
#include "listprovisioningartifactsforserviceactionresponse.h"
#include "listrecordhistoryrequest.h"
#include "listrecordhistoryresponse.h"
#include "listresourcesfortagoptionrequest.h"
#include "listresourcesfortagoptionresponse.h"
#include "listserviceactionsrequest.h"
#include "listserviceactionsresponse.h"
#include "listserviceactionsforprovisioningartifactrequest.h"
#include "listserviceactionsforprovisioningartifactresponse.h"
#include "liststackinstancesforprovisionedproductrequest.h"
#include "liststackinstancesforprovisionedproductresponse.h"
#include "listtagoptionsrequest.h"
#include "listtagoptionsresponse.h"
#include "provisionproductrequest.h"
#include "provisionproductresponse.h"
#include "rejectportfoliosharerequest.h"
#include "rejectportfolioshareresponse.h"
#include "scanprovisionedproductsrequest.h"
#include "scanprovisionedproductsresponse.h"
#include "searchproductsrequest.h"
#include "searchproductsresponse.h"
#include "searchproductsasadminrequest.h"
#include "searchproductsasadminresponse.h"
#include "searchprovisionedproductsrequest.h"
#include "searchprovisionedproductsresponse.h"
#include "terminateprovisionedproductrequest.h"
#include "terminateprovisionedproductresponse.h"
#include "updateconstraintrequest.h"
#include "updateconstraintresponse.h"
#include "updateportfoliorequest.h"
#include "updateportfolioresponse.h"
#include "updateportfoliosharerequest.h"
#include "updateportfolioshareresponse.h"
#include "updateproductrequest.h"
#include "updateproductresponse.h"
#include "updateprovisionedproductrequest.h"
#include "updateprovisionedproductresponse.h"
#include "updateprovisionedproductpropertiesrequest.h"
#include "updateprovisionedproductpropertiesresponse.h"
#include "updateprovisioningartifactrequest.h"
#include "updateprovisioningartifactresponse.h"
#include "updateserviceactionrequest.h"
#include "updateserviceactionresponse.h"
#include "updatetagoptionrequest.h"
#include "updatetagoptionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ServiceCatalog
 * \brief Contains classess for accessing AWS Service Catalog.
 *
 * \inmodule QtAwsServiceCatalog
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ServiceCatalogClient
 * \brief The ServiceCatalogClient class provides access to the AWS Service Catalog service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for AWS. To get the most out of this documentation, you should be familiar
 *  with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 */

/*!
 * \brief Constructs a ServiceCatalogClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ServiceCatalogClient::ServiceCatalogClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2015-12-10"),
    QStringLiteral("servicecatalog"),
    QStringLiteral("AWS Service Catalog"),
    QStringLiteral("servicecatalog"),
    parent), d_ptr(new ServiceCatalogClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload ServiceCatalogClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ServiceCatalogClient::ServiceCatalogClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2015-12-10"),
    QStringLiteral("servicecatalog"),
    QStringLiteral("AWS Service Catalog"),
    QStringLiteral("servicecatalog"),
    parent), d_ptr(new ServiceCatalogClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * AcceptPortfolioShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts an offer to share the specified
 */
AcceptPortfolioShareResponse * ServiceCatalogClient::acceptPortfolioShare(const AcceptPortfolioShareRequest &request)
{
    return qobject_cast<AcceptPortfolioShareResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * AssociateBudgetWithResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified budget with the specified
 */
AssociateBudgetWithResourceResponse * ServiceCatalogClient::associateBudgetWithResource(const AssociateBudgetWithResourceRequest &request)
{
    return qobject_cast<AssociateBudgetWithResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * AssociatePrincipalWithPortfolioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified principal ARN with the specified
 */
AssociatePrincipalWithPortfolioResponse * ServiceCatalogClient::associatePrincipalWithPortfolio(const AssociatePrincipalWithPortfolioRequest &request)
{
    return qobject_cast<AssociatePrincipalWithPortfolioResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * AssociateProductWithPortfolioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified product with the specified
 *
 * portfolio>
 *
 * A delegated admin is authorized to invoke this
 */
AssociateProductWithPortfolioResponse * ServiceCatalogClient::associateProductWithPortfolio(const AssociateProductWithPortfolioRequest &request)
{
    return qobject_cast<AssociateProductWithPortfolioResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * AssociateServiceActionWithProvisioningArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a self-service action with a provisioning
 */
AssociateServiceActionWithProvisioningArtifactResponse * ServiceCatalogClient::associateServiceActionWithProvisioningArtifact(const AssociateServiceActionWithProvisioningArtifactRequest &request)
{
    return qobject_cast<AssociateServiceActionWithProvisioningArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * AssociateTagOptionWithResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate the specified TagOption with the specified portfolio or
 */
AssociateTagOptionWithResourceResponse * ServiceCatalogClient::associateTagOptionWithResource(const AssociateTagOptionWithResourceRequest &request)
{
    return qobject_cast<AssociateTagOptionWithResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * BatchAssociateServiceActionWithProvisioningArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates multiple self-service actions with provisioning
 */
BatchAssociateServiceActionWithProvisioningArtifactResponse * ServiceCatalogClient::batchAssociateServiceActionWithProvisioningArtifact(const BatchAssociateServiceActionWithProvisioningArtifactRequest &request)
{
    return qobject_cast<BatchAssociateServiceActionWithProvisioningArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * BatchDisassociateServiceActionFromProvisioningArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a batch of self-service actions from the specified provisioning
 */
BatchDisassociateServiceActionFromProvisioningArtifactResponse * ServiceCatalogClient::batchDisassociateServiceActionFromProvisioningArtifact(const BatchDisassociateServiceActionFromProvisioningArtifactRequest &request)
{
    return qobject_cast<BatchDisassociateServiceActionFromProvisioningArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * CopyProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified source product to the specified target product or a new
 *
 * product>
 *
 * You can copy a product to the same account or another account. You can copy a product to the same region or another
 *
 * region>
 *
 * This operation is performed asynchronously. To track the progress of the operation, use
 */
CopyProductResponse * ServiceCatalogClient::copyProduct(const CopyProductRequest &request)
{
    return qobject_cast<CopyProductResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * CreateConstraintResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 *
 * constraint>
 *
 * A delegated admin is authorized to invoke this
 */
CreateConstraintResponse * ServiceCatalogClient::createConstraint(const CreateConstraintRequest &request)
{
    return qobject_cast<CreateConstraintResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * CreatePortfolioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 *
 * portfolio>
 *
 * A delegated admin is authorized to invoke this
 */
CreatePortfolioResponse * ServiceCatalogClient::createPortfolio(const CreatePortfolioRequest &request)
{
    return qobject_cast<CreatePortfolioResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * CreatePortfolioShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Shares the specified portfolio with the specified account or organization node. Shares to an organization node can only
 * be created by the management account of an organization or by a delegated administrator. You can share portfolios to an
 * organization, an organizational unit, or a specific
 *
 * account>
 *
 * Note that if a delegated admin is de-registered, they can no longer create portfolio
 *
 * shares>
 *
 * <code>AWSOrganizationsAccess</code> must be enabled in order to create a portfolio share to an organization
 *
 * node>
 *
 * You can't share a shared resource, including portfolios that contain a shared
 *
 * product>
 *
 * If the portfolio share with the specified account or organization node already exists, this action will have no effect
 * and will not return an error. To update an existing share, you must use the <code> UpdatePortfolioShare</code> API
 */
CreatePortfolioShareResponse * ServiceCatalogClient::createPortfolioShare(const CreatePortfolioShareRequest &request)
{
    return qobject_cast<CreatePortfolioShareResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * CreateProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 *
 * product>
 *
 * A delegated admin is authorized to invoke this
 *
 * command>
 *
 * The user or role that performs this operation must have the <code>cloudformation:GetTemplate</code> IAM policy
 * permission. This policy permission is required when using the <code>ImportFromPhysicalId</code> template source in the
 * information data
 */
CreateProductResponse * ServiceCatalogClient::createProduct(const CreateProductRequest &request)
{
    return qobject_cast<CreateProductResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * CreateProvisionedProductPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
CreateProvisionedProductPlanResponse * ServiceCatalogClient::createProvisionedProductPlan(const CreateProvisionedProductPlanRequest &request)
{
    return qobject_cast<CreateProvisionedProductPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * CreateProvisioningArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a provisioning artifact (also known as a version) for the specified
 *
 * product>
 *
 * You cannot create a provisioning artifact for a product that was shared with
 *
 * you>
 *
 * The user or role that performs this operation must have the <code>cloudformation:GetTemplate</code> IAM policy
 * permission. This policy permission is required when using the <code>ImportFromPhysicalId</code> template source in the
 * information data
 */
CreateProvisioningArtifactResponse * ServiceCatalogClient::createProvisioningArtifact(const CreateProvisioningArtifactRequest &request)
{
    return qobject_cast<CreateProvisioningArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * CreateServiceActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a self-service
 */
CreateServiceActionResponse * ServiceCatalogClient::createServiceAction(const CreateServiceActionRequest &request)
{
    return qobject_cast<CreateServiceActionResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * CreateTagOptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateTagOptionResponse * ServiceCatalogClient::createTagOption(const CreateTagOptionRequest &request)
{
    return qobject_cast<CreateTagOptionResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DeleteConstraintResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * constraint>
 *
 * A delegated admin is authorized to invoke this
 */
DeleteConstraintResponse * ServiceCatalogClient::deleteConstraint(const DeleteConstraintRequest &request)
{
    return qobject_cast<DeleteConstraintResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DeletePortfolioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * portfolio>
 *
 * You cannot delete a portfolio if it was shared with you or if it has associated products, users, constraints, or shared
 *
 * accounts>
 *
 * A delegated admin is authorized to invoke this
 */
DeletePortfolioResponse * ServiceCatalogClient::deletePortfolio(const DeletePortfolioRequest &request)
{
    return qobject_cast<DeletePortfolioResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DeletePortfolioShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops sharing the specified portfolio with the specified account or organization node. Shares to an organization node
 * can only be deleted by the management account of an organization or by a delegated
 *
 * administrator>
 *
 * Note that if a delegated admin is de-registered, portfolio shares created from that account are
 */
DeletePortfolioShareResponse * ServiceCatalogClient::deletePortfolioShare(const DeletePortfolioShareRequest &request)
{
    return qobject_cast<DeletePortfolioShareResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DeleteProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * product>
 *
 * You cannot delete a product if it was shared with you or is associated with a
 *
 * portfolio>
 *
 * A delegated admin is authorized to invoke this
 */
DeleteProductResponse * ServiceCatalogClient::deleteProduct(const DeleteProductRequest &request)
{
    return qobject_cast<DeleteProductResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DeleteProvisionedProductPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteProvisionedProductPlanResponse * ServiceCatalogClient::deleteProvisionedProductPlan(const DeleteProvisionedProductPlanRequest &request)
{
    return qobject_cast<DeleteProvisionedProductPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DeleteProvisioningArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified provisioning artifact (also known as a version) for the specified
 *
 * product>
 *
 * You cannot delete a provisioning artifact associated with a product that was shared with you. You cannot delete the last
 * provisioning artifact for a product, because a product must have at least one provisioning
 */
DeleteProvisioningArtifactResponse * ServiceCatalogClient::deleteProvisioningArtifact(const DeleteProvisioningArtifactRequest &request)
{
    return qobject_cast<DeleteProvisioningArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DeleteServiceActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a self-service
 */
DeleteServiceActionResponse * ServiceCatalogClient::deleteServiceAction(const DeleteServiceActionRequest &request)
{
    return qobject_cast<DeleteServiceActionResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DeleteTagOptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * TagOption>
 *
 * You cannot delete a TagOption if it is associated with a product or
 */
DeleteTagOptionResponse * ServiceCatalogClient::deleteTagOption(const DeleteTagOptionRequest &request)
{
    return qobject_cast<DeleteTagOptionResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeConstraintResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified
 */
DescribeConstraintResponse * ServiceCatalogClient::describeConstraint(const DescribeConstraintRequest &request)
{
    return qobject_cast<DescribeConstraintResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeCopyProductStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the status of the specified copy product
 */
DescribeCopyProductStatusResponse * ServiceCatalogClient::describeCopyProductStatus(const DescribeCopyProductStatusRequest &request)
{
    return qobject_cast<DescribeCopyProductStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribePortfolioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified
 *
 * portfolio>
 *
 * A delegated admin is authorized to invoke this
 */
DescribePortfolioResponse * ServiceCatalogClient::describePortfolio(const DescribePortfolioRequest &request)
{
    return qobject_cast<DescribePortfolioResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribePortfolioShareStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the status of the specified portfolio share operation. This API can only be called by the management account in the
 * organization or by a delegated
 */
DescribePortfolioShareStatusResponse * ServiceCatalogClient::describePortfolioShareStatus(const DescribePortfolioShareStatusRequest &request)
{
    return qobject_cast<DescribePortfolioShareStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribePortfolioSharesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a summary of each of the portfolio shares that were created for the specified
 *
 * portfolio>
 *
 * You can use this API to determine which accounts or organizational nodes this portfolio have been shared, whether the
 * recipient entity has imported the share, and whether TagOptions are included with the
 *
 * share>
 *
 * The <code>PortfolioId</code> and <code>Type</code> parameters are both
 */
DescribePortfolioSharesResponse * ServiceCatalogClient::describePortfolioShares(const DescribePortfolioSharesRequest &request)
{
    return qobject_cast<DescribePortfolioSharesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified
 */
DescribeProductResponse * ServiceCatalogClient::describeProduct(const DescribeProductRequest &request)
{
    return qobject_cast<DescribeProductResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeProductAsAdminResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified product. This operation is run with administrator
 */
DescribeProductAsAdminResponse * ServiceCatalogClient::describeProductAsAdmin(const DescribeProductAsAdminRequest &request)
{
    return qobject_cast<DescribeProductAsAdminResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeProductViewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified
 */
DescribeProductViewResponse * ServiceCatalogClient::describeProductView(const DescribeProductViewRequest &request)
{
    return qobject_cast<DescribeProductViewResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeProvisionedProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified provisioned
 */
DescribeProvisionedProductResponse * ServiceCatalogClient::describeProvisionedProduct(const DescribeProvisionedProductRequest &request)
{
    return qobject_cast<DescribeProvisionedProductResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeProvisionedProductPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the resource changes for the specified
 */
DescribeProvisionedProductPlanResponse * ServiceCatalogClient::describeProvisionedProductPlan(const DescribeProvisionedProductPlanRequest &request)
{
    return qobject_cast<DescribeProvisionedProductPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeProvisioningArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified provisioning artifact (also known as a version) for the specified
 */
DescribeProvisioningArtifactResponse * ServiceCatalogClient::describeProvisioningArtifact(const DescribeProvisioningArtifactRequest &request)
{
    return qobject_cast<DescribeProvisioningArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeProvisioningParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the configuration required to provision the specified product using the specified provisioning
 *
 * artifact>
 *
 * If the output contains a TagOption key with an empty list of values, there is a TagOption conflict for that key. The end
 * user cannot take action to fix the conflict, and launch is not blocked. In subsequent calls to <a>ProvisionProduct</a>,
 * do not include conflicted TagOption keys as tags, or this causes the error "Parameter validation failed: Missing
 * required parameter in Tags[<i>N</i>]:<i>Value</i>". Tag the provisioned product with the value
 */
DescribeProvisioningParametersResponse * ServiceCatalogClient::describeProvisioningParameters(const DescribeProvisioningParametersRequest &request)
{
    return qobject_cast<DescribeProvisioningParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeRecordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified request
 *
 * operation>
 *
 * Use this operation after calling a request operation (for example, <a>ProvisionProduct</a>,
 * <a>TerminateProvisionedProduct</a>, or <a>UpdateProvisionedProduct</a>).
 *
 * </p <note>
 *
 * If a provisioned product was transferred to a new owner using <a>UpdateProvisionedProductProperties</a>, the new owner
 * will be able to describe all past records for that product. The previous owner will no longer be able to describe the
 * records, but will be able to use <a>ListRecordHistory</a> to see the product's history from when he was the
 */
DescribeRecordResponse * ServiceCatalogClient::describeRecord(const DescribeRecordRequest &request)
{
    return qobject_cast<DescribeRecordResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeServiceActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a self-service
 */
DescribeServiceActionResponse * ServiceCatalogClient::describeServiceAction(const DescribeServiceActionRequest &request)
{
    return qobject_cast<DescribeServiceActionResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeServiceActionExecutionParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Finds the default parameters for a specific self-service action on a specific provisioned product and returns a map of
 * the results to the
 */
DescribeServiceActionExecutionParametersResponse * ServiceCatalogClient::describeServiceActionExecutionParameters(const DescribeServiceActionExecutionParametersRequest &request)
{
    return qobject_cast<DescribeServiceActionExecutionParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DescribeTagOptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified
 */
DescribeTagOptionResponse * ServiceCatalogClient::describeTagOption(const DescribeTagOptionRequest &request)
{
    return qobject_cast<DescribeTagOptionResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DisableAWSOrganizationsAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disable portfolio sharing through AWS Organizations feature. This feature will not delete your current shares but it
 * will prevent you from creating new shares throughout your organization. Current shares will not be in sync with your
 * organization structure if it changes after calling this API. This API can only be called by the management account in
 * the
 *
 * organization>
 *
 * This API can't be invoked if there are active delegated administrators in the
 *
 * organization>
 *
 * Note that a delegated administrator is not authorized to invoke
 */
DisableAWSOrganizationsAccessResponse * ServiceCatalogClient::disableAWSOrganizationsAccess(const DisableAWSOrganizationsAccessRequest &request)
{
    return qobject_cast<DisableAWSOrganizationsAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DisassociateBudgetFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified budget from the specified
 */
DisassociateBudgetFromResourceResponse * ServiceCatalogClient::disassociateBudgetFromResource(const DisassociateBudgetFromResourceRequest &request)
{
    return qobject_cast<DisassociateBudgetFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DisassociatePrincipalFromPortfolioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a previously associated principal ARN from a specified
 */
DisassociatePrincipalFromPortfolioResponse * ServiceCatalogClient::disassociatePrincipalFromPortfolio(const DisassociatePrincipalFromPortfolioRequest &request)
{
    return qobject_cast<DisassociatePrincipalFromPortfolioResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DisassociateProductFromPortfolioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified product from the specified portfolio.
 *
 * </p
 *
 * A delegated admin is authorized to invoke this
 */
DisassociateProductFromPortfolioResponse * ServiceCatalogClient::disassociateProductFromPortfolio(const DisassociateProductFromPortfolioRequest &request)
{
    return qobject_cast<DisassociateProductFromPortfolioResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DisassociateServiceActionFromProvisioningArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified self-service action association from the specified provisioning
 */
DisassociateServiceActionFromProvisioningArtifactResponse * ServiceCatalogClient::disassociateServiceActionFromProvisioningArtifact(const DisassociateServiceActionFromProvisioningArtifactRequest &request)
{
    return qobject_cast<DisassociateServiceActionFromProvisioningArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * DisassociateTagOptionFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified TagOption from the specified
 */
DisassociateTagOptionFromResourceResponse * ServiceCatalogClient::disassociateTagOptionFromResource(const DisassociateTagOptionFromResourceRequest &request)
{
    return qobject_cast<DisassociateTagOptionFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * EnableAWSOrganizationsAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enable portfolio sharing feature through AWS Organizations. This API will allow Service Catalog to receive updates on
 * your organization in order to sync your shares with the current structure. This API can only be called by the management
 * account in the
 *
 * organization>
 *
 * By calling this API Service Catalog will make a call to organizations:EnableAWSServiceAccess on your behalf so that your
 * shares can be in sync with any changes in your AWS Organizations
 *
 * structure>
 *
 * Note that a delegated administrator is not authorized to invoke
 */
EnableAWSOrganizationsAccessResponse * ServiceCatalogClient::enableAWSOrganizationsAccess(const EnableAWSOrganizationsAccessRequest &request)
{
    return qobject_cast<EnableAWSOrganizationsAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ExecuteProvisionedProductPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provisions or modifies a product based on the resource changes for the specified
 */
ExecuteProvisionedProductPlanResponse * ServiceCatalogClient::executeProvisionedProductPlan(const ExecuteProvisionedProductPlanRequest &request)
{
    return qobject_cast<ExecuteProvisionedProductPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ExecuteProvisionedProductServiceActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Executes a self-service action against a provisioned
 */
ExecuteProvisionedProductServiceActionResponse * ServiceCatalogClient::executeProvisionedProductServiceAction(const ExecuteProvisionedProductServiceActionRequest &request)
{
    return qobject_cast<ExecuteProvisionedProductServiceActionResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * GetAWSOrganizationsAccessStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the Access Status for AWS Organization portfolio share feature. This API can only be called by the management
 * account in the organization or by a delegated
 */
GetAWSOrganizationsAccessStatusResponse * ServiceCatalogClient::getAWSOrganizationsAccessStatus(const GetAWSOrganizationsAccessStatusRequest &request)
{
    return qobject_cast<GetAWSOrganizationsAccessStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * GetProvisionedProductOutputsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API takes either a <code>ProvisonedProductId</code> or a <code>ProvisionedProductName</code>, along with a list of
 * one or more output keys, and responds with the key/value pairs of those
 */
GetProvisionedProductOutputsResponse * ServiceCatalogClient::getProvisionedProductOutputs(const GetProvisionedProductOutputsRequest &request)
{
    return qobject_cast<GetProvisionedProductOutputsResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ImportAsProvisionedProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests the import of a resource as a Service Catalog provisioned product that is associated to a Service Catalog
 * product and provisioning artifact. Once imported, all supported Service Catalog governance actions are supported on the
 * provisioned
 *
 * product>
 *
 * Resource import only supports CloudFormation stack ARNs. CloudFormation StackSets and non-root nested stacks are not
 *
 * supported>
 *
 * The CloudFormation stack must have one of the following statuses to be imported: <code>CREATE_COMPLETE</code>,
 * <code>UPDATE_COMPLETE</code>, <code>UPDATE_ROLLBACK_COMPLETE</code>, <code>IMPORT_COMPLETE</code>,
 *
 * <code>IMPORT_ROLLBACK_COMPLETE</code>>
 *
 * Import of the resource requires that the CloudFormation stack template matches the associated Service Catalog product
 * provisioning artifact.
 *
 * </p
 *
 * The user or role that performs this operation must have the <code>cloudformation:GetTemplate</code> and
 * <code>cloudformation:DescribeStacks</code> IAM policy permissions.
 */
ImportAsProvisionedProductResponse * ServiceCatalogClient::importAsProvisionedProduct(const ImportAsProvisionedProductRequest &request)
{
    return qobject_cast<ImportAsProvisionedProductResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListAcceptedPortfolioSharesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all portfolios for which sharing was accepted by this
 */
ListAcceptedPortfolioSharesResponse * ServiceCatalogClient::listAcceptedPortfolioShares(const ListAcceptedPortfolioSharesRequest &request)
{
    return qobject_cast<ListAcceptedPortfolioSharesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListBudgetsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the budgets associated to the specified
 */
ListBudgetsForResourceResponse * ServiceCatalogClient::listBudgetsForResource(const ListBudgetsForResourceRequest &request)
{
    return qobject_cast<ListBudgetsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListConstraintsForPortfolioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the constraints for the specified portfolio and
 */
ListConstraintsForPortfolioResponse * ServiceCatalogClient::listConstraintsForPortfolio(const ListConstraintsForPortfolioRequest &request)
{
    return qobject_cast<ListConstraintsForPortfolioResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListLaunchPathsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the paths to the specified product. A path is how the user has access to a specified product, and is necessary
 * when provisioning a product. A path also determines the constraints put on the
 */
ListLaunchPathsResponse * ServiceCatalogClient::listLaunchPaths(const ListLaunchPathsRequest &request)
{
    return qobject_cast<ListLaunchPathsResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListOrganizationPortfolioAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the organization nodes that have access to the specified portfolio. This API can only be called by the management
 * account in the organization or by a delegated
 *
 * admin>
 *
 * If a delegated admin is de-registered, they can no longer perform this
 */
ListOrganizationPortfolioAccessResponse * ServiceCatalogClient::listOrganizationPortfolioAccess(const ListOrganizationPortfolioAccessRequest &request)
{
    return qobject_cast<ListOrganizationPortfolioAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListPortfolioAccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the account IDs that have access to the specified
 *
 * portfolio>
 *
 * A delegated admin can list the accounts that have access to the shared portfolio. Note that if a delegated admin is
 * de-registered, they can no longer perform this
 */
ListPortfolioAccessResponse * ServiceCatalogClient::listPortfolioAccess(const ListPortfolioAccessRequest &request)
{
    return qobject_cast<ListPortfolioAccessResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListPortfoliosResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all portfolios in the
 */
ListPortfoliosResponse * ServiceCatalogClient::listPortfolios(const ListPortfoliosRequest &request)
{
    return qobject_cast<ListPortfoliosResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListPortfoliosForProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all portfolios that the specified product is associated
 */
ListPortfoliosForProductResponse * ServiceCatalogClient::listPortfoliosForProduct(const ListPortfoliosForProductRequest &request)
{
    return qobject_cast<ListPortfoliosForProductResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListPrincipalsForPortfolioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all principal ARNs associated with the specified
 */
ListPrincipalsForPortfolioResponse * ServiceCatalogClient::listPrincipalsForPortfolio(const ListPrincipalsForPortfolioRequest &request)
{
    return qobject_cast<ListPrincipalsForPortfolioResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListProvisionedProductPlansResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the plans for the specified provisioned product or all plans to which the user has
 */
ListProvisionedProductPlansResponse * ServiceCatalogClient::listProvisionedProductPlans(const ListProvisionedProductPlansRequest &request)
{
    return qobject_cast<ListProvisionedProductPlansResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListProvisioningArtifactsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all provisioning artifacts (also known as versions) for the specified
 */
ListProvisioningArtifactsResponse * ServiceCatalogClient::listProvisioningArtifacts(const ListProvisioningArtifactsRequest &request)
{
    return qobject_cast<ListProvisioningArtifactsResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListProvisioningArtifactsForServiceActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all provisioning artifacts (also known as versions) for the specified self-service
 */
ListProvisioningArtifactsForServiceActionResponse * ServiceCatalogClient::listProvisioningArtifactsForServiceAction(const ListProvisioningArtifactsForServiceActionRequest &request)
{
    return qobject_cast<ListProvisioningArtifactsForServiceActionResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListRecordHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the specified requests or all performed
 */
ListRecordHistoryResponse * ServiceCatalogClient::listRecordHistory(const ListRecordHistoryRequest &request)
{
    return qobject_cast<ListRecordHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListResourcesForTagOptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resources associated with the specified
 */
ListResourcesForTagOptionResponse * ServiceCatalogClient::listResourcesForTagOption(const ListResourcesForTagOptionRequest &request)
{
    return qobject_cast<ListResourcesForTagOptionResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListServiceActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all self-service
 */
ListServiceActionsResponse * ServiceCatalogClient::listServiceActions(const ListServiceActionsRequest &request)
{
    return qobject_cast<ListServiceActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListServiceActionsForProvisioningArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of self-service actions associated with the specified Product ID and Provisioning Artifact
 */
ListServiceActionsForProvisioningArtifactResponse * ServiceCatalogClient::listServiceActionsForProvisioningArtifact(const ListServiceActionsForProvisioningArtifactRequest &request)
{
    return qobject_cast<ListServiceActionsForProvisioningArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListStackInstancesForProvisionedProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns summary information about stack instances that are associated with the specified <code>CFN_STACKSET</code> type
 * provisioned product. You can filter for stack instances that are associated with a specific AWS account name or region.
 */
ListStackInstancesForProvisionedProductResponse * ServiceCatalogClient::listStackInstancesForProvisionedProduct(const ListStackInstancesForProvisionedProductRequest &request)
{
    return qobject_cast<ListStackInstancesForProvisionedProductResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ListTagOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the specified TagOptions or all
 */
ListTagOptionsResponse * ServiceCatalogClient::listTagOptions(const ListTagOptionsRequest &request)
{
    return qobject_cast<ListTagOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ProvisionProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
ProvisionProductResponse * ServiceCatalogClient::provisionProduct(const ProvisionProductRequest &request)
{
    return qobject_cast<ProvisionProductResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * RejectPortfolioShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rejects an offer to share the specified
 */
RejectPortfolioShareResponse * ServiceCatalogClient::rejectPortfolioShare(const RejectPortfolioShareRequest &request)
{
    return qobject_cast<RejectPortfolioShareResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * ScanProvisionedProductsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the provisioned products that are available (not
 *
 * terminated)>
 *
 * To use additional filtering, see
 */
ScanProvisionedProductsResponse * ServiceCatalogClient::scanProvisionedProducts(const ScanProvisionedProductsRequest &request)
{
    return qobject_cast<ScanProvisionedProductsResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * SearchProductsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the products to which the caller has
 */
SearchProductsResponse * ServiceCatalogClient::searchProducts(const SearchProductsRequest &request)
{
    return qobject_cast<SearchProductsResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * SearchProductsAsAdminResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the products for the specified portfolio or all
 */
SearchProductsAsAdminResponse * ServiceCatalogClient::searchProductsAsAdmin(const SearchProductsAsAdminRequest &request)
{
    return qobject_cast<SearchProductsAsAdminResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * SearchProvisionedProductsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the provisioned products that meet the specified
 */
SearchProvisionedProductsResponse * ServiceCatalogClient::searchProvisionedProducts(const SearchProvisionedProductsRequest &request)
{
    return qobject_cast<SearchProvisionedProductsResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * TerminateProvisionedProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Terminates the specified provisioned
 *
 * product>
 *
 * This operation does not delete any records associated with the provisioned
 *
 * product>
 *
 * You can check the status of this request using
 */
TerminateProvisionedProductResponse * ServiceCatalogClient::terminateProvisionedProduct(const TerminateProvisionedProductRequest &request)
{
    return qobject_cast<TerminateProvisionedProductResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * UpdateConstraintResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 */
UpdateConstraintResponse * ServiceCatalogClient::updateConstraint(const UpdateConstraintRequest &request)
{
    return qobject_cast<UpdateConstraintResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * UpdatePortfolioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 *
 * portfolio>
 *
 * You cannot update a product that was shared with
 */
UpdatePortfolioResponse * ServiceCatalogClient::updatePortfolio(const UpdatePortfolioRequest &request)
{
    return qobject_cast<UpdatePortfolioResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * UpdatePortfolioShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified portfolio share. You can use this API to enable or disable TagOptions sharing for an existing
 * portfolio share.
 *
 * </p
 *
 * The portfolio share cannot be updated if the <code> CreatePortfolioShare</code> operation is <code>IN_PROGRESS</code>,
 * as the share is not available to recipient entities. In this case, you must wait for the portfolio share to be
 *
 * COMPLETED>
 *
 * You must provide the <code>accountId</code> or organization node in the input, but not
 *
 * both>
 *
 * If the portfolio is shared to both an external account and an organization node, and both shares need to be updated, you
 * must invoke <code>UpdatePortfolioShare</code> separately for each share type.
 *
 * </p
 *
 * This API cannot be used for removing the portfolio share. You must use <code>DeletePortfolioShare</code> API for that
 * action.
 */
UpdatePortfolioShareResponse * ServiceCatalogClient::updatePortfolioShare(const UpdatePortfolioShareRequest &request)
{
    return qobject_cast<UpdatePortfolioShareResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * UpdateProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 */
UpdateProductResponse * ServiceCatalogClient::updateProduct(const UpdateProductRequest &request)
{
    return qobject_cast<UpdateProductResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * UpdateProvisionedProductResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
UpdateProvisionedProductResponse * ServiceCatalogClient::updateProvisionedProduct(const UpdateProvisionedProductRequest &request)
{
    return qobject_cast<UpdateProvisionedProductResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * UpdateProvisionedProductPropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests updates to the properties of the specified provisioned
 */
UpdateProvisionedProductPropertiesResponse * ServiceCatalogClient::updateProvisionedProductProperties(const UpdateProvisionedProductPropertiesRequest &request)
{
    return qobject_cast<UpdateProvisionedProductPropertiesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * UpdateProvisioningArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified provisioning artifact (also known as a version) for the specified
 *
 * product>
 *
 * You cannot update a provisioning artifact for a product that was shared with
 */
UpdateProvisioningArtifactResponse * ServiceCatalogClient::updateProvisioningArtifact(const UpdateProvisioningArtifactRequest &request)
{
    return qobject_cast<UpdateProvisioningArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * UpdateServiceActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a self-service
 */
UpdateServiceActionResponse * ServiceCatalogClient::updateServiceAction(const UpdateServiceActionRequest &request)
{
    return qobject_cast<UpdateServiceActionResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceCatalogClient service, and returns a pointer to an
 * UpdateTagOptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 */
UpdateTagOptionResponse * ServiceCatalogClient::updateTagOption(const UpdateTagOptionRequest &request)
{
    return qobject_cast<UpdateTagOptionResponse *>(send(request));
}

/*!
 * \class QtAws::ServiceCatalog::ServiceCatalogClientPrivate
 * \brief The ServiceCatalogClientPrivate class provides private implementation for ServiceCatalogClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ServiceCatalogClientPrivate object with public implementation \a q.
 */
ServiceCatalogClientPrivate::ServiceCatalogClientPrivate(ServiceCatalogClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace ServiceCatalog
} // namespace QtAws

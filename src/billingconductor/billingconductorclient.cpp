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

#include "billingconductorclient.h"
#include "billingconductorclient_p.h"

#include "core/awssignaturev4.h"
#include "associateaccountsrequest.h"
#include "associateaccountsresponse.h"
#include "associatepricingrulesrequest.h"
#include "associatepricingrulesresponse.h"
#include "batchassociateresourcestocustomlineitemrequest.h"
#include "batchassociateresourcestocustomlineitemresponse.h"
#include "batchdisassociateresourcesfromcustomlineitemrequest.h"
#include "batchdisassociateresourcesfromcustomlineitemresponse.h"
#include "createbillinggrouprequest.h"
#include "createbillinggroupresponse.h"
#include "createcustomlineitemrequest.h"
#include "createcustomlineitemresponse.h"
#include "createpricingplanrequest.h"
#include "createpricingplanresponse.h"
#include "createpricingrulerequest.h"
#include "createpricingruleresponse.h"
#include "deletebillinggrouprequest.h"
#include "deletebillinggroupresponse.h"
#include "deletecustomlineitemrequest.h"
#include "deletecustomlineitemresponse.h"
#include "deletepricingplanrequest.h"
#include "deletepricingplanresponse.h"
#include "deletepricingrulerequest.h"
#include "deletepricingruleresponse.h"
#include "disassociateaccountsrequest.h"
#include "disassociateaccountsresponse.h"
#include "disassociatepricingrulesrequest.h"
#include "disassociatepricingrulesresponse.h"
#include "listaccountassociationsrequest.h"
#include "listaccountassociationsresponse.h"
#include "listbillinggroupcostreportsrequest.h"
#include "listbillinggroupcostreportsresponse.h"
#include "listbillinggroupsrequest.h"
#include "listbillinggroupsresponse.h"
#include "listcustomlineitemsrequest.h"
#include "listcustomlineitemsresponse.h"
#include "listpricingplansrequest.h"
#include "listpricingplansresponse.h"
#include "listpricingplansassociatedwithpricingrulerequest.h"
#include "listpricingplansassociatedwithpricingruleresponse.h"
#include "listpricingrulesrequest.h"
#include "listpricingrulesresponse.h"
#include "listpricingrulesassociatedtopricingplanrequest.h"
#include "listpricingrulesassociatedtopricingplanresponse.h"
#include "listresourcesassociatedtocustomlineitemrequest.h"
#include "listresourcesassociatedtocustomlineitemresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatebillinggrouprequest.h"
#include "updatebillinggroupresponse.h"
#include "updatecustomlineitemrequest.h"
#include "updatecustomlineitemresponse.h"
#include "updatepricingplanrequest.h"
#include "updatepricingplanresponse.h"
#include "updatepricingrulerequest.h"
#include "updatepricingruleresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::BillingConductor
 * \brief Contains classess for accessing AWSBillingConductor.
 *
 * \inmodule QtAwsBillingConductor
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace BillingConductor {

/*!
 * \class QtAws::BillingConductor::BillingConductorClient
 * \brief The BillingConductorClient class provides access to the AWSBillingConductor service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBillingConductor
 *
 *  Amazon Web Services Billing Conductor is a fully managed service that you can use to customize a <a
 *  href="https://docs.aws.amazon.com/enterprisebilling/6b7c01c5-b592-467e-9769-90052eaf359c/userguide/understanding-eb.html#eb-other-definitions">pro
 *  forma</a> version of your billing data each month, to accurately show or chargeback your end customers. Amazon Web
 *  Services Billing Conductor doesn't change the way you're billed by Amazon Web Services each month by design. Instead, it
 *  provides you with a mechanism to configure, generate, and display rates to certain customers over a given billing
 *  period. You can also analyze the difference between the rates you apply to your accounting groupings relative to your
 *  actual rates from Amazon Web Services. As a result of your Amazon Web Services Billing Conductor configuration, the
 *  payer account can also see the custom rate applied on the billing details page of the <a
 *  href="https://console.aws.amazon.com/billing">Amazon Web Services Billing console</a>, or configure a cost and usage
 *  report per billing
 * 
 *  group>
 * 
 *  This documentation shows how you can configure Amazon Web Services Billing Conductor using its API. For more information
 *  about using the <a href="https://console.aws.amazon.com/enterprisebilling/">Amazon Web Services Billing Conductor</a>
 *  user interface, see the <a
 *  href="https://docs.aws.amazon.com/enterprisebilling/6b7c01c5-b592-467e-9769-90052eaf359c/userguide/what-is-enterprisebilling.html">
 *  Amazon Web Services Enterprise Billing Console User
 */

/*!
 * \brief Constructs a BillingConductorClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
BillingConductorClient::BillingConductorClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BillingConductorClientPrivate(this), parent)
{
    Q_D(BillingConductorClient);
    d->apiVersion = QStringLiteral("2021-07-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWSBillingConductor");
    d->serviceName = QStringLiteral("billingconductor");
}

/*!
 * \overload BillingConductorClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
BillingConductorClient::BillingConductorClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BillingConductorClientPrivate(this), parent)
{
    Q_D(BillingConductorClient);
    d->apiVersion = QStringLiteral("2021-07-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWSBillingConductor");
    d->serviceName = QStringLiteral("billingconductor");
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * AssociateAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Connects an array of account IDs in a consolidated billing family to a predefined billing group. The account IDs must be
 * a part of the consolidated billing family during the current month, and not already associated with another billing
 * group. The maximum number of accounts that can be associated in one call is 30.
 */
AssociateAccountsResponse * BillingConductorClient::associateAccounts(const AssociateAccountsRequest &request)
{
    return qobject_cast<AssociateAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * AssociatePricingRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Connects an array of <code>PricingRuleArns</code> to a defined <code>PricingPlan</code>. The maximum number
 * <code>PricingRuleArn</code> that can be associated in one call is 30.
 */
AssociatePricingRulesResponse * BillingConductorClient::associatePricingRules(const AssociatePricingRulesRequest &request)
{
    return qobject_cast<AssociatePricingRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * BatchAssociateResourcesToCustomLineItemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a batch of resources to a percentage custom line item.
 */
BatchAssociateResourcesToCustomLineItemResponse * BillingConductorClient::batchAssociateResourcesToCustomLineItem(const BatchAssociateResourcesToCustomLineItemRequest &request)
{
    return qobject_cast<BatchAssociateResourcesToCustomLineItemResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * BatchDisassociateResourcesFromCustomLineItemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a batch of resources from a percentage custom line item.
 */
BatchDisassociateResourcesFromCustomLineItemResponse * BillingConductorClient::batchDisassociateResourcesFromCustomLineItem(const BatchDisassociateResourcesFromCustomLineItemRequest &request)
{
    return qobject_cast<BatchDisassociateResourcesFromCustomLineItemResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * CreateBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a billing group that resembles a consolidated billing family that Amazon Web Services charges, based off of the
 * predefined pricing plan computation.
 */
CreateBillingGroupResponse * BillingConductorClient::createBillingGroup(const CreateBillingGroupRequest &request)
{
    return qobject_cast<CreateBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * CreateCustomLineItemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a custom line item that can be used to create a one-time fixed charge that can be applied to a single billing
 * group for the current or previous billing period. The one-time fixed charge is either a fee or discount.
 */
CreateCustomLineItemResponse * BillingConductorClient::createCustomLineItem(const CreateCustomLineItemRequest &request)
{
    return qobject_cast<CreateCustomLineItemResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * CreatePricingPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a pricing plan that is used for computing Amazon Web Services charges for billing groups.
 */
CreatePricingPlanResponse * BillingConductorClient::createPricingPlan(const CreatePricingPlanRequest &request)
{
    return qobject_cast<CreatePricingPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * CreatePricingRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a pricing rule can be associated to a pricing plan, or a set of pricing plans.
 */
CreatePricingRuleResponse * BillingConductorClient::createPricingRule(const CreatePricingRuleRequest &request)
{
    return qobject_cast<CreatePricingRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * DeleteBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a billing group.
 */
DeleteBillingGroupResponse * BillingConductorClient::deleteBillingGroup(const DeleteBillingGroupRequest &request)
{
    return qobject_cast<DeleteBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * DeleteCustomLineItemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the custom line item identified by the given ARN in the current, or previous billing period.
 */
DeleteCustomLineItemResponse * BillingConductorClient::deleteCustomLineItem(const DeleteCustomLineItemRequest &request)
{
    return qobject_cast<DeleteCustomLineItemResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * DeletePricingPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a pricing plan. The pricing plan must not be associated with any billing groups to delete
 */
DeletePricingPlanResponse * BillingConductorClient::deletePricingPlan(const DeletePricingPlanRequest &request)
{
    return qobject_cast<DeletePricingPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * DeletePricingRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the pricing rule identified by the input Amazon Resource Name (ARN).
 */
DeletePricingRuleResponse * BillingConductorClient::deletePricingRule(const DeletePricingRuleRequest &request)
{
    return qobject_cast<DeletePricingRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * DisassociateAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified list of account IDs from the given billing group.
 */
DisassociateAccountsResponse * BillingConductorClient::disassociateAccounts(const DisassociateAccountsRequest &request)
{
    return qobject_cast<DisassociateAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * DisassociatePricingRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a list of pricing rules from a pricing plan.
 */
DisassociatePricingRulesResponse * BillingConductorClient::disassociatePricingRules(const DisassociatePricingRulesRequest &request)
{
    return qobject_cast<DisassociatePricingRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * ListAccountAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <i> <b>Amazon Web Services Billing Conductor is in beta release and is subject to change. Your use of Amazon Web
 * Services Billing Conductor is subject to the Beta Service Participation terms of the <a
 * href="https://aws.amazon.com/service-terms/">Amazon Web Services Service Terms</a> (Section 1.10).</b> </i>
 *
 * </p
 *
 * This is a paginated call to list linked accounts that are linked to the payer account for the specified time period. If
 * no information is provided, the current billing period is used. The response will optionally include the billing group
 * associated with the linked
 */
ListAccountAssociationsResponse * BillingConductorClient::listAccountAssociations(const ListAccountAssociationsRequest &request)
{
    return qobject_cast<ListAccountAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * ListBillingGroupCostReportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A paginated call to retrieve a summary report of actual Amazon Web Services charges and the calculated Amazon Web
 * Services charges based on the associated pricing plan of a billing
 */
ListBillingGroupCostReportsResponse * BillingConductorClient::listBillingGroupCostReports(const ListBillingGroupCostReportsRequest &request)
{
    return qobject_cast<ListBillingGroupCostReportsResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * ListBillingGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A paginated call to retrieve a list of billing groups for the given billing period. If you don't provide a billing
 * group, the current billing period is
 */
ListBillingGroupsResponse * BillingConductorClient::listBillingGroups(const ListBillingGroupsRequest &request)
{
    return qobject_cast<ListBillingGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * ListCustomLineItemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A paginated call to get a list of all custom line items (FFLIs) for the given billing period. If you don't provide a
 * billing period, the current billing period is used.
 */
ListCustomLineItemsResponse * BillingConductorClient::listCustomLineItems(const ListCustomLineItemsRequest &request)
{
    return qobject_cast<ListCustomLineItemsResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * ListPricingPlansResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A paginated call to get pricing plans for the given billing period. If you don't provide a billing period, the current
 * billing period is used.
 */
ListPricingPlansResponse * BillingConductorClient::listPricingPlans(const ListPricingPlansRequest &request)
{
    return qobject_cast<ListPricingPlansResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * ListPricingPlansAssociatedWithPricingRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list of the pricing plans associated with a pricing rule.
 */
ListPricingPlansAssociatedWithPricingRuleResponse * BillingConductorClient::listPricingPlansAssociatedWithPricingRule(const ListPricingPlansAssociatedWithPricingRuleRequest &request)
{
    return qobject_cast<ListPricingPlansAssociatedWithPricingRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * ListPricingRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a pricing rule that can be associated to a pricing plan, or set of pricing plans.
 */
ListPricingRulesResponse * BillingConductorClient::listPricingRules(const ListPricingRulesRequest &request)
{
    return qobject_cast<ListPricingRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * ListPricingRulesAssociatedToPricingPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the pricing rules associated with a pricing plan.
 */
ListPricingRulesAssociatedToPricingPlanResponse * BillingConductorClient::listPricingRulesAssociatedToPricingPlan(const ListPricingRulesAssociatedToPricingPlanRequest &request)
{
    return qobject_cast<ListPricingRulesAssociatedToPricingPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * ListResourcesAssociatedToCustomLineItemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the resources associated to a custom line item.
 */
ListResourcesAssociatedToCustomLineItemResponse * BillingConductorClient::listResourcesAssociatedToCustomLineItem(const ListResourcesAssociatedToCustomLineItemRequest &request)
{
    return qobject_cast<ListResourcesAssociatedToCustomLineItemResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list the tags for a resource.
 */
ListTagsForResourceResponse * BillingConductorClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified tags to a resource with the specified <code>resourceArn</code>. If existing tags on a resource
 * are not specified in the request parameters, they are not changed.
 */
TagResourceResponse * BillingConductorClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes specified tags from a resource.
 */
UntagResourceResponse * BillingConductorClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * UpdateBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This updates an existing billing group.
 */
UpdateBillingGroupResponse * BillingConductorClient::updateBillingGroup(const UpdateBillingGroupRequest &request)
{
    return qobject_cast<UpdateBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * UpdateCustomLineItemResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an existing custom line item in the current or previous billing period.
 */
UpdateCustomLineItemResponse * BillingConductorClient::updateCustomLineItem(const UpdateCustomLineItemRequest &request)
{
    return qobject_cast<UpdateCustomLineItemResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * UpdatePricingPlanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This updates an existing pricing plan.
 */
UpdatePricingPlanResponse * BillingConductorClient::updatePricingPlan(const UpdatePricingPlanRequest &request)
{
    return qobject_cast<UpdatePricingPlanResponse *>(send(request));
}

/*!
 * Sends \a request to the BillingConductorClient service, and returns a pointer to an
 * UpdatePricingRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing pricing rule.
 */
UpdatePricingRuleResponse * BillingConductorClient::updatePricingRule(const UpdatePricingRuleRequest &request)
{
    return qobject_cast<UpdatePricingRuleResponse *>(send(request));
}

/*!
 * \class QtAws::BillingConductor::BillingConductorClientPrivate
 * \brief The BillingConductorClientPrivate class provides private implementation for BillingConductorClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBillingConductor
 */

/*!
 * Constructs a BillingConductorClientPrivate object with public implementation \a q.
 */
BillingConductorClientPrivate::BillingConductorClientPrivate(BillingConductorClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace BillingConductor
} // namespace QtAws

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

#ifndef QTAWS_BILLINGCONDUCTORCLIENT_H
#define QTAWS_BILLINGCONDUCTORCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsbillingconductorglobal.h"

class QNetworkReply;

namespace QtAws {
namespace BillingConductor {

class BillingConductorClientPrivate;
class AssociateAccountsRequest;
class AssociateAccountsResponse;
class AssociatePricingRulesRequest;
class AssociatePricingRulesResponse;
class BatchAssociateResourcesToCustomLineItemRequest;
class BatchAssociateResourcesToCustomLineItemResponse;
class BatchDisassociateResourcesFromCustomLineItemRequest;
class BatchDisassociateResourcesFromCustomLineItemResponse;
class CreateBillingGroupRequest;
class CreateBillingGroupResponse;
class CreateCustomLineItemRequest;
class CreateCustomLineItemResponse;
class CreatePricingPlanRequest;
class CreatePricingPlanResponse;
class CreatePricingRuleRequest;
class CreatePricingRuleResponse;
class DeleteBillingGroupRequest;
class DeleteBillingGroupResponse;
class DeleteCustomLineItemRequest;
class DeleteCustomLineItemResponse;
class DeletePricingPlanRequest;
class DeletePricingPlanResponse;
class DeletePricingRuleRequest;
class DeletePricingRuleResponse;
class DisassociateAccountsRequest;
class DisassociateAccountsResponse;
class DisassociatePricingRulesRequest;
class DisassociatePricingRulesResponse;
class ListAccountAssociationsRequest;
class ListAccountAssociationsResponse;
class ListBillingGroupCostReportsRequest;
class ListBillingGroupCostReportsResponse;
class ListBillingGroupsRequest;
class ListBillingGroupsResponse;
class ListCustomLineItemsRequest;
class ListCustomLineItemsResponse;
class ListPricingPlansRequest;
class ListPricingPlansResponse;
class ListPricingPlansAssociatedWithPricingRuleRequest;
class ListPricingPlansAssociatedWithPricingRuleResponse;
class ListPricingRulesRequest;
class ListPricingRulesResponse;
class ListPricingRulesAssociatedToPricingPlanRequest;
class ListPricingRulesAssociatedToPricingPlanResponse;
class ListResourcesAssociatedToCustomLineItemRequest;
class ListResourcesAssociatedToCustomLineItemResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateBillingGroupRequest;
class UpdateBillingGroupResponse;
class UpdateCustomLineItemRequest;
class UpdateCustomLineItemResponse;
class UpdatePricingPlanRequest;
class UpdatePricingPlanResponse;
class UpdatePricingRuleRequest;
class UpdatePricingRuleResponse;

class QTAWSBILLINGCONDUCTOR_EXPORT BillingConductorClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    BillingConductorClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit BillingConductorClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateAccountsResponse * associateAccounts(const AssociateAccountsRequest &request);
    AssociatePricingRulesResponse * associatePricingRules(const AssociatePricingRulesRequest &request);
    BatchAssociateResourcesToCustomLineItemResponse * batchAssociateResourcesToCustomLineItem(const BatchAssociateResourcesToCustomLineItemRequest &request);
    BatchDisassociateResourcesFromCustomLineItemResponse * batchDisassociateResourcesFromCustomLineItem(const BatchDisassociateResourcesFromCustomLineItemRequest &request);
    CreateBillingGroupResponse * createBillingGroup(const CreateBillingGroupRequest &request);
    CreateCustomLineItemResponse * createCustomLineItem(const CreateCustomLineItemRequest &request);
    CreatePricingPlanResponse * createPricingPlan(const CreatePricingPlanRequest &request);
    CreatePricingRuleResponse * createPricingRule(const CreatePricingRuleRequest &request);
    DeleteBillingGroupResponse * deleteBillingGroup(const DeleteBillingGroupRequest &request);
    DeleteCustomLineItemResponse * deleteCustomLineItem(const DeleteCustomLineItemRequest &request);
    DeletePricingPlanResponse * deletePricingPlan(const DeletePricingPlanRequest &request);
    DeletePricingRuleResponse * deletePricingRule(const DeletePricingRuleRequest &request);
    DisassociateAccountsResponse * disassociateAccounts(const DisassociateAccountsRequest &request);
    DisassociatePricingRulesResponse * disassociatePricingRules(const DisassociatePricingRulesRequest &request);
    ListAccountAssociationsResponse * listAccountAssociations(const ListAccountAssociationsRequest &request);
    ListBillingGroupCostReportsResponse * listBillingGroupCostReports(const ListBillingGroupCostReportsRequest &request);
    ListBillingGroupsResponse * listBillingGroups(const ListBillingGroupsRequest &request);
    ListCustomLineItemsResponse * listCustomLineItems(const ListCustomLineItemsRequest &request);
    ListPricingPlansResponse * listPricingPlans(const ListPricingPlansRequest &request);
    ListPricingPlansAssociatedWithPricingRuleResponse * listPricingPlansAssociatedWithPricingRule(const ListPricingPlansAssociatedWithPricingRuleRequest &request);
    ListPricingRulesResponse * listPricingRules(const ListPricingRulesRequest &request);
    ListPricingRulesAssociatedToPricingPlanResponse * listPricingRulesAssociatedToPricingPlan(const ListPricingRulesAssociatedToPricingPlanRequest &request);
    ListResourcesAssociatedToCustomLineItemResponse * listResourcesAssociatedToCustomLineItem(const ListResourcesAssociatedToCustomLineItemRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateBillingGroupResponse * updateBillingGroup(const UpdateBillingGroupRequest &request);
    UpdateCustomLineItemResponse * updateCustomLineItem(const UpdateCustomLineItemRequest &request);
    UpdatePricingPlanResponse * updatePricingPlan(const UpdatePricingPlanRequest &request);
    UpdatePricingRuleResponse * updatePricingRule(const UpdatePricingRuleRequest &request);

private:
    Q_DECLARE_PRIVATE(BillingConductorClient)
    Q_DISABLE_COPY(BillingConductorClient)

};

} // namespace BillingConductor
} // namespace QtAws

#endif

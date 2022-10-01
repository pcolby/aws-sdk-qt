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

#include "billingconductorrequest.h"
#include "billingconductorrequest_p.h"

namespace QtAws {
namespace BillingConductor {

/*!
 * \class QtAws::BillingConductor::BillingConductorRequest
 * \brief The BillingConductorRequest class provides an interface for BillingConductor requests.
 *
 * \inmodule QtAwsBillingConductor
 */

/*!
 * \enum BillingConductorRequest::Action
 *
 * This enum describes the actions that can be performed as BillingConductor
 * requests.
 *
 * \value AssociateAccountsAction BillingConductor AssociateAccounts action.
 * \value AssociatePricingRulesAction BillingConductor AssociatePricingRules action.
 * \value BatchAssociateResourcesToCustomLineItemAction BillingConductor BatchAssociateResourcesToCustomLineItem action.
 * \value BatchDisassociateResourcesFromCustomLineItemAction BillingConductor BatchDisassociateResourcesFromCustomLineItem action.
 * \value CreateBillingGroupAction BillingConductor CreateBillingGroup action.
 * \value CreateCustomLineItemAction BillingConductor CreateCustomLineItem action.
 * \value CreatePricingPlanAction BillingConductor CreatePricingPlan action.
 * \value CreatePricingRuleAction BillingConductor CreatePricingRule action.
 * \value DeleteBillingGroupAction BillingConductor DeleteBillingGroup action.
 * \value DeleteCustomLineItemAction BillingConductor DeleteCustomLineItem action.
 * \value DeletePricingPlanAction BillingConductor DeletePricingPlan action.
 * \value DeletePricingRuleAction BillingConductor DeletePricingRule action.
 * \value DisassociateAccountsAction BillingConductor DisassociateAccounts action.
 * \value DisassociatePricingRulesAction BillingConductor DisassociatePricingRules action.
 * \value ListAccountAssociationsAction BillingConductor ListAccountAssociations action.
 * \value ListBillingGroupCostReportsAction BillingConductor ListBillingGroupCostReports action.
 * \value ListBillingGroupsAction BillingConductor ListBillingGroups action.
 * \value ListCustomLineItemsAction BillingConductor ListCustomLineItems action.
 * \value ListPricingPlansAction BillingConductor ListPricingPlans action.
 * \value ListPricingPlansAssociatedWithPricingRuleAction BillingConductor ListPricingPlansAssociatedWithPricingRule action.
 * \value ListPricingRulesAction BillingConductor ListPricingRules action.
 * \value ListPricingRulesAssociatedToPricingPlanAction BillingConductor ListPricingRulesAssociatedToPricingPlan action.
 * \value ListResourcesAssociatedToCustomLineItemAction BillingConductor ListResourcesAssociatedToCustomLineItem action.
 * \value ListTagsForResourceAction BillingConductor ListTagsForResource action.
 * \value TagResourceAction BillingConductor TagResource action.
 * \value UntagResourceAction BillingConductor UntagResource action.
 * \value UpdateBillingGroupAction BillingConductor UpdateBillingGroup action.
 * \value UpdateCustomLineItemAction BillingConductor UpdateCustomLineItem action.
 * \value UpdatePricingPlanAction BillingConductor UpdatePricingPlan action.
 * \value UpdatePricingRuleAction BillingConductor UpdatePricingRule action.
 */

/*!
 * Constructs a BillingConductorRequest object for BillingConductor \a action.
 */
BillingConductorRequest::BillingConductorRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new BillingConductorRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
BillingConductorRequest::BillingConductorRequest(const BillingConductorRequest &other)
    : QtAws::Core::AwsAbstractRequest(new BillingConductorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the BillingConductorRequest object to be equal to \a other.
 */
BillingConductorRequest& BillingConductorRequest::operator=(const BillingConductorRequest &other)
{
    Q_D(BillingConductorRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa BillingConductorRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BillingConductorRequestPrivate.
 */
BillingConductorRequest::BillingConductorRequest(BillingConductorRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the BillingConductor action to be performed by this request.
 */
BillingConductorRequest::Action BillingConductorRequest::action() const
{
    Q_D(const BillingConductorRequest);
    return d->action;
}

/*!
 * Returns the name of the BillingConductor action to be performed by this request.
 */
QString BillingConductorRequest::actionString() const
{
    return BillingConductorRequestPrivate::toString(action());
}

/*!
 * Returns the BillingConductor API version implemented by this request.
 */
QString BillingConductorRequest::apiVersion() const
{
    Q_D(const BillingConductorRequest);
    return d->apiVersion;
}

/*!
 * Sets the BillingConductor action to be performed by this request to \a action.
 */
void BillingConductorRequest::setAction(const Action action)
{
    Q_D(BillingConductorRequest);
    d->action = action;
}

/*!
 * Sets the BillingConductor API version to include in this request to \a version.
 */
void BillingConductorRequest::setApiVersion(const QString &version)
{
    Q_D(BillingConductorRequest);
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
bool BillingConductorRequest::operator==(const BillingConductorRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid BillingConductor queue name.
 *
 * @par From BillingConductor FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid BillingConductor queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool BillingConductorRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int BillingConductorRequest::clearParameter(const QString &name)
{
    Q_D(BillingConductorRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void BillingConductorRequest::clearParameters()
{
    Q_D(BillingConductorRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant BillingConductorRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const BillingConductorRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &BillingConductorRequest::parameters() const
{
    Q_D(const BillingConductorRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void BillingConductorRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(BillingConductorRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void BillingConductorRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(BillingConductorRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the BillingConductor request using the given
 * \a endpoint.
 *
 * This BillingConductor implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest BillingConductorRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const BillingConductorRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::BillingConductor::BillingConductorRequestPrivate
 * \brief The BillingConductorRequestPrivate class provides private implementation for BillingConductorRequest.
 * \internal
 *
 * \inmodule QtAwsBillingConductor
 */

/*!
 * Constructs a BillingConductorRequestPrivate object for BillingConductor \a action,
 * with public implementation \a q.
 */
BillingConductorRequestPrivate::BillingConductorRequestPrivate(const BillingConductorRequest::Action action, BillingConductorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-07-30"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the BillingConductorRequest class's copy constructor.
 */
BillingConductorRequestPrivate::BillingConductorRequestPrivate(const BillingConductorRequestPrivate &other,
                                     BillingConductorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts BillingConductorRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the BillingConductor service's Action
 * query parameters.
 */
QString BillingConductorRequestPrivate::toString(const BillingConductorRequest::Action &action)
{
    #define ActionToString(action) \
        case BillingConductorRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateAccounts);
        ActionToString(AssociatePricingRules);
        ActionToString(BatchAssociateResourcesToCustomLineItem);
        ActionToString(BatchDisassociateResourcesFromCustomLineItem);
        ActionToString(CreateBillingGroup);
        ActionToString(CreateCustomLineItem);
        ActionToString(CreatePricingPlan);
        ActionToString(CreatePricingRule);
        ActionToString(DeleteBillingGroup);
        ActionToString(DeleteCustomLineItem);
        ActionToString(DeletePricingPlan);
        ActionToString(DeletePricingRule);
        ActionToString(DisassociateAccounts);
        ActionToString(DisassociatePricingRules);
        ActionToString(ListAccountAssociations);
        ActionToString(ListBillingGroupCostReports);
        ActionToString(ListBillingGroups);
        ActionToString(ListCustomLineItems);
        ActionToString(ListPricingPlans);
        ActionToString(ListPricingPlansAssociatedWithPricingRule);
        ActionToString(ListPricingRules);
        ActionToString(ListPricingRulesAssociatedToPricingPlan);
        ActionToString(ListResourcesAssociatedToCustomLineItem);
        ActionToString(ListTagsForResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateBillingGroup);
        ActionToString(UpdateCustomLineItem);
        ActionToString(UpdatePricingPlan);
        ActionToString(UpdatePricingRule);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace BillingConductor
} // namespace QtAws

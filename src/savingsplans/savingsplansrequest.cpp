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

#include "savingsplansrequest.h"
#include "savingsplansrequest_p.h"

namespace QtAws {
namespace SavingsPlans {

/*!
 * \class QtAws::SavingsPlans::SavingsPlansRequest
 * \brief The SavingsPlansRequest class provides an interface for SavingsPlans requests.
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * \enum SavingsPlansRequest::Action
 *
 * This enum describes the actions that can be performed as SavingsPlans
 * requests.
 *
 * \value CreateSavingsPlanAction SavingsPlans CreateSavingsPlan action.
 * \value DeleteQueuedSavingsPlanAction SavingsPlans DeleteQueuedSavingsPlan action.
 * \value DescribeSavingsPlanRatesAction SavingsPlans DescribeSavingsPlanRates action.
 * \value DescribeSavingsPlansAction SavingsPlans DescribeSavingsPlans action.
 * \value DescribeSavingsPlansOfferingRatesAction SavingsPlans DescribeSavingsPlansOfferingRates action.
 * \value DescribeSavingsPlansOfferingsAction SavingsPlans DescribeSavingsPlansOfferings action.
 * \value ListTagsForResourceAction SavingsPlans ListTagsForResource action.
 * \value TagResourceAction SavingsPlans TagResource action.
 * \value UntagResourceAction SavingsPlans UntagResource action.
 */

/*!
 * Constructs a SavingsPlansRequest object for SavingsPlans \a action.
 */
SavingsPlansRequest::SavingsPlansRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SavingsPlansRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SavingsPlansRequest::SavingsPlansRequest(const SavingsPlansRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SavingsPlansRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SavingsPlansRequest object to be equal to \a other.
 */
SavingsPlansRequest& SavingsPlansRequest::operator=(const SavingsPlansRequest &other)
{
    Q_D(SavingsPlansRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SavingsPlansRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SavingsPlansRequestPrivate.
 */
SavingsPlansRequest::SavingsPlansRequest(SavingsPlansRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SavingsPlans action to be performed by this request.
 */
SavingsPlansRequest::Action SavingsPlansRequest::action() const
{
    Q_D(const SavingsPlansRequest);
    return d->action;
}

/*!
 * Returns the name of the SavingsPlans action to be performed by this request.
 */
QString SavingsPlansRequest::actionString() const
{
    return SavingsPlansRequestPrivate::toString(action());
}

/*!
 * Returns the SavingsPlans API version implemented by this request.
 */
QString SavingsPlansRequest::apiVersion() const
{
    Q_D(const SavingsPlansRequest);
    return d->apiVersion;
}

/*!
 * Sets the SavingsPlans action to be performed by this request to \a action.
 */
void SavingsPlansRequest::setAction(const Action action)
{
    Q_D(SavingsPlansRequest);
    d->action = action;
}

/*!
 * Sets the SavingsPlans API version to include in this request to \a version.
 */
void SavingsPlansRequest::setApiVersion(const QString &version)
{
    Q_D(SavingsPlansRequest);
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
bool SavingsPlansRequest::operator==(const SavingsPlansRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SavingsPlans queue name.
 *
 * @par From SavingsPlans FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SavingsPlans queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SavingsPlansRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SavingsPlansRequest::clearParameter(const QString &name)
{
    Q_D(SavingsPlansRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SavingsPlansRequest::clearParameters()
{
    Q_D(SavingsPlansRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SavingsPlansRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SavingsPlansRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SavingsPlansRequest::parameters() const
{
    Q_D(const SavingsPlansRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SavingsPlansRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SavingsPlansRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SavingsPlansRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SavingsPlansRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SavingsPlans request using the given
 * \a endpoint.
 *
 * This SavingsPlans implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SavingsPlansRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SavingsPlansRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SavingsPlans::SavingsPlansRequestPrivate
 * \brief The SavingsPlansRequestPrivate class provides private implementation for SavingsPlansRequest.
 * \internal
 *
 * \inmodule QtAwsSavingsPlans
 */

/*!
 * Constructs a SavingsPlansRequestPrivate object for SavingsPlans \a action,
 * with public implementation \a q.
 */
SavingsPlansRequestPrivate::SavingsPlansRequestPrivate(const SavingsPlansRequest::Action action, SavingsPlansRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SavingsPlansRequest class's copy constructor.
 */
SavingsPlansRequestPrivate::SavingsPlansRequestPrivate(const SavingsPlansRequestPrivate &other,
                                     SavingsPlansRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SavingsPlansRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SavingsPlans service's Action
 * query parameters.
 */
QString SavingsPlansRequestPrivate::toString(const SavingsPlansRequest::Action &action)
{
    #define ActionToString(action) \
        case SavingsPlansRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateSavingsPlan);
        ActionToString(DeleteQueuedSavingsPlan);
        ActionToString(DescribeSavingsPlanRates);
        ActionToString(DescribeSavingsPlans);
        ActionToString(DescribeSavingsPlansOfferingRates);
        ActionToString(DescribeSavingsPlansOfferings);
        ActionToString(ListTagsForResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SavingsPlans
} // namespace QtAws

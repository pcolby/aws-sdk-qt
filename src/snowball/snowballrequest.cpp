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

#include "snowballrequest.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::SnowballRequest
 * \brief The SnowballRequest class provides an interface for Snowball requests.
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * \enum SnowballRequest::Action
 *
 * This enum describes the actions that can be performed as Snowball
 * requests.
 *
 * \value CancelClusterAction Snowball CancelCluster action.
 * \value CancelJobAction Snowball CancelJob action.
 * \value CreateAddressAction Snowball CreateAddress action.
 * \value CreateClusterAction Snowball CreateCluster action.
 * \value CreateJobAction Snowball CreateJob action.
 * \value CreateLongTermPricingAction Snowball CreateLongTermPricing action.
 * \value CreateReturnShippingLabelAction Snowball CreateReturnShippingLabel action.
 * \value DescribeAddressAction Snowball DescribeAddress action.
 * \value DescribeAddressesAction Snowball DescribeAddresses action.
 * \value DescribeClusterAction Snowball DescribeCluster action.
 * \value DescribeJobAction Snowball DescribeJob action.
 * \value DescribeReturnShippingLabelAction Snowball DescribeReturnShippingLabel action.
 * \value GetJobManifestAction Snowball GetJobManifest action.
 * \value GetJobUnlockCodeAction Snowball GetJobUnlockCode action.
 * \value GetSnowballUsageAction Snowball GetSnowballUsage action.
 * \value GetSoftwareUpdatesAction Snowball GetSoftwareUpdates action.
 * \value ListClusterJobsAction Snowball ListClusterJobs action.
 * \value ListClustersAction Snowball ListClusters action.
 * \value ListCompatibleImagesAction Snowball ListCompatibleImages action.
 * \value ListJobsAction Snowball ListJobs action.
 * \value ListLongTermPricingAction Snowball ListLongTermPricing action.
 * \value UpdateClusterAction Snowball UpdateCluster action.
 * \value UpdateJobAction Snowball UpdateJob action.
 * \value UpdateJobShipmentStateAction Snowball UpdateJobShipmentState action.
 * \value UpdateLongTermPricingAction Snowball UpdateLongTermPricing action.
 */

/*!
 * Constructs a SnowballRequest object for Snowball \a action.
 */
SnowballRequest::SnowballRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SnowballRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SnowballRequest::SnowballRequest(const SnowballRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SnowballRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SnowballRequest object to be equal to \a other.
 */
SnowballRequest& SnowballRequest::operator=(const SnowballRequest &other)
{
    Q_D(SnowballRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SnowballRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SnowballRequestPrivate.
 */
SnowballRequest::SnowballRequest(SnowballRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Snowball action to be performed by this request.
 */
SnowballRequest::Action SnowballRequest::action() const
{
    Q_D(const SnowballRequest);
    return d->action;
}

/*!
 * Returns the name of the Snowball action to be performed by this request.
 */
QString SnowballRequest::actionString() const
{
    return SnowballRequestPrivate::toString(action());
}

/*!
 * Returns the Snowball API version implemented by this request.
 */
QString SnowballRequest::apiVersion() const
{
    Q_D(const SnowballRequest);
    return d->apiVersion;
}

/*!
 * Sets the Snowball action to be performed by this request to \a action.
 */
void SnowballRequest::setAction(const Action action)
{
    Q_D(SnowballRequest);
    d->action = action;
}

/*!
 * Sets the Snowball API version to include in this request to \a version.
 */
void SnowballRequest::setApiVersion(const QString &version)
{
    Q_D(SnowballRequest);
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
bool SnowballRequest::operator==(const SnowballRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Snowball queue name.
 *
 * @par From Snowball FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Snowball queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SnowballRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SnowballRequest::clearParameter(const QString &name)
{
    Q_D(SnowballRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SnowballRequest::clearParameters()
{
    Q_D(SnowballRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SnowballRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SnowballRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SnowballRequest::parameters() const
{
    Q_D(const SnowballRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SnowballRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SnowballRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SnowballRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SnowballRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Snowball request using the given
 * \a endpoint.
 *
 * This Snowball implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SnowballRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SnowballRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Snowball::SnowballRequestPrivate
 * \brief The SnowballRequestPrivate class provides private implementation for SnowballRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a SnowballRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
SnowballRequestPrivate::SnowballRequestPrivate(const SnowballRequest::Action action, SnowballRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2016-06-30"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SnowballRequest class's copy constructor.
 */
SnowballRequestPrivate::SnowballRequestPrivate(const SnowballRequestPrivate &other,
                                     SnowballRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SnowballRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Snowball service's Action
 * query parameters.
 */
QString SnowballRequestPrivate::toString(const SnowballRequest::Action &action)
{
    #define ActionToString(action) \
        case SnowballRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelCluster);
        ActionToString(CancelJob);
        ActionToString(CreateAddress);
        ActionToString(CreateCluster);
        ActionToString(CreateJob);
        ActionToString(CreateLongTermPricing);
        ActionToString(CreateReturnShippingLabel);
        ActionToString(DescribeAddress);
        ActionToString(DescribeAddresses);
        ActionToString(DescribeCluster);
        ActionToString(DescribeJob);
        ActionToString(DescribeReturnShippingLabel);
        ActionToString(GetJobManifest);
        ActionToString(GetJobUnlockCode);
        ActionToString(GetSnowballUsage);
        ActionToString(GetSoftwareUpdates);
        ActionToString(ListClusterJobs);
        ActionToString(ListClusters);
        ActionToString(ListCompatibleImages);
        ActionToString(ListJobs);
        ActionToString(ListLongTermPricing);
        ActionToString(UpdateCluster);
        ActionToString(UpdateJob);
        ActionToString(UpdateJobShipmentState);
        ActionToString(UpdateLongTermPricing);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Snowball
} // namespace QtAws

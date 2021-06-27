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

#include "emrcontainersrequest.h"
#include "emrcontainersrequest_p.h"

namespace QtAws {
namespace EMRContainers {

/*!
 * \class QtAws::EMRContainers::EMRContainersRequest
 * \brief The EMRContainersRequest class provides an interface for EMRContainers requests.
 *
 * \inmodule QtAwsEMRContainers
 */

/*!
 * \enum EMRContainersRequest::Action
 *
 * This enum describes the actions that can be performed as EMRContainers
 * requests.
 *
 * \value CancelJobRunAction EMRContainers CancelJobRun action.
 * \value CreateManagedEndpointAction EMRContainers CreateManagedEndpoint action.
 * \value CreateVirtualClusterAction EMRContainers CreateVirtualCluster action.
 * \value DeleteManagedEndpointAction EMRContainers DeleteManagedEndpoint action.
 * \value DeleteVirtualClusterAction EMRContainers DeleteVirtualCluster action.
 * \value DescribeJobRunAction EMRContainers DescribeJobRun action.
 * \value DescribeManagedEndpointAction EMRContainers DescribeManagedEndpoint action.
 * \value DescribeVirtualClusterAction EMRContainers DescribeVirtualCluster action.
 * \value ListJobRunsAction EMRContainers ListJobRuns action.
 * \value ListManagedEndpointsAction EMRContainers ListManagedEndpoints action.
 * \value ListTagsForResourceAction EMRContainers ListTagsForResource action.
 * \value ListVirtualClustersAction EMRContainers ListVirtualClusters action.
 * \value StartJobRunAction EMRContainers StartJobRun action.
 * \value TagResourceAction EMRContainers TagResource action.
 * \value UntagResourceAction EMRContainers UntagResource action.
 */

/*!
 * Constructs a EMRContainersRequest object for EMRContainers \a action.
 */
EMRContainersRequest::EMRContainersRequest(const Action action)
    : d_ptr(new EMRContainersRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EMRContainersRequest::EMRContainersRequest(const EMRContainersRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new EMRContainersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EMRContainersRequest object to be equal to \a other.
 */
EMRContainersRequest& EMRContainersRequest::operator=(const EMRContainersRequest &other)
{
    Q_D(EMRContainersRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EMRContainersRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EMRContainersRequestPrivate.
 */
EMRContainersRequest::EMRContainersRequest(EMRContainersRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the EMRContainers action to be performed by this request.
 */
EMRContainersRequest::Action EMRContainersRequest::action() const
{
    Q_D(const EMRContainersRequest);
    return d->action;
}

/*!
 * Returns the name of the EMRContainers action to be performed by this request.
 */
QString EMRContainersRequest::actionString() const
{
    return EMRContainersRequestPrivate::toString(action());
}

/*!
 * Returns the EMRContainers API version implemented by this request.
 */
QString EMRContainersRequest::apiVersion() const
{
    Q_D(const EMRContainersRequest);
    return d->apiVersion;
}

/*!
 * Sets the EMRContainers action to be performed by this request to \a action.
 */
void EMRContainersRequest::setAction(const Action action)
{
    Q_D(EMRContainersRequest);
    d->action = action;
}

/*!
 * Sets the EMRContainers API version to include in this request to \a version.
 */
void EMRContainersRequest::setApiVersion(const QString &version)
{
    Q_D(EMRContainersRequest);
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
bool EMRContainersRequest::operator==(const EMRContainersRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid EMRContainers queue name.
 *
 * @par From EMRContainers FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid EMRContainers queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EMRContainersRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EMRContainersRequest::clearParameter(const QString &name)
{
    Q_D(EMRContainersRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EMRContainersRequest::clearParameters()
{
    Q_D(EMRContainersRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EMRContainersRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EMRContainersRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EMRContainersRequest::parameters() const
{
    Q_D(const EMRContainersRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EMRContainersRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EMRContainersRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EMRContainersRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EMRContainersRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the EMRContainers request using the given
 * \a endpoint.
 *
 * This EMRContainers implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EMRContainersRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EMRContainersRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::EMRContainers::EMRContainersRequestPrivate
 * \brief The EMRContainersRequestPrivate class provides private implementation for EMRContainersRequest.
 * \internal
 *
 * \inmodule QtAwsEMRContainers
 */

/*!
 * Constructs a EMRContainersRequestPrivate object for EMRContainers \a action,
 * with public implementation \a q.
 */
EMRContainersRequestPrivate::EMRContainersRequestPrivate(const EMRContainersRequest::Action action, EMRContainersRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EMRContainersRequest class's copy constructor.
 */
EMRContainersRequestPrivate::EMRContainersRequestPrivate(const EMRContainersRequestPrivate &other,
                                     EMRContainersRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EMRContainersRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the EMRContainers service's Action
 * query parameters.
 */
QString EMRContainersRequestPrivate::toString(const EMRContainersRequest::Action &action)
{
    #define ActionToString(action) \
        case EMRContainersRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace EMRContainers
} // namespace QtAws

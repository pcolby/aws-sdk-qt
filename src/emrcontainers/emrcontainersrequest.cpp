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
namespace Emrcontainers {

/*!
 * \class QtAws::Emrcontainers::EmrcontainersRequest
 * \brief The EmrcontainersRequest class provides an interface for Emrcontainers requests.
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * \enum EmrcontainersRequest::Action
 *
 * This enum describes the actions that can be performed as Emrcontainers
 * requests.
 *
 * \value CancelJobRunAction Emrcontainers CancelJobRun action.
 * \value CreateManagedEndpointAction Emrcontainers CreateManagedEndpoint action.
 * \value CreateVirtualClusterAction Emrcontainers CreateVirtualCluster action.
 * \value DeleteManagedEndpointAction Emrcontainers DeleteManagedEndpoint action.
 * \value DeleteVirtualClusterAction Emrcontainers DeleteVirtualCluster action.
 * \value DescribeJobRunAction Emrcontainers DescribeJobRun action.
 * \value DescribeManagedEndpointAction Emrcontainers DescribeManagedEndpoint action.
 * \value DescribeVirtualClusterAction Emrcontainers DescribeVirtualCluster action.
 * \value ListJobRunsAction Emrcontainers ListJobRuns action.
 * \value ListManagedEndpointsAction Emrcontainers ListManagedEndpoints action.
 * \value ListTagsForResourceAction Emrcontainers ListTagsForResource action.
 * \value ListVirtualClustersAction Emrcontainers ListVirtualClusters action.
 * \value StartJobRunAction Emrcontainers StartJobRun action.
 * \value TagResourceAction Emrcontainers TagResource action.
 * \value UntagResourceAction Emrcontainers UntagResource action.
 */

/*!
 * Constructs a EmrcontainersRequest object for Emrcontainers \a action.
 */
EmrcontainersRequest::EmrcontainersRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EmrcontainersRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EmrcontainersRequest::EmrcontainersRequest(const EmrcontainersRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EmrcontainersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EmrcontainersRequest object to be equal to \a other.
 */
EmrcontainersRequest& EmrcontainersRequest::operator=(const EmrcontainersRequest &other)
{
    Q_D(EmrcontainersRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EmrcontainersRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EmrcontainersRequestPrivate.
 */
EmrcontainersRequest::EmrcontainersRequest(EmrcontainersRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Emrcontainers action to be performed by this request.
 */
EmrcontainersRequest::Action EmrcontainersRequest::action() const
{
    Q_D(const EmrcontainersRequest);
    return d->action;
}

/*!
 * Returns the name of the Emrcontainers action to be performed by this request.
 */
QString EmrcontainersRequest::actionString() const
{
    return EmrcontainersRequestPrivate::toString(action());
}

/*!
 * Returns the Emrcontainers API version implemented by this request.
 */
QString EmrcontainersRequest::apiVersion() const
{
    Q_D(const EmrcontainersRequest);
    return d->apiVersion;
}

/*!
 * Sets the Emrcontainers action to be performed by this request to \a action.
 */
void EmrcontainersRequest::setAction(const Action action)
{
    Q_D(EmrcontainersRequest);
    d->action = action;
}

/*!
 * Sets the Emrcontainers API version to include in this request to \a version.
 */
void EmrcontainersRequest::setApiVersion(const QString &version)
{
    Q_D(EmrcontainersRequest);
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
bool EmrcontainersRequest::operator==(const EmrcontainersRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Emrcontainers queue name.
 *
 * @par From Emrcontainers FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Emrcontainers queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EmrcontainersRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EmrcontainersRequest::clearParameter(const QString &name)
{
    Q_D(EmrcontainersRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EmrcontainersRequest::clearParameters()
{
    Q_D(EmrcontainersRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EmrcontainersRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EmrcontainersRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EmrcontainersRequest::parameters() const
{
    Q_D(const EmrcontainersRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EmrcontainersRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EmrcontainersRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EmrcontainersRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EmrcontainersRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Emrcontainers request using the given
 * \a endpoint.
 *
 * This Emrcontainers implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EmrcontainersRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EmrcontainersRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Emrcontainers::EmrcontainersRequestPrivate
 * \brief The EmrcontainersRequestPrivate class provides private implementation for EmrcontainersRequest.
 * \internal
 *
 * \inmodule QtAwsEmrcontainers
 */

/*!
 * Constructs a EmrcontainersRequestPrivate object for Emrcontainers \a action,
 * with public implementation \a q.
 */
EmrcontainersRequestPrivate::EmrcontainersRequestPrivate(const EmrcontainersRequest::Action action, EmrcontainersRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-10-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EmrcontainersRequest class's copy constructor.
 */
EmrcontainersRequestPrivate::EmrcontainersRequestPrivate(const EmrcontainersRequestPrivate &other,
                                     EmrcontainersRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EmrcontainersRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Emrcontainers service's Action
 * query parameters.
 */
QString EmrcontainersRequestPrivate::toString(const EmrcontainersRequest::Action &action)
{
    #define ActionToString(action) \
        case EmrcontainersRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelJobRun);
        ActionToString(CreateManagedEndpoint);
        ActionToString(CreateVirtualCluster);
        ActionToString(DeleteManagedEndpoint);
        ActionToString(DeleteVirtualCluster);
        ActionToString(DescribeJobRun);
        ActionToString(DescribeManagedEndpoint);
        ActionToString(DescribeVirtualCluster);
        ActionToString(ListJobRuns);
        ActionToString(ListManagedEndpoints);
        ActionToString(ListTagsForResource);
        ActionToString(ListVirtualClusters);
        ActionToString(StartJobRun);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Emrcontainers
} // namespace QtAws

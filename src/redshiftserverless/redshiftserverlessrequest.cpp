// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "redshiftserverlessrequest.h"
#include "redshiftserverlessrequest_p.h"

namespace QtAws {
namespace RedshiftServerless {

/*!
 * \class QtAws::RedshiftServerless::RedshiftServerlessRequest
 * \brief The RedshiftServerlessRequest class provides an interface for RedshiftServerless requests.
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * \enum RedshiftServerlessRequest::Action
 *
 * This enum describes the actions that can be performed as RedshiftServerless
 * requests.
 *
 * \value ConvertRecoveryPointToSnapshotAction RedshiftServerless ConvertRecoveryPointToSnapshot action.
 * \value CreateEndpointAccessAction RedshiftServerless CreateEndpointAccess action.
 * \value CreateNamespaceAction RedshiftServerless CreateNamespace action.
 * \value CreateSnapshotAction RedshiftServerless CreateSnapshot action.
 * \value CreateUsageLimitAction RedshiftServerless CreateUsageLimit action.
 * \value CreateWorkgroupAction RedshiftServerless CreateWorkgroup action.
 * \value DeleteEndpointAccessAction RedshiftServerless DeleteEndpointAccess action.
 * \value DeleteNamespaceAction RedshiftServerless DeleteNamespace action.
 * \value DeleteResourcePolicyAction RedshiftServerless DeleteResourcePolicy action.
 * \value DeleteSnapshotAction RedshiftServerless DeleteSnapshot action.
 * \value DeleteUsageLimitAction RedshiftServerless DeleteUsageLimit action.
 * \value DeleteWorkgroupAction RedshiftServerless DeleteWorkgroup action.
 * \value GetCredentialsAction RedshiftServerless GetCredentials action.
 * \value GetEndpointAccessAction RedshiftServerless GetEndpointAccess action.
 * \value GetNamespaceAction RedshiftServerless GetNamespace action.
 * \value GetRecoveryPointAction RedshiftServerless GetRecoveryPoint action.
 * \value GetResourcePolicyAction RedshiftServerless GetResourcePolicy action.
 * \value GetSnapshotAction RedshiftServerless GetSnapshot action.
 * \value GetUsageLimitAction RedshiftServerless GetUsageLimit action.
 * \value GetWorkgroupAction RedshiftServerless GetWorkgroup action.
 * \value ListEndpointAccessAction RedshiftServerless ListEndpointAccess action.
 * \value ListNamespacesAction RedshiftServerless ListNamespaces action.
 * \value ListRecoveryPointsAction RedshiftServerless ListRecoveryPoints action.
 * \value ListSnapshotsAction RedshiftServerless ListSnapshots action.
 * \value ListTagsForResourceAction RedshiftServerless ListTagsForResource action.
 * \value ListUsageLimitsAction RedshiftServerless ListUsageLimits action.
 * \value ListWorkgroupsAction RedshiftServerless ListWorkgroups action.
 * \value PutResourcePolicyAction RedshiftServerless PutResourcePolicy action.
 * \value RestoreFromRecoveryPointAction RedshiftServerless RestoreFromRecoveryPoint action.
 * \value RestoreFromSnapshotAction RedshiftServerless RestoreFromSnapshot action.
 * \value TagResourceAction RedshiftServerless TagResource action.
 * \value UntagResourceAction RedshiftServerless UntagResource action.
 * \value UpdateEndpointAccessAction RedshiftServerless UpdateEndpointAccess action.
 * \value UpdateNamespaceAction RedshiftServerless UpdateNamespace action.
 * \value UpdateSnapshotAction RedshiftServerless UpdateSnapshot action.
 * \value UpdateUsageLimitAction RedshiftServerless UpdateUsageLimit action.
 * \value UpdateWorkgroupAction RedshiftServerless UpdateWorkgroup action.
 */

/*!
 * Constructs a RedshiftServerlessRequest object for RedshiftServerless \a action.
 */
RedshiftServerlessRequest::RedshiftServerlessRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RedshiftServerlessRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RedshiftServerlessRequest::RedshiftServerlessRequest(const RedshiftServerlessRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RedshiftServerlessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RedshiftServerlessRequest object to be equal to \a other.
 */
RedshiftServerlessRequest& RedshiftServerlessRequest::operator=(const RedshiftServerlessRequest &other)
{
    Q_D(RedshiftServerlessRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RedshiftServerlessRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RedshiftServerlessRequestPrivate.
 */
RedshiftServerlessRequest::RedshiftServerlessRequest(RedshiftServerlessRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the RedshiftServerless action to be performed by this request.
 */
RedshiftServerlessRequest::Action RedshiftServerlessRequest::action() const
{
    Q_D(const RedshiftServerlessRequest);
    return d->action;
}

/*!
 * Returns the name of the RedshiftServerless action to be performed by this request.
 */
QString RedshiftServerlessRequest::actionString() const
{
    return RedshiftServerlessRequestPrivate::toString(action());
}

/*!
 * Returns the RedshiftServerless API version implemented by this request.
 */
QString RedshiftServerlessRequest::apiVersion() const
{
    Q_D(const RedshiftServerlessRequest);
    return d->apiVersion;
}

/*!
 * Sets the RedshiftServerless action to be performed by this request to \a action.
 */
void RedshiftServerlessRequest::setAction(const Action action)
{
    Q_D(RedshiftServerlessRequest);
    d->action = action;
}

/*!
 * Sets the RedshiftServerless API version to include in this request to \a version.
 */
void RedshiftServerlessRequest::setApiVersion(const QString &version)
{
    Q_D(RedshiftServerlessRequest);
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
bool RedshiftServerlessRequest::operator==(const RedshiftServerlessRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid RedshiftServerless queue name.
 *
 * @par From RedshiftServerless FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid RedshiftServerless queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RedshiftServerlessRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RedshiftServerlessRequest::clearParameter(const QString &name)
{
    Q_D(RedshiftServerlessRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RedshiftServerlessRequest::clearParameters()
{
    Q_D(RedshiftServerlessRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RedshiftServerlessRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RedshiftServerlessRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RedshiftServerlessRequest::parameters() const
{
    Q_D(const RedshiftServerlessRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RedshiftServerlessRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RedshiftServerlessRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RedshiftServerlessRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RedshiftServerlessRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the RedshiftServerless request using the given
 * \a endpoint.
 *
 * This RedshiftServerless implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RedshiftServerlessRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RedshiftServerlessRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::RedshiftServerless::RedshiftServerlessRequestPrivate
 * \brief The RedshiftServerlessRequestPrivate class provides private implementation for RedshiftServerlessRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftServerless
 */

/*!
 * Constructs a RedshiftServerlessRequestPrivate object for RedshiftServerless \a action,
 * with public implementation \a q.
 */
RedshiftServerlessRequestPrivate::RedshiftServerlessRequestPrivate(const RedshiftServerlessRequest::Action action, RedshiftServerlessRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-04-21"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RedshiftServerlessRequest class's copy constructor.
 */
RedshiftServerlessRequestPrivate::RedshiftServerlessRequestPrivate(const RedshiftServerlessRequestPrivate &other,
                                     RedshiftServerlessRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RedshiftServerlessRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the RedshiftServerless service's Action
 * query parameters.
 */
QString RedshiftServerlessRequestPrivate::toString(const RedshiftServerlessRequest::Action &action)
{
    #define ActionToString(action) \
        case RedshiftServerlessRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(ConvertRecoveryPointToSnapshot);
        ActionToString(CreateEndpointAccess);
        ActionToString(CreateNamespace);
        ActionToString(CreateSnapshot);
        ActionToString(CreateUsageLimit);
        ActionToString(CreateWorkgroup);
        ActionToString(DeleteEndpointAccess);
        ActionToString(DeleteNamespace);
        ActionToString(DeleteResourcePolicy);
        ActionToString(DeleteSnapshot);
        ActionToString(DeleteUsageLimit);
        ActionToString(DeleteWorkgroup);
        ActionToString(GetCredentials);
        ActionToString(GetEndpointAccess);
        ActionToString(GetNamespace);
        ActionToString(GetRecoveryPoint);
        ActionToString(GetResourcePolicy);
        ActionToString(GetSnapshot);
        ActionToString(GetUsageLimit);
        ActionToString(GetWorkgroup);
        ActionToString(ListEndpointAccess);
        ActionToString(ListNamespaces);
        ActionToString(ListRecoveryPoints);
        ActionToString(ListSnapshots);
        ActionToString(ListTagsForResource);
        ActionToString(ListUsageLimits);
        ActionToString(ListWorkgroups);
        ActionToString(PutResourcePolicy);
        ActionToString(RestoreFromRecoveryPoint);
        ActionToString(RestoreFromSnapshot);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateEndpointAccess);
        ActionToString(UpdateNamespace);
        ActionToString(UpdateSnapshot);
        ActionToString(UpdateUsageLimit);
        ActionToString(UpdateWorkgroup);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace RedshiftServerless
} // namespace QtAws

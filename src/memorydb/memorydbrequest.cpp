// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "memorydbrequest.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::MemoryDbRequest
 * \brief The MemoryDbRequest class provides an interface for MemoryDb requests.
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * \enum MemoryDbRequest::Action
 *
 * This enum describes the actions that can be performed as MemoryDb
 * requests.
 *
 * \value BatchUpdateClusterAction MemoryDb BatchUpdateCluster action.
 * \value CopySnapshotAction MemoryDb CopySnapshot action.
 * \value CreateACLAction MemoryDb CreateACL action.
 * \value CreateClusterAction MemoryDb CreateCluster action.
 * \value CreateParameterGroupAction MemoryDb CreateParameterGroup action.
 * \value CreateSnapshotAction MemoryDb CreateSnapshot action.
 * \value CreateSubnetGroupAction MemoryDb CreateSubnetGroup action.
 * \value CreateUserAction MemoryDb CreateUser action.
 * \value DeleteACLAction MemoryDb DeleteACL action.
 * \value DeleteClusterAction MemoryDb DeleteCluster action.
 * \value DeleteParameterGroupAction MemoryDb DeleteParameterGroup action.
 * \value DeleteSnapshotAction MemoryDb DeleteSnapshot action.
 * \value DeleteSubnetGroupAction MemoryDb DeleteSubnetGroup action.
 * \value DeleteUserAction MemoryDb DeleteUser action.
 * \value DescribeACLsAction MemoryDb DescribeACLs action.
 * \value DescribeClustersAction MemoryDb DescribeClusters action.
 * \value DescribeEngineVersionsAction MemoryDb DescribeEngineVersions action.
 * \value DescribeEventsAction MemoryDb DescribeEvents action.
 * \value DescribeParameterGroupsAction MemoryDb DescribeParameterGroups action.
 * \value DescribeParametersAction MemoryDb DescribeParameters action.
 * \value DescribeServiceUpdatesAction MemoryDb DescribeServiceUpdates action.
 * \value DescribeSnapshotsAction MemoryDb DescribeSnapshots action.
 * \value DescribeSubnetGroupsAction MemoryDb DescribeSubnetGroups action.
 * \value DescribeUsersAction MemoryDb DescribeUsers action.
 * \value FailoverShardAction MemoryDb FailoverShard action.
 * \value ListAllowedNodeTypeUpdatesAction MemoryDb ListAllowedNodeTypeUpdates action.
 * \value ListTagsAction MemoryDb ListTags action.
 * \value ResetParameterGroupAction MemoryDb ResetParameterGroup action.
 * \value TagResourceAction MemoryDb TagResource action.
 * \value UntagResourceAction MemoryDb UntagResource action.
 * \value UpdateACLAction MemoryDb UpdateACL action.
 * \value UpdateClusterAction MemoryDb UpdateCluster action.
 * \value UpdateParameterGroupAction MemoryDb UpdateParameterGroup action.
 * \value UpdateSubnetGroupAction MemoryDb UpdateSubnetGroup action.
 * \value UpdateUserAction MemoryDb UpdateUser action.
 */

/*!
 * Constructs a MemoryDbRequest object for MemoryDb \a action.
 */
MemoryDbRequest::MemoryDbRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MemoryDbRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MemoryDbRequest::MemoryDbRequest(const MemoryDbRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MemoryDbRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MemoryDbRequest object to be equal to \a other.
 */
MemoryDbRequest& MemoryDbRequest::operator=(const MemoryDbRequest &other)
{
    Q_D(MemoryDbRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MemoryDbRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MemoryDbRequestPrivate.
 */
MemoryDbRequest::MemoryDbRequest(MemoryDbRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MemoryDb action to be performed by this request.
 */
MemoryDbRequest::Action MemoryDbRequest::action() const
{
    Q_D(const MemoryDbRequest);
    return d->action;
}

/*!
 * Returns the name of the MemoryDb action to be performed by this request.
 */
QString MemoryDbRequest::actionString() const
{
    return MemoryDbRequestPrivate::toString(action());
}

/*!
 * Returns the MemoryDb API version implemented by this request.
 */
QString MemoryDbRequest::apiVersion() const
{
    Q_D(const MemoryDbRequest);
    return d->apiVersion;
}

/*!
 * Sets the MemoryDb action to be performed by this request to \a action.
 */
void MemoryDbRequest::setAction(const Action action)
{
    Q_D(MemoryDbRequest);
    d->action = action;
}

/*!
 * Sets the MemoryDb API version to include in this request to \a version.
 */
void MemoryDbRequest::setApiVersion(const QString &version)
{
    Q_D(MemoryDbRequest);
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
bool MemoryDbRequest::operator==(const MemoryDbRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MemoryDb queue name.
 *
 * @par From MemoryDb FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MemoryDb queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MemoryDbRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MemoryDbRequest::clearParameter(const QString &name)
{
    Q_D(MemoryDbRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MemoryDbRequest::clearParameters()
{
    Q_D(MemoryDbRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MemoryDbRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MemoryDbRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MemoryDbRequest::parameters() const
{
    Q_D(const MemoryDbRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MemoryDbRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MemoryDbRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MemoryDbRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MemoryDbRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MemoryDb request using the given
 * \a endpoint.
 *
 * This MemoryDb implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MemoryDbRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MemoryDbRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MemoryDb::MemoryDbRequestPrivate
 * \brief The MemoryDbRequestPrivate class provides private implementation for MemoryDbRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a MemoryDbRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
MemoryDbRequestPrivate::MemoryDbRequestPrivate(const MemoryDbRequest::Action action, MemoryDbRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-01-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MemoryDbRequest class's copy constructor.
 */
MemoryDbRequestPrivate::MemoryDbRequestPrivate(const MemoryDbRequestPrivate &other,
                                     MemoryDbRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MemoryDbRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MemoryDb service's Action
 * query parameters.
 */
QString MemoryDbRequestPrivate::toString(const MemoryDbRequest::Action &action)
{
    #define ActionToString(action) \
        case MemoryDbRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchUpdateCluster);
        ActionToString(CopySnapshot);
        ActionToString(CreateACL);
        ActionToString(CreateCluster);
        ActionToString(CreateParameterGroup);
        ActionToString(CreateSnapshot);
        ActionToString(CreateSubnetGroup);
        ActionToString(CreateUser);
        ActionToString(DeleteACL);
        ActionToString(DeleteCluster);
        ActionToString(DeleteParameterGroup);
        ActionToString(DeleteSnapshot);
        ActionToString(DeleteSubnetGroup);
        ActionToString(DeleteUser);
        ActionToString(DescribeACLs);
        ActionToString(DescribeClusters);
        ActionToString(DescribeEngineVersions);
        ActionToString(DescribeEvents);
        ActionToString(DescribeParameterGroups);
        ActionToString(DescribeParameters);
        ActionToString(DescribeServiceUpdates);
        ActionToString(DescribeSnapshots);
        ActionToString(DescribeSubnetGroups);
        ActionToString(DescribeUsers);
        ActionToString(FailoverShard);
        ActionToString(ListAllowedNodeTypeUpdates);
        ActionToString(ListTags);
        ActionToString(ResetParameterGroup);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateACL);
        ActionToString(UpdateCluster);
        ActionToString(UpdateParameterGroup);
        ActionToString(UpdateSubnetGroup);
        ActionToString(UpdateUser);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MemoryDb
} // namespace QtAws

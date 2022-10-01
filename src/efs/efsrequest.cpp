// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "efsrequest.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::EfsRequest
 * \brief The EfsRequest class provides an interface for Efs requests.
 *
 * \inmodule QtAwsEfs
 */

/*!
 * \enum EfsRequest::Action
 *
 * This enum describes the actions that can be performed as Efs
 * requests.
 *
 * \value CreateAccessPointAction Efs CreateAccessPoint action.
 * \value CreateFileSystemAction Efs CreateFileSystem action.
 * \value CreateMountTargetAction Efs CreateMountTarget action.
 * \value CreateReplicationConfigurationAction Efs CreateReplicationConfiguration action.
 * \value CreateTagsAction Efs CreateTags action.
 * \value DeleteAccessPointAction Efs DeleteAccessPoint action.
 * \value DeleteFileSystemAction Efs DeleteFileSystem action.
 * \value DeleteFileSystemPolicyAction Efs DeleteFileSystemPolicy action.
 * \value DeleteMountTargetAction Efs DeleteMountTarget action.
 * \value DeleteReplicationConfigurationAction Efs DeleteReplicationConfiguration action.
 * \value DeleteTagsAction Efs DeleteTags action.
 * \value DescribeAccessPointsAction Efs DescribeAccessPoints action.
 * \value DescribeAccountPreferencesAction Efs DescribeAccountPreferences action.
 * \value DescribeBackupPolicyAction Efs DescribeBackupPolicy action.
 * \value DescribeFileSystemPolicyAction Efs DescribeFileSystemPolicy action.
 * \value DescribeFileSystemsAction Efs DescribeFileSystems action.
 * \value DescribeLifecycleConfigurationAction Efs DescribeLifecycleConfiguration action.
 * \value DescribeMountTargetSecurityGroupsAction Efs DescribeMountTargetSecurityGroups action.
 * \value DescribeMountTargetsAction Efs DescribeMountTargets action.
 * \value DescribeReplicationConfigurationsAction Efs DescribeReplicationConfigurations action.
 * \value DescribeTagsAction Efs DescribeTags action.
 * \value ListTagsForResourceAction Efs ListTagsForResource action.
 * \value ModifyMountTargetSecurityGroupsAction Efs ModifyMountTargetSecurityGroups action.
 * \value PutAccountPreferencesAction Efs PutAccountPreferences action.
 * \value PutBackupPolicyAction Efs PutBackupPolicy action.
 * \value PutFileSystemPolicyAction Efs PutFileSystemPolicy action.
 * \value PutLifecycleConfigurationAction Efs PutLifecycleConfiguration action.
 * \value TagResourceAction Efs TagResource action.
 * \value UntagResourceAction Efs UntagResource action.
 * \value UpdateFileSystemAction Efs UpdateFileSystem action.
 */

/*!
 * Constructs a EfsRequest object for Efs \a action.
 */
EfsRequest::EfsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EfsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EfsRequest::EfsRequest(const EfsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EfsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EfsRequest object to be equal to \a other.
 */
EfsRequest& EfsRequest::operator=(const EfsRequest &other)
{
    Q_D(EfsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EfsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EfsRequestPrivate.
 */
EfsRequest::EfsRequest(EfsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Efs action to be performed by this request.
 */
EfsRequest::Action EfsRequest::action() const
{
    Q_D(const EfsRequest);
    return d->action;
}

/*!
 * Returns the name of the Efs action to be performed by this request.
 */
QString EfsRequest::actionString() const
{
    return EfsRequestPrivate::toString(action());
}

/*!
 * Returns the Efs API version implemented by this request.
 */
QString EfsRequest::apiVersion() const
{
    Q_D(const EfsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Efs action to be performed by this request to \a action.
 */
void EfsRequest::setAction(const Action action)
{
    Q_D(EfsRequest);
    d->action = action;
}

/*!
 * Sets the Efs API version to include in this request to \a version.
 */
void EfsRequest::setApiVersion(const QString &version)
{
    Q_D(EfsRequest);
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
bool EfsRequest::operator==(const EfsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Efs queue name.
 *
 * @par From Efs FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Efs queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EfsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EfsRequest::clearParameter(const QString &name)
{
    Q_D(EfsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EfsRequest::clearParameters()
{
    Q_D(EfsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EfsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EfsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EfsRequest::parameters() const
{
    Q_D(const EfsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EfsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EfsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EfsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EfsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Efs request using the given
 * \a endpoint.
 *
 * This Efs implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EfsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EfsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Efs::EfsRequestPrivate
 * \brief The EfsRequestPrivate class provides private implementation for EfsRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a EfsRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
EfsRequestPrivate::EfsRequestPrivate(const EfsRequest::Action action, EfsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2015-02-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EfsRequest class's copy constructor.
 */
EfsRequestPrivate::EfsRequestPrivate(const EfsRequestPrivate &other,
                                     EfsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EfsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Efs service's Action
 * query parameters.
 */
QString EfsRequestPrivate::toString(const EfsRequest::Action &action)
{
    #define ActionToString(action) \
        case EfsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateAccessPoint);
        ActionToString(CreateFileSystem);
        ActionToString(CreateMountTarget);
        ActionToString(CreateReplicationConfiguration);
        ActionToString(CreateTags);
        ActionToString(DeleteAccessPoint);
        ActionToString(DeleteFileSystem);
        ActionToString(DeleteFileSystemPolicy);
        ActionToString(DeleteMountTarget);
        ActionToString(DeleteReplicationConfiguration);
        ActionToString(DeleteTags);
        ActionToString(DescribeAccessPoints);
        ActionToString(DescribeAccountPreferences);
        ActionToString(DescribeBackupPolicy);
        ActionToString(DescribeFileSystemPolicy);
        ActionToString(DescribeFileSystems);
        ActionToString(DescribeLifecycleConfiguration);
        ActionToString(DescribeMountTargetSecurityGroups);
        ActionToString(DescribeMountTargets);
        ActionToString(DescribeReplicationConfigurations);
        ActionToString(DescribeTags);
        ActionToString(ListTagsForResource);
        ActionToString(ModifyMountTargetSecurityGroups);
        ActionToString(PutAccountPreferences);
        ActionToString(PutBackupPolicy);
        ActionToString(PutFileSystemPolicy);
        ActionToString(PutLifecycleConfiguration);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateFileSystem);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Efs
} // namespace QtAws

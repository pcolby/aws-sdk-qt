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

#include "efsrequest.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::EfsRequest
 * \brief The EfsRequest class provides an interface for EFS requests.
 *
 * \inmodule QtAwsEFS
 */

/*!
 * \enum EfsRequest::Action
 *
 * This enum describes the actions that can be performed as EFS
 * requests.
 *
 * \value CreateAccessPointAction EFS CreateAccessPoint action.
 * \value CreateFileSystemAction EFS CreateFileSystem action.
 * \value CreateMountTargetAction EFS CreateMountTarget action.
 * \value CreateTagsAction EFS CreateTags action.
 * \value DeleteAccessPointAction EFS DeleteAccessPoint action.
 * \value DeleteFileSystemAction EFS DeleteFileSystem action.
 * \value DeleteFileSystemPolicyAction EFS DeleteFileSystemPolicy action.
 * \value DeleteMountTargetAction EFS DeleteMountTarget action.
 * \value DeleteTagsAction EFS DeleteTags action.
 * \value DescribeAccessPointsAction EFS DescribeAccessPoints action.
 * \value DescribeAccountPreferencesAction EFS DescribeAccountPreferences action.
 * \value DescribeBackupPolicyAction EFS DescribeBackupPolicy action.
 * \value DescribeFileSystemPolicyAction EFS DescribeFileSystemPolicy action.
 * \value DescribeFileSystemsAction EFS DescribeFileSystems action.
 * \value DescribeLifecycleConfigurationAction EFS DescribeLifecycleConfiguration action.
 * \value DescribeMountTargetSecurityGroupsAction EFS DescribeMountTargetSecurityGroups action.
 * \value DescribeMountTargetsAction EFS DescribeMountTargets action.
 * \value DescribeTagsAction EFS DescribeTags action.
 * \value ListTagsForResourceAction EFS ListTagsForResource action.
 * \value ModifyMountTargetSecurityGroupsAction EFS ModifyMountTargetSecurityGroups action.
 * \value PutAccountPreferencesAction EFS PutAccountPreferences action.
 * \value PutBackupPolicyAction EFS PutBackupPolicy action.
 * \value PutFileSystemPolicyAction EFS PutFileSystemPolicy action.
 * \value PutLifecycleConfigurationAction EFS PutLifecycleConfiguration action.
 * \value TagResourceAction EFS TagResource action.
 * \value UntagResourceAction EFS UntagResource action.
 * \value UpdateFileSystemAction EFS UpdateFileSystem action.
 */

/*!
 * Constructs a EfsRequest object for EFS \a action.
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
 * Returns the EFS action to be performed by this request.
 */
EfsRequest::Action EfsRequest::action() const
{
    Q_D(const EfsRequest);
    return d->action;
}

/*!
 * Returns the name of the EFS action to be performed by this request.
 */
QString EfsRequest::actionString() const
{
    return EfsRequestPrivate::toString(action());
}

/*!
 * Returns the EFS API version implemented by this request.
 */
QString EfsRequest::apiVersion() const
{
    Q_D(const EfsRequest);
    return d->apiVersion;
}

/*!
 * Sets the EFS action to be performed by this request to \a action.
 */
void EfsRequest::setAction(const Action action)
{
    Q_D(EfsRequest);
    d->action = action;
}

/*!
 * Sets the EFS API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid EFS queue name.
 *
 * @par From EFS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid EFS queue name, \c false otherwise.
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
 * Returns a network request for the EFS request using the given
 * \a endpoint.
 *
 * This EFS implementation builds request URLs by combining the
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
 * \class QtAws::EFS::EfsRequestPrivate
 * \brief The EfsRequestPrivate class provides private implementation for EfsRequest.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a EfsRequestPrivate object for EFS \a action,
 * with public implementation \a q.
 */
EfsRequestPrivate::EfsRequestPrivate(const EfsRequest::Action action, EfsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
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
 * string representations, appropriate for use with the EFS service's Action
 * query parameters.
 */
QString EfsRequestPrivate::toString(const EfsRequest::Action &action)
{
    #define ActionToString(action) \
        case EfsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace EFS
} // namespace QtAws

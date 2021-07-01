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

#include "mgnrequest.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::mgnRequest
 * \brief The mgnRequest class provides an interface for mgn requests.
 *
 * \inmodule QtAwsmgn
 */

/*!
 * \enum mgnRequest::Action
 *
 * This enum describes the actions that can be performed as mgn
 * requests.
 *
 * \value ChangeServerLifeCycleStateAction mgn ChangeServerLifeCycleState action.
 * \value CreateReplicationConfigurationTemplateAction mgn CreateReplicationConfigurationTemplate action.
 * \value DeleteJobAction mgn DeleteJob action.
 * \value DeleteReplicationConfigurationTemplateAction mgn DeleteReplicationConfigurationTemplate action.
 * \value DeleteSourceServerAction mgn DeleteSourceServer action.
 * \value DescribeJobLogItemsAction mgn DescribeJobLogItems action.
 * \value DescribeJobsAction mgn DescribeJobs action.
 * \value DescribeReplicationConfigurationTemplatesAction mgn DescribeReplicationConfigurationTemplates action.
 * \value DescribeSourceServersAction mgn DescribeSourceServers action.
 * \value DisconnectFromServiceAction mgn DisconnectFromService action.
 * \value FinalizeCutoverAction mgn FinalizeCutover action.
 * \value GetLaunchConfigurationAction mgn GetLaunchConfiguration action.
 * \value GetReplicationConfigurationAction mgn GetReplicationConfiguration action.
 * \value InitializeServiceAction mgn InitializeService action.
 * \value ListTagsForResourceAction mgn ListTagsForResource action.
 * \value MarkAsArchivedAction mgn MarkAsArchived action.
 * \value RetryDataReplicationAction mgn RetryDataReplication action.
 * \value StartCutoverAction mgn StartCutover action.
 * \value StartTestAction mgn StartTest action.
 * \value TagResourceAction mgn TagResource action.
 * \value TerminateTargetInstancesAction mgn TerminateTargetInstances action.
 * \value UntagResourceAction mgn UntagResource action.
 * \value UpdateLaunchConfigurationAction mgn UpdateLaunchConfiguration action.
 * \value UpdateReplicationConfigurationAction mgn UpdateReplicationConfiguration action.
 * \value UpdateReplicationConfigurationTemplateAction mgn UpdateReplicationConfigurationTemplate action.
 */

/*!
 * Constructs a mgnRequest object for mgn \a action.
 */
mgnRequest::mgnRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new mgnRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
mgnRequest::mgnRequest(const mgnRequest &other)
    : QtAws::Core::AwsAbstractRequest(new mgnRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the mgnRequest object to be equal to \a other.
 */
mgnRequest& mgnRequest::operator=(const mgnRequest &other)
{
    Q_D(mgnRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa mgnRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from mgnRequestPrivate.
 */
mgnRequest::mgnRequest(mgnRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the mgn action to be performed by this request.
 */
mgnRequest::Action mgnRequest::action() const
{
    Q_D(const mgnRequest);
    return d->action;
}

/*!
 * Returns the name of the mgn action to be performed by this request.
 */
QString mgnRequest::actionString() const
{
    return mgnRequestPrivate::toString(action());
}

/*!
 * Returns the mgn API version implemented by this request.
 */
QString mgnRequest::apiVersion() const
{
    Q_D(const mgnRequest);
    return d->apiVersion;
}

/*!
 * Sets the mgn action to be performed by this request to \a action.
 */
void mgnRequest::setAction(const Action action)
{
    Q_D(mgnRequest);
    d->action = action;
}

/*!
 * Sets the mgn API version to include in this request to \a version.
 */
void mgnRequest::setApiVersion(const QString &version)
{
    Q_D(mgnRequest);
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
bool mgnRequest::operator==(const mgnRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid mgn queue name.
 *
 * @par From mgn FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid mgn queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool mgnRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int mgnRequest::clearParameter(const QString &name)
{
    Q_D(mgnRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void mgnRequest::clearParameters()
{
    Q_D(mgnRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant mgnRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const mgnRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &mgnRequest::parameters() const
{
    Q_D(const mgnRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void mgnRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(mgnRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void mgnRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(mgnRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the mgn request using the given
 * \a endpoint.
 *
 * This mgn implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest mgnRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const mgnRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::mgn::mgnRequestPrivate
 * \brief The mgnRequestPrivate class provides private implementation for mgnRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a mgnRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
mgnRequestPrivate::mgnRequestPrivate(const mgnRequest::Action action, mgnRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the mgnRequest class's copy constructor.
 */
mgnRequestPrivate::mgnRequestPrivate(const mgnRequestPrivate &other,
                                     mgnRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts mgnRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the mgn service's Action
 * query parameters.
 */
QString mgnRequestPrivate::toString(const mgnRequest::Action &action)
{
    #define ActionToString(action) \
        case mgnRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(ChangeServerLifeCycleState);
        ActionToString(CreateReplicationConfigurationTemplate);
        ActionToString(DeleteJob);
        ActionToString(DeleteReplicationConfigurationTemplate);
        ActionToString(DeleteSourceServer);
        ActionToString(DescribeJobLogItems);
        ActionToString(DescribeJobs);
        ActionToString(DescribeReplicationConfigurationTemplates);
        ActionToString(DescribeSourceServers);
        ActionToString(DisconnectFromService);
        ActionToString(FinalizeCutover);
        ActionToString(GetLaunchConfiguration);
        ActionToString(GetReplicationConfiguration);
        ActionToString(InitializeService);
        ActionToString(ListTagsForResource);
        ActionToString(MarkAsArchived);
        ActionToString(RetryDataReplication);
        ActionToString(StartCutover);
        ActionToString(StartTest);
        ActionToString(TagResource);
        ActionToString(TerminateTargetInstances);
        ActionToString(UntagResource);
        ActionToString(UpdateLaunchConfiguration);
        ActionToString(UpdateReplicationConfiguration);
        ActionToString(UpdateReplicationConfigurationTemplate);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace mgn
} // namespace QtAws

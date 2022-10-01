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

#include "drsrequest.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DrsRequest
 * \brief The DrsRequest class provides an interface for Drs requests.
 *
 * \inmodule QtAwsDrs
 */

/*!
 * \enum DrsRequest::Action
 *
 * This enum describes the actions that can be performed as Drs
 * requests.
 *
 * \value CreateExtendedSourceServerAction Drs CreateExtendedSourceServer action.
 * \value CreateReplicationConfigurationTemplateAction Drs CreateReplicationConfigurationTemplate action.
 * \value DeleteJobAction Drs DeleteJob action.
 * \value DeleteRecoveryInstanceAction Drs DeleteRecoveryInstance action.
 * \value DeleteReplicationConfigurationTemplateAction Drs DeleteReplicationConfigurationTemplate action.
 * \value DeleteSourceServerAction Drs DeleteSourceServer action.
 * \value DescribeJobLogItemsAction Drs DescribeJobLogItems action.
 * \value DescribeJobsAction Drs DescribeJobs action.
 * \value DescribeRecoveryInstancesAction Drs DescribeRecoveryInstances action.
 * \value DescribeRecoverySnapshotsAction Drs DescribeRecoverySnapshots action.
 * \value DescribeReplicationConfigurationTemplatesAction Drs DescribeReplicationConfigurationTemplates action.
 * \value DescribeSourceServersAction Drs DescribeSourceServers action.
 * \value DisconnectRecoveryInstanceAction Drs DisconnectRecoveryInstance action.
 * \value DisconnectSourceServerAction Drs DisconnectSourceServer action.
 * \value GetFailbackReplicationConfigurationAction Drs GetFailbackReplicationConfiguration action.
 * \value GetLaunchConfigurationAction Drs GetLaunchConfiguration action.
 * \value GetReplicationConfigurationAction Drs GetReplicationConfiguration action.
 * \value InitializeServiceAction Drs InitializeService action.
 * \value ListExtensibleSourceServersAction Drs ListExtensibleSourceServers action.
 * \value ListStagingAccountsAction Drs ListStagingAccounts action.
 * \value ListTagsForResourceAction Drs ListTagsForResource action.
 * \value RetryDataReplicationAction Drs RetryDataReplication action.
 * \value StartFailbackLaunchAction Drs StartFailbackLaunch action.
 * \value StartRecoveryAction Drs StartRecovery action.
 * \value StopFailbackAction Drs StopFailback action.
 * \value TagResourceAction Drs TagResource action.
 * \value TerminateRecoveryInstancesAction Drs TerminateRecoveryInstances action.
 * \value UntagResourceAction Drs UntagResource action.
 * \value UpdateFailbackReplicationConfigurationAction Drs UpdateFailbackReplicationConfiguration action.
 * \value UpdateLaunchConfigurationAction Drs UpdateLaunchConfiguration action.
 * \value UpdateReplicationConfigurationAction Drs UpdateReplicationConfiguration action.
 * \value UpdateReplicationConfigurationTemplateAction Drs UpdateReplicationConfigurationTemplate action.
 */

/*!
 * Constructs a DrsRequest object for Drs \a action.
 */
DrsRequest::DrsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DrsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DrsRequest::DrsRequest(const DrsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DrsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DrsRequest object to be equal to \a other.
 */
DrsRequest& DrsRequest::operator=(const DrsRequest &other)
{
    Q_D(DrsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DrsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DrsRequestPrivate.
 */
DrsRequest::DrsRequest(DrsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Drs action to be performed by this request.
 */
DrsRequest::Action DrsRequest::action() const
{
    Q_D(const DrsRequest);
    return d->action;
}

/*!
 * Returns the name of the Drs action to be performed by this request.
 */
QString DrsRequest::actionString() const
{
    return DrsRequestPrivate::toString(action());
}

/*!
 * Returns the Drs API version implemented by this request.
 */
QString DrsRequest::apiVersion() const
{
    Q_D(const DrsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Drs action to be performed by this request to \a action.
 */
void DrsRequest::setAction(const Action action)
{
    Q_D(DrsRequest);
    d->action = action;
}

/*!
 * Sets the Drs API version to include in this request to \a version.
 */
void DrsRequest::setApiVersion(const QString &version)
{
    Q_D(DrsRequest);
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
bool DrsRequest::operator==(const DrsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Drs queue name.
 *
 * @par From Drs FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Drs queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DrsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DrsRequest::clearParameter(const QString &name)
{
    Q_D(DrsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DrsRequest::clearParameters()
{
    Q_D(DrsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DrsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DrsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DrsRequest::parameters() const
{
    Q_D(const DrsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DrsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DrsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DrsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DrsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Drs request using the given
 * \a endpoint.
 *
 * This Drs implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DrsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DrsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Drs::DrsRequestPrivate
 * \brief The DrsRequestPrivate class provides private implementation for DrsRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DrsRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
DrsRequestPrivate::DrsRequestPrivate(const DrsRequest::Action action, DrsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-02-26"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DrsRequest class's copy constructor.
 */
DrsRequestPrivate::DrsRequestPrivate(const DrsRequestPrivate &other,
                                     DrsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DrsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Drs service's Action
 * query parameters.
 */
QString DrsRequestPrivate::toString(const DrsRequest::Action &action)
{
    #define ActionToString(action) \
        case DrsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateExtendedSourceServer);
        ActionToString(CreateReplicationConfigurationTemplate);
        ActionToString(DeleteJob);
        ActionToString(DeleteRecoveryInstance);
        ActionToString(DeleteReplicationConfigurationTemplate);
        ActionToString(DeleteSourceServer);
        ActionToString(DescribeJobLogItems);
        ActionToString(DescribeJobs);
        ActionToString(DescribeRecoveryInstances);
        ActionToString(DescribeRecoverySnapshots);
        ActionToString(DescribeReplicationConfigurationTemplates);
        ActionToString(DescribeSourceServers);
        ActionToString(DisconnectRecoveryInstance);
        ActionToString(DisconnectSourceServer);
        ActionToString(GetFailbackReplicationConfiguration);
        ActionToString(GetLaunchConfiguration);
        ActionToString(GetReplicationConfiguration);
        ActionToString(InitializeService);
        ActionToString(ListExtensibleSourceServers);
        ActionToString(ListStagingAccounts);
        ActionToString(ListTagsForResource);
        ActionToString(RetryDataReplication);
        ActionToString(StartFailbackLaunch);
        ActionToString(StartRecovery);
        ActionToString(StopFailback);
        ActionToString(TagResource);
        ActionToString(TerminateRecoveryInstances);
        ActionToString(UntagResource);
        ActionToString(UpdateFailbackReplicationConfiguration);
        ActionToString(UpdateLaunchConfiguration);
        ActionToString(UpdateReplicationConfiguration);
        ActionToString(UpdateReplicationConfigurationTemplate);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Drs
} // namespace QtAws

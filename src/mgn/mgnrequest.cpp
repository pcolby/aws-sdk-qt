// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mgnrequest.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::MgnRequest
 * \brief The MgnRequest class provides an interface for Mgn requests.
 *
 * \inmodule QtAwsMgn
 */

/*!
 * \enum MgnRequest::Action
 *
 * This enum describes the actions that can be performed as Mgn
 * requests.
 *
 * \value ChangeServerLifeCycleStateAction Mgn ChangeServerLifeCycleState action.
 * \value CreateLaunchConfigurationTemplateAction Mgn CreateLaunchConfigurationTemplate action.
 * \value CreateReplicationConfigurationTemplateAction Mgn CreateReplicationConfigurationTemplate action.
 * \value DeleteJobAction Mgn DeleteJob action.
 * \value DeleteLaunchConfigurationTemplateAction Mgn DeleteLaunchConfigurationTemplate action.
 * \value DeleteReplicationConfigurationTemplateAction Mgn DeleteReplicationConfigurationTemplate action.
 * \value DeleteSourceServerAction Mgn DeleteSourceServer action.
 * \value DeleteVcenterClientAction Mgn DeleteVcenterClient action.
 * \value DescribeJobLogItemsAction Mgn DescribeJobLogItems action.
 * \value DescribeJobsAction Mgn DescribeJobs action.
 * \value DescribeLaunchConfigurationTemplatesAction Mgn DescribeLaunchConfigurationTemplates action.
 * \value DescribeReplicationConfigurationTemplatesAction Mgn DescribeReplicationConfigurationTemplates action.
 * \value DescribeSourceServersAction Mgn DescribeSourceServers action.
 * \value DescribeVcenterClientsAction Mgn DescribeVcenterClients action.
 * \value DisconnectFromServiceAction Mgn DisconnectFromService action.
 * \value FinalizeCutoverAction Mgn FinalizeCutover action.
 * \value GetLaunchConfigurationAction Mgn GetLaunchConfiguration action.
 * \value GetReplicationConfigurationAction Mgn GetReplicationConfiguration action.
 * \value InitializeServiceAction Mgn InitializeService action.
 * \value ListTagsForResourceAction Mgn ListTagsForResource action.
 * \value MarkAsArchivedAction Mgn MarkAsArchived action.
 * \value RetryDataReplicationAction Mgn RetryDataReplication action.
 * \value StartCutoverAction Mgn StartCutover action.
 * \value StartReplicationAction Mgn StartReplication action.
 * \value StartTestAction Mgn StartTest action.
 * \value TagResourceAction Mgn TagResource action.
 * \value TerminateTargetInstancesAction Mgn TerminateTargetInstances action.
 * \value UntagResourceAction Mgn UntagResource action.
 * \value UpdateLaunchConfigurationAction Mgn UpdateLaunchConfiguration action.
 * \value UpdateLaunchConfigurationTemplateAction Mgn UpdateLaunchConfigurationTemplate action.
 * \value UpdateReplicationConfigurationAction Mgn UpdateReplicationConfiguration action.
 * \value UpdateReplicationConfigurationTemplateAction Mgn UpdateReplicationConfigurationTemplate action.
 * \value UpdateSourceServerReplicationTypeAction Mgn UpdateSourceServerReplicationType action.
 */

/*!
 * Constructs a MgnRequest object for Mgn \a action.
 */
MgnRequest::MgnRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MgnRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MgnRequest::MgnRequest(const MgnRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MgnRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MgnRequest object to be equal to \a other.
 */
MgnRequest& MgnRequest::operator=(const MgnRequest &other)
{
    Q_D(MgnRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MgnRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MgnRequestPrivate.
 */
MgnRequest::MgnRequest(MgnRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Mgn action to be performed by this request.
 */
MgnRequest::Action MgnRequest::action() const
{
    Q_D(const MgnRequest);
    return d->action;
}

/*!
 * Returns the name of the Mgn action to be performed by this request.
 */
QString MgnRequest::actionString() const
{
    return MgnRequestPrivate::toString(action());
}

/*!
 * Returns the Mgn API version implemented by this request.
 */
QString MgnRequest::apiVersion() const
{
    Q_D(const MgnRequest);
    return d->apiVersion;
}

/*!
 * Sets the Mgn action to be performed by this request to \a action.
 */
void MgnRequest::setAction(const Action action)
{
    Q_D(MgnRequest);
    d->action = action;
}

/*!
 * Sets the Mgn API version to include in this request to \a version.
 */
void MgnRequest::setApiVersion(const QString &version)
{
    Q_D(MgnRequest);
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
bool MgnRequest::operator==(const MgnRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Mgn queue name.
 *
 * @par From Mgn FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Mgn queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MgnRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MgnRequest::clearParameter(const QString &name)
{
    Q_D(MgnRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MgnRequest::clearParameters()
{
    Q_D(MgnRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MgnRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MgnRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MgnRequest::parameters() const
{
    Q_D(const MgnRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MgnRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MgnRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MgnRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MgnRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Mgn request using the given
 * \a endpoint.
 *
 * This Mgn implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MgnRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MgnRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Mgn::MgnRequestPrivate
 * \brief The MgnRequestPrivate class provides private implementation for MgnRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a MgnRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
MgnRequestPrivate::MgnRequestPrivate(const MgnRequest::Action action, MgnRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-02-26"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MgnRequest class's copy constructor.
 */
MgnRequestPrivate::MgnRequestPrivate(const MgnRequestPrivate &other,
                                     MgnRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MgnRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Mgn service's Action
 * query parameters.
 */
QString MgnRequestPrivate::toString(const MgnRequest::Action &action)
{
    #define ActionToString(action) \
        case MgnRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(ChangeServerLifeCycleState);
        ActionToString(CreateLaunchConfigurationTemplate);
        ActionToString(CreateReplicationConfigurationTemplate);
        ActionToString(DeleteJob);
        ActionToString(DeleteLaunchConfigurationTemplate);
        ActionToString(DeleteReplicationConfigurationTemplate);
        ActionToString(DeleteSourceServer);
        ActionToString(DeleteVcenterClient);
        ActionToString(DescribeJobLogItems);
        ActionToString(DescribeJobs);
        ActionToString(DescribeLaunchConfigurationTemplates);
        ActionToString(DescribeReplicationConfigurationTemplates);
        ActionToString(DescribeSourceServers);
        ActionToString(DescribeVcenterClients);
        ActionToString(DisconnectFromService);
        ActionToString(FinalizeCutover);
        ActionToString(GetLaunchConfiguration);
        ActionToString(GetReplicationConfiguration);
        ActionToString(InitializeService);
        ActionToString(ListTagsForResource);
        ActionToString(MarkAsArchived);
        ActionToString(RetryDataReplication);
        ActionToString(StartCutover);
        ActionToString(StartReplication);
        ActionToString(StartTest);
        ActionToString(TagResource);
        ActionToString(TerminateTargetInstances);
        ActionToString(UntagResource);
        ActionToString(UpdateLaunchConfiguration);
        ActionToString(UpdateLaunchConfigurationTemplate);
        ActionToString(UpdateReplicationConfiguration);
        ActionToString(UpdateReplicationConfigurationTemplate);
        ActionToString(UpdateSourceServerReplicationType);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Mgn
} // namespace QtAws

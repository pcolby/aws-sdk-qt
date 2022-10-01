// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "backupgatewayrequest.h"
#include "backupgatewayrequest_p.h"

namespace QtAws {
namespace BackupGateway {

/*!
 * \class QtAws::BackupGateway::BackupGatewayRequest
 * \brief The BackupGatewayRequest class provides an interface for BackupGateway requests.
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * \enum BackupGatewayRequest::Action
 *
 * This enum describes the actions that can be performed as BackupGateway
 * requests.
 *
 * \value AssociateGatewayToServerAction BackupGateway AssociateGatewayToServer action.
 * \value CreateGatewayAction BackupGateway CreateGateway action.
 * \value DeleteGatewayAction BackupGateway DeleteGateway action.
 * \value DeleteHypervisorAction BackupGateway DeleteHypervisor action.
 * \value DisassociateGatewayFromServerAction BackupGateway DisassociateGatewayFromServer action.
 * \value GetGatewayAction BackupGateway GetGateway action.
 * \value GetVirtualMachineAction BackupGateway GetVirtualMachine action.
 * \value ImportHypervisorConfigurationAction BackupGateway ImportHypervisorConfiguration action.
 * \value ListGatewaysAction BackupGateway ListGateways action.
 * \value ListHypervisorsAction BackupGateway ListHypervisors action.
 * \value ListTagsForResourceAction BackupGateway ListTagsForResource action.
 * \value ListVirtualMachinesAction BackupGateway ListVirtualMachines action.
 * \value PutMaintenanceStartTimeAction BackupGateway PutMaintenanceStartTime action.
 * \value TagResourceAction BackupGateway TagResource action.
 * \value TestHypervisorConfigurationAction BackupGateway TestHypervisorConfiguration action.
 * \value UntagResourceAction BackupGateway UntagResource action.
 * \value UpdateGatewayInformationAction BackupGateway UpdateGatewayInformation action.
 * \value UpdateGatewaySoftwareNowAction BackupGateway UpdateGatewaySoftwareNow action.
 * \value UpdateHypervisorAction BackupGateway UpdateHypervisor action.
 */

/*!
 * Constructs a BackupGatewayRequest object for BackupGateway \a action.
 */
BackupGatewayRequest::BackupGatewayRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new BackupGatewayRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
BackupGatewayRequest::BackupGatewayRequest(const BackupGatewayRequest &other)
    : QtAws::Core::AwsAbstractRequest(new BackupGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the BackupGatewayRequest object to be equal to \a other.
 */
BackupGatewayRequest& BackupGatewayRequest::operator=(const BackupGatewayRequest &other)
{
    Q_D(BackupGatewayRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa BackupGatewayRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BackupGatewayRequestPrivate.
 */
BackupGatewayRequest::BackupGatewayRequest(BackupGatewayRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the BackupGateway action to be performed by this request.
 */
BackupGatewayRequest::Action BackupGatewayRequest::action() const
{
    Q_D(const BackupGatewayRequest);
    return d->action;
}

/*!
 * Returns the name of the BackupGateway action to be performed by this request.
 */
QString BackupGatewayRequest::actionString() const
{
    return BackupGatewayRequestPrivate::toString(action());
}

/*!
 * Returns the BackupGateway API version implemented by this request.
 */
QString BackupGatewayRequest::apiVersion() const
{
    Q_D(const BackupGatewayRequest);
    return d->apiVersion;
}

/*!
 * Sets the BackupGateway action to be performed by this request to \a action.
 */
void BackupGatewayRequest::setAction(const Action action)
{
    Q_D(BackupGatewayRequest);
    d->action = action;
}

/*!
 * Sets the BackupGateway API version to include in this request to \a version.
 */
void BackupGatewayRequest::setApiVersion(const QString &version)
{
    Q_D(BackupGatewayRequest);
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
bool BackupGatewayRequest::operator==(const BackupGatewayRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid BackupGateway queue name.
 *
 * @par From BackupGateway FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid BackupGateway queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool BackupGatewayRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int BackupGatewayRequest::clearParameter(const QString &name)
{
    Q_D(BackupGatewayRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void BackupGatewayRequest::clearParameters()
{
    Q_D(BackupGatewayRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant BackupGatewayRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const BackupGatewayRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &BackupGatewayRequest::parameters() const
{
    Q_D(const BackupGatewayRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void BackupGatewayRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(BackupGatewayRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void BackupGatewayRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(BackupGatewayRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the BackupGateway request using the given
 * \a endpoint.
 *
 * This BackupGateway implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest BackupGatewayRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const BackupGatewayRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::BackupGateway::BackupGatewayRequestPrivate
 * \brief The BackupGatewayRequestPrivate class provides private implementation for BackupGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsBackupGateway
 */

/*!
 * Constructs a BackupGatewayRequestPrivate object for BackupGateway \a action,
 * with public implementation \a q.
 */
BackupGatewayRequestPrivate::BackupGatewayRequestPrivate(const BackupGatewayRequest::Action action, BackupGatewayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-01-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the BackupGatewayRequest class's copy constructor.
 */
BackupGatewayRequestPrivate::BackupGatewayRequestPrivate(const BackupGatewayRequestPrivate &other,
                                     BackupGatewayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts BackupGatewayRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the BackupGateway service's Action
 * query parameters.
 */
QString BackupGatewayRequestPrivate::toString(const BackupGatewayRequest::Action &action)
{
    #define ActionToString(action) \
        case BackupGatewayRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateGatewayToServer);
        ActionToString(CreateGateway);
        ActionToString(DeleteGateway);
        ActionToString(DeleteHypervisor);
        ActionToString(DisassociateGatewayFromServer);
        ActionToString(GetGateway);
        ActionToString(GetVirtualMachine);
        ActionToString(ImportHypervisorConfiguration);
        ActionToString(ListGateways);
        ActionToString(ListHypervisors);
        ActionToString(ListTagsForResource);
        ActionToString(ListVirtualMachines);
        ActionToString(PutMaintenanceStartTime);
        ActionToString(TagResource);
        ActionToString(TestHypervisorConfiguration);
        ActionToString(UntagResource);
        ActionToString(UpdateGatewayInformation);
        ActionToString(UpdateGatewaySoftwareNow);
        ActionToString(UpdateHypervisor);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace BackupGateway
} // namespace QtAws

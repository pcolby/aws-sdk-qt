/*
    Copyright 2013-2018 Paul Colby

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

#include "migrationhubrequest.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::MigrationHubRequest
 * \brief The MigrationHubRequest class provides an interface for MigrationHub requests.
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * \enum MigrationHubRequest::Action
 *
 * This enum describes the actions that can be performed as MigrationHub
 * requests.
 *
 * \value AssociateCreatedArtifactAction MigrationHub AssociateCreatedArtifact action.
 * \value AssociateDiscoveredResourceAction MigrationHub AssociateDiscoveredResource action.
 * \value CreateProgressUpdateStreamAction MigrationHub CreateProgressUpdateStream action.
 * \value DeleteProgressUpdateStreamAction MigrationHub DeleteProgressUpdateStream action.
 * \value DescribeApplicationStateAction MigrationHub DescribeApplicationState action.
 * \value DescribeMigrationTaskAction MigrationHub DescribeMigrationTask action.
 * \value DisassociateCreatedArtifactAction MigrationHub DisassociateCreatedArtifact action.
 * \value DisassociateDiscoveredResourceAction MigrationHub DisassociateDiscoveredResource action.
 * \value ImportMigrationTaskAction MigrationHub ImportMigrationTask action.
 * \value ListCreatedArtifactsAction MigrationHub ListCreatedArtifacts action.
 * \value ListDiscoveredResourcesAction MigrationHub ListDiscoveredResources action.
 * \value ListMigrationTasksAction MigrationHub ListMigrationTasks action.
 * \value ListProgressUpdateStreamsAction MigrationHub ListProgressUpdateStreams action.
 * \value NotifyApplicationStateAction MigrationHub NotifyApplicationState action.
 * \value NotifyMigrationTaskStateAction MigrationHub NotifyMigrationTaskState action.
 * \value PutResourceAttributesAction MigrationHub PutResourceAttributes action.
 */

/*!
 * Constructs a MigrationHubRequest object for MigrationHub \a action.
 */
MigrationHubRequest::MigrationHubRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MigrationHubRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MigrationHubRequest::MigrationHubRequest(const MigrationHubRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MigrationHubRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MigrationHubRequest object to be equal to \a other.
 */
MigrationHubRequest& MigrationHubRequest::operator=(const MigrationHubRequest &other)
{
    Q_D(MigrationHubRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MigrationHubRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MigrationHubRequestPrivate.
 */
MigrationHubRequest::MigrationHubRequest(MigrationHubRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MigrationHub action to be performed by this request.
 */
MigrationHubRequest::Action MigrationHubRequest::action() const
{
    Q_D(const MigrationHubRequest);
    return d->action;
}

/*!
 * Returns the name of the MigrationHub action to be performed by this request.
 */
QString MigrationHubRequest::actionString() const
{
    return MigrationHubRequestPrivate::toString(action());
}

/*!
 * Returns the MigrationHub API version implemented by this request.
 */
QString MigrationHubRequest::apiVersion() const
{
    Q_D(const MigrationHubRequest);
    return d->apiVersion;
}

/*!
 * Sets the MigrationHub action to be performed by this request to \a action.
 */
void MigrationHubRequest::setAction(const Action action)
{
    Q_D(MigrationHubRequest);
    d->action = action;
}

/*!
 * Sets the MigrationHub API version to include in this request to \a version.
 */
void MigrationHubRequest::setApiVersion(const QString &version)
{
    Q_D(MigrationHubRequest);
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
bool MigrationHubRequest::operator==(const MigrationHubRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MigrationHub queue name.
 *
 * @par From MigrationHub FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MigrationHub queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MigrationHubRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MigrationHubRequest::clearParameter(const QString &name)
{
    Q_D(MigrationHubRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MigrationHubRequest::clearParameters()
{
    Q_D(MigrationHubRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MigrationHubRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MigrationHubRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MigrationHubRequest::parameters() const
{
    Q_D(const MigrationHubRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MigrationHubRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MigrationHubRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MigrationHubRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MigrationHubRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MigrationHub request using the given
 * \a endpoint.
 *
 * This MigrationHub implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MigrationHubRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MigrationHubRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MigrationHub::MigrationHubRequestPrivate
 * \brief The MigrationHubRequestPrivate class provides private implementation for MigrationHubRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a MigrationHubRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
MigrationHubRequestPrivate::MigrationHubRequestPrivate(const MigrationHubRequest::Action action, MigrationHubRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MigrationHubRequest class's copy constructor.
 */
MigrationHubRequestPrivate::MigrationHubRequestPrivate(const MigrationHubRequestPrivate &other,
                                     MigrationHubRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MigrationHubRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MigrationHub service's Action
 * query parameters.
 */
QString MigrationHubRequestPrivate::toString(const MigrationHubRequest::Action &action)
{
    #define ActionToString(action) \
        case MigrationHubRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MigrationHub
} // namespace QtAws

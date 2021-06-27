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

#include "secretsmanagerrequest.h"
#include "secretsmanagerrequest_p.h"

namespace QtAws {
namespace SecretsManager {

/*!
 * \class QtAws::SecretsManager::SecretsManagerRequest
 * \brief The SecretsManagerRequest class provides an interface for SecretsManager requests.
 *
 * \inmodule QtAwsSecretsManager
 */

/*!
 * \enum SecretsManagerRequest::Action
 *
 * This enum describes the actions that can be performed as SecretsManager
 * requests.
 *
 * \value CancelRotateSecretAction SecretsManager CancelRotateSecret action.
 * \value CreateSecretAction SecretsManager CreateSecret action.
 * \value DeleteResourcePolicyAction SecretsManager DeleteResourcePolicy action.
 * \value DeleteSecretAction SecretsManager DeleteSecret action.
 * \value DescribeSecretAction SecretsManager DescribeSecret action.
 * \value GetRandomPasswordAction SecretsManager GetRandomPassword action.
 * \value GetResourcePolicyAction SecretsManager GetResourcePolicy action.
 * \value GetSecretValueAction SecretsManager GetSecretValue action.
 * \value ListSecretVersionIdsAction SecretsManager ListSecretVersionIds action.
 * \value ListSecretsAction SecretsManager ListSecrets action.
 * \value PutResourcePolicyAction SecretsManager PutResourcePolicy action.
 * \value PutSecretValueAction SecretsManager PutSecretValue action.
 * \value RemoveRegionsFromReplicationAction SecretsManager RemoveRegionsFromReplication action.
 * \value ReplicateSecretToRegionsAction SecretsManager ReplicateSecretToRegions action.
 * \value RestoreSecretAction SecretsManager RestoreSecret action.
 * \value RotateSecretAction SecretsManager RotateSecret action.
 * \value StopReplicationToReplicaAction SecretsManager StopReplicationToReplica action.
 * \value TagResourceAction SecretsManager TagResource action.
 * \value UntagResourceAction SecretsManager UntagResource action.
 * \value UpdateSecretAction SecretsManager UpdateSecret action.
 * \value UpdateSecretVersionStageAction SecretsManager UpdateSecretVersionStage action.
 * \value ValidateResourcePolicyAction SecretsManager ValidateResourcePolicy action.
 */

/*!
 * Constructs a SecretsManagerRequest object for SecretsManager \a action.
 */
SecretsManagerRequest::SecretsManagerRequest(const Action action)
    : d_ptr(new SecretsManagerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SecretsManagerRequest::SecretsManagerRequest(const SecretsManagerRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new SecretsManagerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SecretsManagerRequest object to be equal to \a other.
 */
SecretsManagerRequest& SecretsManagerRequest::operator=(const SecretsManagerRequest &other)
{
    Q_D(SecretsManagerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SecretsManagerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SecretsManagerRequestPrivate.
 */
SecretsManagerRequest::SecretsManagerRequest(SecretsManagerRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the SecretsManager action to be performed by this request.
 */
SecretsManagerRequest::Action SecretsManagerRequest::action() const
{
    Q_D(const SecretsManagerRequest);
    return d->action;
}

/*!
 * Returns the name of the SecretsManager action to be performed by this request.
 */
QString SecretsManagerRequest::actionString() const
{
    return SecretsManagerRequestPrivate::toString(action());
}

/*!
 * Returns the SecretsManager API version implemented by this request.
 */
QString SecretsManagerRequest::apiVersion() const
{
    Q_D(const SecretsManagerRequest);
    return d->apiVersion;
}

/*!
 * Sets the SecretsManager action to be performed by this request to \a action.
 */
void SecretsManagerRequest::setAction(const Action action)
{
    Q_D(SecretsManagerRequest);
    d->action = action;
}

/*!
 * Sets the SecretsManager API version to include in this request to \a version.
 */
void SecretsManagerRequest::setApiVersion(const QString &version)
{
    Q_D(SecretsManagerRequest);
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
bool SecretsManagerRequest::operator==(const SecretsManagerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SecretsManager queue name.
 *
 * @par From SecretsManager FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SecretsManager queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SecretsManagerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SecretsManagerRequest::clearParameter(const QString &name)
{
    Q_D(SecretsManagerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SecretsManagerRequest::clearParameters()
{
    Q_D(SecretsManagerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SecretsManagerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SecretsManagerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SecretsManagerRequest::parameters() const
{
    Q_D(const SecretsManagerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SecretsManagerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SecretsManagerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SecretsManagerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SecretsManagerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SecretsManager request using the given
 * \a endpoint.
 *
 * This SecretsManager implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SecretsManagerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SecretsManagerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SecretsManager::SecretsManagerRequestPrivate
 * \brief The SecretsManagerRequestPrivate class provides private implementation for SecretsManagerRequest.
 * \internal
 *
 * \inmodule QtAwsSecretsManager
 */

/*!
 * Constructs a SecretsManagerRequestPrivate object for SecretsManager \a action,
 * with public implementation \a q.
 */
SecretsManagerRequestPrivate::SecretsManagerRequestPrivate(const SecretsManagerRequest::Action action, SecretsManagerRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SecretsManagerRequest class's copy constructor.
 */
SecretsManagerRequestPrivate::SecretsManagerRequestPrivate(const SecretsManagerRequestPrivate &other,
                                     SecretsManagerRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SecretsManagerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SecretsManager service's Action
 * query parameters.
 */
QString SecretsManagerRequestPrivate::toString(const SecretsManagerRequest::Action &action)
{
    #define ActionToString(action) \
        case SecretsManagerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SecretsManager
} // namespace QtAws

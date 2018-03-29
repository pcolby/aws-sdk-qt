/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "migrationhubrequest.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/**
 * @class  MigrationHubRequest
 *
 * @brief  Interface class for providing MigrationHub requests
 */


/**
 * @brief  Constructs a new MigrationHubRequest object.
 *
 * @param  action  The MigrationHub action to request.
 */
MigrationHubRequest::MigrationHubRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MigrationHubRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new MigrationHubRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
MigrationHubRequest::MigrationHubRequest(const MigrationHubRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MigrationHubRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
MigrationHubRequest& MigrationHubRequest::operator=(const MigrationHubRequest &other)
{
    Q_D(MigrationHubRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new MigrationHubRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MigrationHubRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
MigrationHubRequest::MigrationHubRequest(MigrationHubRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the MigrationHub action to be performed by this request.
 *
 * @return The MigrationHub action to be performed by this request.
 */
MigrationHubRequest::Action MigrationHubRequest::action() const
{
    Q_D(const MigrationHubRequest);
    return d->action;
}

/**
 * @brief Get the name of the MigrationHub action to be performed by this request.
 *
 * @return The name of the MigrationHub action to be performed by this request.
 */
QString MigrationHubRequest::actionString() const
{
    return MigrationHubRequestPrivate::toString(action());
}

/**
 * @brief  Get the MigrationHub API version implemented by this request.
 *
 * @return The MigrationHub API version implmented by this request.
 */
QString MigrationHubRequest::apiVersion() const
{
    Q_D(const MigrationHubRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the MigrationHub action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void MigrationHubRequest::setAction(const Action action)
{
    Q_D(MigrationHubRequest);
    d->action = action;
}

/**
 * @brief  Set the MigrationHub API version to include in this request.
 *
 * @param  version  The MigrationHub API version to include in this request.
 */
void MigrationHubRequest::setApiVersion(const QString &version)
{
    Q_D(MigrationHubRequest);
    d->apiVersion = version;
}

/**
 * @brief  Equality operator.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 *
 * @param  other  Instance to compare \c this to.
 *
 * @return \c true if \c this and \a other are considered equal.
 */
bool MigrationHubRequest::operator==(const MigrationHubRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid MigrationHub queue name.
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
bool MigrationHubRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int MigrationHubRequest::clearParameter(const QString &name)
{
    Q_D(MigrationHubRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void MigrationHubRequest::clearParameters()
{
    Q_D(MigrationHubRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this MigrationHub request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant MigrationHubRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MigrationHubRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this MigrationHub request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &MigrationHubRequest::parameters() const
{
    Q_D(const MigrationHubRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this MigrationHub request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void MigrationHubRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MigrationHubRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this MigrationHub request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void MigrationHubRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MigrationHubRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this MigrationHub request.
 *
 * This MigrationHub implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this MigrationHub request using the given \a endpoint.
 */
QNetworkRequest MigrationHubRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const MigrationHubRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  MigrationHubRequestPrivate
 *
 * @brief  Private implementation for MigrationHubRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MigrationHubRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed by the \a q request.
 * @param  q       Pointer to this object's public MigrationHubRequest instance.
 */
MigrationHubRequestPrivate::MigrationHubRequestPrivate(const MigrationHubRequest::Action action, MigrationHubRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new MigrationHubRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MigrationHubRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public MigrationHubRequest instance.
 */
MigrationHubRequestPrivate::MigrationHubRequestPrivate(const MigrationHubRequestPrivate &other,
                                     MigrationHubRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and MigrationHub action to a string.
 *
 * This function converts MigrationHubRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MigrationHub service's Action
 * query parameters.
 *
 * @param  action  MigrationHub action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString MigrationHubRequestPrivate::toString(const MigrationHubRequest::Action &action)
{
    #define ActionToString(action) \
        case MigrationHubRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MigrationHub
} // namespace QtAws

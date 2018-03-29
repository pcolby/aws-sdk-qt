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

#include "workspacesrequest.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/**
 * @class  WorkSpacesRequest
 *
 * @brief  Interface class for providing WorkSpaces requests
 */


/**
 * @brief  Constructs a new WorkSpacesRequest object.
 *
 * @param  action  The WorkSpaces action to request.
 */
WorkSpacesRequest::WorkSpacesRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new WorkSpacesRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new WorkSpacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
WorkSpacesRequest::WorkSpacesRequest(const WorkSpacesRequest &other)
    : QtAws::Core::AwsAbstractRequest(new WorkSpacesRequestPrivate(*other.d_func(), this))
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
WorkSpacesRequest& WorkSpacesRequest::operator=(const WorkSpacesRequest &other)
{
    Q_D(WorkSpacesRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new WorkSpacesRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkSpacesRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
WorkSpacesRequest::WorkSpacesRequest(WorkSpacesRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the WorkSpaces action to be performed by this request.
 *
 * @return The WorkSpaces action to be performed by this request.
 */
WorkSpacesRequest::Action WorkSpacesRequest::action() const
{
    Q_D(const WorkSpacesRequest);
    return d->action;
}

/**
 * @brief Get the name of the WorkSpaces action to be performed by this request.
 *
 * @return The name of the WorkSpaces action to be performed by this request.
 */
QString WorkSpacesRequest::actionString() const
{
    return WorkSpacesRequestPrivate::toString(action());
}

/**
 * @brief  Get the WorkSpaces API version implemented by this request.
 *
 * @return The WorkSpaces API version implmented by this request.
 */
QString WorkSpacesRequest::apiVersion() const
{
    Q_D(const WorkSpacesRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the WorkSpaces action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void WorkSpacesRequest::setAction(const Action action)
{
    Q_D(WorkSpacesRequest);
    d->action = action;
}

/**
 * @brief  Set the WorkSpaces API version to include in this request.
 *
 * @param  version  The WorkSpaces API version to include in this request.
 */
void WorkSpacesRequest::setApiVersion(const QString &version)
{
    Q_D(WorkSpacesRequest);
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
bool WorkSpacesRequest::operator==(const WorkSpacesRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid WorkSpaces queue name.
 *
 * @par From WorkSpaces FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WorkSpaces queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool WorkSpacesRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int WorkSpacesRequest::clearParameter(const QString &name)
{
    Q_D(WorkSpacesRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void WorkSpacesRequest::clearParameters()
{
    Q_D(WorkSpacesRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this WorkSpaces request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant WorkSpacesRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WorkSpacesRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this WorkSpaces request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &WorkSpacesRequest::parameters() const
{
    Q_D(const WorkSpacesRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this WorkSpaces request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void WorkSpacesRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WorkSpacesRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this WorkSpaces request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void WorkSpacesRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WorkSpacesRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this WorkSpaces request.
 *
 * This WorkSpaces implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this WorkSpaces request using the given \a endpoint.
 */
QNetworkRequest WorkSpacesRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const WorkSpacesRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  WorkSpacesRequestPrivate
 *
 * @brief  Private implementation for WorkSpacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new WorkSpacesRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed by the \a q request.
 * @param  q       Pointer to this object's public WorkSpacesRequest instance.
 */
WorkSpacesRequestPrivate::WorkSpacesRequestPrivate(const WorkSpacesRequest::Action action, WorkSpacesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new WorkSpacesRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WorkSpacesRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public WorkSpacesRequest instance.
 */
WorkSpacesRequestPrivate::WorkSpacesRequestPrivate(const WorkSpacesRequestPrivate &other,
                                     WorkSpacesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and WorkSpaces action to a string.
 *
 * This function converts WorkSpacesRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the WorkSpaces service's Action
 * query parameters.
 *
 * @param  action  WorkSpaces action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString WorkSpacesRequestPrivate::toString(const WorkSpacesRequest::Action &action)
{
    #define ActionToString(action) \
        case WorkSpacesRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WorkSpaces
} // namespace QtAws

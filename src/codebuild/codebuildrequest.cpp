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

#include "codebuildrequest.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/**
 * @class  CodeBuildRequest
 *
 * @brief  Interface class for providing CodeBuild requests
 */


/**
 * @brief  Constructs a new CodeBuildRequest object.
 *
 * @param  action  The CodeBuild action to request.
 */
CodeBuildRequest::CodeBuildRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CodeBuildRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new CodeBuildRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CodeBuildRequest::CodeBuildRequest(const CodeBuildRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CodeBuildRequestPrivate(*other.d_func(), this))
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
CodeBuildRequest& CodeBuildRequest::operator=(const CodeBuildRequest &other)
{
    Q_D(CodeBuildRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new CodeBuildRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeBuildRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
CodeBuildRequest::CodeBuildRequest(CodeBuildRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the CodeBuild action to be performed by this request.
 *
 * @return The CodeBuild action to be performed by this request.
 */
CodeBuildRequest::Action CodeBuildRequest::action() const
{
    Q_D(const CodeBuildRequest);
    return d->action;
}

/**
 * @brief Get the name of the CodeBuild action to be performed by this request.
 *
 * @return The name of the CodeBuild action to be performed by this request.
 */
QString CodeBuildRequest::actionString() const
{
    return CodeBuildRequestPrivate::toString(action());
}

/**
 * @brief  Get the CodeBuild API version implemented by this request.
 *
 * @return The CodeBuild API version implmented by this request.
 */
QString CodeBuildRequest::apiVersion() const
{
    Q_D(const CodeBuildRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the CodeBuild action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void CodeBuildRequest::setAction(const Action action)
{
    Q_D(CodeBuildRequest);
    d->action = action;
}

/**
 * @brief  Set the CodeBuild API version to include in this request.
 *
 * @param  version  The CodeBuild API version to include in this request.
 */
void CodeBuildRequest::setApiVersion(const QString &version)
{
    Q_D(CodeBuildRequest);
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
bool CodeBuildRequest::operator==(const CodeBuildRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid CodeBuild queue name.
 *
 * @par From CodeBuild FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CodeBuild queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool CodeBuildRequest::isValidQueueName(const QString &queueName)
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
int CodeBuildRequest::clearParameter(const QString &name)
{
    Q_D(CodeBuildRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void CodeBuildRequest::clearParameters()
{
    Q_D(CodeBuildRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this CodeBuild request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant CodeBuildRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CodeBuildRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this CodeBuild request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &CodeBuildRequest::parameters() const
{
    Q_D(const CodeBuildRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this CodeBuild request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void CodeBuildRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CodeBuildRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this CodeBuild request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void CodeBuildRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CodeBuildRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this CodeBuild request.
 *
 * This CodeBuild implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this CodeBuild request using the given \a endpoint.
 */
QNetworkRequest CodeBuildRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CodeBuildRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  CodeBuildRequestPrivate
 *
 * @brief  Private implementation for CodeBuildRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CodeBuildRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed by the \a q request.
 * @param  q       Pointer to this object's public CodeBuildRequest instance.
 */
CodeBuildRequestPrivate::CodeBuildRequestPrivate(const CodeBuildRequest::Action action, CodeBuildRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CodeBuildRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CodeBuildRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CodeBuildRequest instance.
 */
CodeBuildRequestPrivate::CodeBuildRequestPrivate(const CodeBuildRequestPrivate &other,
                                     CodeBuildRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and CodeBuild action to a string.
 *
 * This function converts CodeBuildRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CodeBuild service's Action
 * query parameters.
 *
 * @param  action  CodeBuild action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString CodeBuildRequestPrivate::toString(const CodeBuildRequest::Action &action)
{
    #define ActionToString(action) \
        case CodeBuildRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CodeBuild
} // namespace QtAws

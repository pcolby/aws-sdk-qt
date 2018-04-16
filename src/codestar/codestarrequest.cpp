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

#include "codestarrequest.h"
#include "codestarrequest_p.h"

namespace QtAws {
namespace CodeStar {

/*!
 * \class QtAws::CodeStar::CodeStarRequest
 *
 * \brief The CodeStarRequest class is the base class for all CodeStar requests.
 *
 * \ingroup CodeStar
 */

/*!
 * @brief  Constructs a new CodeStarRequest object.
 *
 * @param  action  The CodeStar action to request.
 */
CodeStarRequest::CodeStarRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CodeStarRequestPrivate(action, this))
{

}

/*!
 * @brief  Constructs a new CodeStarRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CodeStarRequest::CodeStarRequest(const CodeStarRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CodeStarRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
CodeStarRequest& CodeStarRequest::operator=(const CodeStarRequest &other)
{
    Q_D(CodeStarRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * @internal
 *
 * @brief  Constructs a new CodeStarRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeStarRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
CodeStarRequest::CodeStarRequest(CodeStarRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * \brief Returns the CodeStar action to be performed by this request.
 */
CodeStarRequest::Action CodeStarRequest::action() const
{
    Q_D(const CodeStarRequest);
    return d->action;
}

/*!
 * \brief Returns the name of the CodeStar action to be performed by this request.
 */
QString CodeStarRequest::actionString() const
{
    return CodeStarRequestPrivate::toString(action());
}

/*!
 * \brief Returns the CodeStar API version implemented by this request.
 */
QString CodeStarRequest::apiVersion() const
{
    Q_D(const CodeStarRequest);
    return d->apiVersion;
}

/*!
 * @brief Set the CodeStar action to be performed by this request to \a action.
 */
void CodeStarRequest::setAction(const Action action)
{
    Q_D(CodeStarRequest);
    d->action = action;
}

/*!
 * Set the CodeStar API version to include in this request to \a version.
 */
void CodeStarRequest::setApiVersion(const QString &version)
{
    Q_D(CodeStarRequest);
    d->apiVersion = version;
}

/*!
 * \brief Returns \c true if this request is the same as \a other.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool CodeStarRequest::operator==(const CodeStarRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
 * @brief  Check if \a queueName is a valid CodeStar queue name.
 *
 * @par From CodeStar FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CodeStar queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CodeStarRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int CodeStarRequest::clearParameter(const QString &name)
{
    Q_D(CodeStarRequest);
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void CodeStarRequest::clearParameters()
{
    Q_D(CodeStarRequest);
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant CodeStarRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CodeStarRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &CodeStarRequest::parameters() const
{
    Q_D(const CodeStarRequest);
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void CodeStarRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CodeStarRequest);
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void CodeStarRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CodeStarRequest);
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this CodeStar request using the given \a endpoint.
 *
 * This CodeStar implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest CodeStarRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CodeStarRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  CodeStarRequestPrivate
 *
 * \brief  Private implementation for CodeStarRequest.
 */

/*!
 * \internal
 *
 * \brief Constructs a new CodeStarRequestPrivate object.
 */
CodeStarRequestPrivate::CodeStarRequestPrivate(const CodeStarRequest::Action action, CodeStarRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new CodeStarRequestPrivate object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CodeStarRequest class's copy constructor.
 */
CodeStarRequestPrivate::CodeStarRequestPrivate(const CodeStarRequestPrivate &other,
                                     CodeStarRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts CodeStarRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CodeStar service's Action
 * query parameters.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString CodeStarRequestPrivate::toString(const CodeStarRequest::Action &action)
{
    #define ActionToString(action) \
        case CodeStarRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CodeStar
} // namespace QtAws

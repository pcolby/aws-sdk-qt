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

#include "appstreamrequest.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::AppStreamRequest
 *
 * \brief The AppStreamRequest class is the base class for all AppStream requests.
 *
 * \ingroup AppStream
 */

/*!
 * @brief  Constructs a new AppStreamRequest object.
 *
 * @param  action  The AppStream action to request.
 */
AppStreamRequest::AppStreamRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AppStreamRequestPrivate(action, this))
{

}

/*!
 * @brief  Constructs a new AppStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AppStreamRequest::AppStreamRequest(const AppStreamRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AppStreamRequestPrivate(*other.d_func(), this))
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
AppStreamRequest& AppStreamRequest::operator=(const AppStreamRequest &other)
{
    Q_D(AppStreamRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * @internal
 *
 * @brief  Constructs a new AppStreamRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppStreamRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
AppStreamRequest::AppStreamRequest(AppStreamRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * \brief Returns the AppStream action to be performed by this request.
 */
AppStreamRequest::Action AppStreamRequest::action() const
{
    Q_D(const AppStreamRequest);
    return d->action;
}

/*!
 * \brief Returns the name of the AppStream action to be performed by this request.
 */
QString AppStreamRequest::actionString() const
{
    return AppStreamRequestPrivate::toString(action());
}

/*!
 * \brief Returns the AppStream API version implemented by this request.
 */
QString AppStreamRequest::apiVersion() const
{
    Q_D(const AppStreamRequest);
    return d->apiVersion;
}

/*!
 * @brief Set the AppStream action to be performed by this request to \a action.
 */
void AppStreamRequest::setAction(const Action action)
{
    Q_D(AppStreamRequest);
    d->action = action;
}

/*!
 * Set the AppStream API version to include in this request to \a version.
 */
void AppStreamRequest::setApiVersion(const QString &version)
{
    Q_D(AppStreamRequest);
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
bool AppStreamRequest::operator==(const AppStreamRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
 * @brief  Check if \a queueName is a valid AppStream queue name.
 *
 * @par From AppStream FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AppStream queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AppStreamRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int AppStreamRequest::clearParameter(const QString &name)
{
    Q_D(AppStreamRequest);
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void AppStreamRequest::clearParameters()
{
    Q_D(AppStreamRequest);
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant AppStreamRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppStreamRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &AppStreamRequest::parameters() const
{
    Q_D(const AppStreamRequest);
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void AppStreamRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppStreamRequest);
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void AppStreamRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppStreamRequest);
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this AppStream request using the given \a endpoint.
 *
 * This AppStream implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest AppStreamRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const AppStreamRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  AppStreamRequestPrivate
 *
 * \brief  Private implementation for AppStreamRequest.
 */

/*!
 * \internal
 *
 * \brief Constructs a new AppStreamRequestPrivate object.
 */
AppStreamRequestPrivate::AppStreamRequestPrivate(const AppStreamRequest::Action action, AppStreamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new AppStreamRequestPrivate object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppStreamRequest class's copy constructor.
 */
AppStreamRequestPrivate::AppStreamRequestPrivate(const AppStreamRequestPrivate &other,
                                     AppStreamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts AppStreamRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AppStream service's Action
 * query parameters.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString AppStreamRequestPrivate::toString(const AppStreamRequest::Action &action)
{
    #define ActionToString(action) \
        case AppStreamRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AppStream
} // namespace QtAws

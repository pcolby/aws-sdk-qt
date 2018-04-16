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

#include "directoryservicerequest.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DirectoryServiceRequest
 *
 * \brief The DirectoryServiceRequest class is the base class for all DirectoryService requests.
 *
 * \ingroup DirectoryService
 */

/*!
 * @brief  Constructs a new DirectoryServiceRequest object.
 *
 * @param  action  The DirectoryService action to request.
 */
DirectoryServiceRequest::DirectoryServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DirectoryServiceRequestPrivate(action, this))
{

}

/*!
 * @brief  Constructs a new DirectoryServiceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DirectoryServiceRequest::DirectoryServiceRequest(const DirectoryServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DirectoryServiceRequestPrivate(*other.d_func(), this))
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
DirectoryServiceRequest& DirectoryServiceRequest::operator=(const DirectoryServiceRequest &other)
{
    Q_D(DirectoryServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * @internal
 *
 * @brief  Constructs a new DirectoryServiceRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DirectoryServiceRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
DirectoryServiceRequest::DirectoryServiceRequest(DirectoryServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * \brief Returns the DirectoryService action to be performed by this request.
 */
DirectoryServiceRequest::Action DirectoryServiceRequest::action() const
{
    Q_D(const DirectoryServiceRequest);
    return d->action;
}

/*!
 * \brief Returns the name of the DirectoryService action to be performed by this request.
 */
QString DirectoryServiceRequest::actionString() const
{
    return DirectoryServiceRequestPrivate::toString(action());
}

/*!
 * \brief Returns the DirectoryService API version implemented by this request.
 */
QString DirectoryServiceRequest::apiVersion() const
{
    Q_D(const DirectoryServiceRequest);
    return d->apiVersion;
}

/*!
 * @brief Set the DirectoryService action to be performed by this request to \a action.
 */
void DirectoryServiceRequest::setAction(const Action action)
{
    Q_D(DirectoryServiceRequest);
    d->action = action;
}

/*!
 * Set the DirectoryService API version to include in this request to \a version.
 */
void DirectoryServiceRequest::setApiVersion(const QString &version)
{
    Q_D(DirectoryServiceRequest);
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
bool DirectoryServiceRequest::operator==(const DirectoryServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
 * @brief  Check if \a queueName is a valid DirectoryService queue name.
 *
 * @par From DirectoryService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DirectoryService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DirectoryServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int DirectoryServiceRequest::clearParameter(const QString &name)
{
    Q_D(DirectoryServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void DirectoryServiceRequest::clearParameters()
{
    Q_D(DirectoryServiceRequest);
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant DirectoryServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DirectoryServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &DirectoryServiceRequest::parameters() const
{
    Q_D(const DirectoryServiceRequest);
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void DirectoryServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DirectoryServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void DirectoryServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DirectoryServiceRequest);
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this DirectoryService request using the given \a endpoint.
 *
 * This DirectoryService implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest DirectoryServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const DirectoryServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  DirectoryServiceRequestPrivate
 *
 * \brief  Private implementation for DirectoryServiceRequest.
 */

/*!
 * \internal
 *
 * \brief Constructs a new DirectoryServiceRequestPrivate object.
 */
DirectoryServiceRequestPrivate::DirectoryServiceRequestPrivate(const DirectoryServiceRequest::Action action, DirectoryServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new DirectoryServiceRequestPrivate object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DirectoryServiceRequest class's copy constructor.
 */
DirectoryServiceRequestPrivate::DirectoryServiceRequestPrivate(const DirectoryServiceRequestPrivate &other,
                                     DirectoryServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts DirectoryServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DirectoryService service's Action
 * query parameters.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString DirectoryServiceRequestPrivate::toString(const DirectoryServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case DirectoryServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DirectoryService
} // namespace QtAws

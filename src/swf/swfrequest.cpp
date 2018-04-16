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

#include "swfrequest.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::SWFRequest
 *
 * \brief The SWFRequest class is the base class for all SWF requests.
 *
 * \ingroup SWF
 */

/*!
 * @brief  Constructs a new SWFRequest object.
 *
 * @param  action  The SWF action to request.
 */
SWFRequest::SWFRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SWFRequestPrivate(action, this))
{

}

/*!
 * @brief  Constructs a new SWFRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SWFRequest::SWFRequest(const SWFRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SWFRequestPrivate(*other.d_func(), this))
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
SWFRequest& SWFRequest::operator=(const SWFRequest &other)
{
    Q_D(SWFRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * @internal
 *
 * @brief  Constructs a new SWFRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SWFRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
SWFRequest::SWFRequest(SWFRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * \brief Returns the SWF action to be performed by this request.
 */
SWFRequest::Action SWFRequest::action() const
{
    Q_D(const SWFRequest);
    return d->action;
}

/*!
 * \brief Returns the name of the SWF action to be performed by this request.
 */
QString SWFRequest::actionString() const
{
    return SWFRequestPrivate::toString(action());
}

/*!
 * \brief Returns the SWF API version implemented by this request.
 */
QString SWFRequest::apiVersion() const
{
    Q_D(const SWFRequest);
    return d->apiVersion;
}

/*!
 * @brief Set the SWF action to be performed by this request to \a action.
 */
void SWFRequest::setAction(const Action action)
{
    Q_D(SWFRequest);
    d->action = action;
}

/*!
 * Set the SWF API version to include in this request to \a version.
 */
void SWFRequest::setApiVersion(const QString &version)
{
    Q_D(SWFRequest);
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
bool SWFRequest::operator==(const SWFRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
 * @brief  Check if \a queueName is a valid SWF queue name.
 *
 * @par From SWF FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SWF queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SWFRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int SWFRequest::clearParameter(const QString &name)
{
    Q_D(SWFRequest);
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void SWFRequest::clearParameters()
{
    Q_D(SWFRequest);
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant SWFRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SWFRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &SWFRequest::parameters() const
{
    Q_D(const SWFRequest);
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void SWFRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SWFRequest);
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void SWFRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SWFRequest);
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this SWF request using the given \a endpoint.
 *
 * This SWF implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest SWFRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SWFRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  SWFRequestPrivate
 *
 * \brief  Private implementation for SWFRequest.
 */

/*!
 * \internal
 *
 * \brief Constructs a new SWFRequestPrivate object.
 */
SWFRequestPrivate::SWFRequestPrivate(const SWFRequest::Action action, SWFRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new SWFRequestPrivate object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SWFRequest class's copy constructor.
 */
SWFRequestPrivate::SWFRequestPrivate(const SWFRequestPrivate &other,
                                     SWFRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts SWFRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SWF service's Action
 * query parameters.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString SWFRequestPrivate::toString(const SWFRequest::Action &action)
{
    #define ActionToString(action) \
        case SWFRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SWF
} // namespace QtAws

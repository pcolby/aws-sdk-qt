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

#include "s3request.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::S3Request
 *
 * \brief The S3Request class is the base class for all S3 requests.
 *
 * \ingroup S3
 */

/*!
 * @brief  Constructs a new S3Request object.
 *
 * @param  action  The S3 action to request.
 */
S3Request::S3Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new S3RequestPrivate(action, this))
{

}

/*!
 * @brief  Constructs a new S3Request object by copying another.
 *
 * @param  other  Instance to copy.
 */
S3Request::S3Request(const S3Request &other)
    : QtAws::Core::AwsAbstractRequest(new S3RequestPrivate(*other.d_func(), this))
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
S3Request& S3Request::operator=(const S3Request &other)
{
    Q_D(S3Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * @internal
 *
 * @brief  Constructs a new S3Request object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from S3RequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
S3Request::S3Request(S3RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * \brief Returns the S3 action to be performed by this request.
 */
S3Request::Action S3Request::action() const
{
    Q_D(const S3Request);
    return d->action;
}

/*!
 * \brief Returns the name of the S3 action to be performed by this request.
 */
QString S3Request::actionString() const
{
    return S3RequestPrivate::toString(action());
}

/*!
 * \brief Returns the S3 API version implemented by this request.
 */
QString S3Request::apiVersion() const
{
    Q_D(const S3Request);
    return d->apiVersion;
}

/*!
 * @brief Set the S3 action to be performed by this request to \a action.
 */
void S3Request::setAction(const Action action)
{
    Q_D(S3Request);
    d->action = action;
}

/*!
 * Set the S3 API version to include in this request to \a version.
 */
void S3Request::setApiVersion(const QString &version)
{
    Q_D(S3Request);
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
bool S3Request::operator==(const S3Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
 * @brief  Check if \a queueName is a valid S3 queue name.
 *
 * @par From S3 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid S3 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool S3Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int S3Request::clearParameter(const QString &name)
{
    Q_D(S3Request);
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void S3Request::clearParameters()
{
    Q_D(S3Request);
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant S3Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const S3Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &S3Request::parameters() const
{
    Q_D(const S3Request);
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void S3Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(S3Request);
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void S3Request::setParameters(const QVariantMap &parameters)
{
    Q_D(S3Request);
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this S3 request using the given \a endpoint.
 *
 * This S3 implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest S3Request::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const S3Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  S3RequestPrivate
 *
 * \brief  Private implementation for S3Request.
 */

/*!
 * \internal
 *
 * \brief Constructs a new S3RequestPrivate object.
 */
S3RequestPrivate::S3RequestPrivate(const S3Request::Action action, S3Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new S3RequestPrivate object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the S3Request class's copy constructor.
 */
S3RequestPrivate::S3RequestPrivate(const S3RequestPrivate &other,
                                     S3Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts S3Request::Action enumerator values to their respective
 * string representations, appropriate for use with the S3 service's Action
 * query parameters.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString S3RequestPrivate::toString(const S3Request::Action &action)
{
    #define ActionToString(action) \
        case S3Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace S3
} // namespace QtAws

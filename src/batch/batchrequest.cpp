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

#include "batchrequest.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::BatchRequest
 *
 * \brief The BatchRequest class provides an interface for Batch requests.
 *
 * \ingroup Batch
 */

/*!
 * @brief  Constructs a new BatchRequest object.
 *
 * @param  action  The Batch action to request.
 */
BatchRequest::BatchRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new BatchRequestPrivate(action, this))
{

}

/*!
 * @brief  Constructs a new BatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchRequest::BatchRequest(const BatchRequest &other)
    : QtAws::Core::AwsAbstractRequest(new BatchRequestPrivate(*other.d_func(), this))
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
BatchRequest& BatchRequest::operator=(const BatchRequest &other)
{
    Q_D(BatchRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * @internal
 *
 * @brief  Constructs a new BatchRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BatchRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
BatchRequest::BatchRequest(BatchRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * \brief Returns the Batch action to be performed by this request.
 */
BatchRequest::Action BatchRequest::action() const
{
    Q_D(const BatchRequest);
    return d->action;
}

/*!
 * \brief Returns the name of the Batch action to be performed by this request.
 */
QString BatchRequest::actionString() const
{
    return BatchRequestPrivate::toString(action());
}

/*!
 * \brief Returns the Batch API version implemented by this request.
 */
QString BatchRequest::apiVersion() const
{
    Q_D(const BatchRequest);
    return d->apiVersion;
}

/*!
 * @brief Set the Batch action to be performed by this request to \a action.
 */
void BatchRequest::setAction(const Action action)
{
    Q_D(BatchRequest);
    d->action = action;
}

/*!
 * Set the Batch API version to include in this request to \a version.
 */
void BatchRequest::setApiVersion(const QString &version)
{
    Q_D(BatchRequest);
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
bool BatchRequest::operator==(const BatchRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
 * @brief  Check if \a queueName is a valid Batch queue name.
 *
 * @par From Batch FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Batch queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool BatchRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int BatchRequest::clearParameter(const QString &name)
{
    Q_D(BatchRequest);
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void BatchRequest::clearParameters()
{
    Q_D(BatchRequest);
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant BatchRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const BatchRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &BatchRequest::parameters() const
{
    Q_D(const BatchRequest);
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void BatchRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(BatchRequest);
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void BatchRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(BatchRequest);
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this Batch request using the given \a endpoint.
 *
 * This Batch implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest BatchRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const BatchRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  BatchRequestPrivate
 *
 * \brief  Private implementation for BatchRequest.
 */

/*!
 * \internal
 *
 * \brief Constructs a new BatchRequestPrivate object.
 */
BatchRequestPrivate::BatchRequestPrivate(const BatchRequest::Action action, BatchRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new BatchRequestPrivate object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the BatchRequest class's copy constructor.
 */
BatchRequestPrivate::BatchRequestPrivate(const BatchRequestPrivate &other,
                                     BatchRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts BatchRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Batch service's Action
 * query parameters.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString BatchRequestPrivate::toString(const BatchRequest::Action &action)
{
    #define ActionToString(action) \
        case BatchRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Batch
} // namespace QtAws

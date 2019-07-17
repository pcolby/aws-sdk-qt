/*
    Copyright 2013-2019 Paul Colby

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

#include "pirequest.h"
#include "pirequest_p.h"

namespace QtAws {
namespace PI {

/*!
 * \class QtAws::PI::PiRequest
 * \brief The PiRequest class provides an interface for PI requests.
 *
 * \inmodule QtAwsPI
 */

/*!
 * \enum PiRequest::Action
 *
 * This enum describes the actions that can be performed as PI
 * requests.
 *
 * \value DescribeDimensionKeysAction PI DescribeDimensionKeys action.
 * \value GetResourceMetricsAction PI GetResourceMetrics action.
 */

/*!
 * Constructs a PiRequest object for PI \a action.
 */
PiRequest::PiRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PiRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PiRequest::PiRequest(const PiRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PiRequest object to be equal to \a other.
 */
PiRequest& PiRequest::operator=(const PiRequest &other)
{
    Q_D(PiRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PiRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PiRequestPrivate.
 */
PiRequest::PiRequest(PiRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the PI action to be performed by this request.
 */
PiRequest::Action PiRequest::action() const
{
    Q_D(const PiRequest);
    return d->action;
}

/*!
 * Returns the name of the PI action to be performed by this request.
 */
QString PiRequest::actionString() const
{
    return PiRequestPrivate::toString(action());
}

/*!
 * Returns the PI API version implemented by this request.
 */
QString PiRequest::apiVersion() const
{
    Q_D(const PiRequest);
    return d->apiVersion;
}

/*!
 * Sets the PI action to be performed by this request to \a action.
 */
void PiRequest::setAction(const Action action)
{
    Q_D(PiRequest);
    d->action = action;
}

/*!
 * Sets the PI API version to include in this request to \a version.
 */
void PiRequest::setApiVersion(const QString &version)
{
    Q_D(PiRequest);
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
bool PiRequest::operator==(const PiRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid PI queue name.
 *
 * @par From PI FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid PI queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PiRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PiRequest::clearParameter(const QString &name)
{
    Q_D(PiRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PiRequest::clearParameters()
{
    Q_D(PiRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PiRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PiRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PiRequest::parameters() const
{
    Q_D(const PiRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PiRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PiRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PiRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PiRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the PI request using the given
 * \a endpoint.
 *
 * This PI implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PiRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PiRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::PI::PiRequestPrivate
 * \brief The PiRequestPrivate class provides private implementation for PiRequest.
 * \internal
 *
 * \inmodule QtAwsPI
 */

/*!
 * Constructs a PiRequestPrivate object for PI \a action,
 * with public implementation \a q.
 */
PiRequestPrivate::PiRequestPrivate(const PiRequest::Action action, PiRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PiRequest class's copy constructor.
 */
PiRequestPrivate::PiRequestPrivate(const PiRequestPrivate &other,
                                     PiRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PiRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the PI service's Action
 * query parameters.
 */
QString PiRequestPrivate::toString(const PiRequest::Action &action)
{
    #define ActionToString(action) \
        case PiRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace PI
} // namespace QtAws

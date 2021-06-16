/*
    Copyright 2013-2021 Paul Colby

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

#include "sagemakerruntimerequest.h"
#include "sagemakerruntimerequest_p.h"

namespace QtAws {
namespace SageMakerRuntime {

/*!
 * \class QtAws::SageMakerRuntime::SageMakerRuntimeRequest
 * \brief The SageMakerRuntimeRequest class provides an interface for SageMakerRuntime requests.
 *
 * \inmodule QtAwsSageMakerRuntime
 */

/*!
 * \enum SageMakerRuntimeRequest::Action
 *
 * This enum describes the actions that can be performed as SageMakerRuntime
 * requests.
 *
 * \value InvokeEndpointAction SageMakerRuntime InvokeEndpoint action.
 */

/*!
 * Constructs a SageMakerRuntimeRequest object for SageMakerRuntime \a action.
 */
SageMakerRuntimeRequest::SageMakerRuntimeRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SageMakerRuntimeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SageMakerRuntimeRequest::SageMakerRuntimeRequest(const SageMakerRuntimeRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SageMakerRuntimeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SageMakerRuntimeRequest object to be equal to \a other.
 */
SageMakerRuntimeRequest& SageMakerRuntimeRequest::operator=(const SageMakerRuntimeRequest &other)
{
    Q_D(SageMakerRuntimeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SageMakerRuntimeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SageMakerRuntimeRequestPrivate.
 */
SageMakerRuntimeRequest::SageMakerRuntimeRequest(SageMakerRuntimeRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SageMakerRuntime action to be performed by this request.
 */
SageMakerRuntimeRequest::Action SageMakerRuntimeRequest::action() const
{
    Q_D(const SageMakerRuntimeRequest);
    return d->action;
}

/*!
 * Returns the name of the SageMakerRuntime action to be performed by this request.
 */
QString SageMakerRuntimeRequest::actionString() const
{
    return SageMakerRuntimeRequestPrivate::toString(action());
}

/*!
 * Returns the SageMakerRuntime API version implemented by this request.
 */
QString SageMakerRuntimeRequest::apiVersion() const
{
    Q_D(const SageMakerRuntimeRequest);
    return d->apiVersion;
}

/*!
 * Sets the SageMakerRuntime action to be performed by this request to \a action.
 */
void SageMakerRuntimeRequest::setAction(const Action action)
{
    Q_D(SageMakerRuntimeRequest);
    d->action = action;
}

/*!
 * Sets the SageMakerRuntime API version to include in this request to \a version.
 */
void SageMakerRuntimeRequest::setApiVersion(const QString &version)
{
    Q_D(SageMakerRuntimeRequest);
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
bool SageMakerRuntimeRequest::operator==(const SageMakerRuntimeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SageMakerRuntime queue name.
 *
 * @par From SageMakerRuntime FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SageMakerRuntime queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SageMakerRuntimeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SageMakerRuntimeRequest::clearParameter(const QString &name)
{
    Q_D(SageMakerRuntimeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SageMakerRuntimeRequest::clearParameters()
{
    Q_D(SageMakerRuntimeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SageMakerRuntimeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SageMakerRuntimeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SageMakerRuntimeRequest::parameters() const
{
    Q_D(const SageMakerRuntimeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SageMakerRuntimeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SageMakerRuntimeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SageMakerRuntimeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SageMakerRuntimeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SageMakerRuntime request using the given
 * \a endpoint.
 *
 * This SageMakerRuntime implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SageMakerRuntimeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SageMakerRuntimeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SageMakerRuntime::SageMakerRuntimeRequestPrivate
 * \brief The SageMakerRuntimeRequestPrivate class provides private implementation for SageMakerRuntimeRequest.
 * \internal
 *
 * \inmodule QtAwsSageMakerRuntime
 */

/*!
 * Constructs a SageMakerRuntimeRequestPrivate object for SageMakerRuntime \a action,
 * with public implementation \a q.
 */
SageMakerRuntimeRequestPrivate::SageMakerRuntimeRequestPrivate(const SageMakerRuntimeRequest::Action action, SageMakerRuntimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SageMakerRuntimeRequest class's copy constructor.
 */
SageMakerRuntimeRequestPrivate::SageMakerRuntimeRequestPrivate(const SageMakerRuntimeRequestPrivate &other,
                                     SageMakerRuntimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SageMakerRuntimeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SageMakerRuntime service's Action
 * query parameters.
 */
QString SageMakerRuntimeRequestPrivate::toString(const SageMakerRuntimeRequest::Action &action)
{
    #define ActionToString(action) \
        case SageMakerRuntimeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SageMakerRuntime
} // namespace QtAws

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

#include "sagemakerfeaturestoreruntimerequest.h"
#include "sagemakerfeaturestoreruntimerequest_p.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeRequest
 * \brief The SageMakerFeatureStoreRuntimeRequest class provides an interface for SageMakerFeatureStoreRuntime requests.
 *
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 */

/*!
 * \enum SageMakerFeatureStoreRuntimeRequest::Action
 *
 * This enum describes the actions that can be performed as SageMakerFeatureStoreRuntime
 * requests.
 *
 * \value BatchGetRecordAction SageMakerFeatureStoreRuntime BatchGetRecord action.
 * \value DeleteRecordAction SageMakerFeatureStoreRuntime DeleteRecord action.
 * \value GetRecordAction SageMakerFeatureStoreRuntime GetRecord action.
 * \value PutRecordAction SageMakerFeatureStoreRuntime PutRecord action.
 */

/*!
 * Constructs a SageMakerFeatureStoreRuntimeRequest object for SageMakerFeatureStoreRuntime \a action.
 */
SageMakerFeatureStoreRuntimeRequest::SageMakerFeatureStoreRuntimeRequest(const Action action)
    : d_ptr(new SageMakerFeatureStoreRuntimeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SageMakerFeatureStoreRuntimeRequest::SageMakerFeatureStoreRuntimeRequest(const SageMakerFeatureStoreRuntimeRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new SageMakerFeatureStoreRuntimeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SageMakerFeatureStoreRuntimeRequest object to be equal to \a other.
 */
SageMakerFeatureStoreRuntimeRequest& SageMakerFeatureStoreRuntimeRequest::operator=(const SageMakerFeatureStoreRuntimeRequest &other)
{
    Q_D(SageMakerFeatureStoreRuntimeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SageMakerFeatureStoreRuntimeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SageMakerFeatureStoreRuntimeRequestPrivate.
 */
SageMakerFeatureStoreRuntimeRequest::SageMakerFeatureStoreRuntimeRequest(SageMakerFeatureStoreRuntimeRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the SageMakerFeatureStoreRuntime action to be performed by this request.
 */
SageMakerFeatureStoreRuntimeRequest::Action SageMakerFeatureStoreRuntimeRequest::action() const
{
    Q_D(const SageMakerFeatureStoreRuntimeRequest);
    return d->action;
}

/*!
 * Returns the name of the SageMakerFeatureStoreRuntime action to be performed by this request.
 */
QString SageMakerFeatureStoreRuntimeRequest::actionString() const
{
    return SageMakerFeatureStoreRuntimeRequestPrivate::toString(action());
}

/*!
 * Returns the SageMakerFeatureStoreRuntime API version implemented by this request.
 */
QString SageMakerFeatureStoreRuntimeRequest::apiVersion() const
{
    Q_D(const SageMakerFeatureStoreRuntimeRequest);
    return d->apiVersion;
}

/*!
 * Sets the SageMakerFeatureStoreRuntime action to be performed by this request to \a action.
 */
void SageMakerFeatureStoreRuntimeRequest::setAction(const Action action)
{
    Q_D(SageMakerFeatureStoreRuntimeRequest);
    d->action = action;
}

/*!
 * Sets the SageMakerFeatureStoreRuntime API version to include in this request to \a version.
 */
void SageMakerFeatureStoreRuntimeRequest::setApiVersion(const QString &version)
{
    Q_D(SageMakerFeatureStoreRuntimeRequest);
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
bool SageMakerFeatureStoreRuntimeRequest::operator==(const SageMakerFeatureStoreRuntimeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SageMakerFeatureStoreRuntime queue name.
 *
 * @par From SageMakerFeatureStoreRuntime FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SageMakerFeatureStoreRuntime queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SageMakerFeatureStoreRuntimeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SageMakerFeatureStoreRuntimeRequest::clearParameter(const QString &name)
{
    Q_D(SageMakerFeatureStoreRuntimeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SageMakerFeatureStoreRuntimeRequest::clearParameters()
{
    Q_D(SageMakerFeatureStoreRuntimeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SageMakerFeatureStoreRuntimeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SageMakerFeatureStoreRuntimeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SageMakerFeatureStoreRuntimeRequest::parameters() const
{
    Q_D(const SageMakerFeatureStoreRuntimeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SageMakerFeatureStoreRuntimeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SageMakerFeatureStoreRuntimeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SageMakerFeatureStoreRuntimeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SageMakerFeatureStoreRuntimeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SageMakerFeatureStoreRuntime request using the given
 * \a endpoint.
 *
 * This SageMakerFeatureStoreRuntime implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SageMakerFeatureStoreRuntimeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SageMakerFeatureStoreRuntimeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SageMakerFeatureStoreRuntime::SageMakerFeatureStoreRuntimeRequestPrivate
 * \brief The SageMakerFeatureStoreRuntimeRequestPrivate class provides private implementation for SageMakerFeatureStoreRuntimeRequest.
 * \internal
 *
 * \inmodule QtAwsSageMakerFeatureStoreRuntime
 */

/*!
 * Constructs a SageMakerFeatureStoreRuntimeRequestPrivate object for SageMakerFeatureStoreRuntime \a action,
 * with public implementation \a q.
 */
SageMakerFeatureStoreRuntimeRequestPrivate::SageMakerFeatureStoreRuntimeRequestPrivate(const SageMakerFeatureStoreRuntimeRequest::Action action, SageMakerFeatureStoreRuntimeRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SageMakerFeatureStoreRuntimeRequest class's copy constructor.
 */
SageMakerFeatureStoreRuntimeRequestPrivate::SageMakerFeatureStoreRuntimeRequestPrivate(const SageMakerFeatureStoreRuntimeRequestPrivate &other,
                                     SageMakerFeatureStoreRuntimeRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SageMakerFeatureStoreRuntimeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SageMakerFeatureStoreRuntime service's Action
 * query parameters.
 */
QString SageMakerFeatureStoreRuntimeRequestPrivate::toString(const SageMakerFeatureStoreRuntimeRequest::Action &action)
{
    #define ActionToString(action) \
        case SageMakerFeatureStoreRuntimeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

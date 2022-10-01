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

#include "kinesisvideosignalingrequest.h"
#include "kinesisvideosignalingrequest_p.h"

namespace QtAws {
namespace KinesisVideoSignaling {

/*!
 * \class QtAws::KinesisVideoSignaling::KinesisVideoSignalingRequest
 * \brief The KinesisVideoSignalingRequest class provides an interface for KinesisVideoSignaling requests.
 *
 * \inmodule QtAwsKinesisVideoSignaling
 */

/*!
 * \enum KinesisVideoSignalingRequest::Action
 *
 * This enum describes the actions that can be performed as KinesisVideoSignaling
 * requests.
 *
 * \value GetIceServerConfigAction KinesisVideoSignaling GetIceServerConfig action.
 * \value SendAlexaOfferToMasterAction KinesisVideoSignaling SendAlexaOfferToMaster action.
 */

/*!
 * Constructs a KinesisVideoSignalingRequest object for KinesisVideoSignaling \a action.
 */
KinesisVideoSignalingRequest::KinesisVideoSignalingRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new KinesisVideoSignalingRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KinesisVideoSignalingRequest::KinesisVideoSignalingRequest(const KinesisVideoSignalingRequest &other)
    : QtAws::Core::AwsAbstractRequest(new KinesisVideoSignalingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KinesisVideoSignalingRequest object to be equal to \a other.
 */
KinesisVideoSignalingRequest& KinesisVideoSignalingRequest::operator=(const KinesisVideoSignalingRequest &other)
{
    Q_D(KinesisVideoSignalingRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa KinesisVideoSignalingRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisVideoSignalingRequestPrivate.
 */
KinesisVideoSignalingRequest::KinesisVideoSignalingRequest(KinesisVideoSignalingRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the KinesisVideoSignaling action to be performed by this request.
 */
KinesisVideoSignalingRequest::Action KinesisVideoSignalingRequest::action() const
{
    Q_D(const KinesisVideoSignalingRequest);
    return d->action;
}

/*!
 * Returns the name of the KinesisVideoSignaling action to be performed by this request.
 */
QString KinesisVideoSignalingRequest::actionString() const
{
    return KinesisVideoSignalingRequestPrivate::toString(action());
}

/*!
 * Returns the KinesisVideoSignaling API version implemented by this request.
 */
QString KinesisVideoSignalingRequest::apiVersion() const
{
    Q_D(const KinesisVideoSignalingRequest);
    return d->apiVersion;
}

/*!
 * Sets the KinesisVideoSignaling action to be performed by this request to \a action.
 */
void KinesisVideoSignalingRequest::setAction(const Action action)
{
    Q_D(KinesisVideoSignalingRequest);
    d->action = action;
}

/*!
 * Sets the KinesisVideoSignaling API version to include in this request to \a version.
 */
void KinesisVideoSignalingRequest::setApiVersion(const QString &version)
{
    Q_D(KinesisVideoSignalingRequest);
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
bool KinesisVideoSignalingRequest::operator==(const KinesisVideoSignalingRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid KinesisVideoSignaling queue name.
 *
 * @par From KinesisVideoSignaling FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid KinesisVideoSignaling queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool KinesisVideoSignalingRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KinesisVideoSignalingRequest::clearParameter(const QString &name)
{
    Q_D(KinesisVideoSignalingRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KinesisVideoSignalingRequest::clearParameters()
{
    Q_D(KinesisVideoSignalingRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KinesisVideoSignalingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KinesisVideoSignalingRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KinesisVideoSignalingRequest::parameters() const
{
    Q_D(const KinesisVideoSignalingRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KinesisVideoSignalingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KinesisVideoSignalingRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KinesisVideoSignalingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KinesisVideoSignalingRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the KinesisVideoSignaling request using the given
 * \a endpoint.
 *
 * This KinesisVideoSignaling implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KinesisVideoSignalingRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const KinesisVideoSignalingRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::KinesisVideoSignaling::KinesisVideoSignalingRequestPrivate
 * \brief The KinesisVideoSignalingRequestPrivate class provides private implementation for KinesisVideoSignalingRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoSignaling
 */

/*!
 * Constructs a KinesisVideoSignalingRequestPrivate object for KinesisVideoSignaling \a action,
 * with public implementation \a q.
 */
KinesisVideoSignalingRequestPrivate::KinesisVideoSignalingRequestPrivate(const KinesisVideoSignalingRequest::Action action, KinesisVideoSignalingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-12-04"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KinesisVideoSignalingRequest class's copy constructor.
 */
KinesisVideoSignalingRequestPrivate::KinesisVideoSignalingRequestPrivate(const KinesisVideoSignalingRequestPrivate &other,
                                     KinesisVideoSignalingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KinesisVideoSignalingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the KinesisVideoSignaling service's Action
 * query parameters.
 */
QString KinesisVideoSignalingRequestPrivate::toString(const KinesisVideoSignalingRequest::Action &action)
{
    #define ActionToString(action) \
        case KinesisVideoSignalingRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(GetIceServerConfig);
        ActionToString(SendAlexaOfferToMaster);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace KinesisVideoSignaling
} // namespace QtAws

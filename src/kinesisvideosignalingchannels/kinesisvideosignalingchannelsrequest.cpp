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

#include "kinesisvideosignalingchannelsrequest.h"
#include "kinesisvideosignalingchannelsrequest_p.h"

namespace QtAws {
namespace KinesisVideoSignalingChannels {

/*!
 * \class QtAws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsRequest
 * \brief The KinesisVideoSignalingChannelsRequest class provides an interface for KinesisVideoSignalingChannels requests.
 *
 * \inmodule QtAwsKinesisVideoSignalingChannels
 */

/*!
 * \enum KinesisVideoSignalingChannelsRequest::Action
 *
 * This enum describes the actions that can be performed as KinesisVideoSignalingChannels
 * requests.
 *
 * \value GetIceServerConfigAction KinesisVideoSignalingChannels GetIceServerConfig action.
 * \value SendAlexaOfferToMasterAction KinesisVideoSignalingChannels SendAlexaOfferToMaster action.
 */

/*!
 * Constructs a KinesisVideoSignalingChannelsRequest object for KinesisVideoSignalingChannels \a action.
 */
KinesisVideoSignalingChannelsRequest::KinesisVideoSignalingChannelsRequest(const Action action)
    : d_ptr(new KinesisVideoSignalingChannelsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KinesisVideoSignalingChannelsRequest::KinesisVideoSignalingChannelsRequest(const KinesisVideoSignalingChannelsRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new KinesisVideoSignalingChannelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KinesisVideoSignalingChannelsRequest object to be equal to \a other.
 */
KinesisVideoSignalingChannelsRequest& KinesisVideoSignalingChannelsRequest::operator=(const KinesisVideoSignalingChannelsRequest &other)
{
    Q_D(KinesisVideoSignalingChannelsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa KinesisVideoSignalingChannelsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisVideoSignalingChannelsRequestPrivate.
 */
KinesisVideoSignalingChannelsRequest::KinesisVideoSignalingChannelsRequest(KinesisVideoSignalingChannelsRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the KinesisVideoSignalingChannels action to be performed by this request.
 */
KinesisVideoSignalingChannelsRequest::Action KinesisVideoSignalingChannelsRequest::action() const
{
    Q_D(const KinesisVideoSignalingChannelsRequest);
    return d->action;
}

/*!
 * Returns the name of the KinesisVideoSignalingChannels action to be performed by this request.
 */
QString KinesisVideoSignalingChannelsRequest::actionString() const
{
    return KinesisVideoSignalingChannelsRequestPrivate::toString(action());
}

/*!
 * Returns the KinesisVideoSignalingChannels API version implemented by this request.
 */
QString KinesisVideoSignalingChannelsRequest::apiVersion() const
{
    Q_D(const KinesisVideoSignalingChannelsRequest);
    return d->apiVersion;
}

/*!
 * Sets the KinesisVideoSignalingChannels action to be performed by this request to \a action.
 */
void KinesisVideoSignalingChannelsRequest::setAction(const Action action)
{
    Q_D(KinesisVideoSignalingChannelsRequest);
    d->action = action;
}

/*!
 * Sets the KinesisVideoSignalingChannels API version to include in this request to \a version.
 */
void KinesisVideoSignalingChannelsRequest::setApiVersion(const QString &version)
{
    Q_D(KinesisVideoSignalingChannelsRequest);
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
bool KinesisVideoSignalingChannelsRequest::operator==(const KinesisVideoSignalingChannelsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid KinesisVideoSignalingChannels queue name.
 *
 * @par From KinesisVideoSignalingChannels FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid KinesisVideoSignalingChannels queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool KinesisVideoSignalingChannelsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KinesisVideoSignalingChannelsRequest::clearParameter(const QString &name)
{
    Q_D(KinesisVideoSignalingChannelsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KinesisVideoSignalingChannelsRequest::clearParameters()
{
    Q_D(KinesisVideoSignalingChannelsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KinesisVideoSignalingChannelsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KinesisVideoSignalingChannelsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KinesisVideoSignalingChannelsRequest::parameters() const
{
    Q_D(const KinesisVideoSignalingChannelsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KinesisVideoSignalingChannelsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KinesisVideoSignalingChannelsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KinesisVideoSignalingChannelsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KinesisVideoSignalingChannelsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the KinesisVideoSignalingChannels request using the given
 * \a endpoint.
 *
 * This KinesisVideoSignalingChannels implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KinesisVideoSignalingChannelsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const KinesisVideoSignalingChannelsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::KinesisVideoSignalingChannels::KinesisVideoSignalingChannelsRequestPrivate
 * \brief The KinesisVideoSignalingChannelsRequestPrivate class provides private implementation for KinesisVideoSignalingChannelsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoSignalingChannels
 */

/*!
 * Constructs a KinesisVideoSignalingChannelsRequestPrivate object for KinesisVideoSignalingChannels \a action,
 * with public implementation \a q.
 */
KinesisVideoSignalingChannelsRequestPrivate::KinesisVideoSignalingChannelsRequestPrivate(const KinesisVideoSignalingChannelsRequest::Action action, KinesisVideoSignalingChannelsRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KinesisVideoSignalingChannelsRequest class's copy constructor.
 */
KinesisVideoSignalingChannelsRequestPrivate::KinesisVideoSignalingChannelsRequestPrivate(const KinesisVideoSignalingChannelsRequestPrivate &other,
                                     KinesisVideoSignalingChannelsRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KinesisVideoSignalingChannelsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the KinesisVideoSignalingChannels service's Action
 * query parameters.
 */
QString KinesisVideoSignalingChannelsRequestPrivate::toString(const KinesisVideoSignalingChannelsRequest::Action &action)
{
    #define ActionToString(action) \
        case KinesisVideoSignalingChannelsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(GetIceServerConfig);
        ActionToString(SendAlexaOfferToMaster);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace KinesisVideoSignalingChannels
} // namespace QtAws

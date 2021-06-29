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

#include "kinesisvideorequest.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::KinesisVideoRequest
 * \brief The KinesisVideoRequest class provides an interface for KinesisVideo requests.
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * \enum KinesisVideoRequest::Action
 *
 * This enum describes the actions that can be performed as KinesisVideo
 * requests.
 *
 * \value CreateSignalingChannelAction KinesisVideo CreateSignalingChannel action.
 * \value CreateStreamAction KinesisVideo CreateStream action.
 * \value DeleteSignalingChannelAction KinesisVideo DeleteSignalingChannel action.
 * \value DeleteStreamAction KinesisVideo DeleteStream action.
 * \value DescribeSignalingChannelAction KinesisVideo DescribeSignalingChannel action.
 * \value DescribeStreamAction KinesisVideo DescribeStream action.
 * \value GetDataEndpointAction KinesisVideo GetDataEndpoint action.
 * \value GetSignalingChannelEndpointAction KinesisVideo GetSignalingChannelEndpoint action.
 * \value ListSignalingChannelsAction KinesisVideo ListSignalingChannels action.
 * \value ListStreamsAction KinesisVideo ListStreams action.
 * \value ListTagsForResourceAction KinesisVideo ListTagsForResource action.
 * \value ListTagsForStreamAction KinesisVideo ListTagsForStream action.
 * \value TagResourceAction KinesisVideo TagResource action.
 * \value TagStreamAction KinesisVideo TagStream action.
 * \value UntagResourceAction KinesisVideo UntagResource action.
 * \value UntagStreamAction KinesisVideo UntagStream action.
 * \value UpdateDataRetentionAction KinesisVideo UpdateDataRetention action.
 * \value UpdateSignalingChannelAction KinesisVideo UpdateSignalingChannel action.
 * \value UpdateStreamAction KinesisVideo UpdateStream action.
 */

/*!
 * Constructs a KinesisVideoRequest object for KinesisVideo \a action.
 */
KinesisVideoRequest::KinesisVideoRequest(const Action action)
    : d_ptr(new KinesisVideoRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KinesisVideoRequest::KinesisVideoRequest(const KinesisVideoRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new KinesisVideoRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KinesisVideoRequest object to be equal to \a other.
 */
KinesisVideoRequest& KinesisVideoRequest::operator=(const KinesisVideoRequest &other)
{
    Q_D(KinesisVideoRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa KinesisVideoRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisVideoRequestPrivate.
 */
KinesisVideoRequest::KinesisVideoRequest(KinesisVideoRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the KinesisVideo action to be performed by this request.
 */
KinesisVideoRequest::Action KinesisVideoRequest::action() const
{
    Q_D(const KinesisVideoRequest);
    return d->action;
}

/*!
 * Returns the name of the KinesisVideo action to be performed by this request.
 */
QString KinesisVideoRequest::actionString() const
{
    return KinesisVideoRequestPrivate::toString(action());
}

/*!
 * Returns the KinesisVideo API version implemented by this request.
 */
QString KinesisVideoRequest::apiVersion() const
{
    Q_D(const KinesisVideoRequest);
    return d->apiVersion;
}

/*!
 * Sets the KinesisVideo action to be performed by this request to \a action.
 */
void KinesisVideoRequest::setAction(const Action action)
{
    Q_D(KinesisVideoRequest);
    d->action = action;
}

/*!
 * Sets the KinesisVideo API version to include in this request to \a version.
 */
void KinesisVideoRequest::setApiVersion(const QString &version)
{
    Q_D(KinesisVideoRequest);
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
bool KinesisVideoRequest::operator==(const KinesisVideoRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid KinesisVideo queue name.
 *
 * @par From KinesisVideo FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid KinesisVideo queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool KinesisVideoRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KinesisVideoRequest::clearParameter(const QString &name)
{
    Q_D(KinesisVideoRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KinesisVideoRequest::clearParameters()
{
    Q_D(KinesisVideoRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KinesisVideoRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KinesisVideoRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KinesisVideoRequest::parameters() const
{
    Q_D(const KinesisVideoRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KinesisVideoRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KinesisVideoRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KinesisVideoRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KinesisVideoRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the KinesisVideo request using the given
 * \a endpoint.
 *
 * This KinesisVideo implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KinesisVideoRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const KinesisVideoRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::KinesisVideo::KinesisVideoRequestPrivate
 * \brief The KinesisVideoRequestPrivate class provides private implementation for KinesisVideoRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a KinesisVideoRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
KinesisVideoRequestPrivate::KinesisVideoRequestPrivate(const KinesisVideoRequest::Action action, KinesisVideoRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KinesisVideoRequest class's copy constructor.
 */
KinesisVideoRequestPrivate::KinesisVideoRequestPrivate(const KinesisVideoRequestPrivate &other,
                                     KinesisVideoRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KinesisVideoRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the KinesisVideo service's Action
 * query parameters.
 */
QString KinesisVideoRequestPrivate::toString(const KinesisVideoRequest::Action &action)
{
    #define ActionToString(action) \
        case KinesisVideoRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateSignalingChannel);
        ActionToString(CreateStream);
        ActionToString(DeleteSignalingChannel);
        ActionToString(DeleteStream);
        ActionToString(DescribeSignalingChannel);
        ActionToString(DescribeStream);
        ActionToString(GetDataEndpoint);
        ActionToString(GetSignalingChannelEndpoint);
        ActionToString(ListSignalingChannels);
        ActionToString(ListStreams);
        ActionToString(ListTagsForResource);
        ActionToString(ListTagsForStream);
        ActionToString(TagResource);
        ActionToString(TagStream);
        ActionToString(UntagResource);
        ActionToString(UntagStream);
        ActionToString(UpdateDataRetention);
        ActionToString(UpdateSignalingChannel);
        ActionToString(UpdateStream);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace KinesisVideo
} // namespace QtAws

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

#include "ivsrequest.h"
#include "ivsrequest_p.h"

namespace QtAws {
namespace Ivs {

/*!
 * \class QtAws::Ivs::IvsRequest
 * \brief The IvsRequest class provides an interface for Ivs requests.
 *
 * \inmodule QtAwsIvs
 */

/*!
 * \enum IvsRequest::Action
 *
 * This enum describes the actions that can be performed as Ivs
 * requests.
 *
 * \value BatchGetChannelAction Ivs BatchGetChannel action.
 * \value BatchGetStreamKeyAction Ivs BatchGetStreamKey action.
 * \value CreateChannelAction Ivs CreateChannel action.
 * \value CreateRecordingConfigurationAction Ivs CreateRecordingConfiguration action.
 * \value CreateStreamKeyAction Ivs CreateStreamKey action.
 * \value DeleteChannelAction Ivs DeleteChannel action.
 * \value DeletePlaybackKeyPairAction Ivs DeletePlaybackKeyPair action.
 * \value DeleteRecordingConfigurationAction Ivs DeleteRecordingConfiguration action.
 * \value DeleteStreamKeyAction Ivs DeleteStreamKey action.
 * \value GetChannelAction Ivs GetChannel action.
 * \value GetPlaybackKeyPairAction Ivs GetPlaybackKeyPair action.
 * \value GetRecordingConfigurationAction Ivs GetRecordingConfiguration action.
 * \value GetStreamAction Ivs GetStream action.
 * \value GetStreamKeyAction Ivs GetStreamKey action.
 * \value GetStreamSessionAction Ivs GetStreamSession action.
 * \value ImportPlaybackKeyPairAction Ivs ImportPlaybackKeyPair action.
 * \value ListChannelsAction Ivs ListChannels action.
 * \value ListPlaybackKeyPairsAction Ivs ListPlaybackKeyPairs action.
 * \value ListRecordingConfigurationsAction Ivs ListRecordingConfigurations action.
 * \value ListStreamKeysAction Ivs ListStreamKeys action.
 * \value ListStreamSessionsAction Ivs ListStreamSessions action.
 * \value ListStreamsAction Ivs ListStreams action.
 * \value ListTagsForResourceAction Ivs ListTagsForResource action.
 * \value PutMetadataAction Ivs PutMetadata action.
 * \value StopStreamAction Ivs StopStream action.
 * \value TagResourceAction Ivs TagResource action.
 * \value UntagResourceAction Ivs UntagResource action.
 * \value UpdateChannelAction Ivs UpdateChannel action.
 */

/*!
 * Constructs a IvsRequest object for Ivs \a action.
 */
IvsRequest::IvsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IvsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IvsRequest::IvsRequest(const IvsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IvsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IvsRequest object to be equal to \a other.
 */
IvsRequest& IvsRequest::operator=(const IvsRequest &other)
{
    Q_D(IvsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IvsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IvsRequestPrivate.
 */
IvsRequest::IvsRequest(IvsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Ivs action to be performed by this request.
 */
IvsRequest::Action IvsRequest::action() const
{
    Q_D(const IvsRequest);
    return d->action;
}

/*!
 * Returns the name of the Ivs action to be performed by this request.
 */
QString IvsRequest::actionString() const
{
    return IvsRequestPrivate::toString(action());
}

/*!
 * Returns the Ivs API version implemented by this request.
 */
QString IvsRequest::apiVersion() const
{
    Q_D(const IvsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Ivs action to be performed by this request to \a action.
 */
void IvsRequest::setAction(const Action action)
{
    Q_D(IvsRequest);
    d->action = action;
}

/*!
 * Sets the Ivs API version to include in this request to \a version.
 */
void IvsRequest::setApiVersion(const QString &version)
{
    Q_D(IvsRequest);
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
bool IvsRequest::operator==(const IvsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Ivs queue name.
 *
 * @par From Ivs FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Ivs queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IvsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IvsRequest::clearParameter(const QString &name)
{
    Q_D(IvsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IvsRequest::clearParameters()
{
    Q_D(IvsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IvsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IvsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IvsRequest::parameters() const
{
    Q_D(const IvsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IvsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IvsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IvsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IvsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Ivs request using the given
 * \a endpoint.
 *
 * This Ivs implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IvsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IvsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Ivs::IvsRequestPrivate
 * \brief The IvsRequestPrivate class provides private implementation for IvsRequest.
 * \internal
 *
 * \inmodule QtAwsIvs
 */

/*!
 * Constructs a IvsRequestPrivate object for Ivs \a action,
 * with public implementation \a q.
 */
IvsRequestPrivate::IvsRequestPrivate(const IvsRequest::Action action, IvsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-07-14"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IvsRequest class's copy constructor.
 */
IvsRequestPrivate::IvsRequestPrivate(const IvsRequestPrivate &other,
                                     IvsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IvsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Ivs service's Action
 * query parameters.
 */
QString IvsRequestPrivate::toString(const IvsRequest::Action &action)
{
    #define ActionToString(action) \
        case IvsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchGetChannel);
        ActionToString(BatchGetStreamKey);
        ActionToString(CreateChannel);
        ActionToString(CreateRecordingConfiguration);
        ActionToString(CreateStreamKey);
        ActionToString(DeleteChannel);
        ActionToString(DeletePlaybackKeyPair);
        ActionToString(DeleteRecordingConfiguration);
        ActionToString(DeleteStreamKey);
        ActionToString(GetChannel);
        ActionToString(GetPlaybackKeyPair);
        ActionToString(GetRecordingConfiguration);
        ActionToString(GetStream);
        ActionToString(GetStreamKey);
        ActionToString(GetStreamSession);
        ActionToString(ImportPlaybackKeyPair);
        ActionToString(ListChannels);
        ActionToString(ListPlaybackKeyPairs);
        ActionToString(ListRecordingConfigurations);
        ActionToString(ListStreamKeys);
        ActionToString(ListStreamSessions);
        ActionToString(ListStreams);
        ActionToString(ListTagsForResource);
        ActionToString(PutMetadata);
        ActionToString(StopStream);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateChannel);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Ivs
} // namespace QtAws

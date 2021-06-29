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
namespace IVS {

/*!
 * \class QtAws::IVS::IvsRequest
 * \brief The IvsRequest class provides an interface for IVS requests.
 *
 * \inmodule QtAwsIVS
 */

/*!
 * \enum IvsRequest::Action
 *
 * This enum describes the actions that can be performed as IVS
 * requests.
 *
 * \value BatchGetChannelAction IVS BatchGetChannel action.
 * \value BatchGetStreamKeyAction IVS BatchGetStreamKey action.
 * \value CreateChannelAction IVS CreateChannel action.
 * \value CreateRecordingConfigurationAction IVS CreateRecordingConfiguration action.
 * \value CreateStreamKeyAction IVS CreateStreamKey action.
 * \value DeleteChannelAction IVS DeleteChannel action.
 * \value DeletePlaybackKeyPairAction IVS DeletePlaybackKeyPair action.
 * \value DeleteRecordingConfigurationAction IVS DeleteRecordingConfiguration action.
 * \value DeleteStreamKeyAction IVS DeleteStreamKey action.
 * \value GetChannelAction IVS GetChannel action.
 * \value GetPlaybackKeyPairAction IVS GetPlaybackKeyPair action.
 * \value GetRecordingConfigurationAction IVS GetRecordingConfiguration action.
 * \value GetStreamAction IVS GetStream action.
 * \value GetStreamKeyAction IVS GetStreamKey action.
 * \value ImportPlaybackKeyPairAction IVS ImportPlaybackKeyPair action.
 * \value ListChannelsAction IVS ListChannels action.
 * \value ListPlaybackKeyPairsAction IVS ListPlaybackKeyPairs action.
 * \value ListRecordingConfigurationsAction IVS ListRecordingConfigurations action.
 * \value ListStreamKeysAction IVS ListStreamKeys action.
 * \value ListStreamsAction IVS ListStreams action.
 * \value ListTagsForResourceAction IVS ListTagsForResource action.
 * \value PutMetadataAction IVS PutMetadata action.
 * \value StopStreamAction IVS StopStream action.
 * \value TagResourceAction IVS TagResource action.
 * \value UntagResourceAction IVS UntagResource action.
 * \value UpdateChannelAction IVS UpdateChannel action.
 */

/*!
 * Constructs a IvsRequest object for IVS \a action.
 */
IvsRequest::IvsRequest(const Action action)
    : d_ptr(new IvsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IvsRequest::IvsRequest(const IvsRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new IvsRequestPrivate(*other.d_func(), this))
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
IvsRequest::IvsRequest(IvsRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the IVS action to be performed by this request.
 */
IvsRequest::Action IvsRequest::action() const
{
    Q_D(const IvsRequest);
    return d->action;
}

/*!
 * Returns the name of the IVS action to be performed by this request.
 */
QString IvsRequest::actionString() const
{
    return IvsRequestPrivate::toString(action());
}

/*!
 * Returns the IVS API version implemented by this request.
 */
QString IvsRequest::apiVersion() const
{
    Q_D(const IvsRequest);
    return d->apiVersion;
}

/*!
 * Sets the IVS action to be performed by this request to \a action.
 */
void IvsRequest::setAction(const Action action)
{
    Q_D(IvsRequest);
    d->action = action;
}

/*!
 * Sets the IVS API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid IVS queue name.
 *
 * @par From IVS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IVS queue name, \c false otherwise.
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
 * Returns a network request for the IVS request using the given
 * \a endpoint.
 *
 * This IVS implementation builds request URLs by combining the
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
 * \class QtAws::IVS::IvsRequestPrivate
 * \brief The IvsRequestPrivate class provides private implementation for IvsRequest.
 * \internal
 *
 * \inmodule QtAwsIVS
 */

/*!
 * Constructs a IvsRequestPrivate object for IVS \a action,
 * with public implementation \a q.
 */
IvsRequestPrivate::IvsRequestPrivate(const IvsRequest::Action action, IvsRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
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
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IvsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IVS service's Action
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
        ActionToString(ImportPlaybackKeyPair);
        ActionToString(ListChannels);
        ActionToString(ListPlaybackKeyPairs);
        ActionToString(ListRecordingConfigurations);
        ActionToString(ListStreamKeys);
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

} // namespace IVS
} // namespace QtAws

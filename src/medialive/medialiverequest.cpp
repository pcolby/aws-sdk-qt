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

#include "medialiverequest.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::MediaLiveRequest
 * \brief The MediaLiveRequest class provides an interface for MediaLive requests.
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * \enum MediaLiveRequest::Action
 *
 * This enum describes the actions that can be performed as MediaLive
 * requests.
 *
 * \value AcceptInputDeviceTransferAction MediaLive AcceptInputDeviceTransfer action.
 * \value BatchDeleteAction MediaLive BatchDelete action.
 * \value BatchStartAction MediaLive BatchStart action.
 * \value BatchStopAction MediaLive BatchStop action.
 * \value BatchUpdateScheduleAction MediaLive BatchUpdateSchedule action.
 * \value CancelInputDeviceTransferAction MediaLive CancelInputDeviceTransfer action.
 * \value CreateChannelAction MediaLive CreateChannel action.
 * \value CreateInputAction MediaLive CreateInput action.
 * \value CreateInputSecurityGroupAction MediaLive CreateInputSecurityGroup action.
 * \value CreateMultiplexAction MediaLive CreateMultiplex action.
 * \value CreateMultiplexProgramAction MediaLive CreateMultiplexProgram action.
 * \value CreatePartnerInputAction MediaLive CreatePartnerInput action.
 * \value CreateTagsAction MediaLive CreateTags action.
 * \value DeleteChannelAction MediaLive DeleteChannel action.
 * \value DeleteInputAction MediaLive DeleteInput action.
 * \value DeleteInputSecurityGroupAction MediaLive DeleteInputSecurityGroup action.
 * \value DeleteMultiplexAction MediaLive DeleteMultiplex action.
 * \value DeleteMultiplexProgramAction MediaLive DeleteMultiplexProgram action.
 * \value DeleteReservationAction MediaLive DeleteReservation action.
 * \value DeleteScheduleAction MediaLive DeleteSchedule action.
 * \value DeleteTagsAction MediaLive DeleteTags action.
 * \value DescribeChannelAction MediaLive DescribeChannel action.
 * \value DescribeInputAction MediaLive DescribeInput action.
 * \value DescribeInputDeviceAction MediaLive DescribeInputDevice action.
 * \value DescribeInputDeviceThumbnailAction MediaLive DescribeInputDeviceThumbnail action.
 * \value DescribeInputSecurityGroupAction MediaLive DescribeInputSecurityGroup action.
 * \value DescribeMultiplexAction MediaLive DescribeMultiplex action.
 * \value DescribeMultiplexProgramAction MediaLive DescribeMultiplexProgram action.
 * \value DescribeOfferingAction MediaLive DescribeOffering action.
 * \value DescribeReservationAction MediaLive DescribeReservation action.
 * \value DescribeScheduleAction MediaLive DescribeSchedule action.
 * \value ListChannelsAction MediaLive ListChannels action.
 * \value ListInputDeviceTransfersAction MediaLive ListInputDeviceTransfers action.
 * \value ListInputDevicesAction MediaLive ListInputDevices action.
 * \value ListInputSecurityGroupsAction MediaLive ListInputSecurityGroups action.
 * \value ListInputsAction MediaLive ListInputs action.
 * \value ListMultiplexProgramsAction MediaLive ListMultiplexPrograms action.
 * \value ListMultiplexesAction MediaLive ListMultiplexes action.
 * \value ListOfferingsAction MediaLive ListOfferings action.
 * \value ListReservationsAction MediaLive ListReservations action.
 * \value ListTagsForResourceAction MediaLive ListTagsForResource action.
 * \value PurchaseOfferingAction MediaLive PurchaseOffering action.
 * \value RejectInputDeviceTransferAction MediaLive RejectInputDeviceTransfer action.
 * \value StartChannelAction MediaLive StartChannel action.
 * \value StartMultiplexAction MediaLive StartMultiplex action.
 * \value StopChannelAction MediaLive StopChannel action.
 * \value StopMultiplexAction MediaLive StopMultiplex action.
 * \value TransferInputDeviceAction MediaLive TransferInputDevice action.
 * \value UpdateChannelAction MediaLive UpdateChannel action.
 * \value UpdateChannelClassAction MediaLive UpdateChannelClass action.
 * \value UpdateInputAction MediaLive UpdateInput action.
 * \value UpdateInputDeviceAction MediaLive UpdateInputDevice action.
 * \value UpdateInputSecurityGroupAction MediaLive UpdateInputSecurityGroup action.
 * \value UpdateMultiplexAction MediaLive UpdateMultiplex action.
 * \value UpdateMultiplexProgramAction MediaLive UpdateMultiplexProgram action.
 * \value UpdateReservationAction MediaLive UpdateReservation action.
 */

/*!
 * Constructs a MediaLiveRequest object for MediaLive \a action.
 */
MediaLiveRequest::MediaLiveRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MediaLiveRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MediaLiveRequest::MediaLiveRequest(const MediaLiveRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MediaLiveRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MediaLiveRequest object to be equal to \a other.
 */
MediaLiveRequest& MediaLiveRequest::operator=(const MediaLiveRequest &other)
{
    Q_D(MediaLiveRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MediaLiveRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaLiveRequestPrivate.
 */
MediaLiveRequest::MediaLiveRequest(MediaLiveRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MediaLive action to be performed by this request.
 */
MediaLiveRequest::Action MediaLiveRequest::action() const
{
    Q_D(const MediaLiveRequest);
    return d->action;
}

/*!
 * Returns the name of the MediaLive action to be performed by this request.
 */
QString MediaLiveRequest::actionString() const
{
    return MediaLiveRequestPrivate::toString(action());
}

/*!
 * Returns the MediaLive API version implemented by this request.
 */
QString MediaLiveRequest::apiVersion() const
{
    Q_D(const MediaLiveRequest);
    return d->apiVersion;
}

/*!
 * Sets the MediaLive action to be performed by this request to \a action.
 */
void MediaLiveRequest::setAction(const Action action)
{
    Q_D(MediaLiveRequest);
    d->action = action;
}

/*!
 * Sets the MediaLive API version to include in this request to \a version.
 */
void MediaLiveRequest::setApiVersion(const QString &version)
{
    Q_D(MediaLiveRequest);
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
bool MediaLiveRequest::operator==(const MediaLiveRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MediaLive queue name.
 *
 * @par From MediaLive FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MediaLive queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MediaLiveRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MediaLiveRequest::clearParameter(const QString &name)
{
    Q_D(MediaLiveRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MediaLiveRequest::clearParameters()
{
    Q_D(MediaLiveRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MediaLiveRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MediaLiveRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MediaLiveRequest::parameters() const
{
    Q_D(const MediaLiveRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MediaLiveRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MediaLiveRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MediaLiveRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MediaLiveRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MediaLive request using the given
 * \a endpoint.
 *
 * This MediaLive implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MediaLiveRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MediaLiveRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MediaLive::MediaLiveRequestPrivate
 * \brief The MediaLiveRequestPrivate class provides private implementation for MediaLiveRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a MediaLiveRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
MediaLiveRequestPrivate::MediaLiveRequestPrivate(const MediaLiveRequest::Action action, MediaLiveRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MediaLiveRequest class's copy constructor.
 */
MediaLiveRequestPrivate::MediaLiveRequestPrivate(const MediaLiveRequestPrivate &other,
                                     MediaLiveRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MediaLiveRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MediaLive service's Action
 * query parameters.
 */
QString MediaLiveRequestPrivate::toString(const MediaLiveRequest::Action &action)
{
    #define ActionToString(action) \
        case MediaLiveRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MediaLive
} // namespace QtAws

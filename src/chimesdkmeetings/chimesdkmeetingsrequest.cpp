// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "chimesdkmeetingsrequest.h"
#include "chimesdkmeetingsrequest_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

/*!
 * \class QtAws::ChimeSdkMeetings::ChimeSdkMeetingsRequest
 * \brief The ChimeSdkMeetingsRequest class provides an interface for ChimeSdkMeetings requests.
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * \enum ChimeSdkMeetingsRequest::Action
 *
 * This enum describes the actions that can be performed as ChimeSdkMeetings
 * requests.
 *
 * \value BatchCreateAttendeeAction ChimeSdkMeetings BatchCreateAttendee action.
 * \value BatchUpdateAttendeeCapabilitiesExceptAction ChimeSdkMeetings BatchUpdateAttendeeCapabilitiesExcept action.
 * \value CreateAttendeeAction ChimeSdkMeetings CreateAttendee action.
 * \value CreateMeetingAction ChimeSdkMeetings CreateMeeting action.
 * \value CreateMeetingWithAttendeesAction ChimeSdkMeetings CreateMeetingWithAttendees action.
 * \value DeleteAttendeeAction ChimeSdkMeetings DeleteAttendee action.
 * \value DeleteMeetingAction ChimeSdkMeetings DeleteMeeting action.
 * \value GetAttendeeAction ChimeSdkMeetings GetAttendee action.
 * \value GetMeetingAction ChimeSdkMeetings GetMeeting action.
 * \value ListAttendeesAction ChimeSdkMeetings ListAttendees action.
 * \value ListTagsForResourceAction ChimeSdkMeetings ListTagsForResource action.
 * \value StartMeetingTranscriptionAction ChimeSdkMeetings StartMeetingTranscription action.
 * \value StopMeetingTranscriptionAction ChimeSdkMeetings StopMeetingTranscription action.
 * \value TagResourceAction ChimeSdkMeetings TagResource action.
 * \value UntagResourceAction ChimeSdkMeetings UntagResource action.
 * \value UpdateAttendeeCapabilitiesAction ChimeSdkMeetings UpdateAttendeeCapabilities action.
 */

/*!
 * Constructs a ChimeSdkMeetingsRequest object for ChimeSdkMeetings \a action.
 */
ChimeSdkMeetingsRequest::ChimeSdkMeetingsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ChimeSdkMeetingsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ChimeSdkMeetingsRequest::ChimeSdkMeetingsRequest(const ChimeSdkMeetingsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ChimeSdkMeetingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ChimeSdkMeetingsRequest object to be equal to \a other.
 */
ChimeSdkMeetingsRequest& ChimeSdkMeetingsRequest::operator=(const ChimeSdkMeetingsRequest &other)
{
    Q_D(ChimeSdkMeetingsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ChimeSdkMeetingsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ChimeSdkMeetingsRequestPrivate.
 */
ChimeSdkMeetingsRequest::ChimeSdkMeetingsRequest(ChimeSdkMeetingsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ChimeSdkMeetings action to be performed by this request.
 */
ChimeSdkMeetingsRequest::Action ChimeSdkMeetingsRequest::action() const
{
    Q_D(const ChimeSdkMeetingsRequest);
    return d->action;
}

/*!
 * Returns the name of the ChimeSdkMeetings action to be performed by this request.
 */
QString ChimeSdkMeetingsRequest::actionString() const
{
    return ChimeSdkMeetingsRequestPrivate::toString(action());
}

/*!
 * Returns the ChimeSdkMeetings API version implemented by this request.
 */
QString ChimeSdkMeetingsRequest::apiVersion() const
{
    Q_D(const ChimeSdkMeetingsRequest);
    return d->apiVersion;
}

/*!
 * Sets the ChimeSdkMeetings action to be performed by this request to \a action.
 */
void ChimeSdkMeetingsRequest::setAction(const Action action)
{
    Q_D(ChimeSdkMeetingsRequest);
    d->action = action;
}

/*!
 * Sets the ChimeSdkMeetings API version to include in this request to \a version.
 */
void ChimeSdkMeetingsRequest::setApiVersion(const QString &version)
{
    Q_D(ChimeSdkMeetingsRequest);
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
bool ChimeSdkMeetingsRequest::operator==(const ChimeSdkMeetingsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ChimeSdkMeetings queue name.
 *
 * @par From ChimeSdkMeetings FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ChimeSdkMeetings queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ChimeSdkMeetingsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ChimeSdkMeetingsRequest::clearParameter(const QString &name)
{
    Q_D(ChimeSdkMeetingsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ChimeSdkMeetingsRequest::clearParameters()
{
    Q_D(ChimeSdkMeetingsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ChimeSdkMeetingsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ChimeSdkMeetingsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ChimeSdkMeetingsRequest::parameters() const
{
    Q_D(const ChimeSdkMeetingsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ChimeSdkMeetingsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ChimeSdkMeetingsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ChimeSdkMeetingsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ChimeSdkMeetingsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ChimeSdkMeetings request using the given
 * \a endpoint.
 *
 * This ChimeSdkMeetings implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ChimeSdkMeetingsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ChimeSdkMeetingsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ChimeSdkMeetings::ChimeSdkMeetingsRequestPrivate
 * \brief The ChimeSdkMeetingsRequestPrivate class provides private implementation for ChimeSdkMeetingsRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMeetings
 */

/*!
 * Constructs a ChimeSdkMeetingsRequestPrivate object for ChimeSdkMeetings \a action,
 * with public implementation \a q.
 */
ChimeSdkMeetingsRequestPrivate::ChimeSdkMeetingsRequestPrivate(const ChimeSdkMeetingsRequest::Action action, ChimeSdkMeetingsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-07-15"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ChimeSdkMeetingsRequest class's copy constructor.
 */
ChimeSdkMeetingsRequestPrivate::ChimeSdkMeetingsRequestPrivate(const ChimeSdkMeetingsRequestPrivate &other,
                                     ChimeSdkMeetingsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ChimeSdkMeetingsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ChimeSdkMeetings service's Action
 * query parameters.
 */
QString ChimeSdkMeetingsRequestPrivate::toString(const ChimeSdkMeetingsRequest::Action &action)
{
    #define ActionToString(action) \
        case ChimeSdkMeetingsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchCreateAttendee);
        ActionToString(BatchUpdateAttendeeCapabilitiesExcept);
        ActionToString(CreateAttendee);
        ActionToString(CreateMeeting);
        ActionToString(CreateMeetingWithAttendees);
        ActionToString(DeleteAttendee);
        ActionToString(DeleteMeeting);
        ActionToString(GetAttendee);
        ActionToString(GetMeeting);
        ActionToString(ListAttendees);
        ActionToString(ListTagsForResource);
        ActionToString(StartMeetingTranscription);
        ActionToString(StopMeetingTranscription);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAttendeeCapabilities);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ChimeSdkMeetings
} // namespace QtAws

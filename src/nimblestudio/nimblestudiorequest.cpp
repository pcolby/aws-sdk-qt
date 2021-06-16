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

#include "nimblestudiorequest.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::NimbleStudioRequest
 * \brief The NimbleStudioRequest class provides an interface for NimbleStudio requests.
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * \enum NimbleStudioRequest::Action
 *
 * This enum describes the actions that can be performed as NimbleStudio
 * requests.
 *
 * \value AcceptEulasAction NimbleStudio AcceptEulas action.
 * \value CreateLaunchProfileAction NimbleStudio CreateLaunchProfile action.
 * \value CreateStreamingImageAction NimbleStudio CreateStreamingImage action.
 * \value CreateStreamingSessionAction NimbleStudio CreateStreamingSession action.
 * \value CreateStreamingSessionStreamAction NimbleStudio CreateStreamingSessionStream action.
 * \value CreateStudioAction NimbleStudio CreateStudio action.
 * \value CreateStudioComponentAction NimbleStudio CreateStudioComponent action.
 * \value DeleteLaunchProfileAction NimbleStudio DeleteLaunchProfile action.
 * \value DeleteLaunchProfileMemberAction NimbleStudio DeleteLaunchProfileMember action.
 * \value DeleteStreamingImageAction NimbleStudio DeleteStreamingImage action.
 * \value DeleteStreamingSessionAction NimbleStudio DeleteStreamingSession action.
 * \value DeleteStudioAction NimbleStudio DeleteStudio action.
 * \value DeleteStudioComponentAction NimbleStudio DeleteStudioComponent action.
 * \value DeleteStudioMemberAction NimbleStudio DeleteStudioMember action.
 * \value GetEulaAction NimbleStudio GetEula action.
 * \value GetLaunchProfileAction NimbleStudio GetLaunchProfile action.
 * \value GetLaunchProfileDetailsAction NimbleStudio GetLaunchProfileDetails action.
 * \value GetLaunchProfileInitializationAction NimbleStudio GetLaunchProfileInitialization action.
 * \value GetLaunchProfileMemberAction NimbleStudio GetLaunchProfileMember action.
 * \value GetStreamingImageAction NimbleStudio GetStreamingImage action.
 * \value GetStreamingSessionAction NimbleStudio GetStreamingSession action.
 * \value GetStreamingSessionStreamAction NimbleStudio GetStreamingSessionStream action.
 * \value GetStudioAction NimbleStudio GetStudio action.
 * \value GetStudioComponentAction NimbleStudio GetStudioComponent action.
 * \value GetStudioMemberAction NimbleStudio GetStudioMember action.
 * \value ListEulaAcceptancesAction NimbleStudio ListEulaAcceptances action.
 * \value ListEulasAction NimbleStudio ListEulas action.
 * \value ListLaunchProfileMembersAction NimbleStudio ListLaunchProfileMembers action.
 * \value ListLaunchProfilesAction NimbleStudio ListLaunchProfiles action.
 * \value ListStreamingImagesAction NimbleStudio ListStreamingImages action.
 * \value ListStreamingSessionsAction NimbleStudio ListStreamingSessions action.
 * \value ListStudioComponentsAction NimbleStudio ListStudioComponents action.
 * \value ListStudioMembersAction NimbleStudio ListStudioMembers action.
 * \value ListStudiosAction NimbleStudio ListStudios action.
 * \value ListTagsForResourceAction NimbleStudio ListTagsForResource action.
 * \value PutLaunchProfileMembersAction NimbleStudio PutLaunchProfileMembers action.
 * \value PutStudioMembersAction NimbleStudio PutStudioMembers action.
 * \value StartStudioSSOConfigurationRepairAction NimbleStudio StartStudioSSOConfigurationRepair action.
 * \value TagResourceAction NimbleStudio TagResource action.
 * \value UntagResourceAction NimbleStudio UntagResource action.
 * \value UpdateLaunchProfileAction NimbleStudio UpdateLaunchProfile action.
 * \value UpdateLaunchProfileMemberAction NimbleStudio UpdateLaunchProfileMember action.
 * \value UpdateStreamingImageAction NimbleStudio UpdateStreamingImage action.
 * \value UpdateStudioAction NimbleStudio UpdateStudio action.
 * \value UpdateStudioComponentAction NimbleStudio UpdateStudioComponent action.
 */

/*!
 * Constructs a NimbleStudioRequest object for NimbleStudio \a action.
 */
NimbleStudioRequest::NimbleStudioRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new NimbleStudioRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
NimbleStudioRequest::NimbleStudioRequest(const NimbleStudioRequest &other)
    : QtAws::Core::AwsAbstractRequest(new NimbleStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the NimbleStudioRequest object to be equal to \a other.
 */
NimbleStudioRequest& NimbleStudioRequest::operator=(const NimbleStudioRequest &other)
{
    Q_D(NimbleStudioRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa NimbleStudioRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from NimbleStudioRequestPrivate.
 */
NimbleStudioRequest::NimbleStudioRequest(NimbleStudioRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the NimbleStudio action to be performed by this request.
 */
NimbleStudioRequest::Action NimbleStudioRequest::action() const
{
    Q_D(const NimbleStudioRequest);
    return d->action;
}

/*!
 * Returns the name of the NimbleStudio action to be performed by this request.
 */
QString NimbleStudioRequest::actionString() const
{
    return NimbleStudioRequestPrivate::toString(action());
}

/*!
 * Returns the NimbleStudio API version implemented by this request.
 */
QString NimbleStudioRequest::apiVersion() const
{
    Q_D(const NimbleStudioRequest);
    return d->apiVersion;
}

/*!
 * Sets the NimbleStudio action to be performed by this request to \a action.
 */
void NimbleStudioRequest::setAction(const Action action)
{
    Q_D(NimbleStudioRequest);
    d->action = action;
}

/*!
 * Sets the NimbleStudio API version to include in this request to \a version.
 */
void NimbleStudioRequest::setApiVersion(const QString &version)
{
    Q_D(NimbleStudioRequest);
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
bool NimbleStudioRequest::operator==(const NimbleStudioRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid NimbleStudio queue name.
 *
 * @par From NimbleStudio FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid NimbleStudio queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool NimbleStudioRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int NimbleStudioRequest::clearParameter(const QString &name)
{
    Q_D(NimbleStudioRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void NimbleStudioRequest::clearParameters()
{
    Q_D(NimbleStudioRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant NimbleStudioRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const NimbleStudioRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &NimbleStudioRequest::parameters() const
{
    Q_D(const NimbleStudioRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void NimbleStudioRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(NimbleStudioRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void NimbleStudioRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(NimbleStudioRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the NimbleStudio request using the given
 * \a endpoint.
 *
 * This NimbleStudio implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest NimbleStudioRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const NimbleStudioRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::NimbleStudio::NimbleStudioRequestPrivate
 * \brief The NimbleStudioRequestPrivate class provides private implementation for NimbleStudioRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a NimbleStudioRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
NimbleStudioRequestPrivate::NimbleStudioRequestPrivate(const NimbleStudioRequest::Action action, NimbleStudioRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the NimbleStudioRequest class's copy constructor.
 */
NimbleStudioRequestPrivate::NimbleStudioRequestPrivate(const NimbleStudioRequestPrivate &other,
                                     NimbleStudioRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts NimbleStudioRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the NimbleStudio service's Action
 * query parameters.
 */
QString NimbleStudioRequestPrivate::toString(const NimbleStudioRequest::Action &action)
{
    #define ActionToString(action) \
        case NimbleStudioRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace NimbleStudio
} // namespace QtAws

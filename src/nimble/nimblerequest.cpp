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

#include "nimblerequest.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::NimbleRequest
 * \brief The NimbleRequest class provides an interface for Nimble requests.
 *
 * \inmodule QtAwsNimble
 */

/*!
 * \enum NimbleRequest::Action
 *
 * This enum describes the actions that can be performed as Nimble
 * requests.
 *
 * \value AcceptEulasAction Nimble AcceptEulas action.
 * \value CreateLaunchProfileAction Nimble CreateLaunchProfile action.
 * \value CreateStreamingImageAction Nimble CreateStreamingImage action.
 * \value CreateStreamingSessionAction Nimble CreateStreamingSession action.
 * \value CreateStreamingSessionStreamAction Nimble CreateStreamingSessionStream action.
 * \value CreateStudioAction Nimble CreateStudio action.
 * \value CreateStudioComponentAction Nimble CreateStudioComponent action.
 * \value DeleteLaunchProfileAction Nimble DeleteLaunchProfile action.
 * \value DeleteLaunchProfileMemberAction Nimble DeleteLaunchProfileMember action.
 * \value DeleteStreamingImageAction Nimble DeleteStreamingImage action.
 * \value DeleteStreamingSessionAction Nimble DeleteStreamingSession action.
 * \value DeleteStudioAction Nimble DeleteStudio action.
 * \value DeleteStudioComponentAction Nimble DeleteStudioComponent action.
 * \value DeleteStudioMemberAction Nimble DeleteStudioMember action.
 * \value GetEulaAction Nimble GetEula action.
 * \value GetLaunchProfileAction Nimble GetLaunchProfile action.
 * \value GetLaunchProfileDetailsAction Nimble GetLaunchProfileDetails action.
 * \value GetLaunchProfileInitializationAction Nimble GetLaunchProfileInitialization action.
 * \value GetLaunchProfileMemberAction Nimble GetLaunchProfileMember action.
 * \value GetStreamingImageAction Nimble GetStreamingImage action.
 * \value GetStreamingSessionAction Nimble GetStreamingSession action.
 * \value GetStreamingSessionStreamAction Nimble GetStreamingSessionStream action.
 * \value GetStudioAction Nimble GetStudio action.
 * \value GetStudioComponentAction Nimble GetStudioComponent action.
 * \value GetStudioMemberAction Nimble GetStudioMember action.
 * \value ListEulaAcceptancesAction Nimble ListEulaAcceptances action.
 * \value ListEulasAction Nimble ListEulas action.
 * \value ListLaunchProfileMembersAction Nimble ListLaunchProfileMembers action.
 * \value ListLaunchProfilesAction Nimble ListLaunchProfiles action.
 * \value ListStreamingImagesAction Nimble ListStreamingImages action.
 * \value ListStreamingSessionsAction Nimble ListStreamingSessions action.
 * \value ListStudioComponentsAction Nimble ListStudioComponents action.
 * \value ListStudioMembersAction Nimble ListStudioMembers action.
 * \value ListStudiosAction Nimble ListStudios action.
 * \value ListTagsForResourceAction Nimble ListTagsForResource action.
 * \value PutLaunchProfileMembersAction Nimble PutLaunchProfileMembers action.
 * \value PutStudioMembersAction Nimble PutStudioMembers action.
 * \value StartStreamingSessionAction Nimble StartStreamingSession action.
 * \value StartStudioSSOConfigurationRepairAction Nimble StartStudioSSOConfigurationRepair action.
 * \value StopStreamingSessionAction Nimble StopStreamingSession action.
 * \value TagResourceAction Nimble TagResource action.
 * \value UntagResourceAction Nimble UntagResource action.
 * \value UpdateLaunchProfileAction Nimble UpdateLaunchProfile action.
 * \value UpdateLaunchProfileMemberAction Nimble UpdateLaunchProfileMember action.
 * \value UpdateStreamingImageAction Nimble UpdateStreamingImage action.
 * \value UpdateStudioAction Nimble UpdateStudio action.
 * \value UpdateStudioComponentAction Nimble UpdateStudioComponent action.
 */

/*!
 * Constructs a NimbleRequest object for Nimble \a action.
 */
NimbleRequest::NimbleRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new NimbleRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
NimbleRequest::NimbleRequest(const NimbleRequest &other)
    : QtAws::Core::AwsAbstractRequest(new NimbleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the NimbleRequest object to be equal to \a other.
 */
NimbleRequest& NimbleRequest::operator=(const NimbleRequest &other)
{
    Q_D(NimbleRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa NimbleRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from NimbleRequestPrivate.
 */
NimbleRequest::NimbleRequest(NimbleRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Nimble action to be performed by this request.
 */
NimbleRequest::Action NimbleRequest::action() const
{
    Q_D(const NimbleRequest);
    return d->action;
}

/*!
 * Returns the name of the Nimble action to be performed by this request.
 */
QString NimbleRequest::actionString() const
{
    return NimbleRequestPrivate::toString(action());
}

/*!
 * Returns the Nimble API version implemented by this request.
 */
QString NimbleRequest::apiVersion() const
{
    Q_D(const NimbleRequest);
    return d->apiVersion;
}

/*!
 * Sets the Nimble action to be performed by this request to \a action.
 */
void NimbleRequest::setAction(const Action action)
{
    Q_D(NimbleRequest);
    d->action = action;
}

/*!
 * Sets the Nimble API version to include in this request to \a version.
 */
void NimbleRequest::setApiVersion(const QString &version)
{
    Q_D(NimbleRequest);
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
bool NimbleRequest::operator==(const NimbleRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Nimble queue name.
 *
 * @par From Nimble FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Nimble queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool NimbleRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int NimbleRequest::clearParameter(const QString &name)
{
    Q_D(NimbleRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void NimbleRequest::clearParameters()
{
    Q_D(NimbleRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant NimbleRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const NimbleRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &NimbleRequest::parameters() const
{
    Q_D(const NimbleRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void NimbleRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(NimbleRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void NimbleRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(NimbleRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Nimble request using the given
 * \a endpoint.
 *
 * This Nimble implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest NimbleRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const NimbleRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Nimble::NimbleRequestPrivate
 * \brief The NimbleRequestPrivate class provides private implementation for NimbleRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a NimbleRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
NimbleRequestPrivate::NimbleRequestPrivate(const NimbleRequest::Action action, NimbleRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-08-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the NimbleRequest class's copy constructor.
 */
NimbleRequestPrivate::NimbleRequestPrivate(const NimbleRequestPrivate &other,
                                     NimbleRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts NimbleRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Nimble service's Action
 * query parameters.
 */
QString NimbleRequestPrivate::toString(const NimbleRequest::Action &action)
{
    #define ActionToString(action) \
        case NimbleRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptEulas);
        ActionToString(CreateLaunchProfile);
        ActionToString(CreateStreamingImage);
        ActionToString(CreateStreamingSession);
        ActionToString(CreateStreamingSessionStream);
        ActionToString(CreateStudio);
        ActionToString(CreateStudioComponent);
        ActionToString(DeleteLaunchProfile);
        ActionToString(DeleteLaunchProfileMember);
        ActionToString(DeleteStreamingImage);
        ActionToString(DeleteStreamingSession);
        ActionToString(DeleteStudio);
        ActionToString(DeleteStudioComponent);
        ActionToString(DeleteStudioMember);
        ActionToString(GetEula);
        ActionToString(GetLaunchProfile);
        ActionToString(GetLaunchProfileDetails);
        ActionToString(GetLaunchProfileInitialization);
        ActionToString(GetLaunchProfileMember);
        ActionToString(GetStreamingImage);
        ActionToString(GetStreamingSession);
        ActionToString(GetStreamingSessionStream);
        ActionToString(GetStudio);
        ActionToString(GetStudioComponent);
        ActionToString(GetStudioMember);
        ActionToString(ListEulaAcceptances);
        ActionToString(ListEulas);
        ActionToString(ListLaunchProfileMembers);
        ActionToString(ListLaunchProfiles);
        ActionToString(ListStreamingImages);
        ActionToString(ListStreamingSessions);
        ActionToString(ListStudioComponents);
        ActionToString(ListStudioMembers);
        ActionToString(ListStudios);
        ActionToString(ListTagsForResource);
        ActionToString(PutLaunchProfileMembers);
        ActionToString(PutStudioMembers);
        ActionToString(StartStreamingSession);
        ActionToString(StartStudioSSOConfigurationRepair);
        ActionToString(StopStreamingSession);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateLaunchProfile);
        ActionToString(UpdateLaunchProfileMember);
        ActionToString(UpdateStreamingImage);
        ActionToString(UpdateStudio);
        ActionToString(UpdateStudioComponent);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Nimble
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "voiceidrequest.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::VoiceIdRequest
 * \brief The VoiceIdRequest class provides an interface for VoiceId requests.
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * \enum VoiceIdRequest::Action
 *
 * This enum describes the actions that can be performed as VoiceId
 * requests.
 *
 * \value CreateDomainAction VoiceId CreateDomain action.
 * \value DeleteDomainAction VoiceId DeleteDomain action.
 * \value DeleteFraudsterAction VoiceId DeleteFraudster action.
 * \value DeleteSpeakerAction VoiceId DeleteSpeaker action.
 * \value DescribeDomainAction VoiceId DescribeDomain action.
 * \value DescribeFraudsterAction VoiceId DescribeFraudster action.
 * \value DescribeFraudsterRegistrationJobAction VoiceId DescribeFraudsterRegistrationJob action.
 * \value DescribeSpeakerAction VoiceId DescribeSpeaker action.
 * \value DescribeSpeakerEnrollmentJobAction VoiceId DescribeSpeakerEnrollmentJob action.
 * \value EvaluateSessionAction VoiceId EvaluateSession action.
 * \value ListDomainsAction VoiceId ListDomains action.
 * \value ListFraudsterRegistrationJobsAction VoiceId ListFraudsterRegistrationJobs action.
 * \value ListSpeakerEnrollmentJobsAction VoiceId ListSpeakerEnrollmentJobs action.
 * \value ListSpeakersAction VoiceId ListSpeakers action.
 * \value ListTagsForResourceAction VoiceId ListTagsForResource action.
 * \value OptOutSpeakerAction VoiceId OptOutSpeaker action.
 * \value StartFraudsterRegistrationJobAction VoiceId StartFraudsterRegistrationJob action.
 * \value StartSpeakerEnrollmentJobAction VoiceId StartSpeakerEnrollmentJob action.
 * \value TagResourceAction VoiceId TagResource action.
 * \value UntagResourceAction VoiceId UntagResource action.
 * \value UpdateDomainAction VoiceId UpdateDomain action.
 */

/*!
 * Constructs a VoiceIdRequest object for VoiceId \a action.
 */
VoiceIdRequest::VoiceIdRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new VoiceIdRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
VoiceIdRequest::VoiceIdRequest(const VoiceIdRequest &other)
    : QtAws::Core::AwsAbstractRequest(new VoiceIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the VoiceIdRequest object to be equal to \a other.
 */
VoiceIdRequest& VoiceIdRequest::operator=(const VoiceIdRequest &other)
{
    Q_D(VoiceIdRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa VoiceIdRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from VoiceIdRequestPrivate.
 */
VoiceIdRequest::VoiceIdRequest(VoiceIdRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the VoiceId action to be performed by this request.
 */
VoiceIdRequest::Action VoiceIdRequest::action() const
{
    Q_D(const VoiceIdRequest);
    return d->action;
}

/*!
 * Returns the name of the VoiceId action to be performed by this request.
 */
QString VoiceIdRequest::actionString() const
{
    return VoiceIdRequestPrivate::toString(action());
}

/*!
 * Returns the VoiceId API version implemented by this request.
 */
QString VoiceIdRequest::apiVersion() const
{
    Q_D(const VoiceIdRequest);
    return d->apiVersion;
}

/*!
 * Sets the VoiceId action to be performed by this request to \a action.
 */
void VoiceIdRequest::setAction(const Action action)
{
    Q_D(VoiceIdRequest);
    d->action = action;
}

/*!
 * Sets the VoiceId API version to include in this request to \a version.
 */
void VoiceIdRequest::setApiVersion(const QString &version)
{
    Q_D(VoiceIdRequest);
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
bool VoiceIdRequest::operator==(const VoiceIdRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid VoiceId queue name.
 *
 * @par From VoiceId FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid VoiceId queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool VoiceIdRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int VoiceIdRequest::clearParameter(const QString &name)
{
    Q_D(VoiceIdRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void VoiceIdRequest::clearParameters()
{
    Q_D(VoiceIdRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant VoiceIdRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const VoiceIdRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &VoiceIdRequest::parameters() const
{
    Q_D(const VoiceIdRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void VoiceIdRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(VoiceIdRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void VoiceIdRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(VoiceIdRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the VoiceId request using the given
 * \a endpoint.
 *
 * This VoiceId implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest VoiceIdRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const VoiceIdRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::VoiceId::VoiceIdRequestPrivate
 * \brief The VoiceIdRequestPrivate class provides private implementation for VoiceIdRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a VoiceIdRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
VoiceIdRequestPrivate::VoiceIdRequestPrivate(const VoiceIdRequest::Action action, VoiceIdRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-09-27"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the VoiceIdRequest class's copy constructor.
 */
VoiceIdRequestPrivate::VoiceIdRequestPrivate(const VoiceIdRequestPrivate &other,
                                     VoiceIdRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts VoiceIdRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the VoiceId service's Action
 * query parameters.
 */
QString VoiceIdRequestPrivate::toString(const VoiceIdRequest::Action &action)
{
    #define ActionToString(action) \
        case VoiceIdRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateDomain);
        ActionToString(DeleteDomain);
        ActionToString(DeleteFraudster);
        ActionToString(DeleteSpeaker);
        ActionToString(DescribeDomain);
        ActionToString(DescribeFraudster);
        ActionToString(DescribeFraudsterRegistrationJob);
        ActionToString(DescribeSpeaker);
        ActionToString(DescribeSpeakerEnrollmentJob);
        ActionToString(EvaluateSession);
        ActionToString(ListDomains);
        ActionToString(ListFraudsterRegistrationJobs);
        ActionToString(ListSpeakerEnrollmentJobs);
        ActionToString(ListSpeakers);
        ActionToString(ListTagsForResource);
        ActionToString(OptOutSpeaker);
        ActionToString(StartFraudsterRegistrationJob);
        ActionToString(StartSpeakerEnrollmentJob);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDomain);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace VoiceId
} // namespace QtAws

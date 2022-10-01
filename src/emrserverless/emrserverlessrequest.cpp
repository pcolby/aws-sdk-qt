// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "emrserverlessrequest.h"
#include "emrserverlessrequest_p.h"

namespace QtAws {
namespace EmrServerless {

/*!
 * \class QtAws::EmrServerless::EmrServerlessRequest
 * \brief The EmrServerlessRequest class provides an interface for EmrServerless requests.
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * \enum EmrServerlessRequest::Action
 *
 * This enum describes the actions that can be performed as EmrServerless
 * requests.
 *
 * \value CancelJobRunAction EmrServerless CancelJobRun action.
 * \value CreateApplicationAction EmrServerless CreateApplication action.
 * \value DeleteApplicationAction EmrServerless DeleteApplication action.
 * \value GetApplicationAction EmrServerless GetApplication action.
 * \value GetJobRunAction EmrServerless GetJobRun action.
 * \value ListApplicationsAction EmrServerless ListApplications action.
 * \value ListJobRunsAction EmrServerless ListJobRuns action.
 * \value ListTagsForResourceAction EmrServerless ListTagsForResource action.
 * \value StartApplicationAction EmrServerless StartApplication action.
 * \value StartJobRunAction EmrServerless StartJobRun action.
 * \value StopApplicationAction EmrServerless StopApplication action.
 * \value TagResourceAction EmrServerless TagResource action.
 * \value UntagResourceAction EmrServerless UntagResource action.
 * \value UpdateApplicationAction EmrServerless UpdateApplication action.
 */

/*!
 * Constructs a EmrServerlessRequest object for EmrServerless \a action.
 */
EmrServerlessRequest::EmrServerlessRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EmrServerlessRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EmrServerlessRequest::EmrServerlessRequest(const EmrServerlessRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EmrServerlessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EmrServerlessRequest object to be equal to \a other.
 */
EmrServerlessRequest& EmrServerlessRequest::operator=(const EmrServerlessRequest &other)
{
    Q_D(EmrServerlessRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EmrServerlessRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EmrServerlessRequestPrivate.
 */
EmrServerlessRequest::EmrServerlessRequest(EmrServerlessRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the EmrServerless action to be performed by this request.
 */
EmrServerlessRequest::Action EmrServerlessRequest::action() const
{
    Q_D(const EmrServerlessRequest);
    return d->action;
}

/*!
 * Returns the name of the EmrServerless action to be performed by this request.
 */
QString EmrServerlessRequest::actionString() const
{
    return EmrServerlessRequestPrivate::toString(action());
}

/*!
 * Returns the EmrServerless API version implemented by this request.
 */
QString EmrServerlessRequest::apiVersion() const
{
    Q_D(const EmrServerlessRequest);
    return d->apiVersion;
}

/*!
 * Sets the EmrServerless action to be performed by this request to \a action.
 */
void EmrServerlessRequest::setAction(const Action action)
{
    Q_D(EmrServerlessRequest);
    d->action = action;
}

/*!
 * Sets the EmrServerless API version to include in this request to \a version.
 */
void EmrServerlessRequest::setApiVersion(const QString &version)
{
    Q_D(EmrServerlessRequest);
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
bool EmrServerlessRequest::operator==(const EmrServerlessRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid EmrServerless queue name.
 *
 * @par From EmrServerless FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid EmrServerless queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EmrServerlessRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EmrServerlessRequest::clearParameter(const QString &name)
{
    Q_D(EmrServerlessRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EmrServerlessRequest::clearParameters()
{
    Q_D(EmrServerlessRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EmrServerlessRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EmrServerlessRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EmrServerlessRequest::parameters() const
{
    Q_D(const EmrServerlessRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EmrServerlessRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EmrServerlessRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EmrServerlessRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EmrServerlessRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the EmrServerless request using the given
 * \a endpoint.
 *
 * This EmrServerless implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EmrServerlessRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EmrServerlessRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::EmrServerless::EmrServerlessRequestPrivate
 * \brief The EmrServerlessRequestPrivate class provides private implementation for EmrServerlessRequest.
 * \internal
 *
 * \inmodule QtAwsEmrServerless
 */

/*!
 * Constructs a EmrServerlessRequestPrivate object for EmrServerless \a action,
 * with public implementation \a q.
 */
EmrServerlessRequestPrivate::EmrServerlessRequestPrivate(const EmrServerlessRequest::Action action, EmrServerlessRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-07-13"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EmrServerlessRequest class's copy constructor.
 */
EmrServerlessRequestPrivate::EmrServerlessRequestPrivate(const EmrServerlessRequestPrivate &other,
                                     EmrServerlessRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EmrServerlessRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the EmrServerless service's Action
 * query parameters.
 */
QString EmrServerlessRequestPrivate::toString(const EmrServerlessRequest::Action &action)
{
    #define ActionToString(action) \
        case EmrServerlessRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelJobRun);
        ActionToString(CreateApplication);
        ActionToString(DeleteApplication);
        ActionToString(GetApplication);
        ActionToString(GetJobRun);
        ActionToString(ListApplications);
        ActionToString(ListJobRuns);
        ActionToString(ListTagsForResource);
        ActionToString(StartApplication);
        ActionToString(StartJobRun);
        ActionToString(StopApplication);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateApplication);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace EmrServerless
} // namespace QtAws

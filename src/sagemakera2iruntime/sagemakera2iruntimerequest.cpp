// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sagemakera2iruntimerequest.h"
#include "sagemakera2iruntimerequest_p.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

/*!
 * \class QtAws::SageMakerA2IRuntime::SageMakerA2IRuntimeRequest
 * \brief The SageMakerA2IRuntimeRequest class provides an interface for SageMakerA2IRuntime requests.
 *
 * \inmodule QtAwsSageMakerA2IRuntime
 */

/*!
 * \enum SageMakerA2IRuntimeRequest::Action
 *
 * This enum describes the actions that can be performed as SageMakerA2IRuntime
 * requests.
 *
 * \value DeleteHumanLoopAction SageMakerA2IRuntime DeleteHumanLoop action.
 * \value DescribeHumanLoopAction SageMakerA2IRuntime DescribeHumanLoop action.
 * \value ListHumanLoopsAction SageMakerA2IRuntime ListHumanLoops action.
 * \value StartHumanLoopAction SageMakerA2IRuntime StartHumanLoop action.
 * \value StopHumanLoopAction SageMakerA2IRuntime StopHumanLoop action.
 */

/*!
 * Constructs a SageMakerA2IRuntimeRequest object for SageMakerA2IRuntime \a action.
 */
SageMakerA2IRuntimeRequest::SageMakerA2IRuntimeRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SageMakerA2IRuntimeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SageMakerA2IRuntimeRequest::SageMakerA2IRuntimeRequest(const SageMakerA2IRuntimeRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SageMakerA2IRuntimeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SageMakerA2IRuntimeRequest object to be equal to \a other.
 */
SageMakerA2IRuntimeRequest& SageMakerA2IRuntimeRequest::operator=(const SageMakerA2IRuntimeRequest &other)
{
    Q_D(SageMakerA2IRuntimeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SageMakerA2IRuntimeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SageMakerA2IRuntimeRequestPrivate.
 */
SageMakerA2IRuntimeRequest::SageMakerA2IRuntimeRequest(SageMakerA2IRuntimeRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SageMakerA2IRuntime action to be performed by this request.
 */
SageMakerA2IRuntimeRequest::Action SageMakerA2IRuntimeRequest::action() const
{
    Q_D(const SageMakerA2IRuntimeRequest);
    return d->action;
}

/*!
 * Returns the name of the SageMakerA2IRuntime action to be performed by this request.
 */
QString SageMakerA2IRuntimeRequest::actionString() const
{
    return SageMakerA2IRuntimeRequestPrivate::toString(action());
}

/*!
 * Returns the SageMakerA2IRuntime API version implemented by this request.
 */
QString SageMakerA2IRuntimeRequest::apiVersion() const
{
    Q_D(const SageMakerA2IRuntimeRequest);
    return d->apiVersion;
}

/*!
 * Sets the SageMakerA2IRuntime action to be performed by this request to \a action.
 */
void SageMakerA2IRuntimeRequest::setAction(const Action action)
{
    Q_D(SageMakerA2IRuntimeRequest);
    d->action = action;
}

/*!
 * Sets the SageMakerA2IRuntime API version to include in this request to \a version.
 */
void SageMakerA2IRuntimeRequest::setApiVersion(const QString &version)
{
    Q_D(SageMakerA2IRuntimeRequest);
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
bool SageMakerA2IRuntimeRequest::operator==(const SageMakerA2IRuntimeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SageMakerA2IRuntime queue name.
 *
 * @par From SageMakerA2IRuntime FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SageMakerA2IRuntime queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SageMakerA2IRuntimeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SageMakerA2IRuntimeRequest::clearParameter(const QString &name)
{
    Q_D(SageMakerA2IRuntimeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SageMakerA2IRuntimeRequest::clearParameters()
{
    Q_D(SageMakerA2IRuntimeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SageMakerA2IRuntimeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SageMakerA2IRuntimeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SageMakerA2IRuntimeRequest::parameters() const
{
    Q_D(const SageMakerA2IRuntimeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SageMakerA2IRuntimeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SageMakerA2IRuntimeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SageMakerA2IRuntimeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SageMakerA2IRuntimeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SageMakerA2IRuntime request using the given
 * \a endpoint.
 *
 * This SageMakerA2IRuntime implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SageMakerA2IRuntimeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SageMakerA2IRuntimeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SageMakerA2IRuntime::SageMakerA2IRuntimeRequestPrivate
 * \brief The SageMakerA2IRuntimeRequestPrivate class provides private implementation for SageMakerA2IRuntimeRequest.
 * \internal
 *
 * \inmodule QtAwsSageMakerA2IRuntime
 */

/*!
 * Constructs a SageMakerA2IRuntimeRequestPrivate object for SageMakerA2IRuntime \a action,
 * with public implementation \a q.
 */
SageMakerA2IRuntimeRequestPrivate::SageMakerA2IRuntimeRequestPrivate(const SageMakerA2IRuntimeRequest::Action action, SageMakerA2IRuntimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-11-07"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SageMakerA2IRuntimeRequest class's copy constructor.
 */
SageMakerA2IRuntimeRequestPrivate::SageMakerA2IRuntimeRequestPrivate(const SageMakerA2IRuntimeRequestPrivate &other,
                                     SageMakerA2IRuntimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SageMakerA2IRuntimeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SageMakerA2IRuntime service's Action
 * query parameters.
 */
QString SageMakerA2IRuntimeRequestPrivate::toString(const SageMakerA2IRuntimeRequest::Action &action)
{
    #define ActionToString(action) \
        case SageMakerA2IRuntimeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DeleteHumanLoop);
        ActionToString(DescribeHumanLoop);
        ActionToString(ListHumanLoops);
        ActionToString(StartHumanLoop);
        ActionToString(StopHumanLoop);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SageMakerA2IRuntime
} // namespace QtAws

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

#include "syntheticsrequest.h"
#include "syntheticsrequest_p.h"

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::SyntheticsRequest
 * \brief The SyntheticsRequest class provides an interface for Synthetics requests.
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * \enum SyntheticsRequest::Action
 *
 * This enum describes the actions that can be performed as Synthetics
 * requests.
 *
 * \value CreateCanaryAction Synthetics CreateCanary action.
 * \value DeleteCanaryAction Synthetics DeleteCanary action.
 * \value DescribeCanariesAction Synthetics DescribeCanaries action.
 * \value DescribeCanariesLastRunAction Synthetics DescribeCanariesLastRun action.
 * \value DescribeRuntimeVersionsAction Synthetics DescribeRuntimeVersions action.
 * \value GetCanaryAction Synthetics GetCanary action.
 * \value GetCanaryRunsAction Synthetics GetCanaryRuns action.
 * \value ListTagsForResourceAction Synthetics ListTagsForResource action.
 * \value StartCanaryAction Synthetics StartCanary action.
 * \value StopCanaryAction Synthetics StopCanary action.
 * \value TagResourceAction Synthetics TagResource action.
 * \value UntagResourceAction Synthetics UntagResource action.
 * \value UpdateCanaryAction Synthetics UpdateCanary action.
 */

/*!
 * Constructs a SyntheticsRequest object for Synthetics \a action.
 */
SyntheticsRequest::SyntheticsRequest(const Action action)
    : d_ptr(new SyntheticsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SyntheticsRequest::SyntheticsRequest(const SyntheticsRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new SyntheticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SyntheticsRequest object to be equal to \a other.
 */
SyntheticsRequest& SyntheticsRequest::operator=(const SyntheticsRequest &other)
{
    Q_D(SyntheticsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SyntheticsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SyntheticsRequestPrivate.
 */
SyntheticsRequest::SyntheticsRequest(SyntheticsRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the Synthetics action to be performed by this request.
 */
SyntheticsRequest::Action SyntheticsRequest::action() const
{
    Q_D(const SyntheticsRequest);
    return d->action;
}

/*!
 * Returns the name of the Synthetics action to be performed by this request.
 */
QString SyntheticsRequest::actionString() const
{
    return SyntheticsRequestPrivate::toString(action());
}

/*!
 * Returns the Synthetics API version implemented by this request.
 */
QString SyntheticsRequest::apiVersion() const
{
    Q_D(const SyntheticsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Synthetics action to be performed by this request to \a action.
 */
void SyntheticsRequest::setAction(const Action action)
{
    Q_D(SyntheticsRequest);
    d->action = action;
}

/*!
 * Sets the Synthetics API version to include in this request to \a version.
 */
void SyntheticsRequest::setApiVersion(const QString &version)
{
    Q_D(SyntheticsRequest);
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
bool SyntheticsRequest::operator==(const SyntheticsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Synthetics queue name.
 *
 * @par From Synthetics FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Synthetics queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SyntheticsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SyntheticsRequest::clearParameter(const QString &name)
{
    Q_D(SyntheticsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SyntheticsRequest::clearParameters()
{
    Q_D(SyntheticsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SyntheticsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SyntheticsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SyntheticsRequest::parameters() const
{
    Q_D(const SyntheticsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SyntheticsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SyntheticsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SyntheticsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SyntheticsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Synthetics request using the given
 * \a endpoint.
 *
 * This Synthetics implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SyntheticsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SyntheticsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Synthetics::SyntheticsRequestPrivate
 * \brief The SyntheticsRequestPrivate class provides private implementation for SyntheticsRequest.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a SyntheticsRequestPrivate object for Synthetics \a action,
 * with public implementation \a q.
 */
SyntheticsRequestPrivate::SyntheticsRequestPrivate(const SyntheticsRequest::Action action, SyntheticsRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SyntheticsRequest class's copy constructor.
 */
SyntheticsRequestPrivate::SyntheticsRequestPrivate(const SyntheticsRequestPrivate &other,
                                     SyntheticsRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SyntheticsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Synthetics service's Action
 * query parameters.
 */
QString SyntheticsRequestPrivate::toString(const SyntheticsRequest::Action &action)
{
    #define ActionToString(action) \
        case SyntheticsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Synthetics
} // namespace QtAws

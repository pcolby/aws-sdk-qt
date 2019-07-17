/*
    Copyright 2013-2019 Paul Colby

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

#include "supportrequest.h"
#include "supportrequest_p.h"

namespace QtAws {
namespace Support {

/*!
 * \class QtAws::Support::SupportRequest
 * \brief The SupportRequest class provides an interface for Support requests.
 *
 * \inmodule QtAwsSupport
 */

/*!
 * \enum SupportRequest::Action
 *
 * This enum describes the actions that can be performed as Support
 * requests.
 *
 * \value AddAttachmentsToSetAction Support AddAttachmentsToSet action.
 * \value AddCommunicationToCaseAction Support AddCommunicationToCase action.
 * \value CreateCaseAction Support CreateCase action.
 * \value DescribeAttachmentAction Support DescribeAttachment action.
 * \value DescribeCasesAction Support DescribeCases action.
 * \value DescribeCommunicationsAction Support DescribeCommunications action.
 * \value DescribeServicesAction Support DescribeServices action.
 * \value DescribeSeverityLevelsAction Support DescribeSeverityLevels action.
 * \value DescribeTrustedAdvisorCheckRefreshStatusesAction Support DescribeTrustedAdvisorCheckRefreshStatuses action.
 * \value DescribeTrustedAdvisorCheckResultAction Support DescribeTrustedAdvisorCheckResult action.
 * \value DescribeTrustedAdvisorCheckSummariesAction Support DescribeTrustedAdvisorCheckSummaries action.
 * \value DescribeTrustedAdvisorChecksAction Support DescribeTrustedAdvisorChecks action.
 * \value RefreshTrustedAdvisorCheckAction Support RefreshTrustedAdvisorCheck action.
 * \value ResolveCaseAction Support ResolveCase action.
 */

/*!
 * Constructs a SupportRequest object for Support \a action.
 */
SupportRequest::SupportRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SupportRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SupportRequest::SupportRequest(const SupportRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SupportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SupportRequest object to be equal to \a other.
 */
SupportRequest& SupportRequest::operator=(const SupportRequest &other)
{
    Q_D(SupportRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SupportRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SupportRequestPrivate.
 */
SupportRequest::SupportRequest(SupportRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Support action to be performed by this request.
 */
SupportRequest::Action SupportRequest::action() const
{
    Q_D(const SupportRequest);
    return d->action;
}

/*!
 * Returns the name of the Support action to be performed by this request.
 */
QString SupportRequest::actionString() const
{
    return SupportRequestPrivate::toString(action());
}

/*!
 * Returns the Support API version implemented by this request.
 */
QString SupportRequest::apiVersion() const
{
    Q_D(const SupportRequest);
    return d->apiVersion;
}

/*!
 * Sets the Support action to be performed by this request to \a action.
 */
void SupportRequest::setAction(const Action action)
{
    Q_D(SupportRequest);
    d->action = action;
}

/*!
 * Sets the Support API version to include in this request to \a version.
 */
void SupportRequest::setApiVersion(const QString &version)
{
    Q_D(SupportRequest);
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
bool SupportRequest::operator==(const SupportRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Support queue name.
 *
 * @par From Support FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Support queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SupportRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SupportRequest::clearParameter(const QString &name)
{
    Q_D(SupportRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SupportRequest::clearParameters()
{
    Q_D(SupportRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SupportRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SupportRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SupportRequest::parameters() const
{
    Q_D(const SupportRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SupportRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SupportRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SupportRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SupportRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Support request using the given
 * \a endpoint.
 *
 * This Support implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SupportRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SupportRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Support::SupportRequestPrivate
 * \brief The SupportRequestPrivate class provides private implementation for SupportRequest.
 * \internal
 *
 * \inmodule QtAwsSupport
 */

/*!
 * Constructs a SupportRequestPrivate object for Support \a action,
 * with public implementation \a q.
 */
SupportRequestPrivate::SupportRequestPrivate(const SupportRequest::Action action, SupportRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SupportRequest class's copy constructor.
 */
SupportRequestPrivate::SupportRequestPrivate(const SupportRequestPrivate &other,
                                     SupportRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SupportRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Support service's Action
 * query parameters.
 */
QString SupportRequestPrivate::toString(const SupportRequest::Action &action)
{
    #define ActionToString(action) \
        case SupportRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Support
} // namespace QtAws

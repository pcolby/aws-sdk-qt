/*
    Copyright 2013-2018 Paul Colby

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

#include "comprehendrequest.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ComprehendRequest
 * \brief The ComprehendRequest class provides an interface for Comprehend requests.
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * \enum ComprehendRequest::Action
 *
 * This enum describes the actions that can be performed as Comprehend
 * requests.
 *
 * \value BatchDetectDominantLanguageAction Comprehend BatchDetectDominantLanguage action.
 * \value BatchDetectEntitiesAction Comprehend BatchDetectEntities action.
 * \value BatchDetectKeyPhrasesAction Comprehend BatchDetectKeyPhrases action.
 * \value BatchDetectSentimentAction Comprehend BatchDetectSentiment action.
 * \value DescribeTopicsDetectionJobAction Comprehend DescribeTopicsDetectionJob action.
 * \value DetectDominantLanguageAction Comprehend DetectDominantLanguage action.
 * \value DetectEntitiesAction Comprehend DetectEntities action.
 * \value DetectKeyPhrasesAction Comprehend DetectKeyPhrases action.
 * \value DetectSentimentAction Comprehend DetectSentiment action.
 * \value ListTopicsDetectionJobsAction Comprehend ListTopicsDetectionJobs action.
 * \value StartTopicsDetectionJobAction Comprehend StartTopicsDetectionJob action.
 */

/*!
 * Constructs a ComprehendRequest object for Comprehend \a action.
 */
ComprehendRequest::ComprehendRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ComprehendRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ComprehendRequest::ComprehendRequest(const ComprehendRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ComprehendRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ComprehendRequest object to be equal to \a other.
 */
ComprehendRequest& ComprehendRequest::operator=(const ComprehendRequest &other)
{
    Q_D(ComprehendRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ComprehendRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ComprehendRequestPrivate.
 */
ComprehendRequest::ComprehendRequest(ComprehendRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Comprehend action to be performed by this request.
 */
ComprehendRequest::Action ComprehendRequest::action() const
{
    Q_D(const ComprehendRequest);
    return d->action;
}

/*!
 * Returns the name of the Comprehend action to be performed by this request.
 */
QString ComprehendRequest::actionString() const
{
    return ComprehendRequestPrivate::toString(action());
}

/*!
 * Returns the Comprehend API version implemented by this request.
 */
QString ComprehendRequest::apiVersion() const
{
    Q_D(const ComprehendRequest);
    return d->apiVersion;
}

/*!
 * Sets the Comprehend action to be performed by this request to \a action.
 */
void ComprehendRequest::setAction(const Action action)
{
    Q_D(ComprehendRequest);
    d->action = action;
}

/*!
 * Sets the Comprehend API version to include in this request to \a version.
 */
void ComprehendRequest::setApiVersion(const QString &version)
{
    Q_D(ComprehendRequest);
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
bool ComprehendRequest::operator==(const ComprehendRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Comprehend queue name.
 *
 * @par From Comprehend FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Comprehend queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ComprehendRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ComprehendRequest::clearParameter(const QString &name)
{
    Q_D(ComprehendRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ComprehendRequest::clearParameters()
{
    Q_D(ComprehendRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ComprehendRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ComprehendRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ComprehendRequest::parameters() const
{
    Q_D(const ComprehendRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ComprehendRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ComprehendRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ComprehendRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ComprehendRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Comprehend request using the given
 * \a endpoint.
 *
 * This Comprehend implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ComprehendRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ComprehendRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Comprehend::ComprehendRequestPrivate
 * \brief The ComprehendRequestPrivate class provides private implementation for ComprehendRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ComprehendRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ComprehendRequestPrivate::ComprehendRequestPrivate(const ComprehendRequest::Action action, ComprehendRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ComprehendRequest class's copy constructor.
 */
ComprehendRequestPrivate::ComprehendRequestPrivate(const ComprehendRequestPrivate &other,
                                     ComprehendRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ComprehendRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Comprehend service's Action
 * query parameters.
 */
QString ComprehendRequestPrivate::toString(const ComprehendRequest::Action &action)
{
    #define ActionToString(action) \
        case ComprehendRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Comprehend
} // namespace QtAws

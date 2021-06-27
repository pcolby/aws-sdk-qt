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

#include "accessanalyzerrequest.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::AccessAnalyzerRequest
 * \brief The AccessAnalyzerRequest class provides an interface for AccessAnalyzer requests.
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * \enum AccessAnalyzerRequest::Action
 *
 * This enum describes the actions that can be performed as AccessAnalyzer
 * requests.
 *
 * \value ApplyArchiveRuleAction AccessAnalyzer ApplyArchiveRule action.
 * \value CancelPolicyGenerationAction AccessAnalyzer CancelPolicyGeneration action.
 * \value CreateAccessPreviewAction AccessAnalyzer CreateAccessPreview action.
 * \value CreateAnalyzerAction AccessAnalyzer CreateAnalyzer action.
 * \value CreateArchiveRuleAction AccessAnalyzer CreateArchiveRule action.
 * \value DeleteAnalyzerAction AccessAnalyzer DeleteAnalyzer action.
 * \value DeleteArchiveRuleAction AccessAnalyzer DeleteArchiveRule action.
 * \value GetAccessPreviewAction AccessAnalyzer GetAccessPreview action.
 * \value GetAnalyzedResourceAction AccessAnalyzer GetAnalyzedResource action.
 * \value GetAnalyzerAction AccessAnalyzer GetAnalyzer action.
 * \value GetArchiveRuleAction AccessAnalyzer GetArchiveRule action.
 * \value GetFindingAction AccessAnalyzer GetFinding action.
 * \value GetGeneratedPolicyAction AccessAnalyzer GetGeneratedPolicy action.
 * \value ListAccessPreviewFindingsAction AccessAnalyzer ListAccessPreviewFindings action.
 * \value ListAccessPreviewsAction AccessAnalyzer ListAccessPreviews action.
 * \value ListAnalyzedResourcesAction AccessAnalyzer ListAnalyzedResources action.
 * \value ListAnalyzersAction AccessAnalyzer ListAnalyzers action.
 * \value ListArchiveRulesAction AccessAnalyzer ListArchiveRules action.
 * \value ListFindingsAction AccessAnalyzer ListFindings action.
 * \value ListPolicyGenerationsAction AccessAnalyzer ListPolicyGenerations action.
 * \value ListTagsForResourceAction AccessAnalyzer ListTagsForResource action.
 * \value StartPolicyGenerationAction AccessAnalyzer StartPolicyGeneration action.
 * \value StartResourceScanAction AccessAnalyzer StartResourceScan action.
 * \value TagResourceAction AccessAnalyzer TagResource action.
 * \value UntagResourceAction AccessAnalyzer UntagResource action.
 * \value UpdateArchiveRuleAction AccessAnalyzer UpdateArchiveRule action.
 * \value UpdateFindingsAction AccessAnalyzer UpdateFindings action.
 * \value ValidatePolicyAction AccessAnalyzer ValidatePolicy action.
 */

/*!
 * Constructs a AccessAnalyzerRequest object for AccessAnalyzer \a action.
 */
AccessAnalyzerRequest::AccessAnalyzerRequest(const Action action)
    : d_ptr(new AccessAnalyzerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AccessAnalyzerRequest::AccessAnalyzerRequest(const AccessAnalyzerRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new AccessAnalyzerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AccessAnalyzerRequest object to be equal to \a other.
 */
AccessAnalyzerRequest& AccessAnalyzerRequest::operator=(const AccessAnalyzerRequest &other)
{
    Q_D(AccessAnalyzerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AccessAnalyzerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AccessAnalyzerRequestPrivate.
 */
AccessAnalyzerRequest::AccessAnalyzerRequest(AccessAnalyzerRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the AccessAnalyzer action to be performed by this request.
 */
AccessAnalyzerRequest::Action AccessAnalyzerRequest::action() const
{
    Q_D(const AccessAnalyzerRequest);
    return d->action;
}

/*!
 * Returns the name of the AccessAnalyzer action to be performed by this request.
 */
QString AccessAnalyzerRequest::actionString() const
{
    return AccessAnalyzerRequestPrivate::toString(action());
}

/*!
 * Returns the AccessAnalyzer API version implemented by this request.
 */
QString AccessAnalyzerRequest::apiVersion() const
{
    Q_D(const AccessAnalyzerRequest);
    return d->apiVersion;
}

/*!
 * Sets the AccessAnalyzer action to be performed by this request to \a action.
 */
void AccessAnalyzerRequest::setAction(const Action action)
{
    Q_D(AccessAnalyzerRequest);
    d->action = action;
}

/*!
 * Sets the AccessAnalyzer API version to include in this request to \a version.
 */
void AccessAnalyzerRequest::setApiVersion(const QString &version)
{
    Q_D(AccessAnalyzerRequest);
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
bool AccessAnalyzerRequest::operator==(const AccessAnalyzerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AccessAnalyzer queue name.
 *
 * @par From AccessAnalyzer FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AccessAnalyzer queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AccessAnalyzerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AccessAnalyzerRequest::clearParameter(const QString &name)
{
    Q_D(AccessAnalyzerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AccessAnalyzerRequest::clearParameters()
{
    Q_D(AccessAnalyzerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AccessAnalyzerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AccessAnalyzerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AccessAnalyzerRequest::parameters() const
{
    Q_D(const AccessAnalyzerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AccessAnalyzerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AccessAnalyzerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AccessAnalyzerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AccessAnalyzerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AccessAnalyzer request using the given
 * \a endpoint.
 *
 * This AccessAnalyzer implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AccessAnalyzerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AccessAnalyzerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AccessAnalyzer::AccessAnalyzerRequestPrivate
 * \brief The AccessAnalyzerRequestPrivate class provides private implementation for AccessAnalyzerRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a AccessAnalyzerRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
AccessAnalyzerRequestPrivate::AccessAnalyzerRequestPrivate(const AccessAnalyzerRequest::Action action, AccessAnalyzerRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AccessAnalyzerRequest class's copy constructor.
 */
AccessAnalyzerRequestPrivate::AccessAnalyzerRequestPrivate(const AccessAnalyzerRequestPrivate &other,
                                     AccessAnalyzerRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AccessAnalyzerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AccessAnalyzer service's Action
 * query parameters.
 */
QString AccessAnalyzerRequestPrivate::toString(const AccessAnalyzerRequest::Action &action)
{
    #define ActionToString(action) \
        case AccessAnalyzerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AccessAnalyzer
} // namespace QtAws

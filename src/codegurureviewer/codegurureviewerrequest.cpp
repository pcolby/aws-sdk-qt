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

#include "codegurureviewerrequest.h"
#include "codegurureviewerrequest_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

/*!
 * \class QtAws::CodeGuruReviewer::CodeGuruReviewerRequest
 * \brief The CodeGuruReviewerRequest class provides an interface for CodeGuruReviewer requests.
 *
 * \inmodule QtAwsCodeGuruReviewer
 */

/*!
 * \enum CodeGuruReviewerRequest::Action
 *
 * This enum describes the actions that can be performed as CodeGuruReviewer
 * requests.
 *
 * \value AssociateRepositoryAction CodeGuruReviewer AssociateRepository action.
 * \value CreateCodeReviewAction CodeGuruReviewer CreateCodeReview action.
 * \value DescribeCodeReviewAction CodeGuruReviewer DescribeCodeReview action.
 * \value DescribeRecommendationFeedbackAction CodeGuruReviewer DescribeRecommendationFeedback action.
 * \value DescribeRepositoryAssociationAction CodeGuruReviewer DescribeRepositoryAssociation action.
 * \value DisassociateRepositoryAction CodeGuruReviewer DisassociateRepository action.
 * \value ListCodeReviewsAction CodeGuruReviewer ListCodeReviews action.
 * \value ListRecommendationFeedbackAction CodeGuruReviewer ListRecommendationFeedback action.
 * \value ListRecommendationsAction CodeGuruReviewer ListRecommendations action.
 * \value ListRepositoryAssociationsAction CodeGuruReviewer ListRepositoryAssociations action.
 * \value ListTagsForResourceAction CodeGuruReviewer ListTagsForResource action.
 * \value PutRecommendationFeedbackAction CodeGuruReviewer PutRecommendationFeedback action.
 * \value TagResourceAction CodeGuruReviewer TagResource action.
 * \value UntagResourceAction CodeGuruReviewer UntagResource action.
 */

/*!
 * Constructs a CodeGuruReviewerRequest object for CodeGuruReviewer \a action.
 */
CodeGuruReviewerRequest::CodeGuruReviewerRequest(const Action action)
    : d_ptr(new CodeGuruReviewerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CodeGuruReviewerRequest::CodeGuruReviewerRequest(const CodeGuruReviewerRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new CodeGuruReviewerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CodeGuruReviewerRequest object to be equal to \a other.
 */
CodeGuruReviewerRequest& CodeGuruReviewerRequest::operator=(const CodeGuruReviewerRequest &other)
{
    Q_D(CodeGuruReviewerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CodeGuruReviewerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeGuruReviewerRequestPrivate.
 */
CodeGuruReviewerRequest::CodeGuruReviewerRequest(CodeGuruReviewerRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the CodeGuruReviewer action to be performed by this request.
 */
CodeGuruReviewerRequest::Action CodeGuruReviewerRequest::action() const
{
    Q_D(const CodeGuruReviewerRequest);
    return d->action;
}

/*!
 * Returns the name of the CodeGuruReviewer action to be performed by this request.
 */
QString CodeGuruReviewerRequest::actionString() const
{
    return CodeGuruReviewerRequestPrivate::toString(action());
}

/*!
 * Returns the CodeGuruReviewer API version implemented by this request.
 */
QString CodeGuruReviewerRequest::apiVersion() const
{
    Q_D(const CodeGuruReviewerRequest);
    return d->apiVersion;
}

/*!
 * Sets the CodeGuruReviewer action to be performed by this request to \a action.
 */
void CodeGuruReviewerRequest::setAction(const Action action)
{
    Q_D(CodeGuruReviewerRequest);
    d->action = action;
}

/*!
 * Sets the CodeGuruReviewer API version to include in this request to \a version.
 */
void CodeGuruReviewerRequest::setApiVersion(const QString &version)
{
    Q_D(CodeGuruReviewerRequest);
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
bool CodeGuruReviewerRequest::operator==(const CodeGuruReviewerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CodeGuruReviewer queue name.
 *
 * @par From CodeGuruReviewer FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CodeGuruReviewer queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CodeGuruReviewerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CodeGuruReviewerRequest::clearParameter(const QString &name)
{
    Q_D(CodeGuruReviewerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CodeGuruReviewerRequest::clearParameters()
{
    Q_D(CodeGuruReviewerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CodeGuruReviewerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CodeGuruReviewerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CodeGuruReviewerRequest::parameters() const
{
    Q_D(const CodeGuruReviewerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CodeGuruReviewerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CodeGuruReviewerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CodeGuruReviewerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CodeGuruReviewerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CodeGuruReviewer request using the given
 * \a endpoint.
 *
 * This CodeGuruReviewer implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CodeGuruReviewerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CodeGuruReviewerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CodeGuruReviewer::CodeGuruReviewerRequestPrivate
 * \brief The CodeGuruReviewerRequestPrivate class provides private implementation for CodeGuruReviewerRequest.
 * \internal
 *
 * \inmodule QtAwsCodeGuruReviewer
 */

/*!
 * Constructs a CodeGuruReviewerRequestPrivate object for CodeGuruReviewer \a action,
 * with public implementation \a q.
 */
CodeGuruReviewerRequestPrivate::CodeGuruReviewerRequestPrivate(const CodeGuruReviewerRequest::Action action, CodeGuruReviewerRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CodeGuruReviewerRequest class's copy constructor.
 */
CodeGuruReviewerRequestPrivate::CodeGuruReviewerRequestPrivate(const CodeGuruReviewerRequestPrivate &other,
                                     CodeGuruReviewerRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CodeGuruReviewerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CodeGuruReviewer service's Action
 * query parameters.
 */
QString CodeGuruReviewerRequestPrivate::toString(const CodeGuruReviewerRequest::Action &action)
{
    #define ActionToString(action) \
        case CodeGuruReviewerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CodeGuruReviewer
} // namespace QtAws

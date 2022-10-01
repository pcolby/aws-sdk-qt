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

#include "wisdomrequest.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::WisdomRequest
 * \brief The WisdomRequest class provides an interface for Wisdom requests.
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * \enum WisdomRequest::Action
 *
 * This enum describes the actions that can be performed as Wisdom
 * requests.
 *
 * \value CreateAssistantAction Wisdom CreateAssistant action.
 * \value CreateAssistantAssociationAction Wisdom CreateAssistantAssociation action.
 * \value CreateContentAction Wisdom CreateContent action.
 * \value CreateKnowledgeBaseAction Wisdom CreateKnowledgeBase action.
 * \value CreateSessionAction Wisdom CreateSession action.
 * \value DeleteAssistantAction Wisdom DeleteAssistant action.
 * \value DeleteAssistantAssociationAction Wisdom DeleteAssistantAssociation action.
 * \value DeleteContentAction Wisdom DeleteContent action.
 * \value DeleteKnowledgeBaseAction Wisdom DeleteKnowledgeBase action.
 * \value GetAssistantAction Wisdom GetAssistant action.
 * \value GetAssistantAssociationAction Wisdom GetAssistantAssociation action.
 * \value GetContentAction Wisdom GetContent action.
 * \value GetContentSummaryAction Wisdom GetContentSummary action.
 * \value GetKnowledgeBaseAction Wisdom GetKnowledgeBase action.
 * \value GetRecommendationsAction Wisdom GetRecommendations action.
 * \value GetSessionAction Wisdom GetSession action.
 * \value ListAssistantAssociationsAction Wisdom ListAssistantAssociations action.
 * \value ListAssistantsAction Wisdom ListAssistants action.
 * \value ListContentsAction Wisdom ListContents action.
 * \value ListKnowledgeBasesAction Wisdom ListKnowledgeBases action.
 * \value ListTagsForResourceAction Wisdom ListTagsForResource action.
 * \value NotifyRecommendationsReceivedAction Wisdom NotifyRecommendationsReceived action.
 * \value PutFeedbackAction Wisdom PutFeedback action.
 * \value QueryAssistantAction Wisdom QueryAssistant action.
 * \value RemoveKnowledgeBaseTemplateUriAction Wisdom RemoveKnowledgeBaseTemplateUri action.
 * \value SearchContentAction Wisdom SearchContent action.
 * \value SearchSessionsAction Wisdom SearchSessions action.
 * \value StartContentUploadAction Wisdom StartContentUpload action.
 * \value TagResourceAction Wisdom TagResource action.
 * \value UntagResourceAction Wisdom UntagResource action.
 * \value UpdateContentAction Wisdom UpdateContent action.
 * \value UpdateKnowledgeBaseTemplateUriAction Wisdom UpdateKnowledgeBaseTemplateUri action.
 */

/*!
 * Constructs a WisdomRequest object for Wisdom \a action.
 */
WisdomRequest::WisdomRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new WisdomRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
WisdomRequest::WisdomRequest(const WisdomRequest &other)
    : QtAws::Core::AwsAbstractRequest(new WisdomRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the WisdomRequest object to be equal to \a other.
 */
WisdomRequest& WisdomRequest::operator=(const WisdomRequest &other)
{
    Q_D(WisdomRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa WisdomRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WisdomRequestPrivate.
 */
WisdomRequest::WisdomRequest(WisdomRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Wisdom action to be performed by this request.
 */
WisdomRequest::Action WisdomRequest::action() const
{
    Q_D(const WisdomRequest);
    return d->action;
}

/*!
 * Returns the name of the Wisdom action to be performed by this request.
 */
QString WisdomRequest::actionString() const
{
    return WisdomRequestPrivate::toString(action());
}

/*!
 * Returns the Wisdom API version implemented by this request.
 */
QString WisdomRequest::apiVersion() const
{
    Q_D(const WisdomRequest);
    return d->apiVersion;
}

/*!
 * Sets the Wisdom action to be performed by this request to \a action.
 */
void WisdomRequest::setAction(const Action action)
{
    Q_D(WisdomRequest);
    d->action = action;
}

/*!
 * Sets the Wisdom API version to include in this request to \a version.
 */
void WisdomRequest::setApiVersion(const QString &version)
{
    Q_D(WisdomRequest);
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
bool WisdomRequest::operator==(const WisdomRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Wisdom queue name.
 *
 * @par From Wisdom FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Wisdom queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool WisdomRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int WisdomRequest::clearParameter(const QString &name)
{
    Q_D(WisdomRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void WisdomRequest::clearParameters()
{
    Q_D(WisdomRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant WisdomRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WisdomRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &WisdomRequest::parameters() const
{
    Q_D(const WisdomRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void WisdomRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WisdomRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void WisdomRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WisdomRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Wisdom request using the given
 * \a endpoint.
 *
 * This Wisdom implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest WisdomRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const WisdomRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Wisdom::WisdomRequestPrivate
 * \brief The WisdomRequestPrivate class provides private implementation for WisdomRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a WisdomRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
WisdomRequestPrivate::WisdomRequestPrivate(const WisdomRequest::Action action, WisdomRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-10-19"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WisdomRequest class's copy constructor.
 */
WisdomRequestPrivate::WisdomRequestPrivate(const WisdomRequestPrivate &other,
                                     WisdomRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts WisdomRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Wisdom service's Action
 * query parameters.
 */
QString WisdomRequestPrivate::toString(const WisdomRequest::Action &action)
{
    #define ActionToString(action) \
        case WisdomRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateAssistant);
        ActionToString(CreateAssistantAssociation);
        ActionToString(CreateContent);
        ActionToString(CreateKnowledgeBase);
        ActionToString(CreateSession);
        ActionToString(DeleteAssistant);
        ActionToString(DeleteAssistantAssociation);
        ActionToString(DeleteContent);
        ActionToString(DeleteKnowledgeBase);
        ActionToString(GetAssistant);
        ActionToString(GetAssistantAssociation);
        ActionToString(GetContent);
        ActionToString(GetContentSummary);
        ActionToString(GetKnowledgeBase);
        ActionToString(GetRecommendations);
        ActionToString(GetSession);
        ActionToString(ListAssistantAssociations);
        ActionToString(ListAssistants);
        ActionToString(ListContents);
        ActionToString(ListKnowledgeBases);
        ActionToString(ListTagsForResource);
        ActionToString(NotifyRecommendationsReceived);
        ActionToString(PutFeedback);
        ActionToString(QueryAssistant);
        ActionToString(RemoveKnowledgeBaseTemplateUri);
        ActionToString(SearchContent);
        ActionToString(SearchSessions);
        ActionToString(StartContentUpload);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateContent);
        ActionToString(UpdateKnowledgeBaseTemplateUri);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Wisdom
} // namespace QtAws

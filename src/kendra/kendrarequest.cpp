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

#include "kendrarequest.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::kendraRequest
 * \brief The kendraRequest class provides an interface for kendra requests.
 *
 * \inmodule QtAwskendra
 */

/*!
 * \enum kendraRequest::Action
 *
 * This enum describes the actions that can be performed as kendra
 * requests.
 *
 * \value BatchDeleteDocumentAction kendra BatchDeleteDocument action.
 * \value BatchGetDocumentStatusAction kendra BatchGetDocumentStatus action.
 * \value BatchPutDocumentAction kendra BatchPutDocument action.
 * \value ClearQuerySuggestionsAction kendra ClearQuerySuggestions action.
 * \value CreateDataSourceAction kendra CreateDataSource action.
 * \value CreateFaqAction kendra CreateFaq action.
 * \value CreateIndexAction kendra CreateIndex action.
 * \value CreateQuerySuggestionsBlockListAction kendra CreateQuerySuggestionsBlockList action.
 * \value CreateThesaurusAction kendra CreateThesaurus action.
 * \value DeleteDataSourceAction kendra DeleteDataSource action.
 * \value DeleteFaqAction kendra DeleteFaq action.
 * \value DeleteIndexAction kendra DeleteIndex action.
 * \value DeleteQuerySuggestionsBlockListAction kendra DeleteQuerySuggestionsBlockList action.
 * \value DeleteThesaurusAction kendra DeleteThesaurus action.
 * \value DescribeDataSourceAction kendra DescribeDataSource action.
 * \value DescribeFaqAction kendra DescribeFaq action.
 * \value DescribeIndexAction kendra DescribeIndex action.
 * \value DescribeQuerySuggestionsBlockListAction kendra DescribeQuerySuggestionsBlockList action.
 * \value DescribeQuerySuggestionsConfigAction kendra DescribeQuerySuggestionsConfig action.
 * \value DescribeThesaurusAction kendra DescribeThesaurus action.
 * \value GetQuerySuggestionsAction kendra GetQuerySuggestions action.
 * \value ListDataSourceSyncJobsAction kendra ListDataSourceSyncJobs action.
 * \value ListDataSourcesAction kendra ListDataSources action.
 * \value ListFaqsAction kendra ListFaqs action.
 * \value ListIndicesAction kendra ListIndices action.
 * \value ListQuerySuggestionsBlockListsAction kendra ListQuerySuggestionsBlockLists action.
 * \value ListTagsForResourceAction kendra ListTagsForResource action.
 * \value ListThesauriAction kendra ListThesauri action.
 * \value QueryAction kendra Query action.
 * \value StartDataSourceSyncJobAction kendra StartDataSourceSyncJob action.
 * \value StopDataSourceSyncJobAction kendra StopDataSourceSyncJob action.
 * \value SubmitFeedbackAction kendra SubmitFeedback action.
 * \value TagResourceAction kendra TagResource action.
 * \value UntagResourceAction kendra UntagResource action.
 * \value UpdateDataSourceAction kendra UpdateDataSource action.
 * \value UpdateIndexAction kendra UpdateIndex action.
 * \value UpdateQuerySuggestionsBlockListAction kendra UpdateQuerySuggestionsBlockList action.
 * \value UpdateQuerySuggestionsConfigAction kendra UpdateQuerySuggestionsConfig action.
 * \value UpdateThesaurusAction kendra UpdateThesaurus action.
 */

/*!
 * Constructs a kendraRequest object for kendra \a action.
 */
kendraRequest::kendraRequest(const Action action)
    : d_ptr(new kendraRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
kendraRequest::kendraRequest(const kendraRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new kendraRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the kendraRequest object to be equal to \a other.
 */
kendraRequest& kendraRequest::operator=(const kendraRequest &other)
{
    Q_D(kendraRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa kendraRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from kendraRequestPrivate.
 */
kendraRequest::kendraRequest(kendraRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the kendra action to be performed by this request.
 */
kendraRequest::Action kendraRequest::action() const
{
    Q_D(const kendraRequest);
    return d->action;
}

/*!
 * Returns the name of the kendra action to be performed by this request.
 */
QString kendraRequest::actionString() const
{
    return kendraRequestPrivate::toString(action());
}

/*!
 * Returns the kendra API version implemented by this request.
 */
QString kendraRequest::apiVersion() const
{
    Q_D(const kendraRequest);
    return d->apiVersion;
}

/*!
 * Sets the kendra action to be performed by this request to \a action.
 */
void kendraRequest::setAction(const Action action)
{
    Q_D(kendraRequest);
    d->action = action;
}

/*!
 * Sets the kendra API version to include in this request to \a version.
 */
void kendraRequest::setApiVersion(const QString &version)
{
    Q_D(kendraRequest);
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
bool kendraRequest::operator==(const kendraRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid kendra queue name.
 *
 * @par From kendra FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid kendra queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool kendraRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int kendraRequest::clearParameter(const QString &name)
{
    Q_D(kendraRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void kendraRequest::clearParameters()
{
    Q_D(kendraRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant kendraRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const kendraRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &kendraRequest::parameters() const
{
    Q_D(const kendraRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void kendraRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(kendraRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void kendraRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(kendraRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the kendra request using the given
 * \a endpoint.
 *
 * This kendra implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest kendraRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const kendraRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::kendra::kendraRequestPrivate
 * \brief The kendraRequestPrivate class provides private implementation for kendraRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a kendraRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
kendraRequestPrivate::kendraRequestPrivate(const kendraRequest::Action action, kendraRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the kendraRequest class's copy constructor.
 */
kendraRequestPrivate::kendraRequestPrivate(const kendraRequestPrivate &other,
                                     kendraRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts kendraRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the kendra service's Action
 * query parameters.
 */
QString kendraRequestPrivate::toString(const kendraRequest::Action &action)
{
    #define ActionToString(action) \
        case kendraRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchDeleteDocument);
        ActionToString(BatchGetDocumentStatus);
        ActionToString(BatchPutDocument);
        ActionToString(ClearQuerySuggestions);
        ActionToString(CreateDataSource);
        ActionToString(CreateFaq);
        ActionToString(CreateIndex);
        ActionToString(CreateQuerySuggestionsBlockList);
        ActionToString(CreateThesaurus);
        ActionToString(DeleteDataSource);
        ActionToString(DeleteFaq);
        ActionToString(DeleteIndex);
        ActionToString(DeleteQuerySuggestionsBlockList);
        ActionToString(DeleteThesaurus);
        ActionToString(DescribeDataSource);
        ActionToString(DescribeFaq);
        ActionToString(DescribeIndex);
        ActionToString(DescribeQuerySuggestionsBlockList);
        ActionToString(DescribeQuerySuggestionsConfig);
        ActionToString(DescribeThesaurus);
        ActionToString(GetQuerySuggestions);
        ActionToString(ListDataSourceSyncJobs);
        ActionToString(ListDataSources);
        ActionToString(ListFaqs);
        ActionToString(ListIndices);
        ActionToString(ListQuerySuggestionsBlockLists);
        ActionToString(ListTagsForResource);
        ActionToString(ListThesauri);
        ActionToString(Query);
        ActionToString(StartDataSourceSyncJob);
        ActionToString(StopDataSourceSyncJob);
        ActionToString(SubmitFeedback);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDataSource);
        ActionToString(UpdateIndex);
        ActionToString(UpdateQuerySuggestionsBlockList);
        ActionToString(UpdateQuerySuggestionsConfig);
        ActionToString(UpdateThesaurus);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace kendra
} // namespace QtAws

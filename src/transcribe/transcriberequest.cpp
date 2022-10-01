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

#include "transcriberequest.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::TranscribeRequest
 * \brief The TranscribeRequest class provides an interface for Transcribe requests.
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * \enum TranscribeRequest::Action
 *
 * This enum describes the actions that can be performed as Transcribe
 * requests.
 *
 * \value CreateCallAnalyticsCategoryAction Transcribe CreateCallAnalyticsCategory action.
 * \value CreateLanguageModelAction Transcribe CreateLanguageModel action.
 * \value CreateMedicalVocabularyAction Transcribe CreateMedicalVocabulary action.
 * \value CreateVocabularyAction Transcribe CreateVocabulary action.
 * \value CreateVocabularyFilterAction Transcribe CreateVocabularyFilter action.
 * \value DeleteCallAnalyticsCategoryAction Transcribe DeleteCallAnalyticsCategory action.
 * \value DeleteCallAnalyticsJobAction Transcribe DeleteCallAnalyticsJob action.
 * \value DeleteLanguageModelAction Transcribe DeleteLanguageModel action.
 * \value DeleteMedicalTranscriptionJobAction Transcribe DeleteMedicalTranscriptionJob action.
 * \value DeleteMedicalVocabularyAction Transcribe DeleteMedicalVocabulary action.
 * \value DeleteTranscriptionJobAction Transcribe DeleteTranscriptionJob action.
 * \value DeleteVocabularyAction Transcribe DeleteVocabulary action.
 * \value DeleteVocabularyFilterAction Transcribe DeleteVocabularyFilter action.
 * \value DescribeLanguageModelAction Transcribe DescribeLanguageModel action.
 * \value GetCallAnalyticsCategoryAction Transcribe GetCallAnalyticsCategory action.
 * \value GetCallAnalyticsJobAction Transcribe GetCallAnalyticsJob action.
 * \value GetMedicalTranscriptionJobAction Transcribe GetMedicalTranscriptionJob action.
 * \value GetMedicalVocabularyAction Transcribe GetMedicalVocabulary action.
 * \value GetTranscriptionJobAction Transcribe GetTranscriptionJob action.
 * \value GetVocabularyAction Transcribe GetVocabulary action.
 * \value GetVocabularyFilterAction Transcribe GetVocabularyFilter action.
 * \value ListCallAnalyticsCategoriesAction Transcribe ListCallAnalyticsCategories action.
 * \value ListCallAnalyticsJobsAction Transcribe ListCallAnalyticsJobs action.
 * \value ListLanguageModelsAction Transcribe ListLanguageModels action.
 * \value ListMedicalTranscriptionJobsAction Transcribe ListMedicalTranscriptionJobs action.
 * \value ListMedicalVocabulariesAction Transcribe ListMedicalVocabularies action.
 * \value ListTagsForResourceAction Transcribe ListTagsForResource action.
 * \value ListTranscriptionJobsAction Transcribe ListTranscriptionJobs action.
 * \value ListVocabulariesAction Transcribe ListVocabularies action.
 * \value ListVocabularyFiltersAction Transcribe ListVocabularyFilters action.
 * \value StartCallAnalyticsJobAction Transcribe StartCallAnalyticsJob action.
 * \value StartMedicalTranscriptionJobAction Transcribe StartMedicalTranscriptionJob action.
 * \value StartTranscriptionJobAction Transcribe StartTranscriptionJob action.
 * \value TagResourceAction Transcribe TagResource action.
 * \value UntagResourceAction Transcribe UntagResource action.
 * \value UpdateCallAnalyticsCategoryAction Transcribe UpdateCallAnalyticsCategory action.
 * \value UpdateMedicalVocabularyAction Transcribe UpdateMedicalVocabulary action.
 * \value UpdateVocabularyAction Transcribe UpdateVocabulary action.
 * \value UpdateVocabularyFilterAction Transcribe UpdateVocabularyFilter action.
 */

/*!
 * Constructs a TranscribeRequest object for Transcribe \a action.
 */
TranscribeRequest::TranscribeRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new TranscribeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
TranscribeRequest::TranscribeRequest(const TranscribeRequest &other)
    : QtAws::Core::AwsAbstractRequest(new TranscribeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the TranscribeRequest object to be equal to \a other.
 */
TranscribeRequest& TranscribeRequest::operator=(const TranscribeRequest &other)
{
    Q_D(TranscribeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa TranscribeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TranscribeRequestPrivate.
 */
TranscribeRequest::TranscribeRequest(TranscribeRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Transcribe action to be performed by this request.
 */
TranscribeRequest::Action TranscribeRequest::action() const
{
    Q_D(const TranscribeRequest);
    return d->action;
}

/*!
 * Returns the name of the Transcribe action to be performed by this request.
 */
QString TranscribeRequest::actionString() const
{
    return TranscribeRequestPrivate::toString(action());
}

/*!
 * Returns the Transcribe API version implemented by this request.
 */
QString TranscribeRequest::apiVersion() const
{
    Q_D(const TranscribeRequest);
    return d->apiVersion;
}

/*!
 * Sets the Transcribe action to be performed by this request to \a action.
 */
void TranscribeRequest::setAction(const Action action)
{
    Q_D(TranscribeRequest);
    d->action = action;
}

/*!
 * Sets the Transcribe API version to include in this request to \a version.
 */
void TranscribeRequest::setApiVersion(const QString &version)
{
    Q_D(TranscribeRequest);
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
bool TranscribeRequest::operator==(const TranscribeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Transcribe queue name.
 *
 * @par From Transcribe FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Transcribe queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool TranscribeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int TranscribeRequest::clearParameter(const QString &name)
{
    Q_D(TranscribeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void TranscribeRequest::clearParameters()
{
    Q_D(TranscribeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant TranscribeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const TranscribeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &TranscribeRequest::parameters() const
{
    Q_D(const TranscribeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void TranscribeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(TranscribeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void TranscribeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(TranscribeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Transcribe request using the given
 * \a endpoint.
 *
 * This Transcribe implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest TranscribeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const TranscribeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Transcribe::TranscribeRequestPrivate
 * \brief The TranscribeRequestPrivate class provides private implementation for TranscribeRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a TranscribeRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
TranscribeRequestPrivate::TranscribeRequestPrivate(const TranscribeRequest::Action action, TranscribeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-10-26"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the TranscribeRequest class's copy constructor.
 */
TranscribeRequestPrivate::TranscribeRequestPrivate(const TranscribeRequestPrivate &other,
                                     TranscribeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts TranscribeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Transcribe service's Action
 * query parameters.
 */
QString TranscribeRequestPrivate::toString(const TranscribeRequest::Action &action)
{
    #define ActionToString(action) \
        case TranscribeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateCallAnalyticsCategory);
        ActionToString(CreateLanguageModel);
        ActionToString(CreateMedicalVocabulary);
        ActionToString(CreateVocabulary);
        ActionToString(CreateVocabularyFilter);
        ActionToString(DeleteCallAnalyticsCategory);
        ActionToString(DeleteCallAnalyticsJob);
        ActionToString(DeleteLanguageModel);
        ActionToString(DeleteMedicalTranscriptionJob);
        ActionToString(DeleteMedicalVocabulary);
        ActionToString(DeleteTranscriptionJob);
        ActionToString(DeleteVocabulary);
        ActionToString(DeleteVocabularyFilter);
        ActionToString(DescribeLanguageModel);
        ActionToString(GetCallAnalyticsCategory);
        ActionToString(GetCallAnalyticsJob);
        ActionToString(GetMedicalTranscriptionJob);
        ActionToString(GetMedicalVocabulary);
        ActionToString(GetTranscriptionJob);
        ActionToString(GetVocabulary);
        ActionToString(GetVocabularyFilter);
        ActionToString(ListCallAnalyticsCategories);
        ActionToString(ListCallAnalyticsJobs);
        ActionToString(ListLanguageModels);
        ActionToString(ListMedicalTranscriptionJobs);
        ActionToString(ListMedicalVocabularies);
        ActionToString(ListTagsForResource);
        ActionToString(ListTranscriptionJobs);
        ActionToString(ListVocabularies);
        ActionToString(ListVocabularyFilters);
        ActionToString(StartCallAnalyticsJob);
        ActionToString(StartMedicalTranscriptionJob);
        ActionToString(StartTranscriptionJob);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateCallAnalyticsCategory);
        ActionToString(UpdateMedicalVocabulary);
        ActionToString(UpdateVocabulary);
        ActionToString(UpdateVocabularyFilter);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Transcribe
} // namespace QtAws

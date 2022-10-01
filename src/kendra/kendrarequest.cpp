// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kendrarequest.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::KendraRequest
 * \brief The KendraRequest class provides an interface for Kendra requests.
 *
 * \inmodule QtAwsKendra
 */

/*!
 * \enum KendraRequest::Action
 *
 * This enum describes the actions that can be performed as Kendra
 * requests.
 *
 * \value AssociateEntitiesToExperienceAction Kendra AssociateEntitiesToExperience action.
 * \value AssociatePersonasToEntitiesAction Kendra AssociatePersonasToEntities action.
 * \value BatchDeleteDocumentAction Kendra BatchDeleteDocument action.
 * \value BatchGetDocumentStatusAction Kendra BatchGetDocumentStatus action.
 * \value BatchPutDocumentAction Kendra BatchPutDocument action.
 * \value ClearQuerySuggestionsAction Kendra ClearQuerySuggestions action.
 * \value CreateAccessControlConfigurationAction Kendra CreateAccessControlConfiguration action.
 * \value CreateDataSourceAction Kendra CreateDataSource action.
 * \value CreateExperienceAction Kendra CreateExperience action.
 * \value CreateFaqAction Kendra CreateFaq action.
 * \value CreateIndexAction Kendra CreateIndex action.
 * \value CreateQuerySuggestionsBlockListAction Kendra CreateQuerySuggestionsBlockList action.
 * \value CreateThesaurusAction Kendra CreateThesaurus action.
 * \value DeleteAccessControlConfigurationAction Kendra DeleteAccessControlConfiguration action.
 * \value DeleteDataSourceAction Kendra DeleteDataSource action.
 * \value DeleteExperienceAction Kendra DeleteExperience action.
 * \value DeleteFaqAction Kendra DeleteFaq action.
 * \value DeleteIndexAction Kendra DeleteIndex action.
 * \value DeletePrincipalMappingAction Kendra DeletePrincipalMapping action.
 * \value DeleteQuerySuggestionsBlockListAction Kendra DeleteQuerySuggestionsBlockList action.
 * \value DeleteThesaurusAction Kendra DeleteThesaurus action.
 * \value DescribeAccessControlConfigurationAction Kendra DescribeAccessControlConfiguration action.
 * \value DescribeDataSourceAction Kendra DescribeDataSource action.
 * \value DescribeExperienceAction Kendra DescribeExperience action.
 * \value DescribeFaqAction Kendra DescribeFaq action.
 * \value DescribeIndexAction Kendra DescribeIndex action.
 * \value DescribePrincipalMappingAction Kendra DescribePrincipalMapping action.
 * \value DescribeQuerySuggestionsBlockListAction Kendra DescribeQuerySuggestionsBlockList action.
 * \value DescribeQuerySuggestionsConfigAction Kendra DescribeQuerySuggestionsConfig action.
 * \value DescribeThesaurusAction Kendra DescribeThesaurus action.
 * \value DisassociateEntitiesFromExperienceAction Kendra DisassociateEntitiesFromExperience action.
 * \value DisassociatePersonasFromEntitiesAction Kendra DisassociatePersonasFromEntities action.
 * \value GetQuerySuggestionsAction Kendra GetQuerySuggestions action.
 * \value GetSnapshotsAction Kendra GetSnapshots action.
 * \value ListAccessControlConfigurationsAction Kendra ListAccessControlConfigurations action.
 * \value ListDataSourceSyncJobsAction Kendra ListDataSourceSyncJobs action.
 * \value ListDataSourcesAction Kendra ListDataSources action.
 * \value ListEntityPersonasAction Kendra ListEntityPersonas action.
 * \value ListExperienceEntitiesAction Kendra ListExperienceEntities action.
 * \value ListExperiencesAction Kendra ListExperiences action.
 * \value ListFaqsAction Kendra ListFaqs action.
 * \value ListGroupsOlderThanOrderingIdAction Kendra ListGroupsOlderThanOrderingId action.
 * \value ListIndicesAction Kendra ListIndices action.
 * \value ListQuerySuggestionsBlockListsAction Kendra ListQuerySuggestionsBlockLists action.
 * \value ListTagsForResourceAction Kendra ListTagsForResource action.
 * \value ListThesauriAction Kendra ListThesauri action.
 * \value PutPrincipalMappingAction Kendra PutPrincipalMapping action.
 * \value QueryAction Kendra Query action.
 * \value StartDataSourceSyncJobAction Kendra StartDataSourceSyncJob action.
 * \value StopDataSourceSyncJobAction Kendra StopDataSourceSyncJob action.
 * \value SubmitFeedbackAction Kendra SubmitFeedback action.
 * \value TagResourceAction Kendra TagResource action.
 * \value UntagResourceAction Kendra UntagResource action.
 * \value UpdateAccessControlConfigurationAction Kendra UpdateAccessControlConfiguration action.
 * \value UpdateDataSourceAction Kendra UpdateDataSource action.
 * \value UpdateExperienceAction Kendra UpdateExperience action.
 * \value UpdateIndexAction Kendra UpdateIndex action.
 * \value UpdateQuerySuggestionsBlockListAction Kendra UpdateQuerySuggestionsBlockList action.
 * \value UpdateQuerySuggestionsConfigAction Kendra UpdateQuerySuggestionsConfig action.
 * \value UpdateThesaurusAction Kendra UpdateThesaurus action.
 */

/*!
 * Constructs a KendraRequest object for Kendra \a action.
 */
KendraRequest::KendraRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new KendraRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KendraRequest::KendraRequest(const KendraRequest &other)
    : QtAws::Core::AwsAbstractRequest(new KendraRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KendraRequest object to be equal to \a other.
 */
KendraRequest& KendraRequest::operator=(const KendraRequest &other)
{
    Q_D(KendraRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa KendraRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KendraRequestPrivate.
 */
KendraRequest::KendraRequest(KendraRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Kendra action to be performed by this request.
 */
KendraRequest::Action KendraRequest::action() const
{
    Q_D(const KendraRequest);
    return d->action;
}

/*!
 * Returns the name of the Kendra action to be performed by this request.
 */
QString KendraRequest::actionString() const
{
    return KendraRequestPrivate::toString(action());
}

/*!
 * Returns the Kendra API version implemented by this request.
 */
QString KendraRequest::apiVersion() const
{
    Q_D(const KendraRequest);
    return d->apiVersion;
}

/*!
 * Sets the Kendra action to be performed by this request to \a action.
 */
void KendraRequest::setAction(const Action action)
{
    Q_D(KendraRequest);
    d->action = action;
}

/*!
 * Sets the Kendra API version to include in this request to \a version.
 */
void KendraRequest::setApiVersion(const QString &version)
{
    Q_D(KendraRequest);
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
bool KendraRequest::operator==(const KendraRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Kendra queue name.
 *
 * @par From Kendra FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Kendra queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool KendraRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KendraRequest::clearParameter(const QString &name)
{
    Q_D(KendraRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KendraRequest::clearParameters()
{
    Q_D(KendraRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KendraRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KendraRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KendraRequest::parameters() const
{
    Q_D(const KendraRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KendraRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KendraRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KendraRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KendraRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Kendra request using the given
 * \a endpoint.
 *
 * This Kendra implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KendraRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const KendraRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Kendra::KendraRequestPrivate
 * \brief The KendraRequestPrivate class provides private implementation for KendraRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a KendraRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
KendraRequestPrivate::KendraRequestPrivate(const KendraRequest::Action action, KendraRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-02-03"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KendraRequest class's copy constructor.
 */
KendraRequestPrivate::KendraRequestPrivate(const KendraRequestPrivate &other,
                                     KendraRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KendraRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Kendra service's Action
 * query parameters.
 */
QString KendraRequestPrivate::toString(const KendraRequest::Action &action)
{
    #define ActionToString(action) \
        case KendraRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateEntitiesToExperience);
        ActionToString(AssociatePersonasToEntities);
        ActionToString(BatchDeleteDocument);
        ActionToString(BatchGetDocumentStatus);
        ActionToString(BatchPutDocument);
        ActionToString(ClearQuerySuggestions);
        ActionToString(CreateAccessControlConfiguration);
        ActionToString(CreateDataSource);
        ActionToString(CreateExperience);
        ActionToString(CreateFaq);
        ActionToString(CreateIndex);
        ActionToString(CreateQuerySuggestionsBlockList);
        ActionToString(CreateThesaurus);
        ActionToString(DeleteAccessControlConfiguration);
        ActionToString(DeleteDataSource);
        ActionToString(DeleteExperience);
        ActionToString(DeleteFaq);
        ActionToString(DeleteIndex);
        ActionToString(DeletePrincipalMapping);
        ActionToString(DeleteQuerySuggestionsBlockList);
        ActionToString(DeleteThesaurus);
        ActionToString(DescribeAccessControlConfiguration);
        ActionToString(DescribeDataSource);
        ActionToString(DescribeExperience);
        ActionToString(DescribeFaq);
        ActionToString(DescribeIndex);
        ActionToString(DescribePrincipalMapping);
        ActionToString(DescribeQuerySuggestionsBlockList);
        ActionToString(DescribeQuerySuggestionsConfig);
        ActionToString(DescribeThesaurus);
        ActionToString(DisassociateEntitiesFromExperience);
        ActionToString(DisassociatePersonasFromEntities);
        ActionToString(GetQuerySuggestions);
        ActionToString(GetSnapshots);
        ActionToString(ListAccessControlConfigurations);
        ActionToString(ListDataSourceSyncJobs);
        ActionToString(ListDataSources);
        ActionToString(ListEntityPersonas);
        ActionToString(ListExperienceEntities);
        ActionToString(ListExperiences);
        ActionToString(ListFaqs);
        ActionToString(ListGroupsOlderThanOrderingId);
        ActionToString(ListIndices);
        ActionToString(ListQuerySuggestionsBlockLists);
        ActionToString(ListTagsForResource);
        ActionToString(ListThesauri);
        ActionToString(PutPrincipalMapping);
        ActionToString(Query);
        ActionToString(StartDataSourceSyncJob);
        ActionToString(StopDataSourceSyncJob);
        ActionToString(SubmitFeedback);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAccessControlConfiguration);
        ActionToString(UpdateDataSource);
        ActionToString(UpdateExperience);
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

} // namespace Kendra
} // namespace QtAws

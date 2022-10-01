// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "personalizerequest.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::PersonalizeRequest
 * \brief The PersonalizeRequest class provides an interface for Personalize requests.
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * \enum PersonalizeRequest::Action
 *
 * This enum describes the actions that can be performed as Personalize
 * requests.
 *
 * \value CreateBatchInferenceJobAction Personalize CreateBatchInferenceJob action.
 * \value CreateBatchSegmentJobAction Personalize CreateBatchSegmentJob action.
 * \value CreateCampaignAction Personalize CreateCampaign action.
 * \value CreateDatasetAction Personalize CreateDataset action.
 * \value CreateDatasetExportJobAction Personalize CreateDatasetExportJob action.
 * \value CreateDatasetGroupAction Personalize CreateDatasetGroup action.
 * \value CreateDatasetImportJobAction Personalize CreateDatasetImportJob action.
 * \value CreateEventTrackerAction Personalize CreateEventTracker action.
 * \value CreateFilterAction Personalize CreateFilter action.
 * \value CreateRecommenderAction Personalize CreateRecommender action.
 * \value CreateSchemaAction Personalize CreateSchema action.
 * \value CreateSolutionAction Personalize CreateSolution action.
 * \value CreateSolutionVersionAction Personalize CreateSolutionVersion action.
 * \value DeleteCampaignAction Personalize DeleteCampaign action.
 * \value DeleteDatasetAction Personalize DeleteDataset action.
 * \value DeleteDatasetGroupAction Personalize DeleteDatasetGroup action.
 * \value DeleteEventTrackerAction Personalize DeleteEventTracker action.
 * \value DeleteFilterAction Personalize DeleteFilter action.
 * \value DeleteRecommenderAction Personalize DeleteRecommender action.
 * \value DeleteSchemaAction Personalize DeleteSchema action.
 * \value DeleteSolutionAction Personalize DeleteSolution action.
 * \value DescribeAlgorithmAction Personalize DescribeAlgorithm action.
 * \value DescribeBatchInferenceJobAction Personalize DescribeBatchInferenceJob action.
 * \value DescribeBatchSegmentJobAction Personalize DescribeBatchSegmentJob action.
 * \value DescribeCampaignAction Personalize DescribeCampaign action.
 * \value DescribeDatasetAction Personalize DescribeDataset action.
 * \value DescribeDatasetExportJobAction Personalize DescribeDatasetExportJob action.
 * \value DescribeDatasetGroupAction Personalize DescribeDatasetGroup action.
 * \value DescribeDatasetImportJobAction Personalize DescribeDatasetImportJob action.
 * \value DescribeEventTrackerAction Personalize DescribeEventTracker action.
 * \value DescribeFeatureTransformationAction Personalize DescribeFeatureTransformation action.
 * \value DescribeFilterAction Personalize DescribeFilter action.
 * \value DescribeRecipeAction Personalize DescribeRecipe action.
 * \value DescribeRecommenderAction Personalize DescribeRecommender action.
 * \value DescribeSchemaAction Personalize DescribeSchema action.
 * \value DescribeSolutionAction Personalize DescribeSolution action.
 * \value DescribeSolutionVersionAction Personalize DescribeSolutionVersion action.
 * \value GetSolutionMetricsAction Personalize GetSolutionMetrics action.
 * \value ListBatchInferenceJobsAction Personalize ListBatchInferenceJobs action.
 * \value ListBatchSegmentJobsAction Personalize ListBatchSegmentJobs action.
 * \value ListCampaignsAction Personalize ListCampaigns action.
 * \value ListDatasetExportJobsAction Personalize ListDatasetExportJobs action.
 * \value ListDatasetGroupsAction Personalize ListDatasetGroups action.
 * \value ListDatasetImportJobsAction Personalize ListDatasetImportJobs action.
 * \value ListDatasetsAction Personalize ListDatasets action.
 * \value ListEventTrackersAction Personalize ListEventTrackers action.
 * \value ListFiltersAction Personalize ListFilters action.
 * \value ListRecipesAction Personalize ListRecipes action.
 * \value ListRecommendersAction Personalize ListRecommenders action.
 * \value ListSchemasAction Personalize ListSchemas action.
 * \value ListSolutionVersionsAction Personalize ListSolutionVersions action.
 * \value ListSolutionsAction Personalize ListSolutions action.
 * \value ListTagsForResourceAction Personalize ListTagsForResource action.
 * \value StartRecommenderAction Personalize StartRecommender action.
 * \value StopRecommenderAction Personalize StopRecommender action.
 * \value StopSolutionVersionCreationAction Personalize StopSolutionVersionCreation action.
 * \value TagResourceAction Personalize TagResource action.
 * \value UntagResourceAction Personalize UntagResource action.
 * \value UpdateCampaignAction Personalize UpdateCampaign action.
 * \value UpdateRecommenderAction Personalize UpdateRecommender action.
 */

/*!
 * Constructs a PersonalizeRequest object for Personalize \a action.
 */
PersonalizeRequest::PersonalizeRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PersonalizeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PersonalizeRequest::PersonalizeRequest(const PersonalizeRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PersonalizeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PersonalizeRequest object to be equal to \a other.
 */
PersonalizeRequest& PersonalizeRequest::operator=(const PersonalizeRequest &other)
{
    Q_D(PersonalizeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PersonalizeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PersonalizeRequestPrivate.
 */
PersonalizeRequest::PersonalizeRequest(PersonalizeRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Personalize action to be performed by this request.
 */
PersonalizeRequest::Action PersonalizeRequest::action() const
{
    Q_D(const PersonalizeRequest);
    return d->action;
}

/*!
 * Returns the name of the Personalize action to be performed by this request.
 */
QString PersonalizeRequest::actionString() const
{
    return PersonalizeRequestPrivate::toString(action());
}

/*!
 * Returns the Personalize API version implemented by this request.
 */
QString PersonalizeRequest::apiVersion() const
{
    Q_D(const PersonalizeRequest);
    return d->apiVersion;
}

/*!
 * Sets the Personalize action to be performed by this request to \a action.
 */
void PersonalizeRequest::setAction(const Action action)
{
    Q_D(PersonalizeRequest);
    d->action = action;
}

/*!
 * Sets the Personalize API version to include in this request to \a version.
 */
void PersonalizeRequest::setApiVersion(const QString &version)
{
    Q_D(PersonalizeRequest);
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
bool PersonalizeRequest::operator==(const PersonalizeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Personalize queue name.
 *
 * @par From Personalize FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Personalize queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PersonalizeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PersonalizeRequest::clearParameter(const QString &name)
{
    Q_D(PersonalizeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PersonalizeRequest::clearParameters()
{
    Q_D(PersonalizeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PersonalizeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PersonalizeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PersonalizeRequest::parameters() const
{
    Q_D(const PersonalizeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PersonalizeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PersonalizeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PersonalizeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PersonalizeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Personalize request using the given
 * \a endpoint.
 *
 * This Personalize implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PersonalizeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PersonalizeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Personalize::PersonalizeRequestPrivate
 * \brief The PersonalizeRequestPrivate class provides private implementation for PersonalizeRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a PersonalizeRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
PersonalizeRequestPrivate::PersonalizeRequestPrivate(const PersonalizeRequest::Action action, PersonalizeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-05-22"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PersonalizeRequest class's copy constructor.
 */
PersonalizeRequestPrivate::PersonalizeRequestPrivate(const PersonalizeRequestPrivate &other,
                                     PersonalizeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PersonalizeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Personalize service's Action
 * query parameters.
 */
QString PersonalizeRequestPrivate::toString(const PersonalizeRequest::Action &action)
{
    #define ActionToString(action) \
        case PersonalizeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateBatchInferenceJob);
        ActionToString(CreateBatchSegmentJob);
        ActionToString(CreateCampaign);
        ActionToString(CreateDataset);
        ActionToString(CreateDatasetExportJob);
        ActionToString(CreateDatasetGroup);
        ActionToString(CreateDatasetImportJob);
        ActionToString(CreateEventTracker);
        ActionToString(CreateFilter);
        ActionToString(CreateRecommender);
        ActionToString(CreateSchema);
        ActionToString(CreateSolution);
        ActionToString(CreateSolutionVersion);
        ActionToString(DeleteCampaign);
        ActionToString(DeleteDataset);
        ActionToString(DeleteDatasetGroup);
        ActionToString(DeleteEventTracker);
        ActionToString(DeleteFilter);
        ActionToString(DeleteRecommender);
        ActionToString(DeleteSchema);
        ActionToString(DeleteSolution);
        ActionToString(DescribeAlgorithm);
        ActionToString(DescribeBatchInferenceJob);
        ActionToString(DescribeBatchSegmentJob);
        ActionToString(DescribeCampaign);
        ActionToString(DescribeDataset);
        ActionToString(DescribeDatasetExportJob);
        ActionToString(DescribeDatasetGroup);
        ActionToString(DescribeDatasetImportJob);
        ActionToString(DescribeEventTracker);
        ActionToString(DescribeFeatureTransformation);
        ActionToString(DescribeFilter);
        ActionToString(DescribeRecipe);
        ActionToString(DescribeRecommender);
        ActionToString(DescribeSchema);
        ActionToString(DescribeSolution);
        ActionToString(DescribeSolutionVersion);
        ActionToString(GetSolutionMetrics);
        ActionToString(ListBatchInferenceJobs);
        ActionToString(ListBatchSegmentJobs);
        ActionToString(ListCampaigns);
        ActionToString(ListDatasetExportJobs);
        ActionToString(ListDatasetGroups);
        ActionToString(ListDatasetImportJobs);
        ActionToString(ListDatasets);
        ActionToString(ListEventTrackers);
        ActionToString(ListFilters);
        ActionToString(ListRecipes);
        ActionToString(ListRecommenders);
        ActionToString(ListSchemas);
        ActionToString(ListSolutionVersions);
        ActionToString(ListSolutions);
        ActionToString(ListTagsForResource);
        ActionToString(StartRecommender);
        ActionToString(StopRecommender);
        ActionToString(StopSolutionVersionCreation);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateCampaign);
        ActionToString(UpdateRecommender);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Personalize
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "databrewrequest.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DataBrewRequest
 * \brief The DataBrewRequest class provides an interface for DataBrew requests.
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * \enum DataBrewRequest::Action
 *
 * This enum describes the actions that can be performed as DataBrew
 * requests.
 *
 * \value BatchDeleteRecipeVersionAction DataBrew BatchDeleteRecipeVersion action.
 * \value CreateDatasetAction DataBrew CreateDataset action.
 * \value CreateProfileJobAction DataBrew CreateProfileJob action.
 * \value CreateProjectAction DataBrew CreateProject action.
 * \value CreateRecipeAction DataBrew CreateRecipe action.
 * \value CreateRecipeJobAction DataBrew CreateRecipeJob action.
 * \value CreateRulesetAction DataBrew CreateRuleset action.
 * \value CreateScheduleAction DataBrew CreateSchedule action.
 * \value DeleteDatasetAction DataBrew DeleteDataset action.
 * \value DeleteJobAction DataBrew DeleteJob action.
 * \value DeleteProjectAction DataBrew DeleteProject action.
 * \value DeleteRecipeVersionAction DataBrew DeleteRecipeVersion action.
 * \value DeleteRulesetAction DataBrew DeleteRuleset action.
 * \value DeleteScheduleAction DataBrew DeleteSchedule action.
 * \value DescribeDatasetAction DataBrew DescribeDataset action.
 * \value DescribeJobAction DataBrew DescribeJob action.
 * \value DescribeJobRunAction DataBrew DescribeJobRun action.
 * \value DescribeProjectAction DataBrew DescribeProject action.
 * \value DescribeRecipeAction DataBrew DescribeRecipe action.
 * \value DescribeRulesetAction DataBrew DescribeRuleset action.
 * \value DescribeScheduleAction DataBrew DescribeSchedule action.
 * \value ListDatasetsAction DataBrew ListDatasets action.
 * \value ListJobRunsAction DataBrew ListJobRuns action.
 * \value ListJobsAction DataBrew ListJobs action.
 * \value ListProjectsAction DataBrew ListProjects action.
 * \value ListRecipeVersionsAction DataBrew ListRecipeVersions action.
 * \value ListRecipesAction DataBrew ListRecipes action.
 * \value ListRulesetsAction DataBrew ListRulesets action.
 * \value ListSchedulesAction DataBrew ListSchedules action.
 * \value ListTagsForResourceAction DataBrew ListTagsForResource action.
 * \value PublishRecipeAction DataBrew PublishRecipe action.
 * \value SendProjectSessionActionAction DataBrew SendProjectSessionAction action.
 * \value StartJobRunAction DataBrew StartJobRun action.
 * \value StartProjectSessionAction DataBrew StartProjectSession action.
 * \value StopJobRunAction DataBrew StopJobRun action.
 * \value TagResourceAction DataBrew TagResource action.
 * \value UntagResourceAction DataBrew UntagResource action.
 * \value UpdateDatasetAction DataBrew UpdateDataset action.
 * \value UpdateProfileJobAction DataBrew UpdateProfileJob action.
 * \value UpdateProjectAction DataBrew UpdateProject action.
 * \value UpdateRecipeAction DataBrew UpdateRecipe action.
 * \value UpdateRecipeJobAction DataBrew UpdateRecipeJob action.
 * \value UpdateRulesetAction DataBrew UpdateRuleset action.
 * \value UpdateScheduleAction DataBrew UpdateSchedule action.
 */

/*!
 * Constructs a DataBrewRequest object for DataBrew \a action.
 */
DataBrewRequest::DataBrewRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DataBrewRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DataBrewRequest::DataBrewRequest(const DataBrewRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DataBrewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DataBrewRequest object to be equal to \a other.
 */
DataBrewRequest& DataBrewRequest::operator=(const DataBrewRequest &other)
{
    Q_D(DataBrewRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DataBrewRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DataBrewRequestPrivate.
 */
DataBrewRequest::DataBrewRequest(DataBrewRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the DataBrew action to be performed by this request.
 */
DataBrewRequest::Action DataBrewRequest::action() const
{
    Q_D(const DataBrewRequest);
    return d->action;
}

/*!
 * Returns the name of the DataBrew action to be performed by this request.
 */
QString DataBrewRequest::actionString() const
{
    return DataBrewRequestPrivate::toString(action());
}

/*!
 * Returns the DataBrew API version implemented by this request.
 */
QString DataBrewRequest::apiVersion() const
{
    Q_D(const DataBrewRequest);
    return d->apiVersion;
}

/*!
 * Sets the DataBrew action to be performed by this request to \a action.
 */
void DataBrewRequest::setAction(const Action action)
{
    Q_D(DataBrewRequest);
    d->action = action;
}

/*!
 * Sets the DataBrew API version to include in this request to \a version.
 */
void DataBrewRequest::setApiVersion(const QString &version)
{
    Q_D(DataBrewRequest);
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
bool DataBrewRequest::operator==(const DataBrewRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DataBrew queue name.
 *
 * @par From DataBrew FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DataBrew queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DataBrewRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DataBrewRequest::clearParameter(const QString &name)
{
    Q_D(DataBrewRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DataBrewRequest::clearParameters()
{
    Q_D(DataBrewRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DataBrewRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DataBrewRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DataBrewRequest::parameters() const
{
    Q_D(const DataBrewRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DataBrewRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DataBrewRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DataBrewRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DataBrewRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DataBrew request using the given
 * \a endpoint.
 *
 * This DataBrew implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DataBrewRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DataBrewRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DataBrew::DataBrewRequestPrivate
 * \brief The DataBrewRequestPrivate class provides private implementation for DataBrewRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DataBrewRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
DataBrewRequestPrivate::DataBrewRequestPrivate(const DataBrewRequest::Action action, DataBrewRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-07-25"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DataBrewRequest class's copy constructor.
 */
DataBrewRequestPrivate::DataBrewRequestPrivate(const DataBrewRequestPrivate &other,
                                     DataBrewRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DataBrewRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DataBrew service's Action
 * query parameters.
 */
QString DataBrewRequestPrivate::toString(const DataBrewRequest::Action &action)
{
    #define ActionToString(action) \
        case DataBrewRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchDeleteRecipeVersion);
        ActionToString(CreateDataset);
        ActionToString(CreateProfileJob);
        ActionToString(CreateProject);
        ActionToString(CreateRecipe);
        ActionToString(CreateRecipeJob);
        ActionToString(CreateRuleset);
        ActionToString(CreateSchedule);
        ActionToString(DeleteDataset);
        ActionToString(DeleteJob);
        ActionToString(DeleteProject);
        ActionToString(DeleteRecipeVersion);
        ActionToString(DeleteRuleset);
        ActionToString(DeleteSchedule);
        ActionToString(DescribeDataset);
        ActionToString(DescribeJob);
        ActionToString(DescribeJobRun);
        ActionToString(DescribeProject);
        ActionToString(DescribeRecipe);
        ActionToString(DescribeRuleset);
        ActionToString(DescribeSchedule);
        ActionToString(ListDatasets);
        ActionToString(ListJobRuns);
        ActionToString(ListJobs);
        ActionToString(ListProjects);
        ActionToString(ListRecipeVersions);
        ActionToString(ListRecipes);
        ActionToString(ListRulesets);
        ActionToString(ListSchedules);
        ActionToString(ListTagsForResource);
        ActionToString(PublishRecipe);
        ActionToString(SendProjectSessionAction);
        ActionToString(StartJobRun);
        ActionToString(StartProjectSession);
        ActionToString(StopJobRun);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDataset);
        ActionToString(UpdateProfileJob);
        ActionToString(UpdateProject);
        ActionToString(UpdateRecipe);
        ActionToString(UpdateRecipeJob);
        ActionToString(UpdateRuleset);
        ActionToString(UpdateSchedule);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DataBrew
} // namespace QtAws

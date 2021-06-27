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

#include "gluedatabrewrequest.h"
#include "gluedatabrewrequest_p.h"

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::GlueDataBrewRequest
 * \brief The GlueDataBrewRequest class provides an interface for GlueDataBrew requests.
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * \enum GlueDataBrewRequest::Action
 *
 * This enum describes the actions that can be performed as GlueDataBrew
 * requests.
 *
 * \value BatchDeleteRecipeVersionAction GlueDataBrew BatchDeleteRecipeVersion action.
 * \value CreateDatasetAction GlueDataBrew CreateDataset action.
 * \value CreateProfileJobAction GlueDataBrew CreateProfileJob action.
 * \value CreateProjectAction GlueDataBrew CreateProject action.
 * \value CreateRecipeAction GlueDataBrew CreateRecipe action.
 * \value CreateRecipeJobAction GlueDataBrew CreateRecipeJob action.
 * \value CreateScheduleAction GlueDataBrew CreateSchedule action.
 * \value DeleteDatasetAction GlueDataBrew DeleteDataset action.
 * \value DeleteJobAction GlueDataBrew DeleteJob action.
 * \value DeleteProjectAction GlueDataBrew DeleteProject action.
 * \value DeleteRecipeVersionAction GlueDataBrew DeleteRecipeVersion action.
 * \value DeleteScheduleAction GlueDataBrew DeleteSchedule action.
 * \value DescribeDatasetAction GlueDataBrew DescribeDataset action.
 * \value DescribeJobAction GlueDataBrew DescribeJob action.
 * \value DescribeJobRunAction GlueDataBrew DescribeJobRun action.
 * \value DescribeProjectAction GlueDataBrew DescribeProject action.
 * \value DescribeRecipeAction GlueDataBrew DescribeRecipe action.
 * \value DescribeScheduleAction GlueDataBrew DescribeSchedule action.
 * \value ListDatasetsAction GlueDataBrew ListDatasets action.
 * \value ListJobRunsAction GlueDataBrew ListJobRuns action.
 * \value ListJobsAction GlueDataBrew ListJobs action.
 * \value ListProjectsAction GlueDataBrew ListProjects action.
 * \value ListRecipeVersionsAction GlueDataBrew ListRecipeVersions action.
 * \value ListRecipesAction GlueDataBrew ListRecipes action.
 * \value ListSchedulesAction GlueDataBrew ListSchedules action.
 * \value ListTagsForResourceAction GlueDataBrew ListTagsForResource action.
 * \value PublishRecipeAction GlueDataBrew PublishRecipe action.
 * \value SendProjectSessionActionAction GlueDataBrew SendProjectSessionAction action.
 * \value StartJobRunAction GlueDataBrew StartJobRun action.
 * \value StartProjectSessionAction GlueDataBrew StartProjectSession action.
 * \value StopJobRunAction GlueDataBrew StopJobRun action.
 * \value TagResourceAction GlueDataBrew TagResource action.
 * \value UntagResourceAction GlueDataBrew UntagResource action.
 * \value UpdateDatasetAction GlueDataBrew UpdateDataset action.
 * \value UpdateProfileJobAction GlueDataBrew UpdateProfileJob action.
 * \value UpdateProjectAction GlueDataBrew UpdateProject action.
 * \value UpdateRecipeAction GlueDataBrew UpdateRecipe action.
 * \value UpdateRecipeJobAction GlueDataBrew UpdateRecipeJob action.
 * \value UpdateScheduleAction GlueDataBrew UpdateSchedule action.
 */

/*!
 * Constructs a GlueDataBrewRequest object for GlueDataBrew \a action.
 */
GlueDataBrewRequest::GlueDataBrewRequest(const Action action)
    : d_ptr(new GlueDataBrewRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
GlueDataBrewRequest::GlueDataBrewRequest(const GlueDataBrewRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new GlueDataBrewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the GlueDataBrewRequest object to be equal to \a other.
 */
GlueDataBrewRequest& GlueDataBrewRequest::operator=(const GlueDataBrewRequest &other)
{
    Q_D(GlueDataBrewRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa GlueDataBrewRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GlueDataBrewRequestPrivate.
 */
GlueDataBrewRequest::GlueDataBrewRequest(GlueDataBrewRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the GlueDataBrew action to be performed by this request.
 */
GlueDataBrewRequest::Action GlueDataBrewRequest::action() const
{
    Q_D(const GlueDataBrewRequest);
    return d->action;
}

/*!
 * Returns the name of the GlueDataBrew action to be performed by this request.
 */
QString GlueDataBrewRequest::actionString() const
{
    return GlueDataBrewRequestPrivate::toString(action());
}

/*!
 * Returns the GlueDataBrew API version implemented by this request.
 */
QString GlueDataBrewRequest::apiVersion() const
{
    Q_D(const GlueDataBrewRequest);
    return d->apiVersion;
}

/*!
 * Sets the GlueDataBrew action to be performed by this request to \a action.
 */
void GlueDataBrewRequest::setAction(const Action action)
{
    Q_D(GlueDataBrewRequest);
    d->action = action;
}

/*!
 * Sets the GlueDataBrew API version to include in this request to \a version.
 */
void GlueDataBrewRequest::setApiVersion(const QString &version)
{
    Q_D(GlueDataBrewRequest);
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
bool GlueDataBrewRequest::operator==(const GlueDataBrewRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid GlueDataBrew queue name.
 *
 * @par From GlueDataBrew FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid GlueDataBrew queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool GlueDataBrewRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int GlueDataBrewRequest::clearParameter(const QString &name)
{
    Q_D(GlueDataBrewRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void GlueDataBrewRequest::clearParameters()
{
    Q_D(GlueDataBrewRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant GlueDataBrewRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GlueDataBrewRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &GlueDataBrewRequest::parameters() const
{
    Q_D(const GlueDataBrewRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void GlueDataBrewRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GlueDataBrewRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void GlueDataBrewRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GlueDataBrewRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the GlueDataBrew request using the given
 * \a endpoint.
 *
 * This GlueDataBrew implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest GlueDataBrewRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const GlueDataBrewRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::GlueDataBrew::GlueDataBrewRequestPrivate
 * \brief The GlueDataBrewRequestPrivate class provides private implementation for GlueDataBrewRequest.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a GlueDataBrewRequestPrivate object for GlueDataBrew \a action,
 * with public implementation \a q.
 */
GlueDataBrewRequestPrivate::GlueDataBrewRequestPrivate(const GlueDataBrewRequest::Action action, GlueDataBrewRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GlueDataBrewRequest class's copy constructor.
 */
GlueDataBrewRequestPrivate::GlueDataBrewRequestPrivate(const GlueDataBrewRequestPrivate &other,
                                     GlueDataBrewRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts GlueDataBrewRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the GlueDataBrew service's Action
 * query parameters.
 */
QString GlueDataBrewRequestPrivate::toString(const GlueDataBrewRequest::Action &action)
{
    #define ActionToString(action) \
        case GlueDataBrewRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace GlueDataBrew
} // namespace QtAws

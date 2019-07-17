/*
    Copyright 2013-2019 Paul Colby

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

#include "sagemakerrequest.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::SageMakerRequest
 * \brief The SageMakerRequest class provides an interface for SageMaker requests.
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * \enum SageMakerRequest::Action
 *
 * This enum describes the actions that can be performed as SageMaker
 * requests.
 *
 * \value AddTagsAction SageMaker AddTags action.
 * \value CreateAlgorithmAction SageMaker CreateAlgorithm action.
 * \value CreateCodeRepositoryAction SageMaker CreateCodeRepository action.
 * \value CreateCompilationJobAction SageMaker CreateCompilationJob action.
 * \value CreateEndpointAction SageMaker CreateEndpoint action.
 * \value CreateEndpointConfigAction SageMaker CreateEndpointConfig action.
 * \value CreateHyperParameterTuningJobAction SageMaker CreateHyperParameterTuningJob action.
 * \value CreateLabelingJobAction SageMaker CreateLabelingJob action.
 * \value CreateModelAction SageMaker CreateModel action.
 * \value CreateModelPackageAction SageMaker CreateModelPackage action.
 * \value CreateNotebookInstanceAction SageMaker CreateNotebookInstance action.
 * \value CreateNotebookInstanceLifecycleConfigAction SageMaker CreateNotebookInstanceLifecycleConfig action.
 * \value CreatePresignedNotebookInstanceUrlAction SageMaker CreatePresignedNotebookInstanceUrl action.
 * \value CreateTrainingJobAction SageMaker CreateTrainingJob action.
 * \value CreateTransformJobAction SageMaker CreateTransformJob action.
 * \value CreateWorkteamAction SageMaker CreateWorkteam action.
 * \value DeleteAlgorithmAction SageMaker DeleteAlgorithm action.
 * \value DeleteCodeRepositoryAction SageMaker DeleteCodeRepository action.
 * \value DeleteEndpointAction SageMaker DeleteEndpoint action.
 * \value DeleteEndpointConfigAction SageMaker DeleteEndpointConfig action.
 * \value DeleteModelAction SageMaker DeleteModel action.
 * \value DeleteModelPackageAction SageMaker DeleteModelPackage action.
 * \value DeleteNotebookInstanceAction SageMaker DeleteNotebookInstance action.
 * \value DeleteNotebookInstanceLifecycleConfigAction SageMaker DeleteNotebookInstanceLifecycleConfig action.
 * \value DeleteTagsAction SageMaker DeleteTags action.
 * \value DeleteWorkteamAction SageMaker DeleteWorkteam action.
 * \value DescribeAlgorithmAction SageMaker DescribeAlgorithm action.
 * \value DescribeCodeRepositoryAction SageMaker DescribeCodeRepository action.
 * \value DescribeCompilationJobAction SageMaker DescribeCompilationJob action.
 * \value DescribeEndpointAction SageMaker DescribeEndpoint action.
 * \value DescribeEndpointConfigAction SageMaker DescribeEndpointConfig action.
 * \value DescribeHyperParameterTuningJobAction SageMaker DescribeHyperParameterTuningJob action.
 * \value DescribeLabelingJobAction SageMaker DescribeLabelingJob action.
 * \value DescribeModelAction SageMaker DescribeModel action.
 * \value DescribeModelPackageAction SageMaker DescribeModelPackage action.
 * \value DescribeNotebookInstanceAction SageMaker DescribeNotebookInstance action.
 * \value DescribeNotebookInstanceLifecycleConfigAction SageMaker DescribeNotebookInstanceLifecycleConfig action.
 * \value DescribeSubscribedWorkteamAction SageMaker DescribeSubscribedWorkteam action.
 * \value DescribeTrainingJobAction SageMaker DescribeTrainingJob action.
 * \value DescribeTransformJobAction SageMaker DescribeTransformJob action.
 * \value DescribeWorkteamAction SageMaker DescribeWorkteam action.
 * \value GetSearchSuggestionsAction SageMaker GetSearchSuggestions action.
 * \value ListAlgorithmsAction SageMaker ListAlgorithms action.
 * \value ListCodeRepositoriesAction SageMaker ListCodeRepositories action.
 * \value ListCompilationJobsAction SageMaker ListCompilationJobs action.
 * \value ListEndpointConfigsAction SageMaker ListEndpointConfigs action.
 * \value ListEndpointsAction SageMaker ListEndpoints action.
 * \value ListHyperParameterTuningJobsAction SageMaker ListHyperParameterTuningJobs action.
 * \value ListLabelingJobsAction SageMaker ListLabelingJobs action.
 * \value ListLabelingJobsForWorkteamAction SageMaker ListLabelingJobsForWorkteam action.
 * \value ListModelPackagesAction SageMaker ListModelPackages action.
 * \value ListModelsAction SageMaker ListModels action.
 * \value ListNotebookInstanceLifecycleConfigsAction SageMaker ListNotebookInstanceLifecycleConfigs action.
 * \value ListNotebookInstancesAction SageMaker ListNotebookInstances action.
 * \value ListSubscribedWorkteamsAction SageMaker ListSubscribedWorkteams action.
 * \value ListTagsAction SageMaker ListTags action.
 * \value ListTrainingJobsAction SageMaker ListTrainingJobs action.
 * \value ListTrainingJobsForHyperParameterTuningJobAction SageMaker ListTrainingJobsForHyperParameterTuningJob action.
 * \value ListTransformJobsAction SageMaker ListTransformJobs action.
 * \value ListWorkteamsAction SageMaker ListWorkteams action.
 * \value RenderUiTemplateAction SageMaker RenderUiTemplate action.
 * \value SearchAction SageMaker Search action.
 * \value StartNotebookInstanceAction SageMaker StartNotebookInstance action.
 * \value StopCompilationJobAction SageMaker StopCompilationJob action.
 * \value StopHyperParameterTuningJobAction SageMaker StopHyperParameterTuningJob action.
 * \value StopLabelingJobAction SageMaker StopLabelingJob action.
 * \value StopNotebookInstanceAction SageMaker StopNotebookInstance action.
 * \value StopTrainingJobAction SageMaker StopTrainingJob action.
 * \value StopTransformJobAction SageMaker StopTransformJob action.
 * \value UpdateCodeRepositoryAction SageMaker UpdateCodeRepository action.
 * \value UpdateEndpointAction SageMaker UpdateEndpoint action.
 * \value UpdateEndpointWeightsAndCapacitiesAction SageMaker UpdateEndpointWeightsAndCapacities action.
 * \value UpdateNotebookInstanceAction SageMaker UpdateNotebookInstance action.
 * \value UpdateNotebookInstanceLifecycleConfigAction SageMaker UpdateNotebookInstanceLifecycleConfig action.
 * \value UpdateWorkteamAction SageMaker UpdateWorkteam action.
 */

/*!
 * Constructs a SageMakerRequest object for SageMaker \a action.
 */
SageMakerRequest::SageMakerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SageMakerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SageMakerRequest::SageMakerRequest(const SageMakerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SageMakerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SageMakerRequest object to be equal to \a other.
 */
SageMakerRequest& SageMakerRequest::operator=(const SageMakerRequest &other)
{
    Q_D(SageMakerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SageMakerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SageMakerRequestPrivate.
 */
SageMakerRequest::SageMakerRequest(SageMakerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SageMaker action to be performed by this request.
 */
SageMakerRequest::Action SageMakerRequest::action() const
{
    Q_D(const SageMakerRequest);
    return d->action;
}

/*!
 * Returns the name of the SageMaker action to be performed by this request.
 */
QString SageMakerRequest::actionString() const
{
    return SageMakerRequestPrivate::toString(action());
}

/*!
 * Returns the SageMaker API version implemented by this request.
 */
QString SageMakerRequest::apiVersion() const
{
    Q_D(const SageMakerRequest);
    return d->apiVersion;
}

/*!
 * Sets the SageMaker action to be performed by this request to \a action.
 */
void SageMakerRequest::setAction(const Action action)
{
    Q_D(SageMakerRequest);
    d->action = action;
}

/*!
 * Sets the SageMaker API version to include in this request to \a version.
 */
void SageMakerRequest::setApiVersion(const QString &version)
{
    Q_D(SageMakerRequest);
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
bool SageMakerRequest::operator==(const SageMakerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SageMaker queue name.
 *
 * @par From SageMaker FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SageMaker queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SageMakerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SageMakerRequest::clearParameter(const QString &name)
{
    Q_D(SageMakerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SageMakerRequest::clearParameters()
{
    Q_D(SageMakerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SageMakerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SageMakerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SageMakerRequest::parameters() const
{
    Q_D(const SageMakerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SageMakerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SageMakerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SageMakerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SageMakerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SageMaker request using the given
 * \a endpoint.
 *
 * This SageMaker implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SageMakerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SageMakerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SageMaker::SageMakerRequestPrivate
 * \brief The SageMakerRequestPrivate class provides private implementation for SageMakerRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SageMakerRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
SageMakerRequestPrivate::SageMakerRequestPrivate(const SageMakerRequest::Action action, SageMakerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SageMakerRequest class's copy constructor.
 */
SageMakerRequestPrivate::SageMakerRequestPrivate(const SageMakerRequestPrivate &other,
                                     SageMakerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SageMakerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SageMaker service's Action
 * query parameters.
 */
QString SageMakerRequestPrivate::toString(const SageMakerRequest::Action &action)
{
    #define ActionToString(action) \
        case SageMakerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SageMaker
} // namespace QtAws

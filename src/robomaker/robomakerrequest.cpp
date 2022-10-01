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

#include "robomakerrequest.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::RoboMakerRequest
 * \brief The RoboMakerRequest class provides an interface for RoboMaker requests.
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * \enum RoboMakerRequest::Action
 *
 * This enum describes the actions that can be performed as RoboMaker
 * requests.
 *
 * \value BatchDeleteWorldsAction RoboMaker BatchDeleteWorlds action.
 * \value BatchDescribeSimulationJobAction RoboMaker BatchDescribeSimulationJob action.
 * \value CancelDeploymentJobAction RoboMaker CancelDeploymentJob action.
 * \value CancelSimulationJobAction RoboMaker CancelSimulationJob action.
 * \value CancelSimulationJobBatchAction RoboMaker CancelSimulationJobBatch action.
 * \value CancelWorldExportJobAction RoboMaker CancelWorldExportJob action.
 * \value CancelWorldGenerationJobAction RoboMaker CancelWorldGenerationJob action.
 * \value CreateDeploymentJobAction RoboMaker CreateDeploymentJob action.
 * \value CreateFleetAction RoboMaker CreateFleet action.
 * \value CreateRobotAction RoboMaker CreateRobot action.
 * \value CreateRobotApplicationAction RoboMaker CreateRobotApplication action.
 * \value CreateRobotApplicationVersionAction RoboMaker CreateRobotApplicationVersion action.
 * \value CreateSimulationApplicationAction RoboMaker CreateSimulationApplication action.
 * \value CreateSimulationApplicationVersionAction RoboMaker CreateSimulationApplicationVersion action.
 * \value CreateSimulationJobAction RoboMaker CreateSimulationJob action.
 * \value CreateWorldExportJobAction RoboMaker CreateWorldExportJob action.
 * \value CreateWorldGenerationJobAction RoboMaker CreateWorldGenerationJob action.
 * \value CreateWorldTemplateAction RoboMaker CreateWorldTemplate action.
 * \value DeleteFleetAction RoboMaker DeleteFleet action.
 * \value DeleteRobotAction RoboMaker DeleteRobot action.
 * \value DeleteRobotApplicationAction RoboMaker DeleteRobotApplication action.
 * \value DeleteSimulationApplicationAction RoboMaker DeleteSimulationApplication action.
 * \value DeleteWorldTemplateAction RoboMaker DeleteWorldTemplate action.
 * \value DeregisterRobotAction RoboMaker DeregisterRobot action.
 * \value DescribeDeploymentJobAction RoboMaker DescribeDeploymentJob action.
 * \value DescribeFleetAction RoboMaker DescribeFleet action.
 * \value DescribeRobotAction RoboMaker DescribeRobot action.
 * \value DescribeRobotApplicationAction RoboMaker DescribeRobotApplication action.
 * \value DescribeSimulationApplicationAction RoboMaker DescribeSimulationApplication action.
 * \value DescribeSimulationJobAction RoboMaker DescribeSimulationJob action.
 * \value DescribeSimulationJobBatchAction RoboMaker DescribeSimulationJobBatch action.
 * \value DescribeWorldAction RoboMaker DescribeWorld action.
 * \value DescribeWorldExportJobAction RoboMaker DescribeWorldExportJob action.
 * \value DescribeWorldGenerationJobAction RoboMaker DescribeWorldGenerationJob action.
 * \value DescribeWorldTemplateAction RoboMaker DescribeWorldTemplate action.
 * \value GetWorldTemplateBodyAction RoboMaker GetWorldTemplateBody action.
 * \value ListDeploymentJobsAction RoboMaker ListDeploymentJobs action.
 * \value ListFleetsAction RoboMaker ListFleets action.
 * \value ListRobotApplicationsAction RoboMaker ListRobotApplications action.
 * \value ListRobotsAction RoboMaker ListRobots action.
 * \value ListSimulationApplicationsAction RoboMaker ListSimulationApplications action.
 * \value ListSimulationJobBatchesAction RoboMaker ListSimulationJobBatches action.
 * \value ListSimulationJobsAction RoboMaker ListSimulationJobs action.
 * \value ListTagsForResourceAction RoboMaker ListTagsForResource action.
 * \value ListWorldExportJobsAction RoboMaker ListWorldExportJobs action.
 * \value ListWorldGenerationJobsAction RoboMaker ListWorldGenerationJobs action.
 * \value ListWorldTemplatesAction RoboMaker ListWorldTemplates action.
 * \value ListWorldsAction RoboMaker ListWorlds action.
 * \value RegisterRobotAction RoboMaker RegisterRobot action.
 * \value RestartSimulationJobAction RoboMaker RestartSimulationJob action.
 * \value StartSimulationJobBatchAction RoboMaker StartSimulationJobBatch action.
 * \value SyncDeploymentJobAction RoboMaker SyncDeploymentJob action.
 * \value TagResourceAction RoboMaker TagResource action.
 * \value UntagResourceAction RoboMaker UntagResource action.
 * \value UpdateRobotApplicationAction RoboMaker UpdateRobotApplication action.
 * \value UpdateSimulationApplicationAction RoboMaker UpdateSimulationApplication action.
 * \value UpdateWorldTemplateAction RoboMaker UpdateWorldTemplate action.
 */

/*!
 * Constructs a RoboMakerRequest object for RoboMaker \a action.
 */
RoboMakerRequest::RoboMakerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RoboMakerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RoboMakerRequest::RoboMakerRequest(const RoboMakerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RoboMakerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RoboMakerRequest object to be equal to \a other.
 */
RoboMakerRequest& RoboMakerRequest::operator=(const RoboMakerRequest &other)
{
    Q_D(RoboMakerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RoboMakerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RoboMakerRequestPrivate.
 */
RoboMakerRequest::RoboMakerRequest(RoboMakerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the RoboMaker action to be performed by this request.
 */
RoboMakerRequest::Action RoboMakerRequest::action() const
{
    Q_D(const RoboMakerRequest);
    return d->action;
}

/*!
 * Returns the name of the RoboMaker action to be performed by this request.
 */
QString RoboMakerRequest::actionString() const
{
    return RoboMakerRequestPrivate::toString(action());
}

/*!
 * Returns the RoboMaker API version implemented by this request.
 */
QString RoboMakerRequest::apiVersion() const
{
    Q_D(const RoboMakerRequest);
    return d->apiVersion;
}

/*!
 * Sets the RoboMaker action to be performed by this request to \a action.
 */
void RoboMakerRequest::setAction(const Action action)
{
    Q_D(RoboMakerRequest);
    d->action = action;
}

/*!
 * Sets the RoboMaker API version to include in this request to \a version.
 */
void RoboMakerRequest::setApiVersion(const QString &version)
{
    Q_D(RoboMakerRequest);
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
bool RoboMakerRequest::operator==(const RoboMakerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid RoboMaker queue name.
 *
 * @par From RoboMaker FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid RoboMaker queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RoboMakerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RoboMakerRequest::clearParameter(const QString &name)
{
    Q_D(RoboMakerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RoboMakerRequest::clearParameters()
{
    Q_D(RoboMakerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RoboMakerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RoboMakerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RoboMakerRequest::parameters() const
{
    Q_D(const RoboMakerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RoboMakerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RoboMakerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RoboMakerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RoboMakerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the RoboMaker request using the given
 * \a endpoint.
 *
 * This RoboMaker implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RoboMakerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RoboMakerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::RoboMaker::RoboMakerRequestPrivate
 * \brief The RoboMakerRequestPrivate class provides private implementation for RoboMakerRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RoboMakerRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
RoboMakerRequestPrivate::RoboMakerRequestPrivate(const RoboMakerRequest::Action action, RoboMakerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-06-29"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RoboMakerRequest class's copy constructor.
 */
RoboMakerRequestPrivate::RoboMakerRequestPrivate(const RoboMakerRequestPrivate &other,
                                     RoboMakerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RoboMakerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the RoboMaker service's Action
 * query parameters.
 */
QString RoboMakerRequestPrivate::toString(const RoboMakerRequest::Action &action)
{
    #define ActionToString(action) \
        case RoboMakerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchDeleteWorlds);
        ActionToString(BatchDescribeSimulationJob);
        ActionToString(CancelDeploymentJob);
        ActionToString(CancelSimulationJob);
        ActionToString(CancelSimulationJobBatch);
        ActionToString(CancelWorldExportJob);
        ActionToString(CancelWorldGenerationJob);
        ActionToString(CreateDeploymentJob);
        ActionToString(CreateFleet);
        ActionToString(CreateRobot);
        ActionToString(CreateRobotApplication);
        ActionToString(CreateRobotApplicationVersion);
        ActionToString(CreateSimulationApplication);
        ActionToString(CreateSimulationApplicationVersion);
        ActionToString(CreateSimulationJob);
        ActionToString(CreateWorldExportJob);
        ActionToString(CreateWorldGenerationJob);
        ActionToString(CreateWorldTemplate);
        ActionToString(DeleteFleet);
        ActionToString(DeleteRobot);
        ActionToString(DeleteRobotApplication);
        ActionToString(DeleteSimulationApplication);
        ActionToString(DeleteWorldTemplate);
        ActionToString(DeregisterRobot);
        ActionToString(DescribeDeploymentJob);
        ActionToString(DescribeFleet);
        ActionToString(DescribeRobot);
        ActionToString(DescribeRobotApplication);
        ActionToString(DescribeSimulationApplication);
        ActionToString(DescribeSimulationJob);
        ActionToString(DescribeSimulationJobBatch);
        ActionToString(DescribeWorld);
        ActionToString(DescribeWorldExportJob);
        ActionToString(DescribeWorldGenerationJob);
        ActionToString(DescribeWorldTemplate);
        ActionToString(GetWorldTemplateBody);
        ActionToString(ListDeploymentJobs);
        ActionToString(ListFleets);
        ActionToString(ListRobotApplications);
        ActionToString(ListRobots);
        ActionToString(ListSimulationApplications);
        ActionToString(ListSimulationJobBatches);
        ActionToString(ListSimulationJobs);
        ActionToString(ListTagsForResource);
        ActionToString(ListWorldExportJobs);
        ActionToString(ListWorldGenerationJobs);
        ActionToString(ListWorldTemplates);
        ActionToString(ListWorlds);
        ActionToString(RegisterRobot);
        ActionToString(RestartSimulationJob);
        ActionToString(StartSimulationJobBatch);
        ActionToString(SyncDeploymentJob);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateRobotApplication);
        ActionToString(UpdateSimulationApplication);
        ActionToString(UpdateWorldTemplate);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace RoboMaker
} // namespace QtAws

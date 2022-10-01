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

#include "evidentlyrequest.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::EvidentlyRequest
 * \brief The EvidentlyRequest class provides an interface for Evidently requests.
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * \enum EvidentlyRequest::Action
 *
 * This enum describes the actions that can be performed as Evidently
 * requests.
 *
 * \value BatchEvaluateFeatureAction Evidently BatchEvaluateFeature action.
 * \value CreateExperimentAction Evidently CreateExperiment action.
 * \value CreateFeatureAction Evidently CreateFeature action.
 * \value CreateLaunchAction Evidently CreateLaunch action.
 * \value CreateProjectAction Evidently CreateProject action.
 * \value CreateSegmentAction Evidently CreateSegment action.
 * \value DeleteExperimentAction Evidently DeleteExperiment action.
 * \value DeleteFeatureAction Evidently DeleteFeature action.
 * \value DeleteLaunchAction Evidently DeleteLaunch action.
 * \value DeleteProjectAction Evidently DeleteProject action.
 * \value DeleteSegmentAction Evidently DeleteSegment action.
 * \value EvaluateFeatureAction Evidently EvaluateFeature action.
 * \value GetExperimentAction Evidently GetExperiment action.
 * \value GetExperimentResultsAction Evidently GetExperimentResults action.
 * \value GetFeatureAction Evidently GetFeature action.
 * \value GetLaunchAction Evidently GetLaunch action.
 * \value GetProjectAction Evidently GetProject action.
 * \value GetSegmentAction Evidently GetSegment action.
 * \value ListExperimentsAction Evidently ListExperiments action.
 * \value ListFeaturesAction Evidently ListFeatures action.
 * \value ListLaunchesAction Evidently ListLaunches action.
 * \value ListProjectsAction Evidently ListProjects action.
 * \value ListSegmentReferencesAction Evidently ListSegmentReferences action.
 * \value ListSegmentsAction Evidently ListSegments action.
 * \value ListTagsForResourceAction Evidently ListTagsForResource action.
 * \value PutProjectEventsAction Evidently PutProjectEvents action.
 * \value StartExperimentAction Evidently StartExperiment action.
 * \value StartLaunchAction Evidently StartLaunch action.
 * \value StopExperimentAction Evidently StopExperiment action.
 * \value StopLaunchAction Evidently StopLaunch action.
 * \value TagResourceAction Evidently TagResource action.
 * \value TestSegmentPatternAction Evidently TestSegmentPattern action.
 * \value UntagResourceAction Evidently UntagResource action.
 * \value UpdateExperimentAction Evidently UpdateExperiment action.
 * \value UpdateFeatureAction Evidently UpdateFeature action.
 * \value UpdateLaunchAction Evidently UpdateLaunch action.
 * \value UpdateProjectAction Evidently UpdateProject action.
 * \value UpdateProjectDataDeliveryAction Evidently UpdateProjectDataDelivery action.
 */

/*!
 * Constructs a EvidentlyRequest object for Evidently \a action.
 */
EvidentlyRequest::EvidentlyRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EvidentlyRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EvidentlyRequest::EvidentlyRequest(const EvidentlyRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EvidentlyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EvidentlyRequest object to be equal to \a other.
 */
EvidentlyRequest& EvidentlyRequest::operator=(const EvidentlyRequest &other)
{
    Q_D(EvidentlyRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EvidentlyRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EvidentlyRequestPrivate.
 */
EvidentlyRequest::EvidentlyRequest(EvidentlyRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Evidently action to be performed by this request.
 */
EvidentlyRequest::Action EvidentlyRequest::action() const
{
    Q_D(const EvidentlyRequest);
    return d->action;
}

/*!
 * Returns the name of the Evidently action to be performed by this request.
 */
QString EvidentlyRequest::actionString() const
{
    return EvidentlyRequestPrivate::toString(action());
}

/*!
 * Returns the Evidently API version implemented by this request.
 */
QString EvidentlyRequest::apiVersion() const
{
    Q_D(const EvidentlyRequest);
    return d->apiVersion;
}

/*!
 * Sets the Evidently action to be performed by this request to \a action.
 */
void EvidentlyRequest::setAction(const Action action)
{
    Q_D(EvidentlyRequest);
    d->action = action;
}

/*!
 * Sets the Evidently API version to include in this request to \a version.
 */
void EvidentlyRequest::setApiVersion(const QString &version)
{
    Q_D(EvidentlyRequest);
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
bool EvidentlyRequest::operator==(const EvidentlyRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Evidently queue name.
 *
 * @par From Evidently FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Evidently queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EvidentlyRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EvidentlyRequest::clearParameter(const QString &name)
{
    Q_D(EvidentlyRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EvidentlyRequest::clearParameters()
{
    Q_D(EvidentlyRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EvidentlyRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EvidentlyRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EvidentlyRequest::parameters() const
{
    Q_D(const EvidentlyRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EvidentlyRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EvidentlyRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EvidentlyRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EvidentlyRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Evidently request using the given
 * \a endpoint.
 *
 * This Evidently implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EvidentlyRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EvidentlyRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Evidently::EvidentlyRequestPrivate
 * \brief The EvidentlyRequestPrivate class provides private implementation for EvidentlyRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a EvidentlyRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
EvidentlyRequestPrivate::EvidentlyRequestPrivate(const EvidentlyRequest::Action action, EvidentlyRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-02-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EvidentlyRequest class's copy constructor.
 */
EvidentlyRequestPrivate::EvidentlyRequestPrivate(const EvidentlyRequestPrivate &other,
                                     EvidentlyRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EvidentlyRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Evidently service's Action
 * query parameters.
 */
QString EvidentlyRequestPrivate::toString(const EvidentlyRequest::Action &action)
{
    #define ActionToString(action) \
        case EvidentlyRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchEvaluateFeature);
        ActionToString(CreateExperiment);
        ActionToString(CreateFeature);
        ActionToString(CreateLaunch);
        ActionToString(CreateProject);
        ActionToString(CreateSegment);
        ActionToString(DeleteExperiment);
        ActionToString(DeleteFeature);
        ActionToString(DeleteLaunch);
        ActionToString(DeleteProject);
        ActionToString(DeleteSegment);
        ActionToString(EvaluateFeature);
        ActionToString(GetExperiment);
        ActionToString(GetExperimentResults);
        ActionToString(GetFeature);
        ActionToString(GetLaunch);
        ActionToString(GetProject);
        ActionToString(GetSegment);
        ActionToString(ListExperiments);
        ActionToString(ListFeatures);
        ActionToString(ListLaunches);
        ActionToString(ListProjects);
        ActionToString(ListSegmentReferences);
        ActionToString(ListSegments);
        ActionToString(ListTagsForResource);
        ActionToString(PutProjectEvents);
        ActionToString(StartExperiment);
        ActionToString(StartLaunch);
        ActionToString(StopExperiment);
        ActionToString(StopLaunch);
        ActionToString(TagResource);
        ActionToString(TestSegmentPattern);
        ActionToString(UntagResource);
        ActionToString(UpdateExperiment);
        ActionToString(UpdateFeature);
        ActionToString(UpdateLaunch);
        ActionToString(UpdateProject);
        ActionToString(UpdateProjectDataDelivery);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Evidently
} // namespace QtAws

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

#include "comprehendmedicalrequest.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ComprehendMedicalRequest
 * \brief The ComprehendMedicalRequest class provides an interface for ComprehendMedical requests.
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * \enum ComprehendMedicalRequest::Action
 *
 * This enum describes the actions that can be performed as ComprehendMedical
 * requests.
 *
 * \value DescribeEntitiesDetectionV2JobAction ComprehendMedical DescribeEntitiesDetectionV2Job action.
 * \value DescribeICD10CMInferenceJobAction ComprehendMedical DescribeICD10CMInferenceJob action.
 * \value DescribePHIDetectionJobAction ComprehendMedical DescribePHIDetectionJob action.
 * \value DescribeRxNormInferenceJobAction ComprehendMedical DescribeRxNormInferenceJob action.
 * \value DetectEntitiesAction ComprehendMedical DetectEntities action.
 * \value DetectEntitiesV2Action ComprehendMedical DetectEntitiesV2 action.
 * \value DetectPHIAction ComprehendMedical DetectPHI action.
 * \value InferICD10CMAction ComprehendMedical InferICD10CM action.
 * \value InferRxNormAction ComprehendMedical InferRxNorm action.
 * \value ListEntitiesDetectionV2JobsAction ComprehendMedical ListEntitiesDetectionV2Jobs action.
 * \value ListICD10CMInferenceJobsAction ComprehendMedical ListICD10CMInferenceJobs action.
 * \value ListPHIDetectionJobsAction ComprehendMedical ListPHIDetectionJobs action.
 * \value ListRxNormInferenceJobsAction ComprehendMedical ListRxNormInferenceJobs action.
 * \value StartEntitiesDetectionV2JobAction ComprehendMedical StartEntitiesDetectionV2Job action.
 * \value StartICD10CMInferenceJobAction ComprehendMedical StartICD10CMInferenceJob action.
 * \value StartPHIDetectionJobAction ComprehendMedical StartPHIDetectionJob action.
 * \value StartRxNormInferenceJobAction ComprehendMedical StartRxNormInferenceJob action.
 * \value StopEntitiesDetectionV2JobAction ComprehendMedical StopEntitiesDetectionV2Job action.
 * \value StopICD10CMInferenceJobAction ComprehendMedical StopICD10CMInferenceJob action.
 * \value StopPHIDetectionJobAction ComprehendMedical StopPHIDetectionJob action.
 * \value StopRxNormInferenceJobAction ComprehendMedical StopRxNormInferenceJob action.
 */

/*!
 * Constructs a ComprehendMedicalRequest object for ComprehendMedical \a action.
 */
ComprehendMedicalRequest::ComprehendMedicalRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ComprehendMedicalRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ComprehendMedicalRequest::ComprehendMedicalRequest(const ComprehendMedicalRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ComprehendMedicalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ComprehendMedicalRequest object to be equal to \a other.
 */
ComprehendMedicalRequest& ComprehendMedicalRequest::operator=(const ComprehendMedicalRequest &other)
{
    Q_D(ComprehendMedicalRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ComprehendMedicalRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ComprehendMedicalRequestPrivate.
 */
ComprehendMedicalRequest::ComprehendMedicalRequest(ComprehendMedicalRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ComprehendMedical action to be performed by this request.
 */
ComprehendMedicalRequest::Action ComprehendMedicalRequest::action() const
{
    Q_D(const ComprehendMedicalRequest);
    return d->action;
}

/*!
 * Returns the name of the ComprehendMedical action to be performed by this request.
 */
QString ComprehendMedicalRequest::actionString() const
{
    return ComprehendMedicalRequestPrivate::toString(action());
}

/*!
 * Returns the ComprehendMedical API version implemented by this request.
 */
QString ComprehendMedicalRequest::apiVersion() const
{
    Q_D(const ComprehendMedicalRequest);
    return d->apiVersion;
}

/*!
 * Sets the ComprehendMedical action to be performed by this request to \a action.
 */
void ComprehendMedicalRequest::setAction(const Action action)
{
    Q_D(ComprehendMedicalRequest);
    d->action = action;
}

/*!
 * Sets the ComprehendMedical API version to include in this request to \a version.
 */
void ComprehendMedicalRequest::setApiVersion(const QString &version)
{
    Q_D(ComprehendMedicalRequest);
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
bool ComprehendMedicalRequest::operator==(const ComprehendMedicalRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ComprehendMedical queue name.
 *
 * @par From ComprehendMedical FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ComprehendMedical queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ComprehendMedicalRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ComprehendMedicalRequest::clearParameter(const QString &name)
{
    Q_D(ComprehendMedicalRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ComprehendMedicalRequest::clearParameters()
{
    Q_D(ComprehendMedicalRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ComprehendMedicalRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ComprehendMedicalRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ComprehendMedicalRequest::parameters() const
{
    Q_D(const ComprehendMedicalRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ComprehendMedicalRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ComprehendMedicalRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ComprehendMedicalRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ComprehendMedicalRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ComprehendMedical request using the given
 * \a endpoint.
 *
 * This ComprehendMedical implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ComprehendMedicalRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ComprehendMedicalRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ComprehendMedical::ComprehendMedicalRequestPrivate
 * \brief The ComprehendMedicalRequestPrivate class provides private implementation for ComprehendMedicalRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ComprehendMedicalRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
ComprehendMedicalRequestPrivate::ComprehendMedicalRequestPrivate(const ComprehendMedicalRequest::Action action, ComprehendMedicalRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ComprehendMedicalRequest class's copy constructor.
 */
ComprehendMedicalRequestPrivate::ComprehendMedicalRequestPrivate(const ComprehendMedicalRequestPrivate &other,
                                     ComprehendMedicalRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ComprehendMedicalRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ComprehendMedical service's Action
 * query parameters.
 */
QString ComprehendMedicalRequestPrivate::toString(const ComprehendMedicalRequest::Action &action)
{
    #define ActionToString(action) \
        case ComprehendMedicalRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DescribeEntitiesDetectionV2Job);
        ActionToString(DescribeICD10CMInferenceJob);
        ActionToString(DescribePHIDetectionJob);
        ActionToString(DescribeRxNormInferenceJob);
        ActionToString(DetectEntities);
        ActionToString(DetectEntitiesV2);
        ActionToString(DetectPHI);
        ActionToString(InferICD10CM);
        ActionToString(InferRxNorm);
        ActionToString(ListEntitiesDetectionV2Jobs);
        ActionToString(ListICD10CMInferenceJobs);
        ActionToString(ListPHIDetectionJobs);
        ActionToString(ListRxNormInferenceJobs);
        ActionToString(StartEntitiesDetectionV2Job);
        ActionToString(StartICD10CMInferenceJob);
        ActionToString(StartPHIDetectionJob);
        ActionToString(StartRxNormInferenceJob);
        ActionToString(StopEntitiesDetectionV2Job);
        ActionToString(StopICD10CMInferenceJob);
        ActionToString(StopPHIDetectionJob);
        ActionToString(StopRxNormInferenceJob);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ComprehendMedical
} // namespace QtAws

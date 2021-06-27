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

#include "computeoptimizerrequest.h"
#include "computeoptimizerrequest_p.h"

namespace QtAws {
namespace ComputeOptimizer {

/*!
 * \class QtAws::ComputeOptimizer::ComputeOptimizerRequest
 * \brief The ComputeOptimizerRequest class provides an interface for ComputeOptimizer requests.
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * \enum ComputeOptimizerRequest::Action
 *
 * This enum describes the actions that can be performed as ComputeOptimizer
 * requests.
 *
 * \value DescribeRecommendationExportJobsAction ComputeOptimizer DescribeRecommendationExportJobs action.
 * \value ExportAutoScalingGroupRecommendationsAction ComputeOptimizer ExportAutoScalingGroupRecommendations action.
 * \value ExportEBSVolumeRecommendationsAction ComputeOptimizer ExportEBSVolumeRecommendations action.
 * \value ExportEC2InstanceRecommendationsAction ComputeOptimizer ExportEC2InstanceRecommendations action.
 * \value ExportLambdaFunctionRecommendationsAction ComputeOptimizer ExportLambdaFunctionRecommendations action.
 * \value GetAutoScalingGroupRecommendationsAction ComputeOptimizer GetAutoScalingGroupRecommendations action.
 * \value GetEBSVolumeRecommendationsAction ComputeOptimizer GetEBSVolumeRecommendations action.
 * \value GetEC2InstanceRecommendationsAction ComputeOptimizer GetEC2InstanceRecommendations action.
 * \value GetEC2RecommendationProjectedMetricsAction ComputeOptimizer GetEC2RecommendationProjectedMetrics action.
 * \value GetEnrollmentStatusAction ComputeOptimizer GetEnrollmentStatus action.
 * \value GetLambdaFunctionRecommendationsAction ComputeOptimizer GetLambdaFunctionRecommendations action.
 * \value GetRecommendationSummariesAction ComputeOptimizer GetRecommendationSummaries action.
 * \value UpdateEnrollmentStatusAction ComputeOptimizer UpdateEnrollmentStatus action.
 */

/*!
 * Constructs a ComputeOptimizerRequest object for ComputeOptimizer \a action.
 */
ComputeOptimizerRequest::ComputeOptimizerRequest(const Action action)
    : d_ptr(new ComputeOptimizerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ComputeOptimizerRequest::ComputeOptimizerRequest(const ComputeOptimizerRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new ComputeOptimizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ComputeOptimizerRequest object to be equal to \a other.
 */
ComputeOptimizerRequest& ComputeOptimizerRequest::operator=(const ComputeOptimizerRequest &other)
{
    Q_D(ComputeOptimizerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ComputeOptimizerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ComputeOptimizerRequestPrivate.
 */
ComputeOptimizerRequest::ComputeOptimizerRequest(ComputeOptimizerRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the ComputeOptimizer action to be performed by this request.
 */
ComputeOptimizerRequest::Action ComputeOptimizerRequest::action() const
{
    Q_D(const ComputeOptimizerRequest);
    return d->action;
}

/*!
 * Returns the name of the ComputeOptimizer action to be performed by this request.
 */
QString ComputeOptimizerRequest::actionString() const
{
    return ComputeOptimizerRequestPrivate::toString(action());
}

/*!
 * Returns the ComputeOptimizer API version implemented by this request.
 */
QString ComputeOptimizerRequest::apiVersion() const
{
    Q_D(const ComputeOptimizerRequest);
    return d->apiVersion;
}

/*!
 * Sets the ComputeOptimizer action to be performed by this request to \a action.
 */
void ComputeOptimizerRequest::setAction(const Action action)
{
    Q_D(ComputeOptimizerRequest);
    d->action = action;
}

/*!
 * Sets the ComputeOptimizer API version to include in this request to \a version.
 */
void ComputeOptimizerRequest::setApiVersion(const QString &version)
{
    Q_D(ComputeOptimizerRequest);
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
bool ComputeOptimizerRequest::operator==(const ComputeOptimizerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ComputeOptimizer queue name.
 *
 * @par From ComputeOptimizer FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ComputeOptimizer queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ComputeOptimizerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ComputeOptimizerRequest::clearParameter(const QString &name)
{
    Q_D(ComputeOptimizerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ComputeOptimizerRequest::clearParameters()
{
    Q_D(ComputeOptimizerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ComputeOptimizerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ComputeOptimizerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ComputeOptimizerRequest::parameters() const
{
    Q_D(const ComputeOptimizerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ComputeOptimizerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ComputeOptimizerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ComputeOptimizerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ComputeOptimizerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ComputeOptimizer request using the given
 * \a endpoint.
 *
 * This ComputeOptimizer implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ComputeOptimizerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ComputeOptimizerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ComputeOptimizer::ComputeOptimizerRequestPrivate
 * \brief The ComputeOptimizerRequestPrivate class provides private implementation for ComputeOptimizerRequest.
 * \internal
 *
 * \inmodule QtAwsComputeOptimizer
 */

/*!
 * Constructs a ComputeOptimizerRequestPrivate object for ComputeOptimizer \a action,
 * with public implementation \a q.
 */
ComputeOptimizerRequestPrivate::ComputeOptimizerRequestPrivate(const ComputeOptimizerRequest::Action action, ComputeOptimizerRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ComputeOptimizerRequest class's copy constructor.
 */
ComputeOptimizerRequestPrivate::ComputeOptimizerRequestPrivate(const ComputeOptimizerRequestPrivate &other,
                                     ComputeOptimizerRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ComputeOptimizerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ComputeOptimizer service's Action
 * query parameters.
 */
QString ComputeOptimizerRequestPrivate::toString(const ComputeOptimizerRequest::Action &action)
{
    #define ActionToString(action) \
        case ComputeOptimizerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ComputeOptimizer
} // namespace QtAws

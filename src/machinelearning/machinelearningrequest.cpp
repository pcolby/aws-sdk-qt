/*
    Copyright 2013-2018 Paul Colby

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

#include "machinelearningrequest.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::MachineLearningRequest
 * \brief The MachineLearningRequest class provides an interface for MachineLearning requests.
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * \enum MachineLearningRequest::Action
 *
 * This enum describes the actions that can be performed as MachineLearning
 * requests.
 *
 * \value AddTagsAction MachineLearning AddTags action.
 * \value CreateBatchPredictionAction MachineLearning CreateBatchPrediction action.
 * \value CreateDataSourceFromRDSAction MachineLearning CreateDataSourceFromRDS action.
 * \value CreateDataSourceFromRedshiftAction MachineLearning CreateDataSourceFromRedshift action.
 * \value CreateDataSourceFromS3Action MachineLearning CreateDataSourceFromS3 action.
 * \value CreateEvaluationAction MachineLearning CreateEvaluation action.
 * \value CreateMLModelAction MachineLearning CreateMLModel action.
 * \value CreateRealtimeEndpointAction MachineLearning CreateRealtimeEndpoint action.
 * \value DeleteBatchPredictionAction MachineLearning DeleteBatchPrediction action.
 * \value DeleteDataSourceAction MachineLearning DeleteDataSource action.
 * \value DeleteEvaluationAction MachineLearning DeleteEvaluation action.
 * \value DeleteMLModelAction MachineLearning DeleteMLModel action.
 * \value DeleteRealtimeEndpointAction MachineLearning DeleteRealtimeEndpoint action.
 * \value DeleteTagsAction MachineLearning DeleteTags action.
 * \value DescribeBatchPredictionsAction MachineLearning DescribeBatchPredictions action.
 * \value DescribeDataSourcesAction MachineLearning DescribeDataSources action.
 * \value DescribeEvaluationsAction MachineLearning DescribeEvaluations action.
 * \value DescribeMLModelsAction MachineLearning DescribeMLModels action.
 * \value DescribeTagsAction MachineLearning DescribeTags action.
 * \value GetBatchPredictionAction MachineLearning GetBatchPrediction action.
 * \value GetDataSourceAction MachineLearning GetDataSource action.
 * \value GetEvaluationAction MachineLearning GetEvaluation action.
 * \value GetMLModelAction MachineLearning GetMLModel action.
 * \value PredictAction MachineLearning Predict action.
 * \value UpdateBatchPredictionAction MachineLearning UpdateBatchPrediction action.
 * \value UpdateDataSourceAction MachineLearning UpdateDataSource action.
 * \value UpdateEvaluationAction MachineLearning UpdateEvaluation action.
 * \value UpdateMLModelAction MachineLearning UpdateMLModel action.
 */

/*!
 * Constructs a MachineLearningRequest object for MachineLearning \a action.
 */
MachineLearningRequest::MachineLearningRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MachineLearningRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MachineLearningRequest::MachineLearningRequest(const MachineLearningRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MachineLearningRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MachineLearningRequest object to be equal to \a other.
 */
MachineLearningRequest& MachineLearningRequest::operator=(const MachineLearningRequest &other)
{
    Q_D(MachineLearningRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MachineLearningRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MachineLearningRequestPrivate.
 */
MachineLearningRequest::MachineLearningRequest(MachineLearningRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MachineLearning action to be performed by this request.
 */
MachineLearningRequest::Action MachineLearningRequest::action() const
{
    Q_D(const MachineLearningRequest);
    return d->action;
}

/*!
 * Returns the name of the MachineLearning action to be performed by this request.
 */
QString MachineLearningRequest::actionString() const
{
    return MachineLearningRequestPrivate::toString(action());
}

/*!
 * Returns the MachineLearning API version implemented by this request.
 */
QString MachineLearningRequest::apiVersion() const
{
    Q_D(const MachineLearningRequest);
    return d->apiVersion;
}

/*!
 * Sets the MachineLearning action to be performed by this request to \a action.
 */
void MachineLearningRequest::setAction(const Action action)
{
    Q_D(MachineLearningRequest);
    d->action = action;
}

/*!
 * Sets the MachineLearning API version to include in this request to \a version.
 */
void MachineLearningRequest::setApiVersion(const QString &version)
{
    Q_D(MachineLearningRequest);
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
bool MachineLearningRequest::operator==(const MachineLearningRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MachineLearning queue name.
 *
 * @par From MachineLearning FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MachineLearning queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MachineLearningRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MachineLearningRequest::clearParameter(const QString &name)
{
    Q_D(MachineLearningRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MachineLearningRequest::clearParameters()
{
    Q_D(MachineLearningRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MachineLearningRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MachineLearningRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MachineLearningRequest::parameters() const
{
    Q_D(const MachineLearningRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MachineLearningRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MachineLearningRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MachineLearningRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MachineLearningRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MachineLearning request using the given
 * \a endpoint.
 *
 * This MachineLearning implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MachineLearningRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const MachineLearningRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MachineLearning::MachineLearningRequestPrivate
 * \brief The MachineLearningRequestPrivate class provides private implementation for MachineLearningRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a MachineLearningRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
MachineLearningRequestPrivate::MachineLearningRequestPrivate(const MachineLearningRequest::Action action, MachineLearningRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MachineLearningRequest class's copy constructor.
 */
MachineLearningRequestPrivate::MachineLearningRequestPrivate(const MachineLearningRequestPrivate &other,
                                     MachineLearningRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MachineLearningRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MachineLearning service's Action
 * query parameters.
 */
QString MachineLearningRequestPrivate::toString(const MachineLearningRequest::Action &action)
{
    #define ActionToString(action) \
        case MachineLearningRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MachineLearning
} // namespace QtAws

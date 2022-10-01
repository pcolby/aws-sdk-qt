// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "forecastrequest.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ForecastRequest
 * \brief The ForecastRequest class provides an interface for Forecast requests.
 *
 * \inmodule QtAwsForecast
 */

/*!
 * \enum ForecastRequest::Action
 *
 * This enum describes the actions that can be performed as Forecast
 * requests.
 *
 * \value CreateAutoPredictorAction Forecast CreateAutoPredictor action.
 * \value CreateDatasetAction Forecast CreateDataset action.
 * \value CreateDatasetGroupAction Forecast CreateDatasetGroup action.
 * \value CreateDatasetImportJobAction Forecast CreateDatasetImportJob action.
 * \value CreateExplainabilityAction Forecast CreateExplainability action.
 * \value CreateExplainabilityExportAction Forecast CreateExplainabilityExport action.
 * \value CreateForecastAction Forecast CreateForecast action.
 * \value CreateForecastExportJobAction Forecast CreateForecastExportJob action.
 * \value CreateMonitorAction Forecast CreateMonitor action.
 * \value CreatePredictorAction Forecast CreatePredictor action.
 * \value CreatePredictorBacktestExportJobAction Forecast CreatePredictorBacktestExportJob action.
 * \value CreateWhatIfAnalysisAction Forecast CreateWhatIfAnalysis action.
 * \value CreateWhatIfForecastAction Forecast CreateWhatIfForecast action.
 * \value CreateWhatIfForecastExportAction Forecast CreateWhatIfForecastExport action.
 * \value DeleteDatasetAction Forecast DeleteDataset action.
 * \value DeleteDatasetGroupAction Forecast DeleteDatasetGroup action.
 * \value DeleteDatasetImportJobAction Forecast DeleteDatasetImportJob action.
 * \value DeleteExplainabilityAction Forecast DeleteExplainability action.
 * \value DeleteExplainabilityExportAction Forecast DeleteExplainabilityExport action.
 * \value DeleteForecastAction Forecast DeleteForecast action.
 * \value DeleteForecastExportJobAction Forecast DeleteForecastExportJob action.
 * \value DeleteMonitorAction Forecast DeleteMonitor action.
 * \value DeletePredictorAction Forecast DeletePredictor action.
 * \value DeletePredictorBacktestExportJobAction Forecast DeletePredictorBacktestExportJob action.
 * \value DeleteResourceTreeAction Forecast DeleteResourceTree action.
 * \value DeleteWhatIfAnalysisAction Forecast DeleteWhatIfAnalysis action.
 * \value DeleteWhatIfForecastAction Forecast DeleteWhatIfForecast action.
 * \value DeleteWhatIfForecastExportAction Forecast DeleteWhatIfForecastExport action.
 * \value DescribeAutoPredictorAction Forecast DescribeAutoPredictor action.
 * \value DescribeDatasetAction Forecast DescribeDataset action.
 * \value DescribeDatasetGroupAction Forecast DescribeDatasetGroup action.
 * \value DescribeDatasetImportJobAction Forecast DescribeDatasetImportJob action.
 * \value DescribeExplainabilityAction Forecast DescribeExplainability action.
 * \value DescribeExplainabilityExportAction Forecast DescribeExplainabilityExport action.
 * \value DescribeForecastAction Forecast DescribeForecast action.
 * \value DescribeForecastExportJobAction Forecast DescribeForecastExportJob action.
 * \value DescribeMonitorAction Forecast DescribeMonitor action.
 * \value DescribePredictorAction Forecast DescribePredictor action.
 * \value DescribePredictorBacktestExportJobAction Forecast DescribePredictorBacktestExportJob action.
 * \value DescribeWhatIfAnalysisAction Forecast DescribeWhatIfAnalysis action.
 * \value DescribeWhatIfForecastAction Forecast DescribeWhatIfForecast action.
 * \value DescribeWhatIfForecastExportAction Forecast DescribeWhatIfForecastExport action.
 * \value GetAccuracyMetricsAction Forecast GetAccuracyMetrics action.
 * \value ListDatasetGroupsAction Forecast ListDatasetGroups action.
 * \value ListDatasetImportJobsAction Forecast ListDatasetImportJobs action.
 * \value ListDatasetsAction Forecast ListDatasets action.
 * \value ListExplainabilitiesAction Forecast ListExplainabilities action.
 * \value ListExplainabilityExportsAction Forecast ListExplainabilityExports action.
 * \value ListForecastExportJobsAction Forecast ListForecastExportJobs action.
 * \value ListForecastsAction Forecast ListForecasts action.
 * \value ListMonitorEvaluationsAction Forecast ListMonitorEvaluations action.
 * \value ListMonitorsAction Forecast ListMonitors action.
 * \value ListPredictorBacktestExportJobsAction Forecast ListPredictorBacktestExportJobs action.
 * \value ListPredictorsAction Forecast ListPredictors action.
 * \value ListTagsForResourceAction Forecast ListTagsForResource action.
 * \value ListWhatIfAnalysesAction Forecast ListWhatIfAnalyses action.
 * \value ListWhatIfForecastExportsAction Forecast ListWhatIfForecastExports action.
 * \value ListWhatIfForecastsAction Forecast ListWhatIfForecasts action.
 * \value ResumeResourceAction Forecast ResumeResource action.
 * \value StopResourceAction Forecast StopResource action.
 * \value TagResourceAction Forecast TagResource action.
 * \value UntagResourceAction Forecast UntagResource action.
 * \value UpdateDatasetGroupAction Forecast UpdateDatasetGroup action.
 */

/*!
 * Constructs a ForecastRequest object for Forecast \a action.
 */
ForecastRequest::ForecastRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ForecastRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ForecastRequest::ForecastRequest(const ForecastRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ForecastRequest object to be equal to \a other.
 */
ForecastRequest& ForecastRequest::operator=(const ForecastRequest &other)
{
    Q_D(ForecastRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ForecastRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ForecastRequestPrivate.
 */
ForecastRequest::ForecastRequest(ForecastRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Forecast action to be performed by this request.
 */
ForecastRequest::Action ForecastRequest::action() const
{
    Q_D(const ForecastRequest);
    return d->action;
}

/*!
 * Returns the name of the Forecast action to be performed by this request.
 */
QString ForecastRequest::actionString() const
{
    return ForecastRequestPrivate::toString(action());
}

/*!
 * Returns the Forecast API version implemented by this request.
 */
QString ForecastRequest::apiVersion() const
{
    Q_D(const ForecastRequest);
    return d->apiVersion;
}

/*!
 * Sets the Forecast action to be performed by this request to \a action.
 */
void ForecastRequest::setAction(const Action action)
{
    Q_D(ForecastRequest);
    d->action = action;
}

/*!
 * Sets the Forecast API version to include in this request to \a version.
 */
void ForecastRequest::setApiVersion(const QString &version)
{
    Q_D(ForecastRequest);
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
bool ForecastRequest::operator==(const ForecastRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Forecast queue name.
 *
 * @par From Forecast FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Forecast queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ForecastRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ForecastRequest::clearParameter(const QString &name)
{
    Q_D(ForecastRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ForecastRequest::clearParameters()
{
    Q_D(ForecastRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ForecastRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ForecastRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ForecastRequest::parameters() const
{
    Q_D(const ForecastRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ForecastRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ForecastRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ForecastRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ForecastRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Forecast request using the given
 * \a endpoint.
 *
 * This Forecast implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ForecastRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ForecastRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Forecast::ForecastRequestPrivate
 * \brief The ForecastRequestPrivate class provides private implementation for ForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ForecastRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ForecastRequestPrivate::ForecastRequestPrivate(const ForecastRequest::Action action, ForecastRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-06-26"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ForecastRequest class's copy constructor.
 */
ForecastRequestPrivate::ForecastRequestPrivate(const ForecastRequestPrivate &other,
                                     ForecastRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ForecastRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Forecast service's Action
 * query parameters.
 */
QString ForecastRequestPrivate::toString(const ForecastRequest::Action &action)
{
    #define ActionToString(action) \
        case ForecastRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateAutoPredictor);
        ActionToString(CreateDataset);
        ActionToString(CreateDatasetGroup);
        ActionToString(CreateDatasetImportJob);
        ActionToString(CreateExplainability);
        ActionToString(CreateExplainabilityExport);
        ActionToString(CreateForecast);
        ActionToString(CreateForecastExportJob);
        ActionToString(CreateMonitor);
        ActionToString(CreatePredictor);
        ActionToString(CreatePredictorBacktestExportJob);
        ActionToString(CreateWhatIfAnalysis);
        ActionToString(CreateWhatIfForecast);
        ActionToString(CreateWhatIfForecastExport);
        ActionToString(DeleteDataset);
        ActionToString(DeleteDatasetGroup);
        ActionToString(DeleteDatasetImportJob);
        ActionToString(DeleteExplainability);
        ActionToString(DeleteExplainabilityExport);
        ActionToString(DeleteForecast);
        ActionToString(DeleteForecastExportJob);
        ActionToString(DeleteMonitor);
        ActionToString(DeletePredictor);
        ActionToString(DeletePredictorBacktestExportJob);
        ActionToString(DeleteResourceTree);
        ActionToString(DeleteWhatIfAnalysis);
        ActionToString(DeleteWhatIfForecast);
        ActionToString(DeleteWhatIfForecastExport);
        ActionToString(DescribeAutoPredictor);
        ActionToString(DescribeDataset);
        ActionToString(DescribeDatasetGroup);
        ActionToString(DescribeDatasetImportJob);
        ActionToString(DescribeExplainability);
        ActionToString(DescribeExplainabilityExport);
        ActionToString(DescribeForecast);
        ActionToString(DescribeForecastExportJob);
        ActionToString(DescribeMonitor);
        ActionToString(DescribePredictor);
        ActionToString(DescribePredictorBacktestExportJob);
        ActionToString(DescribeWhatIfAnalysis);
        ActionToString(DescribeWhatIfForecast);
        ActionToString(DescribeWhatIfForecastExport);
        ActionToString(GetAccuracyMetrics);
        ActionToString(ListDatasetGroups);
        ActionToString(ListDatasetImportJobs);
        ActionToString(ListDatasets);
        ActionToString(ListExplainabilities);
        ActionToString(ListExplainabilityExports);
        ActionToString(ListForecastExportJobs);
        ActionToString(ListForecasts);
        ActionToString(ListMonitorEvaluations);
        ActionToString(ListMonitors);
        ActionToString(ListPredictorBacktestExportJobs);
        ActionToString(ListPredictors);
        ActionToString(ListTagsForResource);
        ActionToString(ListWhatIfAnalyses);
        ActionToString(ListWhatIfForecastExports);
        ActionToString(ListWhatIfForecasts);
        ActionToString(ResumeResource);
        ActionToString(StopResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDatasetGroup);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Forecast
} // namespace QtAws

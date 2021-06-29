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

#include "forecastservicerequest.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::ForecastServiceRequest
 * \brief The ForecastServiceRequest class provides an interface for ForecastService requests.
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * \enum ForecastServiceRequest::Action
 *
 * This enum describes the actions that can be performed as ForecastService
 * requests.
 *
 * \value CreateDatasetAction ForecastService CreateDataset action.
 * \value CreateDatasetGroupAction ForecastService CreateDatasetGroup action.
 * \value CreateDatasetImportJobAction ForecastService CreateDatasetImportJob action.
 * \value CreateForecastAction ForecastService CreateForecast action.
 * \value CreateForecastExportJobAction ForecastService CreateForecastExportJob action.
 * \value CreatePredictorAction ForecastService CreatePredictor action.
 * \value CreatePredictorBacktestExportJobAction ForecastService CreatePredictorBacktestExportJob action.
 * \value DeleteDatasetAction ForecastService DeleteDataset action.
 * \value DeleteDatasetGroupAction ForecastService DeleteDatasetGroup action.
 * \value DeleteDatasetImportJobAction ForecastService DeleteDatasetImportJob action.
 * \value DeleteForecastAction ForecastService DeleteForecast action.
 * \value DeleteForecastExportJobAction ForecastService DeleteForecastExportJob action.
 * \value DeletePredictorAction ForecastService DeletePredictor action.
 * \value DeletePredictorBacktestExportJobAction ForecastService DeletePredictorBacktestExportJob action.
 * \value DeleteResourceTreeAction ForecastService DeleteResourceTree action.
 * \value DescribeDatasetAction ForecastService DescribeDataset action.
 * \value DescribeDatasetGroupAction ForecastService DescribeDatasetGroup action.
 * \value DescribeDatasetImportJobAction ForecastService DescribeDatasetImportJob action.
 * \value DescribeForecastAction ForecastService DescribeForecast action.
 * \value DescribeForecastExportJobAction ForecastService DescribeForecastExportJob action.
 * \value DescribePredictorAction ForecastService DescribePredictor action.
 * \value DescribePredictorBacktestExportJobAction ForecastService DescribePredictorBacktestExportJob action.
 * \value GetAccuracyMetricsAction ForecastService GetAccuracyMetrics action.
 * \value ListDatasetGroupsAction ForecastService ListDatasetGroups action.
 * \value ListDatasetImportJobsAction ForecastService ListDatasetImportJobs action.
 * \value ListDatasetsAction ForecastService ListDatasets action.
 * \value ListForecastExportJobsAction ForecastService ListForecastExportJobs action.
 * \value ListForecastsAction ForecastService ListForecasts action.
 * \value ListPredictorBacktestExportJobsAction ForecastService ListPredictorBacktestExportJobs action.
 * \value ListPredictorsAction ForecastService ListPredictors action.
 * \value ListTagsForResourceAction ForecastService ListTagsForResource action.
 * \value StopResourceAction ForecastService StopResource action.
 * \value TagResourceAction ForecastService TagResource action.
 * \value UntagResourceAction ForecastService UntagResource action.
 * \value UpdateDatasetGroupAction ForecastService UpdateDatasetGroup action.
 */

/*!
 * Constructs a ForecastServiceRequest object for ForecastService \a action.
 */
ForecastServiceRequest::ForecastServiceRequest(const Action action)
    : d_ptr(new ForecastServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ForecastServiceRequest::ForecastServiceRequest(const ForecastServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new ForecastServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ForecastServiceRequest object to be equal to \a other.
 */
ForecastServiceRequest& ForecastServiceRequest::operator=(const ForecastServiceRequest &other)
{
    Q_D(ForecastServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ForecastServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ForecastServiceRequestPrivate.
 */
ForecastServiceRequest::ForecastServiceRequest(ForecastServiceRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the ForecastService action to be performed by this request.
 */
ForecastServiceRequest::Action ForecastServiceRequest::action() const
{
    Q_D(const ForecastServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the ForecastService action to be performed by this request.
 */
QString ForecastServiceRequest::actionString() const
{
    return ForecastServiceRequestPrivate::toString(action());
}

/*!
 * Returns the ForecastService API version implemented by this request.
 */
QString ForecastServiceRequest::apiVersion() const
{
    Q_D(const ForecastServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the ForecastService action to be performed by this request to \a action.
 */
void ForecastServiceRequest::setAction(const Action action)
{
    Q_D(ForecastServiceRequest);
    d->action = action;
}

/*!
 * Sets the ForecastService API version to include in this request to \a version.
 */
void ForecastServiceRequest::setApiVersion(const QString &version)
{
    Q_D(ForecastServiceRequest);
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
bool ForecastServiceRequest::operator==(const ForecastServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ForecastService queue name.
 *
 * @par From ForecastService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ForecastService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ForecastServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ForecastServiceRequest::clearParameter(const QString &name)
{
    Q_D(ForecastServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ForecastServiceRequest::clearParameters()
{
    Q_D(ForecastServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ForecastServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ForecastServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ForecastServiceRequest::parameters() const
{
    Q_D(const ForecastServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ForecastServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ForecastServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ForecastServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ForecastServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ForecastService request using the given
 * \a endpoint.
 *
 * This ForecastService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ForecastServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ForecastServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ForecastService::ForecastServiceRequestPrivate
 * \brief The ForecastServiceRequestPrivate class provides private implementation for ForecastServiceRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a ForecastServiceRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
ForecastServiceRequestPrivate::ForecastServiceRequestPrivate(const ForecastServiceRequest::Action action, ForecastServiceRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ForecastServiceRequest class's copy constructor.
 */
ForecastServiceRequestPrivate::ForecastServiceRequestPrivate(const ForecastServiceRequestPrivate &other,
                                     ForecastServiceRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ForecastServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ForecastService service's Action
 * query parameters.
 */
QString ForecastServiceRequestPrivate::toString(const ForecastServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case ForecastServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateDataset);
        ActionToString(CreateDatasetGroup);
        ActionToString(CreateDatasetImportJob);
        ActionToString(CreateForecast);
        ActionToString(CreateForecastExportJob);
        ActionToString(CreatePredictor);
        ActionToString(CreatePredictorBacktestExportJob);
        ActionToString(DeleteDataset);
        ActionToString(DeleteDatasetGroup);
        ActionToString(DeleteDatasetImportJob);
        ActionToString(DeleteForecast);
        ActionToString(DeleteForecastExportJob);
        ActionToString(DeletePredictor);
        ActionToString(DeletePredictorBacktestExportJob);
        ActionToString(DeleteResourceTree);
        ActionToString(DescribeDataset);
        ActionToString(DescribeDatasetGroup);
        ActionToString(DescribeDatasetImportJob);
        ActionToString(DescribeForecast);
        ActionToString(DescribeForecastExportJob);
        ActionToString(DescribePredictor);
        ActionToString(DescribePredictorBacktestExportJob);
        ActionToString(GetAccuracyMetrics);
        ActionToString(ListDatasetGroups);
        ActionToString(ListDatasetImportJobs);
        ActionToString(ListDatasets);
        ActionToString(ListForecastExportJobs);
        ActionToString(ListForecasts);
        ActionToString(ListPredictorBacktestExportJobs);
        ActionToString(ListPredictors);
        ActionToString(ListTagsForResource);
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

} // namespace ForecastService
} // namespace QtAws

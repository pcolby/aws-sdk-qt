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

#include "iotanalyticsrequest.h"
#include "iotanalyticsrequest_p.h"

namespace QtAws {
namespace IoTAnalytics {

/*!
 * \class QtAws::IoTAnalytics::IoTAnalyticsRequest
 * \brief The IoTAnalyticsRequest class provides an interface for IoTAnalytics requests.
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * \enum IoTAnalyticsRequest::Action
 *
 * This enum describes the actions that can be performed as IoTAnalytics
 * requests.
 *
 * \value BatchPutMessageAction IoTAnalytics BatchPutMessage action.
 * \value CancelPipelineReprocessingAction IoTAnalytics CancelPipelineReprocessing action.
 * \value CreateChannelAction IoTAnalytics CreateChannel action.
 * \value CreateDatasetAction IoTAnalytics CreateDataset action.
 * \value CreateDatasetContentAction IoTAnalytics CreateDatasetContent action.
 * \value CreateDatastoreAction IoTAnalytics CreateDatastore action.
 * \value CreatePipelineAction IoTAnalytics CreatePipeline action.
 * \value DeleteChannelAction IoTAnalytics DeleteChannel action.
 * \value DeleteDatasetAction IoTAnalytics DeleteDataset action.
 * \value DeleteDatasetContentAction IoTAnalytics DeleteDatasetContent action.
 * \value DeleteDatastoreAction IoTAnalytics DeleteDatastore action.
 * \value DeletePipelineAction IoTAnalytics DeletePipeline action.
 * \value DescribeChannelAction IoTAnalytics DescribeChannel action.
 * \value DescribeDatasetAction IoTAnalytics DescribeDataset action.
 * \value DescribeDatastoreAction IoTAnalytics DescribeDatastore action.
 * \value DescribeLoggingOptionsAction IoTAnalytics DescribeLoggingOptions action.
 * \value DescribePipelineAction IoTAnalytics DescribePipeline action.
 * \value GetDatasetContentAction IoTAnalytics GetDatasetContent action.
 * \value ListChannelsAction IoTAnalytics ListChannels action.
 * \value ListDatasetsAction IoTAnalytics ListDatasets action.
 * \value ListDatastoresAction IoTAnalytics ListDatastores action.
 * \value ListPipelinesAction IoTAnalytics ListPipelines action.
 * \value PutLoggingOptionsAction IoTAnalytics PutLoggingOptions action.
 * \value RunPipelineActivityAction IoTAnalytics RunPipelineActivity action.
 * \value SampleChannelDataAction IoTAnalytics SampleChannelData action.
 * \value StartPipelineReprocessingAction IoTAnalytics StartPipelineReprocessing action.
 * \value UpdateChannelAction IoTAnalytics UpdateChannel action.
 * \value UpdateDatasetAction IoTAnalytics UpdateDataset action.
 * \value UpdateDatastoreAction IoTAnalytics UpdateDatastore action.
 * \value UpdatePipelineAction IoTAnalytics UpdatePipeline action.
 */

/*!
 * Constructs a IoTAnalyticsRequest object for IoTAnalytics \a action.
 */
IoTAnalyticsRequest::IoTAnalyticsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoTAnalyticsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTAnalyticsRequest::IoTAnalyticsRequest(const IoTAnalyticsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoTAnalyticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTAnalyticsRequest object to be equal to \a other.
 */
IoTAnalyticsRequest& IoTAnalyticsRequest::operator=(const IoTAnalyticsRequest &other)
{
    Q_D(IoTAnalyticsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTAnalyticsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTAnalyticsRequestPrivate.
 */
IoTAnalyticsRequest::IoTAnalyticsRequest(IoTAnalyticsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoTAnalytics action to be performed by this request.
 */
IoTAnalyticsRequest::Action IoTAnalyticsRequest::action() const
{
    Q_D(const IoTAnalyticsRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTAnalytics action to be performed by this request.
 */
QString IoTAnalyticsRequest::actionString() const
{
    return IoTAnalyticsRequestPrivate::toString(action());
}

/*!
 * Returns the IoTAnalytics API version implemented by this request.
 */
QString IoTAnalyticsRequest::apiVersion() const
{
    Q_D(const IoTAnalyticsRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTAnalytics action to be performed by this request to \a action.
 */
void IoTAnalyticsRequest::setAction(const Action action)
{
    Q_D(IoTAnalyticsRequest);
    d->action = action;
}

/*!
 * Sets the IoTAnalytics API version to include in this request to \a version.
 */
void IoTAnalyticsRequest::setApiVersion(const QString &version)
{
    Q_D(IoTAnalyticsRequest);
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
bool IoTAnalyticsRequest::operator==(const IoTAnalyticsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTAnalytics queue name.
 *
 * @par From IoTAnalytics FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTAnalytics queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTAnalyticsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTAnalyticsRequest::clearParameter(const QString &name)
{
    Q_D(IoTAnalyticsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTAnalyticsRequest::clearParameters()
{
    Q_D(IoTAnalyticsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTAnalyticsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTAnalyticsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTAnalyticsRequest::parameters() const
{
    Q_D(const IoTAnalyticsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTAnalyticsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTAnalyticsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTAnalyticsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTAnalyticsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTAnalytics request using the given
 * \a endpoint.
 *
 * This IoTAnalytics implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTAnalyticsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTAnalyticsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTAnalytics::IoTAnalyticsRequestPrivate
 * \brief The IoTAnalyticsRequestPrivate class provides private implementation for IoTAnalyticsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a IoTAnalyticsRequestPrivate object for IoTAnalytics \a action,
 * with public implementation \a q.
 */
IoTAnalyticsRequestPrivate::IoTAnalyticsRequestPrivate(const IoTAnalyticsRequest::Action action, IoTAnalyticsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTAnalyticsRequest class's copy constructor.
 */
IoTAnalyticsRequestPrivate::IoTAnalyticsRequestPrivate(const IoTAnalyticsRequestPrivate &other,
                                     IoTAnalyticsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTAnalyticsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTAnalytics service's Action
 * query parameters.
 */
QString IoTAnalyticsRequestPrivate::toString(const IoTAnalyticsRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTAnalyticsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTAnalytics
} // namespace QtAws

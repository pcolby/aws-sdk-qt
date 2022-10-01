// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ioteventsrequest.h"
#include "ioteventsrequest_p.h"

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::IoTEventsRequest
 * \brief The IoTEventsRequest class provides an interface for IoTEvents requests.
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * \enum IoTEventsRequest::Action
 *
 * This enum describes the actions that can be performed as IoTEvents
 * requests.
 *
 * \value CreateAlarmModelAction IoTEvents CreateAlarmModel action.
 * \value CreateDetectorModelAction IoTEvents CreateDetectorModel action.
 * \value CreateInputAction IoTEvents CreateInput action.
 * \value DeleteAlarmModelAction IoTEvents DeleteAlarmModel action.
 * \value DeleteDetectorModelAction IoTEvents DeleteDetectorModel action.
 * \value DeleteInputAction IoTEvents DeleteInput action.
 * \value DescribeAlarmModelAction IoTEvents DescribeAlarmModel action.
 * \value DescribeDetectorModelAction IoTEvents DescribeDetectorModel action.
 * \value DescribeDetectorModelAnalysisAction IoTEvents DescribeDetectorModelAnalysis action.
 * \value DescribeInputAction IoTEvents DescribeInput action.
 * \value DescribeLoggingOptionsAction IoTEvents DescribeLoggingOptions action.
 * \value GetDetectorModelAnalysisResultsAction IoTEvents GetDetectorModelAnalysisResults action.
 * \value ListAlarmModelVersionsAction IoTEvents ListAlarmModelVersions action.
 * \value ListAlarmModelsAction IoTEvents ListAlarmModels action.
 * \value ListDetectorModelVersionsAction IoTEvents ListDetectorModelVersions action.
 * \value ListDetectorModelsAction IoTEvents ListDetectorModels action.
 * \value ListInputRoutingsAction IoTEvents ListInputRoutings action.
 * \value ListInputsAction IoTEvents ListInputs action.
 * \value ListTagsForResourceAction IoTEvents ListTagsForResource action.
 * \value PutLoggingOptionsAction IoTEvents PutLoggingOptions action.
 * \value StartDetectorModelAnalysisAction IoTEvents StartDetectorModelAnalysis action.
 * \value TagResourceAction IoTEvents TagResource action.
 * \value UntagResourceAction IoTEvents UntagResource action.
 * \value UpdateAlarmModelAction IoTEvents UpdateAlarmModel action.
 * \value UpdateDetectorModelAction IoTEvents UpdateDetectorModel action.
 * \value UpdateInputAction IoTEvents UpdateInput action.
 */

/*!
 * Constructs a IoTEventsRequest object for IoTEvents \a action.
 */
IoTEventsRequest::IoTEventsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoTEventsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTEventsRequest::IoTEventsRequest(const IoTEventsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoTEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTEventsRequest object to be equal to \a other.
 */
IoTEventsRequest& IoTEventsRequest::operator=(const IoTEventsRequest &other)
{
    Q_D(IoTEventsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTEventsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTEventsRequestPrivate.
 */
IoTEventsRequest::IoTEventsRequest(IoTEventsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoTEvents action to be performed by this request.
 */
IoTEventsRequest::Action IoTEventsRequest::action() const
{
    Q_D(const IoTEventsRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTEvents action to be performed by this request.
 */
QString IoTEventsRequest::actionString() const
{
    return IoTEventsRequestPrivate::toString(action());
}

/*!
 * Returns the IoTEvents API version implemented by this request.
 */
QString IoTEventsRequest::apiVersion() const
{
    Q_D(const IoTEventsRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTEvents action to be performed by this request to \a action.
 */
void IoTEventsRequest::setAction(const Action action)
{
    Q_D(IoTEventsRequest);
    d->action = action;
}

/*!
 * Sets the IoTEvents API version to include in this request to \a version.
 */
void IoTEventsRequest::setApiVersion(const QString &version)
{
    Q_D(IoTEventsRequest);
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
bool IoTEventsRequest::operator==(const IoTEventsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTEvents queue name.
 *
 * @par From IoTEvents FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTEvents queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTEventsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTEventsRequest::clearParameter(const QString &name)
{
    Q_D(IoTEventsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTEventsRequest::clearParameters()
{
    Q_D(IoTEventsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTEventsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTEventsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTEventsRequest::parameters() const
{
    Q_D(const IoTEventsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTEventsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTEventsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTEventsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTEventsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTEvents request using the given
 * \a endpoint.
 *
 * This IoTEvents implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTEventsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTEventsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTEvents::IoTEventsRequestPrivate
 * \brief The IoTEventsRequestPrivate class provides private implementation for IoTEventsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a IoTEventsRequestPrivate object for IoTEvents \a action,
 * with public implementation \a q.
 */
IoTEventsRequestPrivate::IoTEventsRequestPrivate(const IoTEventsRequest::Action action, IoTEventsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-07-27"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTEventsRequest class's copy constructor.
 */
IoTEventsRequestPrivate::IoTEventsRequestPrivate(const IoTEventsRequestPrivate &other,
                                     IoTEventsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTEventsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTEvents service's Action
 * query parameters.
 */
QString IoTEventsRequestPrivate::toString(const IoTEventsRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTEventsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateAlarmModel);
        ActionToString(CreateDetectorModel);
        ActionToString(CreateInput);
        ActionToString(DeleteAlarmModel);
        ActionToString(DeleteDetectorModel);
        ActionToString(DeleteInput);
        ActionToString(DescribeAlarmModel);
        ActionToString(DescribeDetectorModel);
        ActionToString(DescribeDetectorModelAnalysis);
        ActionToString(DescribeInput);
        ActionToString(DescribeLoggingOptions);
        ActionToString(GetDetectorModelAnalysisResults);
        ActionToString(ListAlarmModelVersions);
        ActionToString(ListAlarmModels);
        ActionToString(ListDetectorModelVersions);
        ActionToString(ListDetectorModels);
        ActionToString(ListInputRoutings);
        ActionToString(ListInputs);
        ActionToString(ListTagsForResource);
        ActionToString(PutLoggingOptions);
        ActionToString(StartDetectorModelAnalysis);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAlarmModel);
        ActionToString(UpdateDetectorModel);
        ActionToString(UpdateInput);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTEvents
} // namespace QtAws

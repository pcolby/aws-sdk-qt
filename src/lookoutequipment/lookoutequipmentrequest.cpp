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

#include "lookoutequipmentrequest.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::LookoutEquipmentRequest
 * \brief The LookoutEquipmentRequest class provides an interface for LookoutEquipment requests.
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * \enum LookoutEquipmentRequest::Action
 *
 * This enum describes the actions that can be performed as LookoutEquipment
 * requests.
 *
 * \value CreateDatasetAction LookoutEquipment CreateDataset action.
 * \value CreateInferenceSchedulerAction LookoutEquipment CreateInferenceScheduler action.
 * \value CreateModelAction LookoutEquipment CreateModel action.
 * \value DeleteDatasetAction LookoutEquipment DeleteDataset action.
 * \value DeleteInferenceSchedulerAction LookoutEquipment DeleteInferenceScheduler action.
 * \value DeleteModelAction LookoutEquipment DeleteModel action.
 * \value DescribeDataIngestionJobAction LookoutEquipment DescribeDataIngestionJob action.
 * \value DescribeDatasetAction LookoutEquipment DescribeDataset action.
 * \value DescribeInferenceSchedulerAction LookoutEquipment DescribeInferenceScheduler action.
 * \value DescribeModelAction LookoutEquipment DescribeModel action.
 * \value ListDataIngestionJobsAction LookoutEquipment ListDataIngestionJobs action.
 * \value ListDatasetsAction LookoutEquipment ListDatasets action.
 * \value ListInferenceExecutionsAction LookoutEquipment ListInferenceExecutions action.
 * \value ListInferenceSchedulersAction LookoutEquipment ListInferenceSchedulers action.
 * \value ListModelsAction LookoutEquipment ListModels action.
 * \value ListTagsForResourceAction LookoutEquipment ListTagsForResource action.
 * \value StartDataIngestionJobAction LookoutEquipment StartDataIngestionJob action.
 * \value StartInferenceSchedulerAction LookoutEquipment StartInferenceScheduler action.
 * \value StopInferenceSchedulerAction LookoutEquipment StopInferenceScheduler action.
 * \value TagResourceAction LookoutEquipment TagResource action.
 * \value UntagResourceAction LookoutEquipment UntagResource action.
 * \value UpdateInferenceSchedulerAction LookoutEquipment UpdateInferenceScheduler action.
 */

/*!
 * Constructs a LookoutEquipmentRequest object for LookoutEquipment \a action.
 */
LookoutEquipmentRequest::LookoutEquipmentRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LookoutEquipmentRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LookoutEquipmentRequest::LookoutEquipmentRequest(const LookoutEquipmentRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LookoutEquipmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LookoutEquipmentRequest object to be equal to \a other.
 */
LookoutEquipmentRequest& LookoutEquipmentRequest::operator=(const LookoutEquipmentRequest &other)
{
    Q_D(LookoutEquipmentRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LookoutEquipmentRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LookoutEquipmentRequestPrivate.
 */
LookoutEquipmentRequest::LookoutEquipmentRequest(LookoutEquipmentRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the LookoutEquipment action to be performed by this request.
 */
LookoutEquipmentRequest::Action LookoutEquipmentRequest::action() const
{
    Q_D(const LookoutEquipmentRequest);
    return d->action;
}

/*!
 * Returns the name of the LookoutEquipment action to be performed by this request.
 */
QString LookoutEquipmentRequest::actionString() const
{
    return LookoutEquipmentRequestPrivate::toString(action());
}

/*!
 * Returns the LookoutEquipment API version implemented by this request.
 */
QString LookoutEquipmentRequest::apiVersion() const
{
    Q_D(const LookoutEquipmentRequest);
    return d->apiVersion;
}

/*!
 * Sets the LookoutEquipment action to be performed by this request to \a action.
 */
void LookoutEquipmentRequest::setAction(const Action action)
{
    Q_D(LookoutEquipmentRequest);
    d->action = action;
}

/*!
 * Sets the LookoutEquipment API version to include in this request to \a version.
 */
void LookoutEquipmentRequest::setApiVersion(const QString &version)
{
    Q_D(LookoutEquipmentRequest);
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
bool LookoutEquipmentRequest::operator==(const LookoutEquipmentRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LookoutEquipment queue name.
 *
 * @par From LookoutEquipment FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LookoutEquipment queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LookoutEquipmentRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LookoutEquipmentRequest::clearParameter(const QString &name)
{
    Q_D(LookoutEquipmentRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LookoutEquipmentRequest::clearParameters()
{
    Q_D(LookoutEquipmentRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LookoutEquipmentRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LookoutEquipmentRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LookoutEquipmentRequest::parameters() const
{
    Q_D(const LookoutEquipmentRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LookoutEquipmentRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LookoutEquipmentRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LookoutEquipmentRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LookoutEquipmentRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LookoutEquipment request using the given
 * \a endpoint.
 *
 * This LookoutEquipment implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LookoutEquipmentRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LookoutEquipmentRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LookoutEquipment::LookoutEquipmentRequestPrivate
 * \brief The LookoutEquipmentRequestPrivate class provides private implementation for LookoutEquipmentRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a LookoutEquipmentRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
LookoutEquipmentRequestPrivate::LookoutEquipmentRequestPrivate(const LookoutEquipmentRequest::Action action, LookoutEquipmentRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LookoutEquipmentRequest class's copy constructor.
 */
LookoutEquipmentRequestPrivate::LookoutEquipmentRequestPrivate(const LookoutEquipmentRequestPrivate &other,
                                     LookoutEquipmentRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LookoutEquipmentRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the LookoutEquipment service's Action
 * query parameters.
 */
QString LookoutEquipmentRequestPrivate::toString(const LookoutEquipmentRequest::Action &action)
{
    #define ActionToString(action) \
        case LookoutEquipmentRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateDataset);
        ActionToString(CreateInferenceScheduler);
        ActionToString(CreateModel);
        ActionToString(DeleteDataset);
        ActionToString(DeleteInferenceScheduler);
        ActionToString(DeleteModel);
        ActionToString(DescribeDataIngestionJob);
        ActionToString(DescribeDataset);
        ActionToString(DescribeInferenceScheduler);
        ActionToString(DescribeModel);
        ActionToString(ListDataIngestionJobs);
        ActionToString(ListDatasets);
        ActionToString(ListInferenceExecutions);
        ActionToString(ListInferenceSchedulers);
        ActionToString(ListModels);
        ActionToString(ListTagsForResource);
        ActionToString(StartDataIngestionJob);
        ActionToString(StartInferenceScheduler);
        ActionToString(StopInferenceScheduler);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateInferenceScheduler);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace LookoutEquipment
} // namespace QtAws

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

#include "frauddetectorrequest.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::FraudDetectorRequest
 * \brief The FraudDetectorRequest class provides an interface for FraudDetector requests.
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * \enum FraudDetectorRequest::Action
 *
 * This enum describes the actions that can be performed as FraudDetector
 * requests.
 *
 * \value BatchCreateVariableAction FraudDetector BatchCreateVariable action.
 * \value BatchGetVariableAction FraudDetector BatchGetVariable action.
 * \value CancelBatchImportJobAction FraudDetector CancelBatchImportJob action.
 * \value CancelBatchPredictionJobAction FraudDetector CancelBatchPredictionJob action.
 * \value CreateBatchImportJobAction FraudDetector CreateBatchImportJob action.
 * \value CreateBatchPredictionJobAction FraudDetector CreateBatchPredictionJob action.
 * \value CreateDetectorVersionAction FraudDetector CreateDetectorVersion action.
 * \value CreateModelAction FraudDetector CreateModel action.
 * \value CreateModelVersionAction FraudDetector CreateModelVersion action.
 * \value CreateRuleAction FraudDetector CreateRule action.
 * \value CreateVariableAction FraudDetector CreateVariable action.
 * \value DeleteBatchImportJobAction FraudDetector DeleteBatchImportJob action.
 * \value DeleteBatchPredictionJobAction FraudDetector DeleteBatchPredictionJob action.
 * \value DeleteDetectorAction FraudDetector DeleteDetector action.
 * \value DeleteDetectorVersionAction FraudDetector DeleteDetectorVersion action.
 * \value DeleteEntityTypeAction FraudDetector DeleteEntityType action.
 * \value DeleteEventAction FraudDetector DeleteEvent action.
 * \value DeleteEventTypeAction FraudDetector DeleteEventType action.
 * \value DeleteEventsByEventTypeAction FraudDetector DeleteEventsByEventType action.
 * \value DeleteExternalModelAction FraudDetector DeleteExternalModel action.
 * \value DeleteLabelAction FraudDetector DeleteLabel action.
 * \value DeleteModelAction FraudDetector DeleteModel action.
 * \value DeleteModelVersionAction FraudDetector DeleteModelVersion action.
 * \value DeleteOutcomeAction FraudDetector DeleteOutcome action.
 * \value DeleteRuleAction FraudDetector DeleteRule action.
 * \value DeleteVariableAction FraudDetector DeleteVariable action.
 * \value DescribeDetectorAction FraudDetector DescribeDetector action.
 * \value DescribeModelVersionsAction FraudDetector DescribeModelVersions action.
 * \value GetBatchImportJobsAction FraudDetector GetBatchImportJobs action.
 * \value GetBatchPredictionJobsAction FraudDetector GetBatchPredictionJobs action.
 * \value GetDeleteEventsByEventTypeStatusAction FraudDetector GetDeleteEventsByEventTypeStatus action.
 * \value GetDetectorVersionAction FraudDetector GetDetectorVersion action.
 * \value GetDetectorsAction FraudDetector GetDetectors action.
 * \value GetEntityTypesAction FraudDetector GetEntityTypes action.
 * \value GetEventAction FraudDetector GetEvent action.
 * \value GetEventPredictionAction FraudDetector GetEventPrediction action.
 * \value GetEventPredictionMetadataAction FraudDetector GetEventPredictionMetadata action.
 * \value GetEventTypesAction FraudDetector GetEventTypes action.
 * \value GetExternalModelsAction FraudDetector GetExternalModels action.
 * \value GetKMSEncryptionKeyAction FraudDetector GetKMSEncryptionKey action.
 * \value GetLabelsAction FraudDetector GetLabels action.
 * \value GetModelVersionAction FraudDetector GetModelVersion action.
 * \value GetModelsAction FraudDetector GetModels action.
 * \value GetOutcomesAction FraudDetector GetOutcomes action.
 * \value GetRulesAction FraudDetector GetRules action.
 * \value GetVariablesAction FraudDetector GetVariables action.
 * \value ListEventPredictionsAction FraudDetector ListEventPredictions action.
 * \value ListTagsForResourceAction FraudDetector ListTagsForResource action.
 * \value PutDetectorAction FraudDetector PutDetector action.
 * \value PutEntityTypeAction FraudDetector PutEntityType action.
 * \value PutEventTypeAction FraudDetector PutEventType action.
 * \value PutExternalModelAction FraudDetector PutExternalModel action.
 * \value PutKMSEncryptionKeyAction FraudDetector PutKMSEncryptionKey action.
 * \value PutLabelAction FraudDetector PutLabel action.
 * \value PutOutcomeAction FraudDetector PutOutcome action.
 * \value SendEventAction FraudDetector SendEvent action.
 * \value TagResourceAction FraudDetector TagResource action.
 * \value UntagResourceAction FraudDetector UntagResource action.
 * \value UpdateDetectorVersionAction FraudDetector UpdateDetectorVersion action.
 * \value UpdateDetectorVersionMetadataAction FraudDetector UpdateDetectorVersionMetadata action.
 * \value UpdateDetectorVersionStatusAction FraudDetector UpdateDetectorVersionStatus action.
 * \value UpdateEventLabelAction FraudDetector UpdateEventLabel action.
 * \value UpdateModelAction FraudDetector UpdateModel action.
 * \value UpdateModelVersionAction FraudDetector UpdateModelVersion action.
 * \value UpdateModelVersionStatusAction FraudDetector UpdateModelVersionStatus action.
 * \value UpdateRuleMetadataAction FraudDetector UpdateRuleMetadata action.
 * \value UpdateRuleVersionAction FraudDetector UpdateRuleVersion action.
 * \value UpdateVariableAction FraudDetector UpdateVariable action.
 */

/*!
 * Constructs a FraudDetectorRequest object for FraudDetector \a action.
 */
FraudDetectorRequest::FraudDetectorRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new FraudDetectorRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
FraudDetectorRequest::FraudDetectorRequest(const FraudDetectorRequest &other)
    : QtAws::Core::AwsAbstractRequest(new FraudDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the FraudDetectorRequest object to be equal to \a other.
 */
FraudDetectorRequest& FraudDetectorRequest::operator=(const FraudDetectorRequest &other)
{
    Q_D(FraudDetectorRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa FraudDetectorRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FraudDetectorRequestPrivate.
 */
FraudDetectorRequest::FraudDetectorRequest(FraudDetectorRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the FraudDetector action to be performed by this request.
 */
FraudDetectorRequest::Action FraudDetectorRequest::action() const
{
    Q_D(const FraudDetectorRequest);
    return d->action;
}

/*!
 * Returns the name of the FraudDetector action to be performed by this request.
 */
QString FraudDetectorRequest::actionString() const
{
    return FraudDetectorRequestPrivate::toString(action());
}

/*!
 * Returns the FraudDetector API version implemented by this request.
 */
QString FraudDetectorRequest::apiVersion() const
{
    Q_D(const FraudDetectorRequest);
    return d->apiVersion;
}

/*!
 * Sets the FraudDetector action to be performed by this request to \a action.
 */
void FraudDetectorRequest::setAction(const Action action)
{
    Q_D(FraudDetectorRequest);
    d->action = action;
}

/*!
 * Sets the FraudDetector API version to include in this request to \a version.
 */
void FraudDetectorRequest::setApiVersion(const QString &version)
{
    Q_D(FraudDetectorRequest);
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
bool FraudDetectorRequest::operator==(const FraudDetectorRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid FraudDetector queue name.
 *
 * @par From FraudDetector FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid FraudDetector queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool FraudDetectorRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int FraudDetectorRequest::clearParameter(const QString &name)
{
    Q_D(FraudDetectorRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void FraudDetectorRequest::clearParameters()
{
    Q_D(FraudDetectorRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant FraudDetectorRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const FraudDetectorRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &FraudDetectorRequest::parameters() const
{
    Q_D(const FraudDetectorRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void FraudDetectorRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(FraudDetectorRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void FraudDetectorRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(FraudDetectorRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the FraudDetector request using the given
 * \a endpoint.
 *
 * This FraudDetector implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest FraudDetectorRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const FraudDetectorRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::FraudDetector::FraudDetectorRequestPrivate
 * \brief The FraudDetectorRequestPrivate class provides private implementation for FraudDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a FraudDetectorRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
FraudDetectorRequestPrivate::FraudDetectorRequestPrivate(const FraudDetectorRequest::Action action, FraudDetectorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-11-15"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the FraudDetectorRequest class's copy constructor.
 */
FraudDetectorRequestPrivate::FraudDetectorRequestPrivate(const FraudDetectorRequestPrivate &other,
                                     FraudDetectorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts FraudDetectorRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the FraudDetector service's Action
 * query parameters.
 */
QString FraudDetectorRequestPrivate::toString(const FraudDetectorRequest::Action &action)
{
    #define ActionToString(action) \
        case FraudDetectorRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchCreateVariable);
        ActionToString(BatchGetVariable);
        ActionToString(CancelBatchImportJob);
        ActionToString(CancelBatchPredictionJob);
        ActionToString(CreateBatchImportJob);
        ActionToString(CreateBatchPredictionJob);
        ActionToString(CreateDetectorVersion);
        ActionToString(CreateModel);
        ActionToString(CreateModelVersion);
        ActionToString(CreateRule);
        ActionToString(CreateVariable);
        ActionToString(DeleteBatchImportJob);
        ActionToString(DeleteBatchPredictionJob);
        ActionToString(DeleteDetector);
        ActionToString(DeleteDetectorVersion);
        ActionToString(DeleteEntityType);
        ActionToString(DeleteEvent);
        ActionToString(DeleteEventType);
        ActionToString(DeleteEventsByEventType);
        ActionToString(DeleteExternalModel);
        ActionToString(DeleteLabel);
        ActionToString(DeleteModel);
        ActionToString(DeleteModelVersion);
        ActionToString(DeleteOutcome);
        ActionToString(DeleteRule);
        ActionToString(DeleteVariable);
        ActionToString(DescribeDetector);
        ActionToString(DescribeModelVersions);
        ActionToString(GetBatchImportJobs);
        ActionToString(GetBatchPredictionJobs);
        ActionToString(GetDeleteEventsByEventTypeStatus);
        ActionToString(GetDetectorVersion);
        ActionToString(GetDetectors);
        ActionToString(GetEntityTypes);
        ActionToString(GetEvent);
        ActionToString(GetEventPrediction);
        ActionToString(GetEventPredictionMetadata);
        ActionToString(GetEventTypes);
        ActionToString(GetExternalModels);
        ActionToString(GetKMSEncryptionKey);
        ActionToString(GetLabels);
        ActionToString(GetModelVersion);
        ActionToString(GetModels);
        ActionToString(GetOutcomes);
        ActionToString(GetRules);
        ActionToString(GetVariables);
        ActionToString(ListEventPredictions);
        ActionToString(ListTagsForResource);
        ActionToString(PutDetector);
        ActionToString(PutEntityType);
        ActionToString(PutEventType);
        ActionToString(PutExternalModel);
        ActionToString(PutKMSEncryptionKey);
        ActionToString(PutLabel);
        ActionToString(PutOutcome);
        ActionToString(SendEvent);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDetectorVersion);
        ActionToString(UpdateDetectorVersionMetadata);
        ActionToString(UpdateDetectorVersionStatus);
        ActionToString(UpdateEventLabel);
        ActionToString(UpdateModel);
        ActionToString(UpdateModelVersion);
        ActionToString(UpdateModelVersionStatus);
        ActionToString(UpdateRuleMetadata);
        ActionToString(UpdateRuleVersion);
        ActionToString(UpdateVariable);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace FraudDetector
} // namespace QtAws

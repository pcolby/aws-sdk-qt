// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudtrailrequest.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::CloudTrailRequest
 * \brief The CloudTrailRequest class provides an interface for CloudTrail requests.
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * \enum CloudTrailRequest::Action
 *
 * This enum describes the actions that can be performed as CloudTrail
 * requests.
 *
 * \value AddTagsAction CloudTrail AddTags action.
 * \value CancelQueryAction CloudTrail CancelQuery action.
 * \value CreateEventDataStoreAction CloudTrail CreateEventDataStore action.
 * \value CreateTrailAction CloudTrail CreateTrail action.
 * \value DeleteEventDataStoreAction CloudTrail DeleteEventDataStore action.
 * \value DeleteTrailAction CloudTrail DeleteTrail action.
 * \value DescribeQueryAction CloudTrail DescribeQuery action.
 * \value DescribeTrailsAction CloudTrail DescribeTrails action.
 * \value GetChannelAction CloudTrail GetChannel action.
 * \value GetEventDataStoreAction CloudTrail GetEventDataStore action.
 * \value GetEventSelectorsAction CloudTrail GetEventSelectors action.
 * \value GetImportAction CloudTrail GetImport action.
 * \value GetInsightSelectorsAction CloudTrail GetInsightSelectors action.
 * \value GetQueryResultsAction CloudTrail GetQueryResults action.
 * \value GetTrailAction CloudTrail GetTrail action.
 * \value GetTrailStatusAction CloudTrail GetTrailStatus action.
 * \value ListChannelsAction CloudTrail ListChannels action.
 * \value ListEventDataStoresAction CloudTrail ListEventDataStores action.
 * \value ListImportFailuresAction CloudTrail ListImportFailures action.
 * \value ListImportsAction CloudTrail ListImports action.
 * \value ListPublicKeysAction CloudTrail ListPublicKeys action.
 * \value ListQueriesAction CloudTrail ListQueries action.
 * \value ListTagsAction CloudTrail ListTags action.
 * \value ListTrailsAction CloudTrail ListTrails action.
 * \value LookupEventsAction CloudTrail LookupEvents action.
 * \value PutEventSelectorsAction CloudTrail PutEventSelectors action.
 * \value PutInsightSelectorsAction CloudTrail PutInsightSelectors action.
 * \value RemoveTagsAction CloudTrail RemoveTags action.
 * \value RestoreEventDataStoreAction CloudTrail RestoreEventDataStore action.
 * \value StartImportAction CloudTrail StartImport action.
 * \value StartLoggingAction CloudTrail StartLogging action.
 * \value StartQueryAction CloudTrail StartQuery action.
 * \value StopImportAction CloudTrail StopImport action.
 * \value StopLoggingAction CloudTrail StopLogging action.
 * \value UpdateEventDataStoreAction CloudTrail UpdateEventDataStore action.
 * \value UpdateTrailAction CloudTrail UpdateTrail action.
 */

/*!
 * Constructs a CloudTrailRequest object for CloudTrail \a action.
 */
CloudTrailRequest::CloudTrailRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudTrailRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudTrailRequest::CloudTrailRequest(const CloudTrailRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CloudTrailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudTrailRequest object to be equal to \a other.
 */
CloudTrailRequest& CloudTrailRequest::operator=(const CloudTrailRequest &other)
{
    Q_D(CloudTrailRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudTrailRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudTrailRequestPrivate.
 */
CloudTrailRequest::CloudTrailRequest(CloudTrailRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CloudTrail action to be performed by this request.
 */
CloudTrailRequest::Action CloudTrailRequest::action() const
{
    Q_D(const CloudTrailRequest);
    return d->action;
}

/*!
 * Returns the name of the CloudTrail action to be performed by this request.
 */
QString CloudTrailRequest::actionString() const
{
    return CloudTrailRequestPrivate::toString(action());
}

/*!
 * Returns the CloudTrail API version implemented by this request.
 */
QString CloudTrailRequest::apiVersion() const
{
    Q_D(const CloudTrailRequest);
    return d->apiVersion;
}

/*!
 * Sets the CloudTrail action to be performed by this request to \a action.
 */
void CloudTrailRequest::setAction(const Action action)
{
    Q_D(CloudTrailRequest);
    d->action = action;
}

/*!
 * Sets the CloudTrail API version to include in this request to \a version.
 */
void CloudTrailRequest::setApiVersion(const QString &version)
{
    Q_D(CloudTrailRequest);
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
bool CloudTrailRequest::operator==(const CloudTrailRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudTrail queue name.
 *
 * @par From CloudTrail FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudTrail queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudTrailRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudTrailRequest::clearParameter(const QString &name)
{
    Q_D(CloudTrailRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudTrailRequest::clearParameters()
{
    Q_D(CloudTrailRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudTrailRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudTrailRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudTrailRequest::parameters() const
{
    Q_D(const CloudTrailRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudTrailRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudTrailRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudTrailRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudTrailRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudTrail request using the given
 * \a endpoint.
 *
 * This CloudTrail implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudTrailRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CloudTrailRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudTrail::CloudTrailRequestPrivate
 * \brief The CloudTrailRequestPrivate class provides private implementation for CloudTrailRequest.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a CloudTrailRequestPrivate object for CloudTrail \a action,
 * with public implementation \a q.
 */
CloudTrailRequestPrivate::CloudTrailRequestPrivate(const CloudTrailRequest::Action action, CloudTrailRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2013-11-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudTrailRequest class's copy constructor.
 */
CloudTrailRequestPrivate::CloudTrailRequestPrivate(const CloudTrailRequestPrivate &other,
                                     CloudTrailRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudTrailRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudTrail service's Action
 * query parameters.
 */
QString CloudTrailRequestPrivate::toString(const CloudTrailRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudTrailRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddTags);
        ActionToString(CancelQuery);
        ActionToString(CreateEventDataStore);
        ActionToString(CreateTrail);
        ActionToString(DeleteEventDataStore);
        ActionToString(DeleteTrail);
        ActionToString(DescribeQuery);
        ActionToString(DescribeTrails);
        ActionToString(GetChannel);
        ActionToString(GetEventDataStore);
        ActionToString(GetEventSelectors);
        ActionToString(GetImport);
        ActionToString(GetInsightSelectors);
        ActionToString(GetQueryResults);
        ActionToString(GetTrail);
        ActionToString(GetTrailStatus);
        ActionToString(ListChannels);
        ActionToString(ListEventDataStores);
        ActionToString(ListImportFailures);
        ActionToString(ListImports);
        ActionToString(ListPublicKeys);
        ActionToString(ListQueries);
        ActionToString(ListTags);
        ActionToString(ListTrails);
        ActionToString(LookupEvents);
        ActionToString(PutEventSelectors);
        ActionToString(PutInsightSelectors);
        ActionToString(RemoveTags);
        ActionToString(RestoreEventDataStore);
        ActionToString(StartImport);
        ActionToString(StartLogging);
        ActionToString(StartQuery);
        ActionToString(StopImport);
        ActionToString(StopLogging);
        ActionToString(UpdateEventDataStore);
        ActionToString(UpdateTrail);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudTrail
} // namespace QtAws

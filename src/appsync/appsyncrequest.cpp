// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "appsyncrequest.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::AppSyncRequest
 * \brief The AppSyncRequest class provides an interface for AppSync requests.
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * \enum AppSyncRequest::Action
 *
 * This enum describes the actions that can be performed as AppSync
 * requests.
 *
 * \value AssociateApiAction AppSync AssociateApi action.
 * \value CreateApiCacheAction AppSync CreateApiCache action.
 * \value CreateApiKeyAction AppSync CreateApiKey action.
 * \value CreateDataSourceAction AppSync CreateDataSource action.
 * \value CreateDomainNameAction AppSync CreateDomainName action.
 * \value CreateFunctionAction AppSync CreateFunction action.
 * \value CreateGraphqlApiAction AppSync CreateGraphqlApi action.
 * \value CreateResolverAction AppSync CreateResolver action.
 * \value CreateTypeAction AppSync CreateType action.
 * \value DeleteApiCacheAction AppSync DeleteApiCache action.
 * \value DeleteApiKeyAction AppSync DeleteApiKey action.
 * \value DeleteDataSourceAction AppSync DeleteDataSource action.
 * \value DeleteDomainNameAction AppSync DeleteDomainName action.
 * \value DeleteFunctionAction AppSync DeleteFunction action.
 * \value DeleteGraphqlApiAction AppSync DeleteGraphqlApi action.
 * \value DeleteResolverAction AppSync DeleteResolver action.
 * \value DeleteTypeAction AppSync DeleteType action.
 * \value DisassociateApiAction AppSync DisassociateApi action.
 * \value EvaluateMappingTemplateAction AppSync EvaluateMappingTemplate action.
 * \value FlushApiCacheAction AppSync FlushApiCache action.
 * \value GetApiAssociationAction AppSync GetApiAssociation action.
 * \value GetApiCacheAction AppSync GetApiCache action.
 * \value GetDataSourceAction AppSync GetDataSource action.
 * \value GetDomainNameAction AppSync GetDomainName action.
 * \value GetFunctionAction AppSync GetFunction action.
 * \value GetGraphqlApiAction AppSync GetGraphqlApi action.
 * \value GetIntrospectionSchemaAction AppSync GetIntrospectionSchema action.
 * \value GetResolverAction AppSync GetResolver action.
 * \value GetSchemaCreationStatusAction AppSync GetSchemaCreationStatus action.
 * \value GetTypeAction AppSync GetType action.
 * \value ListApiKeysAction AppSync ListApiKeys action.
 * \value ListDataSourcesAction AppSync ListDataSources action.
 * \value ListDomainNamesAction AppSync ListDomainNames action.
 * \value ListFunctionsAction AppSync ListFunctions action.
 * \value ListGraphqlApisAction AppSync ListGraphqlApis action.
 * \value ListResolversAction AppSync ListResolvers action.
 * \value ListResolversByFunctionAction AppSync ListResolversByFunction action.
 * \value ListTagsForResourceAction AppSync ListTagsForResource action.
 * \value ListTypesAction AppSync ListTypes action.
 * \value StartSchemaCreationAction AppSync StartSchemaCreation action.
 * \value TagResourceAction AppSync TagResource action.
 * \value UntagResourceAction AppSync UntagResource action.
 * \value UpdateApiCacheAction AppSync UpdateApiCache action.
 * \value UpdateApiKeyAction AppSync UpdateApiKey action.
 * \value UpdateDataSourceAction AppSync UpdateDataSource action.
 * \value UpdateDomainNameAction AppSync UpdateDomainName action.
 * \value UpdateFunctionAction AppSync UpdateFunction action.
 * \value UpdateGraphqlApiAction AppSync UpdateGraphqlApi action.
 * \value UpdateResolverAction AppSync UpdateResolver action.
 * \value UpdateTypeAction AppSync UpdateType action.
 */

/*!
 * Constructs a AppSyncRequest object for AppSync \a action.
 */
AppSyncRequest::AppSyncRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AppSyncRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AppSyncRequest::AppSyncRequest(const AppSyncRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AppSyncRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AppSyncRequest object to be equal to \a other.
 */
AppSyncRequest& AppSyncRequest::operator=(const AppSyncRequest &other)
{
    Q_D(AppSyncRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AppSyncRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppSyncRequestPrivate.
 */
AppSyncRequest::AppSyncRequest(AppSyncRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AppSync action to be performed by this request.
 */
AppSyncRequest::Action AppSyncRequest::action() const
{
    Q_D(const AppSyncRequest);
    return d->action;
}

/*!
 * Returns the name of the AppSync action to be performed by this request.
 */
QString AppSyncRequest::actionString() const
{
    return AppSyncRequestPrivate::toString(action());
}

/*!
 * Returns the AppSync API version implemented by this request.
 */
QString AppSyncRequest::apiVersion() const
{
    Q_D(const AppSyncRequest);
    return d->apiVersion;
}

/*!
 * Sets the AppSync action to be performed by this request to \a action.
 */
void AppSyncRequest::setAction(const Action action)
{
    Q_D(AppSyncRequest);
    d->action = action;
}

/*!
 * Sets the AppSync API version to include in this request to \a version.
 */
void AppSyncRequest::setApiVersion(const QString &version)
{
    Q_D(AppSyncRequest);
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
bool AppSyncRequest::operator==(const AppSyncRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AppSync queue name.
 *
 * @par From AppSync FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AppSync queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AppSyncRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AppSyncRequest::clearParameter(const QString &name)
{
    Q_D(AppSyncRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AppSyncRequest::clearParameters()
{
    Q_D(AppSyncRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AppSyncRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppSyncRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AppSyncRequest::parameters() const
{
    Q_D(const AppSyncRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AppSyncRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppSyncRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AppSyncRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppSyncRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AppSync request using the given
 * \a endpoint.
 *
 * This AppSync implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AppSyncRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AppSyncRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AppSync::AppSyncRequestPrivate
 * \brief The AppSyncRequestPrivate class provides private implementation for AppSyncRequest.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a AppSyncRequestPrivate object for AppSync \a action,
 * with public implementation \a q.
 */
AppSyncRequestPrivate::AppSyncRequestPrivate(const AppSyncRequest::Action action, AppSyncRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-07-25"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppSyncRequest class's copy constructor.
 */
AppSyncRequestPrivate::AppSyncRequestPrivate(const AppSyncRequestPrivate &other,
                                     AppSyncRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AppSyncRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AppSync service's Action
 * query parameters.
 */
QString AppSyncRequestPrivate::toString(const AppSyncRequest::Action &action)
{
    #define ActionToString(action) \
        case AppSyncRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateApi);
        ActionToString(CreateApiCache);
        ActionToString(CreateApiKey);
        ActionToString(CreateDataSource);
        ActionToString(CreateDomainName);
        ActionToString(CreateFunction);
        ActionToString(CreateGraphqlApi);
        ActionToString(CreateResolver);
        ActionToString(CreateType);
        ActionToString(DeleteApiCache);
        ActionToString(DeleteApiKey);
        ActionToString(DeleteDataSource);
        ActionToString(DeleteDomainName);
        ActionToString(DeleteFunction);
        ActionToString(DeleteGraphqlApi);
        ActionToString(DeleteResolver);
        ActionToString(DeleteType);
        ActionToString(DisassociateApi);
        ActionToString(EvaluateMappingTemplate);
        ActionToString(FlushApiCache);
        ActionToString(GetApiAssociation);
        ActionToString(GetApiCache);
        ActionToString(GetDataSource);
        ActionToString(GetDomainName);
        ActionToString(GetFunction);
        ActionToString(GetGraphqlApi);
        ActionToString(GetIntrospectionSchema);
        ActionToString(GetResolver);
        ActionToString(GetSchemaCreationStatus);
        ActionToString(GetType);
        ActionToString(ListApiKeys);
        ActionToString(ListDataSources);
        ActionToString(ListDomainNames);
        ActionToString(ListFunctions);
        ActionToString(ListGraphqlApis);
        ActionToString(ListResolvers);
        ActionToString(ListResolversByFunction);
        ActionToString(ListTagsForResource);
        ActionToString(ListTypes);
        ActionToString(StartSchemaCreation);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateApiCache);
        ActionToString(UpdateApiKey);
        ActionToString(UpdateDataSource);
        ActionToString(UpdateDomainName);
        ActionToString(UpdateFunction);
        ActionToString(UpdateGraphqlApi);
        ActionToString(UpdateResolver);
        ActionToString(UpdateType);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AppSync
} // namespace QtAws

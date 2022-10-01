// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "appstreamrequest.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::AppStreamRequest
 * \brief The AppStreamRequest class provides an interface for AppStream requests.
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * \enum AppStreamRequest::Action
 *
 * This enum describes the actions that can be performed as AppStream
 * requests.
 *
 * \value AssociateApplicationFleetAction AppStream AssociateApplicationFleet action.
 * \value AssociateApplicationToEntitlementAction AppStream AssociateApplicationToEntitlement action.
 * \value AssociateFleetAction AppStream AssociateFleet action.
 * \value BatchAssociateUserStackAction AppStream BatchAssociateUserStack action.
 * \value BatchDisassociateUserStackAction AppStream BatchDisassociateUserStack action.
 * \value CopyImageAction AppStream CopyImage action.
 * \value CreateAppBlockAction AppStream CreateAppBlock action.
 * \value CreateApplicationAction AppStream CreateApplication action.
 * \value CreateDirectoryConfigAction AppStream CreateDirectoryConfig action.
 * \value CreateEntitlementAction AppStream CreateEntitlement action.
 * \value CreateFleetAction AppStream CreateFleet action.
 * \value CreateImageBuilderAction AppStream CreateImageBuilder action.
 * \value CreateImageBuilderStreamingURLAction AppStream CreateImageBuilderStreamingURL action.
 * \value CreateStackAction AppStream CreateStack action.
 * \value CreateStreamingURLAction AppStream CreateStreamingURL action.
 * \value CreateUpdatedImageAction AppStream CreateUpdatedImage action.
 * \value CreateUsageReportSubscriptionAction AppStream CreateUsageReportSubscription action.
 * \value CreateUserAction AppStream CreateUser action.
 * \value DeleteAppBlockAction AppStream DeleteAppBlock action.
 * \value DeleteApplicationAction AppStream DeleteApplication action.
 * \value DeleteDirectoryConfigAction AppStream DeleteDirectoryConfig action.
 * \value DeleteEntitlementAction AppStream DeleteEntitlement action.
 * \value DeleteFleetAction AppStream DeleteFleet action.
 * \value DeleteImageAction AppStream DeleteImage action.
 * \value DeleteImageBuilderAction AppStream DeleteImageBuilder action.
 * \value DeleteImagePermissionsAction AppStream DeleteImagePermissions action.
 * \value DeleteStackAction AppStream DeleteStack action.
 * \value DeleteUsageReportSubscriptionAction AppStream DeleteUsageReportSubscription action.
 * \value DeleteUserAction AppStream DeleteUser action.
 * \value DescribeAppBlocksAction AppStream DescribeAppBlocks action.
 * \value DescribeApplicationFleetAssociationsAction AppStream DescribeApplicationFleetAssociations action.
 * \value DescribeApplicationsAction AppStream DescribeApplications action.
 * \value DescribeDirectoryConfigsAction AppStream DescribeDirectoryConfigs action.
 * \value DescribeEntitlementsAction AppStream DescribeEntitlements action.
 * \value DescribeFleetsAction AppStream DescribeFleets action.
 * \value DescribeImageBuildersAction AppStream DescribeImageBuilders action.
 * \value DescribeImagePermissionsAction AppStream DescribeImagePermissions action.
 * \value DescribeImagesAction AppStream DescribeImages action.
 * \value DescribeSessionsAction AppStream DescribeSessions action.
 * \value DescribeStacksAction AppStream DescribeStacks action.
 * \value DescribeUsageReportSubscriptionsAction AppStream DescribeUsageReportSubscriptions action.
 * \value DescribeUserStackAssociationsAction AppStream DescribeUserStackAssociations action.
 * \value DescribeUsersAction AppStream DescribeUsers action.
 * \value DisableUserAction AppStream DisableUser action.
 * \value DisassociateApplicationFleetAction AppStream DisassociateApplicationFleet action.
 * \value DisassociateApplicationFromEntitlementAction AppStream DisassociateApplicationFromEntitlement action.
 * \value DisassociateFleetAction AppStream DisassociateFleet action.
 * \value EnableUserAction AppStream EnableUser action.
 * \value ExpireSessionAction AppStream ExpireSession action.
 * \value ListAssociatedFleetsAction AppStream ListAssociatedFleets action.
 * \value ListAssociatedStacksAction AppStream ListAssociatedStacks action.
 * \value ListEntitledApplicationsAction AppStream ListEntitledApplications action.
 * \value ListTagsForResourceAction AppStream ListTagsForResource action.
 * \value StartFleetAction AppStream StartFleet action.
 * \value StartImageBuilderAction AppStream StartImageBuilder action.
 * \value StopFleetAction AppStream StopFleet action.
 * \value StopImageBuilderAction AppStream StopImageBuilder action.
 * \value TagResourceAction AppStream TagResource action.
 * \value UntagResourceAction AppStream UntagResource action.
 * \value UpdateApplicationAction AppStream UpdateApplication action.
 * \value UpdateDirectoryConfigAction AppStream UpdateDirectoryConfig action.
 * \value UpdateEntitlementAction AppStream UpdateEntitlement action.
 * \value UpdateFleetAction AppStream UpdateFleet action.
 * \value UpdateImagePermissionsAction AppStream UpdateImagePermissions action.
 * \value UpdateStackAction AppStream UpdateStack action.
 */

/*!
 * Constructs a AppStreamRequest object for AppStream \a action.
 */
AppStreamRequest::AppStreamRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AppStreamRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AppStreamRequest::AppStreamRequest(const AppStreamRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AppStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AppStreamRequest object to be equal to \a other.
 */
AppStreamRequest& AppStreamRequest::operator=(const AppStreamRequest &other)
{
    Q_D(AppStreamRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AppStreamRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppStreamRequestPrivate.
 */
AppStreamRequest::AppStreamRequest(AppStreamRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AppStream action to be performed by this request.
 */
AppStreamRequest::Action AppStreamRequest::action() const
{
    Q_D(const AppStreamRequest);
    return d->action;
}

/*!
 * Returns the name of the AppStream action to be performed by this request.
 */
QString AppStreamRequest::actionString() const
{
    return AppStreamRequestPrivate::toString(action());
}

/*!
 * Returns the AppStream API version implemented by this request.
 */
QString AppStreamRequest::apiVersion() const
{
    Q_D(const AppStreamRequest);
    return d->apiVersion;
}

/*!
 * Sets the AppStream action to be performed by this request to \a action.
 */
void AppStreamRequest::setAction(const Action action)
{
    Q_D(AppStreamRequest);
    d->action = action;
}

/*!
 * Sets the AppStream API version to include in this request to \a version.
 */
void AppStreamRequest::setApiVersion(const QString &version)
{
    Q_D(AppStreamRequest);
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
bool AppStreamRequest::operator==(const AppStreamRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AppStream queue name.
 *
 * @par From AppStream FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AppStream queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AppStreamRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AppStreamRequest::clearParameter(const QString &name)
{
    Q_D(AppStreamRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AppStreamRequest::clearParameters()
{
    Q_D(AppStreamRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AppStreamRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppStreamRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AppStreamRequest::parameters() const
{
    Q_D(const AppStreamRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AppStreamRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppStreamRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AppStreamRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppStreamRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AppStream request using the given
 * \a endpoint.
 *
 * This AppStream implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AppStreamRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AppStreamRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AppStream::AppStreamRequestPrivate
 * \brief The AppStreamRequestPrivate class provides private implementation for AppStreamRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a AppStreamRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
AppStreamRequestPrivate::AppStreamRequestPrivate(const AppStreamRequest::Action action, AppStreamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2016-12-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppStreamRequest class's copy constructor.
 */
AppStreamRequestPrivate::AppStreamRequestPrivate(const AppStreamRequestPrivate &other,
                                     AppStreamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AppStreamRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AppStream service's Action
 * query parameters.
 */
QString AppStreamRequestPrivate::toString(const AppStreamRequest::Action &action)
{
    #define ActionToString(action) \
        case AppStreamRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateApplicationFleet);
        ActionToString(AssociateApplicationToEntitlement);
        ActionToString(AssociateFleet);
        ActionToString(BatchAssociateUserStack);
        ActionToString(BatchDisassociateUserStack);
        ActionToString(CopyImage);
        ActionToString(CreateAppBlock);
        ActionToString(CreateApplication);
        ActionToString(CreateDirectoryConfig);
        ActionToString(CreateEntitlement);
        ActionToString(CreateFleet);
        ActionToString(CreateImageBuilder);
        ActionToString(CreateImageBuilderStreamingURL);
        ActionToString(CreateStack);
        ActionToString(CreateStreamingURL);
        ActionToString(CreateUpdatedImage);
        ActionToString(CreateUsageReportSubscription);
        ActionToString(CreateUser);
        ActionToString(DeleteAppBlock);
        ActionToString(DeleteApplication);
        ActionToString(DeleteDirectoryConfig);
        ActionToString(DeleteEntitlement);
        ActionToString(DeleteFleet);
        ActionToString(DeleteImage);
        ActionToString(DeleteImageBuilder);
        ActionToString(DeleteImagePermissions);
        ActionToString(DeleteStack);
        ActionToString(DeleteUsageReportSubscription);
        ActionToString(DeleteUser);
        ActionToString(DescribeAppBlocks);
        ActionToString(DescribeApplicationFleetAssociations);
        ActionToString(DescribeApplications);
        ActionToString(DescribeDirectoryConfigs);
        ActionToString(DescribeEntitlements);
        ActionToString(DescribeFleets);
        ActionToString(DescribeImageBuilders);
        ActionToString(DescribeImagePermissions);
        ActionToString(DescribeImages);
        ActionToString(DescribeSessions);
        ActionToString(DescribeStacks);
        ActionToString(DescribeUsageReportSubscriptions);
        ActionToString(DescribeUserStackAssociations);
        ActionToString(DescribeUsers);
        ActionToString(DisableUser);
        ActionToString(DisassociateApplicationFleet);
        ActionToString(DisassociateApplicationFromEntitlement);
        ActionToString(DisassociateFleet);
        ActionToString(EnableUser);
        ActionToString(ExpireSession);
        ActionToString(ListAssociatedFleets);
        ActionToString(ListAssociatedStacks);
        ActionToString(ListEntitledApplications);
        ActionToString(ListTagsForResource);
        ActionToString(StartFleet);
        ActionToString(StartImageBuilder);
        ActionToString(StopFleet);
        ActionToString(StopImageBuilder);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateApplication);
        ActionToString(UpdateDirectoryConfig);
        ActionToString(UpdateEntitlement);
        ActionToString(UpdateFleet);
        ActionToString(UpdateImagePermissions);
        ActionToString(UpdateStack);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AppStream
} // namespace QtAws

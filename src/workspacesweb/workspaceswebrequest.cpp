// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "workspaceswebrequest.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::WorkSpacesWebRequest
 * \brief The WorkSpacesWebRequest class provides an interface for WorkSpacesWeb requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * \enum WorkSpacesWebRequest::Action
 *
 * This enum describes the actions that can be performed as WorkSpacesWeb
 * requests.
 *
 * \value AssociateBrowserSettingsAction WorkSpacesWeb AssociateBrowserSettings action.
 * \value AssociateNetworkSettingsAction WorkSpacesWeb AssociateNetworkSettings action.
 * \value AssociateTrustStoreAction WorkSpacesWeb AssociateTrustStore action.
 * \value AssociateUserSettingsAction WorkSpacesWeb AssociateUserSettings action.
 * \value CreateBrowserSettingsAction WorkSpacesWeb CreateBrowserSettings action.
 * \value CreateIdentityProviderAction WorkSpacesWeb CreateIdentityProvider action.
 * \value CreateNetworkSettingsAction WorkSpacesWeb CreateNetworkSettings action.
 * \value CreatePortalAction WorkSpacesWeb CreatePortal action.
 * \value CreateTrustStoreAction WorkSpacesWeb CreateTrustStore action.
 * \value CreateUserSettingsAction WorkSpacesWeb CreateUserSettings action.
 * \value DeleteBrowserSettingsAction WorkSpacesWeb DeleteBrowserSettings action.
 * \value DeleteIdentityProviderAction WorkSpacesWeb DeleteIdentityProvider action.
 * \value DeleteNetworkSettingsAction WorkSpacesWeb DeleteNetworkSettings action.
 * \value DeletePortalAction WorkSpacesWeb DeletePortal action.
 * \value DeleteTrustStoreAction WorkSpacesWeb DeleteTrustStore action.
 * \value DeleteUserSettingsAction WorkSpacesWeb DeleteUserSettings action.
 * \value DisassociateBrowserSettingsAction WorkSpacesWeb DisassociateBrowserSettings action.
 * \value DisassociateNetworkSettingsAction WorkSpacesWeb DisassociateNetworkSettings action.
 * \value DisassociateTrustStoreAction WorkSpacesWeb DisassociateTrustStore action.
 * \value DisassociateUserSettingsAction WorkSpacesWeb DisassociateUserSettings action.
 * \value GetBrowserSettingsAction WorkSpacesWeb GetBrowserSettings action.
 * \value GetIdentityProviderAction WorkSpacesWeb GetIdentityProvider action.
 * \value GetNetworkSettingsAction WorkSpacesWeb GetNetworkSettings action.
 * \value GetPortalAction WorkSpacesWeb GetPortal action.
 * \value GetPortalServiceProviderMetadataAction WorkSpacesWeb GetPortalServiceProviderMetadata action.
 * \value GetTrustStoreAction WorkSpacesWeb GetTrustStore action.
 * \value GetTrustStoreCertificateAction WorkSpacesWeb GetTrustStoreCertificate action.
 * \value GetUserSettingsAction WorkSpacesWeb GetUserSettings action.
 * \value ListBrowserSettingsAction WorkSpacesWeb ListBrowserSettings action.
 * \value ListIdentityProvidersAction WorkSpacesWeb ListIdentityProviders action.
 * \value ListNetworkSettingsAction WorkSpacesWeb ListNetworkSettings action.
 * \value ListPortalsAction WorkSpacesWeb ListPortals action.
 * \value ListTagsForResourceAction WorkSpacesWeb ListTagsForResource action.
 * \value ListTrustStoreCertificatesAction WorkSpacesWeb ListTrustStoreCertificates action.
 * \value ListTrustStoresAction WorkSpacesWeb ListTrustStores action.
 * \value ListUserSettingsAction WorkSpacesWeb ListUserSettings action.
 * \value TagResourceAction WorkSpacesWeb TagResource action.
 * \value UntagResourceAction WorkSpacesWeb UntagResource action.
 * \value UpdateBrowserSettingsAction WorkSpacesWeb UpdateBrowserSettings action.
 * \value UpdateIdentityProviderAction WorkSpacesWeb UpdateIdentityProvider action.
 * \value UpdateNetworkSettingsAction WorkSpacesWeb UpdateNetworkSettings action.
 * \value UpdatePortalAction WorkSpacesWeb UpdatePortal action.
 * \value UpdateTrustStoreAction WorkSpacesWeb UpdateTrustStore action.
 * \value UpdateUserSettingsAction WorkSpacesWeb UpdateUserSettings action.
 */

/*!
 * Constructs a WorkSpacesWebRequest object for WorkSpacesWeb \a action.
 */
WorkSpacesWebRequest::WorkSpacesWebRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new WorkSpacesWebRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
WorkSpacesWebRequest::WorkSpacesWebRequest(const WorkSpacesWebRequest &other)
    : QtAws::Core::AwsAbstractRequest(new WorkSpacesWebRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the WorkSpacesWebRequest object to be equal to \a other.
 */
WorkSpacesWebRequest& WorkSpacesWebRequest::operator=(const WorkSpacesWebRequest &other)
{
    Q_D(WorkSpacesWebRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa WorkSpacesWebRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkSpacesWebRequestPrivate.
 */
WorkSpacesWebRequest::WorkSpacesWebRequest(WorkSpacesWebRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the WorkSpacesWeb action to be performed by this request.
 */
WorkSpacesWebRequest::Action WorkSpacesWebRequest::action() const
{
    Q_D(const WorkSpacesWebRequest);
    return d->action;
}

/*!
 * Returns the name of the WorkSpacesWeb action to be performed by this request.
 */
QString WorkSpacesWebRequest::actionString() const
{
    return WorkSpacesWebRequestPrivate::toString(action());
}

/*!
 * Returns the WorkSpacesWeb API version implemented by this request.
 */
QString WorkSpacesWebRequest::apiVersion() const
{
    Q_D(const WorkSpacesWebRequest);
    return d->apiVersion;
}

/*!
 * Sets the WorkSpacesWeb action to be performed by this request to \a action.
 */
void WorkSpacesWebRequest::setAction(const Action action)
{
    Q_D(WorkSpacesWebRequest);
    d->action = action;
}

/*!
 * Sets the WorkSpacesWeb API version to include in this request to \a version.
 */
void WorkSpacesWebRequest::setApiVersion(const QString &version)
{
    Q_D(WorkSpacesWebRequest);
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
bool WorkSpacesWebRequest::operator==(const WorkSpacesWebRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid WorkSpacesWeb queue name.
 *
 * @par From WorkSpacesWeb FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WorkSpacesWeb queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool WorkSpacesWebRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int WorkSpacesWebRequest::clearParameter(const QString &name)
{
    Q_D(WorkSpacesWebRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void WorkSpacesWebRequest::clearParameters()
{
    Q_D(WorkSpacesWebRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant WorkSpacesWebRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WorkSpacesWebRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &WorkSpacesWebRequest::parameters() const
{
    Q_D(const WorkSpacesWebRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void WorkSpacesWebRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WorkSpacesWebRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void WorkSpacesWebRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WorkSpacesWebRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the WorkSpacesWeb request using the given
 * \a endpoint.
 *
 * This WorkSpacesWeb implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest WorkSpacesWebRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const WorkSpacesWebRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::WorkSpacesWeb::WorkSpacesWebRequestPrivate
 * \brief The WorkSpacesWebRequestPrivate class provides private implementation for WorkSpacesWebRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a WorkSpacesWebRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
WorkSpacesWebRequestPrivate::WorkSpacesWebRequestPrivate(const WorkSpacesWebRequest::Action action, WorkSpacesWebRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-07-08"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WorkSpacesWebRequest class's copy constructor.
 */
WorkSpacesWebRequestPrivate::WorkSpacesWebRequestPrivate(const WorkSpacesWebRequestPrivate &other,
                                     WorkSpacesWebRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts WorkSpacesWebRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the WorkSpacesWeb service's Action
 * query parameters.
 */
QString WorkSpacesWebRequestPrivate::toString(const WorkSpacesWebRequest::Action &action)
{
    #define ActionToString(action) \
        case WorkSpacesWebRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateBrowserSettings);
        ActionToString(AssociateNetworkSettings);
        ActionToString(AssociateTrustStore);
        ActionToString(AssociateUserSettings);
        ActionToString(CreateBrowserSettings);
        ActionToString(CreateIdentityProvider);
        ActionToString(CreateNetworkSettings);
        ActionToString(CreatePortal);
        ActionToString(CreateTrustStore);
        ActionToString(CreateUserSettings);
        ActionToString(DeleteBrowserSettings);
        ActionToString(DeleteIdentityProvider);
        ActionToString(DeleteNetworkSettings);
        ActionToString(DeletePortal);
        ActionToString(DeleteTrustStore);
        ActionToString(DeleteUserSettings);
        ActionToString(DisassociateBrowserSettings);
        ActionToString(DisassociateNetworkSettings);
        ActionToString(DisassociateTrustStore);
        ActionToString(DisassociateUserSettings);
        ActionToString(GetBrowserSettings);
        ActionToString(GetIdentityProvider);
        ActionToString(GetNetworkSettings);
        ActionToString(GetPortal);
        ActionToString(GetPortalServiceProviderMetadata);
        ActionToString(GetTrustStore);
        ActionToString(GetTrustStoreCertificate);
        ActionToString(GetUserSettings);
        ActionToString(ListBrowserSettings);
        ActionToString(ListIdentityProviders);
        ActionToString(ListNetworkSettings);
        ActionToString(ListPortals);
        ActionToString(ListTagsForResource);
        ActionToString(ListTrustStoreCertificates);
        ActionToString(ListTrustStores);
        ActionToString(ListUserSettings);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateBrowserSettings);
        ActionToString(UpdateIdentityProvider);
        ActionToString(UpdateNetworkSettings);
        ActionToString(UpdatePortal);
        ActionToString(UpdateTrustStore);
        ActionToString(UpdateUserSettings);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WorkSpacesWeb
} // namespace QtAws

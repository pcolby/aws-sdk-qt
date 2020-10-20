/*
    Copyright 2013-2020 Paul Colby

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

#include "worklinkrequest.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::WorkLinkRequest
 * \brief The WorkLinkRequest class provides an interface for WorkLink requests.
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * \enum WorkLinkRequest::Action
 *
 * This enum describes the actions that can be performed as WorkLink
 * requests.
 *
 * \value AssociateDomainAction WorkLink AssociateDomain action.
 * \value AssociateWebsiteAuthorizationProviderAction WorkLink AssociateWebsiteAuthorizationProvider action.
 * \value AssociateWebsiteCertificateAuthorityAction WorkLink AssociateWebsiteCertificateAuthority action.
 * \value CreateFleetAction WorkLink CreateFleet action.
 * \value DeleteFleetAction WorkLink DeleteFleet action.
 * \value DescribeAuditStreamConfigurationAction WorkLink DescribeAuditStreamConfiguration action.
 * \value DescribeCompanyNetworkConfigurationAction WorkLink DescribeCompanyNetworkConfiguration action.
 * \value DescribeDeviceAction WorkLink DescribeDevice action.
 * \value DescribeDevicePolicyConfigurationAction WorkLink DescribeDevicePolicyConfiguration action.
 * \value DescribeDomainAction WorkLink DescribeDomain action.
 * \value DescribeFleetMetadataAction WorkLink DescribeFleetMetadata action.
 * \value DescribeIdentityProviderConfigurationAction WorkLink DescribeIdentityProviderConfiguration action.
 * \value DescribeWebsiteCertificateAuthorityAction WorkLink DescribeWebsiteCertificateAuthority action.
 * \value DisassociateDomainAction WorkLink DisassociateDomain action.
 * \value DisassociateWebsiteAuthorizationProviderAction WorkLink DisassociateWebsiteAuthorizationProvider action.
 * \value DisassociateWebsiteCertificateAuthorityAction WorkLink DisassociateWebsiteCertificateAuthority action.
 * \value ListDevicesAction WorkLink ListDevices action.
 * \value ListDomainsAction WorkLink ListDomains action.
 * \value ListFleetsAction WorkLink ListFleets action.
 * \value ListWebsiteAuthorizationProvidersAction WorkLink ListWebsiteAuthorizationProviders action.
 * \value ListWebsiteCertificateAuthoritiesAction WorkLink ListWebsiteCertificateAuthorities action.
 * \value RestoreDomainAccessAction WorkLink RestoreDomainAccess action.
 * \value RevokeDomainAccessAction WorkLink RevokeDomainAccess action.
 * \value SignOutUserAction WorkLink SignOutUser action.
 * \value UpdateAuditStreamConfigurationAction WorkLink UpdateAuditStreamConfiguration action.
 * \value UpdateCompanyNetworkConfigurationAction WorkLink UpdateCompanyNetworkConfiguration action.
 * \value UpdateDevicePolicyConfigurationAction WorkLink UpdateDevicePolicyConfiguration action.
 * \value UpdateDomainMetadataAction WorkLink UpdateDomainMetadata action.
 * \value UpdateFleetMetadataAction WorkLink UpdateFleetMetadata action.
 * \value UpdateIdentityProviderConfigurationAction WorkLink UpdateIdentityProviderConfiguration action.
 */

/*!
 * Constructs a WorkLinkRequest object for WorkLink \a action.
 */
WorkLinkRequest::WorkLinkRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new WorkLinkRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
WorkLinkRequest::WorkLinkRequest(const WorkLinkRequest &other)
    : QtAws::Core::AwsAbstractRequest(new WorkLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the WorkLinkRequest object to be equal to \a other.
 */
WorkLinkRequest& WorkLinkRequest::operator=(const WorkLinkRequest &other)
{
    Q_D(WorkLinkRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa WorkLinkRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkLinkRequestPrivate.
 */
WorkLinkRequest::WorkLinkRequest(WorkLinkRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the WorkLink action to be performed by this request.
 */
WorkLinkRequest::Action WorkLinkRequest::action() const
{
    Q_D(const WorkLinkRequest);
    return d->action;
}

/*!
 * Returns the name of the WorkLink action to be performed by this request.
 */
QString WorkLinkRequest::actionString() const
{
    return WorkLinkRequestPrivate::toString(action());
}

/*!
 * Returns the WorkLink API version implemented by this request.
 */
QString WorkLinkRequest::apiVersion() const
{
    Q_D(const WorkLinkRequest);
    return d->apiVersion;
}

/*!
 * Sets the WorkLink action to be performed by this request to \a action.
 */
void WorkLinkRequest::setAction(const Action action)
{
    Q_D(WorkLinkRequest);
    d->action = action;
}

/*!
 * Sets the WorkLink API version to include in this request to \a version.
 */
void WorkLinkRequest::setApiVersion(const QString &version)
{
    Q_D(WorkLinkRequest);
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
bool WorkLinkRequest::operator==(const WorkLinkRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid WorkLink queue name.
 *
 * @par From WorkLink FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WorkLink queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool WorkLinkRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int WorkLinkRequest::clearParameter(const QString &name)
{
    Q_D(WorkLinkRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void WorkLinkRequest::clearParameters()
{
    Q_D(WorkLinkRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant WorkLinkRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WorkLinkRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &WorkLinkRequest::parameters() const
{
    Q_D(const WorkLinkRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void WorkLinkRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WorkLinkRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void WorkLinkRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WorkLinkRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the WorkLink request using the given
 * \a endpoint.
 *
 * This WorkLink implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest WorkLinkRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const WorkLinkRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::WorkLink::WorkLinkRequestPrivate
 * \brief The WorkLinkRequestPrivate class provides private implementation for WorkLinkRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a WorkLinkRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
WorkLinkRequestPrivate::WorkLinkRequestPrivate(const WorkLinkRequest::Action action, WorkLinkRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WorkLinkRequest class's copy constructor.
 */
WorkLinkRequestPrivate::WorkLinkRequestPrivate(const WorkLinkRequestPrivate &other,
                                     WorkLinkRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts WorkLinkRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the WorkLink service's Action
 * query parameters.
 */
QString WorkLinkRequestPrivate::toString(const WorkLinkRequest::Action &action)
{
    #define ActionToString(action) \
        case WorkLinkRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WorkLink
} // namespace QtAws

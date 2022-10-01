// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "servicecatalogappregistryrequest.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ServiceCatalogAppRegistryRequest
 * \brief The ServiceCatalogAppRegistryRequest class provides an interface for ServiceCatalogAppRegistry requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * \enum ServiceCatalogAppRegistryRequest::Action
 *
 * This enum describes the actions that can be performed as ServiceCatalogAppRegistry
 * requests.
 *
 * \value AssociateAttributeGroupAction ServiceCatalogAppRegistry AssociateAttributeGroup action.
 * \value AssociateResourceAction ServiceCatalogAppRegistry AssociateResource action.
 * \value CreateApplicationAction ServiceCatalogAppRegistry CreateApplication action.
 * \value CreateAttributeGroupAction ServiceCatalogAppRegistry CreateAttributeGroup action.
 * \value DeleteApplicationAction ServiceCatalogAppRegistry DeleteApplication action.
 * \value DeleteAttributeGroupAction ServiceCatalogAppRegistry DeleteAttributeGroup action.
 * \value DisassociateAttributeGroupAction ServiceCatalogAppRegistry DisassociateAttributeGroup action.
 * \value DisassociateResourceAction ServiceCatalogAppRegistry DisassociateResource action.
 * \value GetApplicationAction ServiceCatalogAppRegistry GetApplication action.
 * \value GetAssociatedResourceAction ServiceCatalogAppRegistry GetAssociatedResource action.
 * \value GetAttributeGroupAction ServiceCatalogAppRegistry GetAttributeGroup action.
 * \value ListApplicationsAction ServiceCatalogAppRegistry ListApplications action.
 * \value ListAssociatedAttributeGroupsAction ServiceCatalogAppRegistry ListAssociatedAttributeGroups action.
 * \value ListAssociatedResourcesAction ServiceCatalogAppRegistry ListAssociatedResources action.
 * \value ListAttributeGroupsAction ServiceCatalogAppRegistry ListAttributeGroups action.
 * \value ListAttributeGroupsForApplicationAction ServiceCatalogAppRegistry ListAttributeGroupsForApplication action.
 * \value ListTagsForResourceAction ServiceCatalogAppRegistry ListTagsForResource action.
 * \value SyncResourceAction ServiceCatalogAppRegistry SyncResource action.
 * \value TagResourceAction ServiceCatalogAppRegistry TagResource action.
 * \value UntagResourceAction ServiceCatalogAppRegistry UntagResource action.
 * \value UpdateApplicationAction ServiceCatalogAppRegistry UpdateApplication action.
 * \value UpdateAttributeGroupAction ServiceCatalogAppRegistry UpdateAttributeGroup action.
 */

/*!
 * Constructs a ServiceCatalogAppRegistryRequest object for ServiceCatalogAppRegistry \a action.
 */
ServiceCatalogAppRegistryRequest::ServiceCatalogAppRegistryRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ServiceCatalogAppRegistryRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ServiceCatalogAppRegistryRequest::ServiceCatalogAppRegistryRequest(const ServiceCatalogAppRegistryRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ServiceCatalogAppRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ServiceCatalogAppRegistryRequest object to be equal to \a other.
 */
ServiceCatalogAppRegistryRequest& ServiceCatalogAppRegistryRequest::operator=(const ServiceCatalogAppRegistryRequest &other)
{
    Q_D(ServiceCatalogAppRegistryRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ServiceCatalogAppRegistryRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ServiceCatalogAppRegistryRequestPrivate.
 */
ServiceCatalogAppRegistryRequest::ServiceCatalogAppRegistryRequest(ServiceCatalogAppRegistryRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ServiceCatalogAppRegistry action to be performed by this request.
 */
ServiceCatalogAppRegistryRequest::Action ServiceCatalogAppRegistryRequest::action() const
{
    Q_D(const ServiceCatalogAppRegistryRequest);
    return d->action;
}

/*!
 * Returns the name of the ServiceCatalogAppRegistry action to be performed by this request.
 */
QString ServiceCatalogAppRegistryRequest::actionString() const
{
    return ServiceCatalogAppRegistryRequestPrivate::toString(action());
}

/*!
 * Returns the ServiceCatalogAppRegistry API version implemented by this request.
 */
QString ServiceCatalogAppRegistryRequest::apiVersion() const
{
    Q_D(const ServiceCatalogAppRegistryRequest);
    return d->apiVersion;
}

/*!
 * Sets the ServiceCatalogAppRegistry action to be performed by this request to \a action.
 */
void ServiceCatalogAppRegistryRequest::setAction(const Action action)
{
    Q_D(ServiceCatalogAppRegistryRequest);
    d->action = action;
}

/*!
 * Sets the ServiceCatalogAppRegistry API version to include in this request to \a version.
 */
void ServiceCatalogAppRegistryRequest::setApiVersion(const QString &version)
{
    Q_D(ServiceCatalogAppRegistryRequest);
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
bool ServiceCatalogAppRegistryRequest::operator==(const ServiceCatalogAppRegistryRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ServiceCatalogAppRegistry queue name.
 *
 * @par From ServiceCatalogAppRegistry FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ServiceCatalogAppRegistry queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ServiceCatalogAppRegistryRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ServiceCatalogAppRegistryRequest::clearParameter(const QString &name)
{
    Q_D(ServiceCatalogAppRegistryRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ServiceCatalogAppRegistryRequest::clearParameters()
{
    Q_D(ServiceCatalogAppRegistryRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ServiceCatalogAppRegistryRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ServiceCatalogAppRegistryRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ServiceCatalogAppRegistryRequest::parameters() const
{
    Q_D(const ServiceCatalogAppRegistryRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ServiceCatalogAppRegistryRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ServiceCatalogAppRegistryRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ServiceCatalogAppRegistryRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ServiceCatalogAppRegistryRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ServiceCatalogAppRegistry request using the given
 * \a endpoint.
 *
 * This ServiceCatalogAppRegistry implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ServiceCatalogAppRegistryRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ServiceCatalogAppRegistryRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::ServiceCatalogAppRegistryRequestPrivate
 * \brief The ServiceCatalogAppRegistryRequestPrivate class provides private implementation for ServiceCatalogAppRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a ServiceCatalogAppRegistryRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
ServiceCatalogAppRegistryRequestPrivate::ServiceCatalogAppRegistryRequestPrivate(const ServiceCatalogAppRegistryRequest::Action action, ServiceCatalogAppRegistryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-06-24"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ServiceCatalogAppRegistryRequest class's copy constructor.
 */
ServiceCatalogAppRegistryRequestPrivate::ServiceCatalogAppRegistryRequestPrivate(const ServiceCatalogAppRegistryRequestPrivate &other,
                                     ServiceCatalogAppRegistryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ServiceCatalogAppRegistryRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ServiceCatalogAppRegistry service's Action
 * query parameters.
 */
QString ServiceCatalogAppRegistryRequestPrivate::toString(const ServiceCatalogAppRegistryRequest::Action &action)
{
    #define ActionToString(action) \
        case ServiceCatalogAppRegistryRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateAttributeGroup);
        ActionToString(AssociateResource);
        ActionToString(CreateApplication);
        ActionToString(CreateAttributeGroup);
        ActionToString(DeleteApplication);
        ActionToString(DeleteAttributeGroup);
        ActionToString(DisassociateAttributeGroup);
        ActionToString(DisassociateResource);
        ActionToString(GetApplication);
        ActionToString(GetAssociatedResource);
        ActionToString(GetAttributeGroup);
        ActionToString(ListApplications);
        ActionToString(ListAssociatedAttributeGroups);
        ActionToString(ListAssociatedResources);
        ActionToString(ListAttributeGroups);
        ActionToString(ListAttributeGroupsForApplication);
        ActionToString(ListTagsForResource);
        ActionToString(SyncResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateApplication);
        ActionToString(UpdateAttributeGroup);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

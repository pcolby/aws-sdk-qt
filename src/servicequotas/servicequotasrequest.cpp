// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "servicequotasrequest.h"
#include "servicequotasrequest_p.h"

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ServiceQuotasRequest
 * \brief The ServiceQuotasRequest class provides an interface for ServiceQuotas requests.
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * \enum ServiceQuotasRequest::Action
 *
 * This enum describes the actions that can be performed as ServiceQuotas
 * requests.
 *
 * \value AssociateServiceQuotaTemplateAction ServiceQuotas AssociateServiceQuotaTemplate action.
 * \value DeleteServiceQuotaIncreaseRequestFromTemplateAction ServiceQuotas DeleteServiceQuotaIncreaseRequestFromTemplate action.
 * \value DisassociateServiceQuotaTemplateAction ServiceQuotas DisassociateServiceQuotaTemplate action.
 * \value GetAWSDefaultServiceQuotaAction ServiceQuotas GetAWSDefaultServiceQuota action.
 * \value GetAssociationForServiceQuotaTemplateAction ServiceQuotas GetAssociationForServiceQuotaTemplate action.
 * \value GetRequestedServiceQuotaChangeAction ServiceQuotas GetRequestedServiceQuotaChange action.
 * \value GetServiceQuotaAction ServiceQuotas GetServiceQuota action.
 * \value GetServiceQuotaIncreaseRequestFromTemplateAction ServiceQuotas GetServiceQuotaIncreaseRequestFromTemplate action.
 * \value ListAWSDefaultServiceQuotasAction ServiceQuotas ListAWSDefaultServiceQuotas action.
 * \value ListRequestedServiceQuotaChangeHistoryAction ServiceQuotas ListRequestedServiceQuotaChangeHistory action.
 * \value ListRequestedServiceQuotaChangeHistoryByQuotaAction ServiceQuotas ListRequestedServiceQuotaChangeHistoryByQuota action.
 * \value ListServiceQuotaIncreaseRequestsInTemplateAction ServiceQuotas ListServiceQuotaIncreaseRequestsInTemplate action.
 * \value ListServiceQuotasAction ServiceQuotas ListServiceQuotas action.
 * \value ListServicesAction ServiceQuotas ListServices action.
 * \value ListTagsForResourceAction ServiceQuotas ListTagsForResource action.
 * \value PutServiceQuotaIncreaseRequestIntoTemplateAction ServiceQuotas PutServiceQuotaIncreaseRequestIntoTemplate action.
 * \value RequestServiceQuotaIncreaseAction ServiceQuotas RequestServiceQuotaIncrease action.
 * \value TagResourceAction ServiceQuotas TagResource action.
 * \value UntagResourceAction ServiceQuotas UntagResource action.
 */

/*!
 * Constructs a ServiceQuotasRequest object for ServiceQuotas \a action.
 */
ServiceQuotasRequest::ServiceQuotasRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ServiceQuotasRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ServiceQuotasRequest::ServiceQuotasRequest(const ServiceQuotasRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ServiceQuotasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ServiceQuotasRequest object to be equal to \a other.
 */
ServiceQuotasRequest& ServiceQuotasRequest::operator=(const ServiceQuotasRequest &other)
{
    Q_D(ServiceQuotasRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ServiceQuotasRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ServiceQuotasRequestPrivate.
 */
ServiceQuotasRequest::ServiceQuotasRequest(ServiceQuotasRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ServiceQuotas action to be performed by this request.
 */
ServiceQuotasRequest::Action ServiceQuotasRequest::action() const
{
    Q_D(const ServiceQuotasRequest);
    return d->action;
}

/*!
 * Returns the name of the ServiceQuotas action to be performed by this request.
 */
QString ServiceQuotasRequest::actionString() const
{
    return ServiceQuotasRequestPrivate::toString(action());
}

/*!
 * Returns the ServiceQuotas API version implemented by this request.
 */
QString ServiceQuotasRequest::apiVersion() const
{
    Q_D(const ServiceQuotasRequest);
    return d->apiVersion;
}

/*!
 * Sets the ServiceQuotas action to be performed by this request to \a action.
 */
void ServiceQuotasRequest::setAction(const Action action)
{
    Q_D(ServiceQuotasRequest);
    d->action = action;
}

/*!
 * Sets the ServiceQuotas API version to include in this request to \a version.
 */
void ServiceQuotasRequest::setApiVersion(const QString &version)
{
    Q_D(ServiceQuotasRequest);
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
bool ServiceQuotasRequest::operator==(const ServiceQuotasRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ServiceQuotas queue name.
 *
 * @par From ServiceQuotas FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ServiceQuotas queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ServiceQuotasRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ServiceQuotasRequest::clearParameter(const QString &name)
{
    Q_D(ServiceQuotasRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ServiceQuotasRequest::clearParameters()
{
    Q_D(ServiceQuotasRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ServiceQuotasRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ServiceQuotasRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ServiceQuotasRequest::parameters() const
{
    Q_D(const ServiceQuotasRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ServiceQuotasRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ServiceQuotasRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ServiceQuotasRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ServiceQuotasRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ServiceQuotas request using the given
 * \a endpoint.
 *
 * This ServiceQuotas implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ServiceQuotasRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ServiceQuotasRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ServiceQuotas::ServiceQuotasRequestPrivate
 * \brief The ServiceQuotasRequestPrivate class provides private implementation for ServiceQuotasRequest.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ServiceQuotasRequestPrivate object for ServiceQuotas \a action,
 * with public implementation \a q.
 */
ServiceQuotasRequestPrivate::ServiceQuotasRequestPrivate(const ServiceQuotasRequest::Action action, ServiceQuotasRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-06-24"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ServiceQuotasRequest class's copy constructor.
 */
ServiceQuotasRequestPrivate::ServiceQuotasRequestPrivate(const ServiceQuotasRequestPrivate &other,
                                     ServiceQuotasRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ServiceQuotasRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ServiceQuotas service's Action
 * query parameters.
 */
QString ServiceQuotasRequestPrivate::toString(const ServiceQuotasRequest::Action &action)
{
    #define ActionToString(action) \
        case ServiceQuotasRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateServiceQuotaTemplate);
        ActionToString(DeleteServiceQuotaIncreaseRequestFromTemplate);
        ActionToString(DisassociateServiceQuotaTemplate);
        ActionToString(GetAWSDefaultServiceQuota);
        ActionToString(GetAssociationForServiceQuotaTemplate);
        ActionToString(GetRequestedServiceQuotaChange);
        ActionToString(GetServiceQuota);
        ActionToString(GetServiceQuotaIncreaseRequestFromTemplate);
        ActionToString(ListAWSDefaultServiceQuotas);
        ActionToString(ListRequestedServiceQuotaChangeHistory);
        ActionToString(ListRequestedServiceQuotaChangeHistoryByQuota);
        ActionToString(ListServiceQuotaIncreaseRequestsInTemplate);
        ActionToString(ListServiceQuotas);
        ActionToString(ListServices);
        ActionToString(ListTagsForResource);
        ActionToString(PutServiceQuotaIncreaseRequestIntoTemplate);
        ActionToString(RequestServiceQuotaIncrease);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ServiceQuotas
} // namespace QtAws

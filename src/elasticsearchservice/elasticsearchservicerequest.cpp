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

#include "elasticsearchservicerequest.h"
#include "elasticsearchservicerequest_p.h"

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::ElasticsearchServiceRequest
 * \brief The ElasticsearchServiceRequest class provides an interface for ElasticsearchService requests.
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * \enum ElasticsearchServiceRequest::Action
 *
 * This enum describes the actions that can be performed as ElasticsearchService
 * requests.
 *
 * \value AcceptInboundCrossClusterSearchConnectionAction ElasticsearchService AcceptInboundCrossClusterSearchConnection action.
 * \value AddTagsAction ElasticsearchService AddTags action.
 * \value AssociatePackageAction ElasticsearchService AssociatePackage action.
 * \value CancelElasticsearchServiceSoftwareUpdateAction ElasticsearchService CancelElasticsearchServiceSoftwareUpdate action.
 * \value CreateElasticsearchDomainAction ElasticsearchService CreateElasticsearchDomain action.
 * \value CreateOutboundCrossClusterSearchConnectionAction ElasticsearchService CreateOutboundCrossClusterSearchConnection action.
 * \value CreatePackageAction ElasticsearchService CreatePackage action.
 * \value DeleteElasticsearchDomainAction ElasticsearchService DeleteElasticsearchDomain action.
 * \value DeleteElasticsearchServiceRoleAction ElasticsearchService DeleteElasticsearchServiceRole action.
 * \value DeleteInboundCrossClusterSearchConnectionAction ElasticsearchService DeleteInboundCrossClusterSearchConnection action.
 * \value DeleteOutboundCrossClusterSearchConnectionAction ElasticsearchService DeleteOutboundCrossClusterSearchConnection action.
 * \value DeletePackageAction ElasticsearchService DeletePackage action.
 * \value DescribeDomainAutoTunesAction ElasticsearchService DescribeDomainAutoTunes action.
 * \value DescribeDomainChangeProgressAction ElasticsearchService DescribeDomainChangeProgress action.
 * \value DescribeElasticsearchDomainAction ElasticsearchService DescribeElasticsearchDomain action.
 * \value DescribeElasticsearchDomainConfigAction ElasticsearchService DescribeElasticsearchDomainConfig action.
 * \value DescribeElasticsearchDomainsAction ElasticsearchService DescribeElasticsearchDomains action.
 * \value DescribeElasticsearchInstanceTypeLimitsAction ElasticsearchService DescribeElasticsearchInstanceTypeLimits action.
 * \value DescribeInboundCrossClusterSearchConnectionsAction ElasticsearchService DescribeInboundCrossClusterSearchConnections action.
 * \value DescribeOutboundCrossClusterSearchConnectionsAction ElasticsearchService DescribeOutboundCrossClusterSearchConnections action.
 * \value DescribePackagesAction ElasticsearchService DescribePackages action.
 * \value DescribeReservedElasticsearchInstanceOfferingsAction ElasticsearchService DescribeReservedElasticsearchInstanceOfferings action.
 * \value DescribeReservedElasticsearchInstancesAction ElasticsearchService DescribeReservedElasticsearchInstances action.
 * \value DissociatePackageAction ElasticsearchService DissociatePackage action.
 * \value GetCompatibleElasticsearchVersionsAction ElasticsearchService GetCompatibleElasticsearchVersions action.
 * \value GetPackageVersionHistoryAction ElasticsearchService GetPackageVersionHistory action.
 * \value GetUpgradeHistoryAction ElasticsearchService GetUpgradeHistory action.
 * \value GetUpgradeStatusAction ElasticsearchService GetUpgradeStatus action.
 * \value ListDomainNamesAction ElasticsearchService ListDomainNames action.
 * \value ListDomainsForPackageAction ElasticsearchService ListDomainsForPackage action.
 * \value ListElasticsearchInstanceTypesAction ElasticsearchService ListElasticsearchInstanceTypes action.
 * \value ListElasticsearchVersionsAction ElasticsearchService ListElasticsearchVersions action.
 * \value ListPackagesForDomainAction ElasticsearchService ListPackagesForDomain action.
 * \value ListTagsAction ElasticsearchService ListTags action.
 * \value PurchaseReservedElasticsearchInstanceOfferingAction ElasticsearchService PurchaseReservedElasticsearchInstanceOffering action.
 * \value RejectInboundCrossClusterSearchConnectionAction ElasticsearchService RejectInboundCrossClusterSearchConnection action.
 * \value RemoveTagsAction ElasticsearchService RemoveTags action.
 * \value StartElasticsearchServiceSoftwareUpdateAction ElasticsearchService StartElasticsearchServiceSoftwareUpdate action.
 * \value UpdateElasticsearchDomainConfigAction ElasticsearchService UpdateElasticsearchDomainConfig action.
 * \value UpdatePackageAction ElasticsearchService UpdatePackage action.
 * \value UpgradeElasticsearchDomainAction ElasticsearchService UpgradeElasticsearchDomain action.
 */

/*!
 * Constructs a ElasticsearchServiceRequest object for ElasticsearchService \a action.
 */
ElasticsearchServiceRequest::ElasticsearchServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ElasticsearchServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ElasticsearchServiceRequest::ElasticsearchServiceRequest(const ElasticsearchServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ElasticsearchServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ElasticsearchServiceRequest object to be equal to \a other.
 */
ElasticsearchServiceRequest& ElasticsearchServiceRequest::operator=(const ElasticsearchServiceRequest &other)
{
    Q_D(ElasticsearchServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ElasticsearchServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticsearchServiceRequestPrivate.
 */
ElasticsearchServiceRequest::ElasticsearchServiceRequest(ElasticsearchServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ElasticsearchService action to be performed by this request.
 */
ElasticsearchServiceRequest::Action ElasticsearchServiceRequest::action() const
{
    Q_D(const ElasticsearchServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the ElasticsearchService action to be performed by this request.
 */
QString ElasticsearchServiceRequest::actionString() const
{
    return ElasticsearchServiceRequestPrivate::toString(action());
}

/*!
 * Returns the ElasticsearchService API version implemented by this request.
 */
QString ElasticsearchServiceRequest::apiVersion() const
{
    Q_D(const ElasticsearchServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the ElasticsearchService action to be performed by this request to \a action.
 */
void ElasticsearchServiceRequest::setAction(const Action action)
{
    Q_D(ElasticsearchServiceRequest);
    d->action = action;
}

/*!
 * Sets the ElasticsearchService API version to include in this request to \a version.
 */
void ElasticsearchServiceRequest::setApiVersion(const QString &version)
{
    Q_D(ElasticsearchServiceRequest);
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
bool ElasticsearchServiceRequest::operator==(const ElasticsearchServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ElasticsearchService queue name.
 *
 * @par From ElasticsearchService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ElasticsearchService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ElasticsearchServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ElasticsearchServiceRequest::clearParameter(const QString &name)
{
    Q_D(ElasticsearchServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ElasticsearchServiceRequest::clearParameters()
{
    Q_D(ElasticsearchServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ElasticsearchServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElasticsearchServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ElasticsearchServiceRequest::parameters() const
{
    Q_D(const ElasticsearchServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ElasticsearchServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElasticsearchServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ElasticsearchServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ElasticsearchServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ElasticsearchService request using the given
 * \a endpoint.
 *
 * This ElasticsearchService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ElasticsearchServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ElasticsearchServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ElasticsearchService::ElasticsearchServiceRequestPrivate
 * \brief The ElasticsearchServiceRequestPrivate class provides private implementation for ElasticsearchServiceRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a ElasticsearchServiceRequestPrivate object for ElasticsearchService \a action,
 * with public implementation \a q.
 */
ElasticsearchServiceRequestPrivate::ElasticsearchServiceRequestPrivate(const ElasticsearchServiceRequest::Action action, ElasticsearchServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2015-01-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElasticsearchServiceRequest class's copy constructor.
 */
ElasticsearchServiceRequestPrivate::ElasticsearchServiceRequestPrivate(const ElasticsearchServiceRequestPrivate &other,
                                     ElasticsearchServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ElasticsearchServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ElasticsearchService service's Action
 * query parameters.
 */
QString ElasticsearchServiceRequestPrivate::toString(const ElasticsearchServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case ElasticsearchServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptInboundCrossClusterSearchConnection);
        ActionToString(AddTags);
        ActionToString(AssociatePackage);
        ActionToString(CancelElasticsearchServiceSoftwareUpdate);
        ActionToString(CreateElasticsearchDomain);
        ActionToString(CreateOutboundCrossClusterSearchConnection);
        ActionToString(CreatePackage);
        ActionToString(DeleteElasticsearchDomain);
        ActionToString(DeleteElasticsearchServiceRole);
        ActionToString(DeleteInboundCrossClusterSearchConnection);
        ActionToString(DeleteOutboundCrossClusterSearchConnection);
        ActionToString(DeletePackage);
        ActionToString(DescribeDomainAutoTunes);
        ActionToString(DescribeDomainChangeProgress);
        ActionToString(DescribeElasticsearchDomain);
        ActionToString(DescribeElasticsearchDomainConfig);
        ActionToString(DescribeElasticsearchDomains);
        ActionToString(DescribeElasticsearchInstanceTypeLimits);
        ActionToString(DescribeInboundCrossClusterSearchConnections);
        ActionToString(DescribeOutboundCrossClusterSearchConnections);
        ActionToString(DescribePackages);
        ActionToString(DescribeReservedElasticsearchInstanceOfferings);
        ActionToString(DescribeReservedElasticsearchInstances);
        ActionToString(DissociatePackage);
        ActionToString(GetCompatibleElasticsearchVersions);
        ActionToString(GetPackageVersionHistory);
        ActionToString(GetUpgradeHistory);
        ActionToString(GetUpgradeStatus);
        ActionToString(ListDomainNames);
        ActionToString(ListDomainsForPackage);
        ActionToString(ListElasticsearchInstanceTypes);
        ActionToString(ListElasticsearchVersions);
        ActionToString(ListPackagesForDomain);
        ActionToString(ListTags);
        ActionToString(PurchaseReservedElasticsearchInstanceOffering);
        ActionToString(RejectInboundCrossClusterSearchConnection);
        ActionToString(RemoveTags);
        ActionToString(StartElasticsearchServiceSoftwareUpdate);
        ActionToString(UpdateElasticsearchDomainConfig);
        ActionToString(UpdatePackage);
        ActionToString(UpgradeElasticsearchDomain);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ElasticsearchService
} // namespace QtAws

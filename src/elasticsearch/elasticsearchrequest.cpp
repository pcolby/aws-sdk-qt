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

#include "elasticsearchrequest.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::ElasticsearchRequest
 * \brief The ElasticsearchRequest class provides an interface for Elasticsearch requests.
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * \enum ElasticsearchRequest::Action
 *
 * This enum describes the actions that can be performed as Elasticsearch
 * requests.
 *
 * \value AcceptInboundCrossClusterSearchConnectionAction Elasticsearch AcceptInboundCrossClusterSearchConnection action.
 * \value AddTagsAction Elasticsearch AddTags action.
 * \value AssociatePackageAction Elasticsearch AssociatePackage action.
 * \value CancelElasticsearchServiceSoftwareUpdateAction Elasticsearch CancelElasticsearchServiceSoftwareUpdate action.
 * \value CreateElasticsearchDomainAction Elasticsearch CreateElasticsearchDomain action.
 * \value CreateOutboundCrossClusterSearchConnectionAction Elasticsearch CreateOutboundCrossClusterSearchConnection action.
 * \value CreatePackageAction Elasticsearch CreatePackage action.
 * \value DeleteElasticsearchDomainAction Elasticsearch DeleteElasticsearchDomain action.
 * \value DeleteElasticsearchServiceRoleAction Elasticsearch DeleteElasticsearchServiceRole action.
 * \value DeleteInboundCrossClusterSearchConnectionAction Elasticsearch DeleteInboundCrossClusterSearchConnection action.
 * \value DeleteOutboundCrossClusterSearchConnectionAction Elasticsearch DeleteOutboundCrossClusterSearchConnection action.
 * \value DeletePackageAction Elasticsearch DeletePackage action.
 * \value DescribeDomainAutoTunesAction Elasticsearch DescribeDomainAutoTunes action.
 * \value DescribeDomainChangeProgressAction Elasticsearch DescribeDomainChangeProgress action.
 * \value DescribeElasticsearchDomainAction Elasticsearch DescribeElasticsearchDomain action.
 * \value DescribeElasticsearchDomainConfigAction Elasticsearch DescribeElasticsearchDomainConfig action.
 * \value DescribeElasticsearchDomainsAction Elasticsearch DescribeElasticsearchDomains action.
 * \value DescribeElasticsearchInstanceTypeLimitsAction Elasticsearch DescribeElasticsearchInstanceTypeLimits action.
 * \value DescribeInboundCrossClusterSearchConnectionsAction Elasticsearch DescribeInboundCrossClusterSearchConnections action.
 * \value DescribeOutboundCrossClusterSearchConnectionsAction Elasticsearch DescribeOutboundCrossClusterSearchConnections action.
 * \value DescribePackagesAction Elasticsearch DescribePackages action.
 * \value DescribeReservedElasticsearchInstanceOfferingsAction Elasticsearch DescribeReservedElasticsearchInstanceOfferings action.
 * \value DescribeReservedElasticsearchInstancesAction Elasticsearch DescribeReservedElasticsearchInstances action.
 * \value DissociatePackageAction Elasticsearch DissociatePackage action.
 * \value GetCompatibleElasticsearchVersionsAction Elasticsearch GetCompatibleElasticsearchVersions action.
 * \value GetPackageVersionHistoryAction Elasticsearch GetPackageVersionHistory action.
 * \value GetUpgradeHistoryAction Elasticsearch GetUpgradeHistory action.
 * \value GetUpgradeStatusAction Elasticsearch GetUpgradeStatus action.
 * \value ListDomainNamesAction Elasticsearch ListDomainNames action.
 * \value ListDomainsForPackageAction Elasticsearch ListDomainsForPackage action.
 * \value ListElasticsearchInstanceTypesAction Elasticsearch ListElasticsearchInstanceTypes action.
 * \value ListElasticsearchVersionsAction Elasticsearch ListElasticsearchVersions action.
 * \value ListPackagesForDomainAction Elasticsearch ListPackagesForDomain action.
 * \value ListTagsAction Elasticsearch ListTags action.
 * \value PurchaseReservedElasticsearchInstanceOfferingAction Elasticsearch PurchaseReservedElasticsearchInstanceOffering action.
 * \value RejectInboundCrossClusterSearchConnectionAction Elasticsearch RejectInboundCrossClusterSearchConnection action.
 * \value RemoveTagsAction Elasticsearch RemoveTags action.
 * \value StartElasticsearchServiceSoftwareUpdateAction Elasticsearch StartElasticsearchServiceSoftwareUpdate action.
 * \value UpdateElasticsearchDomainConfigAction Elasticsearch UpdateElasticsearchDomainConfig action.
 * \value UpdatePackageAction Elasticsearch UpdatePackage action.
 * \value UpgradeElasticsearchDomainAction Elasticsearch UpgradeElasticsearchDomain action.
 */

/*!
 * Constructs a ElasticsearchRequest object for Elasticsearch \a action.
 */
ElasticsearchRequest::ElasticsearchRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ElasticsearchRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ElasticsearchRequest::ElasticsearchRequest(const ElasticsearchRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ElasticsearchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ElasticsearchRequest object to be equal to \a other.
 */
ElasticsearchRequest& ElasticsearchRequest::operator=(const ElasticsearchRequest &other)
{
    Q_D(ElasticsearchRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ElasticsearchRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticsearchRequestPrivate.
 */
ElasticsearchRequest::ElasticsearchRequest(ElasticsearchRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Elasticsearch action to be performed by this request.
 */
ElasticsearchRequest::Action ElasticsearchRequest::action() const
{
    Q_D(const ElasticsearchRequest);
    return d->action;
}

/*!
 * Returns the name of the Elasticsearch action to be performed by this request.
 */
QString ElasticsearchRequest::actionString() const
{
    return ElasticsearchRequestPrivate::toString(action());
}

/*!
 * Returns the Elasticsearch API version implemented by this request.
 */
QString ElasticsearchRequest::apiVersion() const
{
    Q_D(const ElasticsearchRequest);
    return d->apiVersion;
}

/*!
 * Sets the Elasticsearch action to be performed by this request to \a action.
 */
void ElasticsearchRequest::setAction(const Action action)
{
    Q_D(ElasticsearchRequest);
    d->action = action;
}

/*!
 * Sets the Elasticsearch API version to include in this request to \a version.
 */
void ElasticsearchRequest::setApiVersion(const QString &version)
{
    Q_D(ElasticsearchRequest);
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
bool ElasticsearchRequest::operator==(const ElasticsearchRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Elasticsearch queue name.
 *
 * @par From Elasticsearch FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Elasticsearch queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ElasticsearchRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ElasticsearchRequest::clearParameter(const QString &name)
{
    Q_D(ElasticsearchRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ElasticsearchRequest::clearParameters()
{
    Q_D(ElasticsearchRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ElasticsearchRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElasticsearchRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ElasticsearchRequest::parameters() const
{
    Q_D(const ElasticsearchRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ElasticsearchRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElasticsearchRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ElasticsearchRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ElasticsearchRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Elasticsearch request using the given
 * \a endpoint.
 *
 * This Elasticsearch implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ElasticsearchRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ElasticsearchRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Elasticsearch::ElasticsearchRequestPrivate
 * \brief The ElasticsearchRequestPrivate class provides private implementation for ElasticsearchRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ElasticsearchRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
ElasticsearchRequestPrivate::ElasticsearchRequestPrivate(const ElasticsearchRequest::Action action, ElasticsearchRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2015-01-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElasticsearchRequest class's copy constructor.
 */
ElasticsearchRequestPrivate::ElasticsearchRequestPrivate(const ElasticsearchRequestPrivate &other,
                                     ElasticsearchRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ElasticsearchRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Elasticsearch service's Action
 * query parameters.
 */
QString ElasticsearchRequestPrivate::toString(const ElasticsearchRequest::Action &action)
{
    #define ActionToString(action) \
        case ElasticsearchRequest::action##Action: return QStringLiteral(#action)
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

} // namespace Elasticsearch
} // namespace QtAws

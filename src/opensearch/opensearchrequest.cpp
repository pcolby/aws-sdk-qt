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

#include "opensearchrequest.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::OpenSearchRequest
 * \brief The OpenSearchRequest class provides an interface for OpenSearch requests.
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * \enum OpenSearchRequest::Action
 *
 * This enum describes the actions that can be performed as OpenSearch
 * requests.
 *
 * \value AcceptInboundConnectionAction OpenSearch AcceptInboundConnection action.
 * \value AddTagsAction OpenSearch AddTags action.
 * \value AssociatePackageAction OpenSearch AssociatePackage action.
 * \value CancelServiceSoftwareUpdateAction OpenSearch CancelServiceSoftwareUpdate action.
 * \value CreateDomainAction OpenSearch CreateDomain action.
 * \value CreateOutboundConnectionAction OpenSearch CreateOutboundConnection action.
 * \value CreatePackageAction OpenSearch CreatePackage action.
 * \value DeleteDomainAction OpenSearch DeleteDomain action.
 * \value DeleteInboundConnectionAction OpenSearch DeleteInboundConnection action.
 * \value DeleteOutboundConnectionAction OpenSearch DeleteOutboundConnection action.
 * \value DeletePackageAction OpenSearch DeletePackage action.
 * \value DescribeDomainAction OpenSearch DescribeDomain action.
 * \value DescribeDomainAutoTunesAction OpenSearch DescribeDomainAutoTunes action.
 * \value DescribeDomainChangeProgressAction OpenSearch DescribeDomainChangeProgress action.
 * \value DescribeDomainConfigAction OpenSearch DescribeDomainConfig action.
 * \value DescribeDomainsAction OpenSearch DescribeDomains action.
 * \value DescribeInboundConnectionsAction OpenSearch DescribeInboundConnections action.
 * \value DescribeInstanceTypeLimitsAction OpenSearch DescribeInstanceTypeLimits action.
 * \value DescribeOutboundConnectionsAction OpenSearch DescribeOutboundConnections action.
 * \value DescribePackagesAction OpenSearch DescribePackages action.
 * \value DescribeReservedInstanceOfferingsAction OpenSearch DescribeReservedInstanceOfferings action.
 * \value DescribeReservedInstancesAction OpenSearch DescribeReservedInstances action.
 * \value DissociatePackageAction OpenSearch DissociatePackage action.
 * \value GetCompatibleVersionsAction OpenSearch GetCompatibleVersions action.
 * \value GetPackageVersionHistoryAction OpenSearch GetPackageVersionHistory action.
 * \value GetUpgradeHistoryAction OpenSearch GetUpgradeHistory action.
 * \value GetUpgradeStatusAction OpenSearch GetUpgradeStatus action.
 * \value ListDomainNamesAction OpenSearch ListDomainNames action.
 * \value ListDomainsForPackageAction OpenSearch ListDomainsForPackage action.
 * \value ListInstanceTypeDetailsAction OpenSearch ListInstanceTypeDetails action.
 * \value ListPackagesForDomainAction OpenSearch ListPackagesForDomain action.
 * \value ListTagsAction OpenSearch ListTags action.
 * \value ListVersionsAction OpenSearch ListVersions action.
 * \value PurchaseReservedInstanceOfferingAction OpenSearch PurchaseReservedInstanceOffering action.
 * \value RejectInboundConnectionAction OpenSearch RejectInboundConnection action.
 * \value RemoveTagsAction OpenSearch RemoveTags action.
 * \value StartServiceSoftwareUpdateAction OpenSearch StartServiceSoftwareUpdate action.
 * \value UpdateDomainConfigAction OpenSearch UpdateDomainConfig action.
 * \value UpdatePackageAction OpenSearch UpdatePackage action.
 * \value UpgradeDomainAction OpenSearch UpgradeDomain action.
 */

/*!
 * Constructs a OpenSearchRequest object for OpenSearch \a action.
 */
OpenSearchRequest::OpenSearchRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new OpenSearchRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
OpenSearchRequest::OpenSearchRequest(const OpenSearchRequest &other)
    : QtAws::Core::AwsAbstractRequest(new OpenSearchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the OpenSearchRequest object to be equal to \a other.
 */
OpenSearchRequest& OpenSearchRequest::operator=(const OpenSearchRequest &other)
{
    Q_D(OpenSearchRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa OpenSearchRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OpenSearchRequestPrivate.
 */
OpenSearchRequest::OpenSearchRequest(OpenSearchRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the OpenSearch action to be performed by this request.
 */
OpenSearchRequest::Action OpenSearchRequest::action() const
{
    Q_D(const OpenSearchRequest);
    return d->action;
}

/*!
 * Returns the name of the OpenSearch action to be performed by this request.
 */
QString OpenSearchRequest::actionString() const
{
    return OpenSearchRequestPrivate::toString(action());
}

/*!
 * Returns the OpenSearch API version implemented by this request.
 */
QString OpenSearchRequest::apiVersion() const
{
    Q_D(const OpenSearchRequest);
    return d->apiVersion;
}

/*!
 * Sets the OpenSearch action to be performed by this request to \a action.
 */
void OpenSearchRequest::setAction(const Action action)
{
    Q_D(OpenSearchRequest);
    d->action = action;
}

/*!
 * Sets the OpenSearch API version to include in this request to \a version.
 */
void OpenSearchRequest::setApiVersion(const QString &version)
{
    Q_D(OpenSearchRequest);
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
bool OpenSearchRequest::operator==(const OpenSearchRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid OpenSearch queue name.
 *
 * @par From OpenSearch FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid OpenSearch queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool OpenSearchRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int OpenSearchRequest::clearParameter(const QString &name)
{
    Q_D(OpenSearchRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void OpenSearchRequest::clearParameters()
{
    Q_D(OpenSearchRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant OpenSearchRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const OpenSearchRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &OpenSearchRequest::parameters() const
{
    Q_D(const OpenSearchRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void OpenSearchRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(OpenSearchRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void OpenSearchRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(OpenSearchRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the OpenSearch request using the given
 * \a endpoint.
 *
 * This OpenSearch implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest OpenSearchRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const OpenSearchRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::OpenSearch::OpenSearchRequestPrivate
 * \brief The OpenSearchRequestPrivate class provides private implementation for OpenSearchRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a OpenSearchRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
OpenSearchRequestPrivate::OpenSearchRequestPrivate(const OpenSearchRequest::Action action, OpenSearchRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-01-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the OpenSearchRequest class's copy constructor.
 */
OpenSearchRequestPrivate::OpenSearchRequestPrivate(const OpenSearchRequestPrivate &other,
                                     OpenSearchRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts OpenSearchRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the OpenSearch service's Action
 * query parameters.
 */
QString OpenSearchRequestPrivate::toString(const OpenSearchRequest::Action &action)
{
    #define ActionToString(action) \
        case OpenSearchRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptInboundConnection);
        ActionToString(AddTags);
        ActionToString(AssociatePackage);
        ActionToString(CancelServiceSoftwareUpdate);
        ActionToString(CreateDomain);
        ActionToString(CreateOutboundConnection);
        ActionToString(CreatePackage);
        ActionToString(DeleteDomain);
        ActionToString(DeleteInboundConnection);
        ActionToString(DeleteOutboundConnection);
        ActionToString(DeletePackage);
        ActionToString(DescribeDomain);
        ActionToString(DescribeDomainAutoTunes);
        ActionToString(DescribeDomainChangeProgress);
        ActionToString(DescribeDomainConfig);
        ActionToString(DescribeDomains);
        ActionToString(DescribeInboundConnections);
        ActionToString(DescribeInstanceTypeLimits);
        ActionToString(DescribeOutboundConnections);
        ActionToString(DescribePackages);
        ActionToString(DescribeReservedInstanceOfferings);
        ActionToString(DescribeReservedInstances);
        ActionToString(DissociatePackage);
        ActionToString(GetCompatibleVersions);
        ActionToString(GetPackageVersionHistory);
        ActionToString(GetUpgradeHistory);
        ActionToString(GetUpgradeStatus);
        ActionToString(ListDomainNames);
        ActionToString(ListDomainsForPackage);
        ActionToString(ListInstanceTypeDetails);
        ActionToString(ListPackagesForDomain);
        ActionToString(ListTags);
        ActionToString(ListVersions);
        ActionToString(PurchaseReservedInstanceOffering);
        ActionToString(RejectInboundConnection);
        ActionToString(RemoveTags);
        ActionToString(StartServiceSoftwareUpdate);
        ActionToString(UpdateDomainConfig);
        ActionToString(UpdatePackage);
        ActionToString(UpgradeDomain);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace OpenSearch
} // namespace QtAws

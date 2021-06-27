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

#include "marketplacecatalogclient.h"
#include "marketplacecatalogclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelchangesetrequest.h"
#include "cancelchangesetresponse.h"
#include "describechangesetrequest.h"
#include "describechangesetresponse.h"
#include "describeentityrequest.h"
#include "describeentityresponse.h"
#include "listchangesetsrequest.h"
#include "listchangesetsresponse.h"
#include "listentitiesrequest.h"
#include "listentitiesresponse.h"
#include "startchangesetrequest.h"
#include "startchangesetresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MarketplaceCatalog
 * \brief Contains classess for accessing AWS Marketplace Catalog Service.
 *
 * \inmodule QtAwsMarketplaceCatalog
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::MarketplaceCatalogClient
 * \brief The MarketplaceCatalogClient class provides access to the AWS Marketplace Catalog Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMarketplaceCatalog
 *
 *  Catalog API actions allow you to manage your entities through list, describe, and update capabilities. An entity can be
 *  a product or an offer on AWS Marketplace.
 * 
 *  </p
 * 
 *  You can automate your entity update process by integrating the AWS Marketplace Catalog API with your AWS Marketplace
 *  product build or deployment pipelines. You can also create your own applications on top of the Catalog API to manage
 *  your products on AWS
 */

/*!
 * \brief Constructs a MarketplaceCatalogClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MarketplaceCatalogClient::MarketplaceCatalogClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-09-17"),
    QStringLiteral("catalog.marketplace"),
    QStringLiteral("AWS Marketplace Catalog Service"),
    QStringLiteral("aws-marketplace"),
    parent), d_ptr(new MarketplaceCatalogClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload MarketplaceCatalogClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MarketplaceCatalogClient::MarketplaceCatalogClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-09-17"),
    QStringLiteral("catalog.marketplace"),
    QStringLiteral("AWS Marketplace Catalog Service"),
    QStringLiteral("aws-marketplace"),
    parent), d_ptr(new MarketplaceCatalogClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the MarketplaceCatalogClient service, and returns a pointer to an
 * CancelChangeSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to cancel an open change request. Must be sent before the status of the request changes to <code>APPLYING</code>,
 * the final stage of completing your change request. You can describe a change during the 60-day request history retention
 * period for API
 */
CancelChangeSetResponse * MarketplaceCatalogClient::cancelChangeSet(const CancelChangeSetRequest &request)
{
    return qobject_cast<CancelChangeSetResponse *>(send(request));
}

/*!
 * Sends \a request to the MarketplaceCatalogClient service, and returns a pointer to an
 * DescribeChangeSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about a given change
 */
DescribeChangeSetResponse * MarketplaceCatalogClient::describeChangeSet(const DescribeChangeSetRequest &request)
{
    return qobject_cast<DescribeChangeSetResponse *>(send(request));
}

/*!
 * Sends \a request to the MarketplaceCatalogClient service, and returns a pointer to an
 * DescribeEntityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the metadata and content of the
 */
DescribeEntityResponse * MarketplaceCatalogClient::describeEntity(const DescribeEntityRequest &request)
{
    return qobject_cast<DescribeEntityResponse *>(send(request));
}

/*!
 * Sends \a request to the MarketplaceCatalogClient service, and returns a pointer to an
 * ListChangeSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of change sets owned by the account being used to make the call. You can filter this list by providing
 * any combination of <code>entityId</code>, <code>ChangeSetName</code>, and status. If you provide more than one filter,
 * the API operation applies a logical AND between the
 *
 * filters>
 *
 * You can describe a change during the 60-day request history retention period for API
 */
ListChangeSetsResponse * MarketplaceCatalogClient::listChangeSets(const ListChangeSetsRequest &request)
{
    return qobject_cast<ListChangeSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the MarketplaceCatalogClient service, and returns a pointer to an
 * ListEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides the list of entities of a given
 */
ListEntitiesResponse * MarketplaceCatalogClient::listEntities(const ListEntitiesRequest &request)
{
    return qobject_cast<ListEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the MarketplaceCatalogClient service, and returns a pointer to an
 * StartChangeSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation allows you to request changes for your entities. Within a single ChangeSet, you cannot start the same
 * change type against the same entity multiple times. Additionally, when a ChangeSet is running, all the entities targeted
 * by the different changes are locked until the ChangeSet has completed (either succeeded, cancelled, or failed). If you
 * try to start a ChangeSet containing a change against an entity that is already locked, you will receive a
 *
 * <code>ResourceInUseException</code>>
 *
 * For example, you cannot start the ChangeSet described in the <a
 * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/API_StartChangeSet.html#API_StartChangeSet_Examples">example</a>
 * later in this topic, because it contains two changes to execute the same change type (<code>AddRevisions</code>) against
 * the same entity
 *
 * (<code>entity-id@1)</code>>
 *
 * For more information about working with change sets, see <a
 * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/welcome.html#working-with-change-sets">
 * Working with change
 */
StartChangeSetResponse * MarketplaceCatalogClient::startChangeSet(const StartChangeSetRequest &request)
{
    return qobject_cast<StartChangeSetResponse *>(send(request));
}

/*!
 * \class QtAws::MarketplaceCatalog::MarketplaceCatalogClientPrivate
 * \brief The MarketplaceCatalogClientPrivate class provides private implementation for MarketplaceCatalogClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a MarketplaceCatalogClientPrivate object with public implementation \a q.
 */
MarketplaceCatalogClientPrivate::MarketplaceCatalogClientPrivate(MarketplaceCatalogClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace MarketplaceCatalog
} // namespace QtAws

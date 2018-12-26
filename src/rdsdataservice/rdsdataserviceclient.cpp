/*
    Copyright 2013-2018 Paul Colby

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

#include "rdsdataserviceclient.h"
#include "rdsdataserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "executesqlrequest.h"
#include "executesqlresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::RDSDataService
 * \brief Contains classess for accessing AWS RDS DataService.
 *
 * \inmodule QtAwsRDSDataService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace RDSDataService {

/*!
 * \class QtAws::RDSDataService::RDSDataServiceClient
 * \brief The RDSDataServiceClient class provides access to the AWS RDS DataService service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRDSDataService
 *
 */

/*!
 * \brief Constructs a RDSDataServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RDSDataServiceClient::RDSDataServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RDSDataServiceClientPrivate(this), parent)
{
    Q_D(RDSDataServiceClient);
    d->apiVersion = QStringLiteral("2018-08-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("rds-data");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS RDS DataService");
    d->serviceName = QStringLiteral("rds-data");
}

/*!
 * \overload RDSDataServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RDSDataServiceClient::RDSDataServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RDSDataServiceClientPrivate(this), parent)
{
    Q_D(RDSDataServiceClient);
    d->apiVersion = QStringLiteral("2018-08-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("rds-data");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS RDS DataService");
    d->serviceName = QStringLiteral("rds-data");
}

/*!
 * Sends \a request to the RDSDataServiceClient service, and returns a pointer to an
 * ExecuteSqlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ExecuteSqlResponse * RDSDataServiceClient::executeSql(const ExecuteSqlRequest &request)
{
    return qobject_cast<ExecuteSqlResponse *>(send(request));
}

/*!
 * \class QtAws::RDSDataService::RDSDataServiceClientPrivate
 * \brief The RDSDataServiceClientPrivate class provides private implementation for RDSDataServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRDSDataService
 */

/*!
 * Constructs a RDSDataServiceClientPrivate object with public implementation \a q.
 */
RDSDataServiceClientPrivate::RDSDataServiceClientPrivate(RDSDataServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace RDSDataService
} // namespace QtAws

/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "costandusagereportserviceclient.h"
#include "costandusagereportserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "deletereportdefinitionrequest.h"
#include "deletereportdefinitionresponse.h"
#include "describereportdefinitionsrequest.h"
#include "describereportdefinitionsresponse.h"
#include "putreportdefinitionrequest.h"
#include "putreportdefinitionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CostandUsageReportService
 * \brief The QtAws::CostandUsageReportService contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CostandUsageReportService {

/*!
 * \class QtAws::CostandUsageReportService::CostandUsageReportServiceClient
 * \brief The CostandUsageReportServiceClient class provides access to the AWS Cost and Usage Report Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCostandUsageReportService
 *
 */

/*!
 * \brief Constructs a CostandUsageReportServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CostandUsageReportServiceClient::CostandUsageReportServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CostandUsageReportServiceClientPrivate(this), parent)
{
    Q_D(CostandUsageReportServiceClient);
    d->apiVersion = QStringLiteral("2017-01-06");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cur");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Cost and Usage Report Service");
    d->serviceName = QStringLiteral("cur");
}

/*!
 * \overload CostandUsageReportServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
CostandUsageReportServiceClient::CostandUsageReportServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CostandUsageReportServiceClientPrivate(this), parent)
{
    Q_D(CostandUsageReportServiceClient);
    d->apiVersion = QStringLiteral("2017-01-06");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cur");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Cost and Usage Report Service");
    d->serviceName = QStringLiteral("cur");
}

/*!
 * Sends \a request to the CostandUsageReportServiceClient service, and returns a pointer to an
 * DeleteReportDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteReportDefinitionResponse * CostandUsageReportServiceClient::deleteReportDefinition(const DeleteReportDefinitionRequest &request)
{
    return qobject_cast<DeleteReportDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the CostandUsageReportServiceClient service, and returns a pointer to an
 * DescribeReportDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeReportDefinitionsResponse * CostandUsageReportServiceClient::describeReportDefinitions(const DescribeReportDefinitionsRequest &request)
{
    return qobject_cast<DescribeReportDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CostandUsageReportServiceClient service, and returns a pointer to an
 * PutReportDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PutReportDefinitionResponse * CostandUsageReportServiceClient::putReportDefinition(const PutReportDefinitionRequest &request)
{
    return qobject_cast<PutReportDefinitionResponse *>(send(request));
}

/*!
 * \class QtAws::CostandUsageReportService::CostandUsageReportServiceClientPrivate
 * \brief The CostandUsageReportServiceClientPrivate class provides private implementation for CostandUsageReportServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCostandUsageReportService
 */

/*!
 * Constructs a CostandUsageReportServiceClientPrivate object with public implementation \a q.
 */
CostandUsageReportServiceClientPrivate::CostandUsageReportServiceClientPrivate(CostandUsageReportServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CostandUsageReportService
} // namespace QtAws

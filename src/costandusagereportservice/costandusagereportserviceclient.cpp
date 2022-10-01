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

#include "costandusagereportclient.h"
#include "costandusagereportclient_p.h"

#include "core/awssignaturev4.h"
#include "deletereportdefinitionrequest.h"
#include "deletereportdefinitionresponse.h"
#include "describereportdefinitionsrequest.h"
#include "describereportdefinitionsresponse.h"
#include "modifyreportdefinitionrequest.h"
#include "modifyreportdefinitionresponse.h"
#include "putreportdefinitionrequest.h"
#include "putreportdefinitionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CostandUsageReport
 * \brief Contains classess for accessing AWS Cost and Usage Report Service.
 *
 * \inmodule QtAwsCostandUsageReport
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CostandUsageReport {

/*!
 * \class QtAws::CostandUsageReport::CostandUsageReportClient
 * \brief The CostandUsageReportClient class provides access to the AWS Cost and Usage Report Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCostandUsageReport
 *
 *  The AWS Cost and Usage Report API enables you to programmatically create, query, and delete AWS Cost and Usage report
 * 
 *  definitions>
 * 
 *  AWS Cost and Usage reports track the monthly AWS costs and usage associated with your AWS account. The report contains
 *  line items for each unique combination of AWS product, usage type, and operation that your AWS account uses. You can
 *  configure the AWS Cost and Usage report to show only the data that you want, using the AWS Cost and Usage
 * 
 *  API>
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The AWS Cost and Usage Report API provides the following
 * 
 *  endpoint> <ul> <li>
 */

/*!
 * \brief Constructs a CostandUsageReportClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CostandUsageReportClient::CostandUsageReportClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CostandUsageReportClientPrivate(this), parent)
{
    Q_D(CostandUsageReportClient);
    d->apiVersion = QStringLiteral("2017-01-06");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cur");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Cost and Usage Report Service");
    d->serviceName = QStringLiteral("cur");
}

/*!
 * \overload CostandUsageReportClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CostandUsageReportClient::CostandUsageReportClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CostandUsageReportClientPrivate(this), parent)
{
    Q_D(CostandUsageReportClient);
    d->apiVersion = QStringLiteral("2017-01-06");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cur");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Cost and Usage Report Service");
    d->serviceName = QStringLiteral("cur");
}

/*!
 * Sends \a request to the CostandUsageReportClient service, and returns a pointer to an
 * DeleteReportDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteReportDefinitionResponse * CostandUsageReportClient::deleteReportDefinition(const DeleteReportDefinitionRequest &request)
{
    return qobject_cast<DeleteReportDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the CostandUsageReportClient service, and returns a pointer to an
 * DescribeReportDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the AWS Cost and Usage reports available to this
 */
DescribeReportDefinitionsResponse * CostandUsageReportClient::describeReportDefinitions(const DescribeReportDefinitionsRequest &request)
{
    return qobject_cast<DescribeReportDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CostandUsageReportClient service, and returns a pointer to an
 * ModifyReportDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to programatically update your report
 */
ModifyReportDefinitionResponse * CostandUsageReportClient::modifyReportDefinition(const ModifyReportDefinitionRequest &request)
{
    return qobject_cast<ModifyReportDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the CostandUsageReportClient service, and returns a pointer to an
 * PutReportDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new report using the description that you
 */
PutReportDefinitionResponse * CostandUsageReportClient::putReportDefinition(const PutReportDefinitionRequest &request)
{
    return qobject_cast<PutReportDefinitionResponse *>(send(request));
}

/*!
 * \class QtAws::CostandUsageReport::CostandUsageReportClientPrivate
 * \brief The CostandUsageReportClientPrivate class provides private implementation for CostandUsageReportClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCostandUsageReport
 */

/*!
 * Constructs a CostandUsageReportClientPrivate object with public implementation \a q.
 */
CostandUsageReportClientPrivate::CostandUsageReportClientPrivate(CostandUsageReportClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CostandUsageReport
} // namespace QtAws

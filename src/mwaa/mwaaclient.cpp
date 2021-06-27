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

#include "mwaaclient.h"
#include "mwaaclient_p.h"

#include "core/awssignaturev4.h"
#include "createclitokenrequest.h"
#include "createclitokenresponse.h"
#include "createenvironmentrequest.h"
#include "createenvironmentresponse.h"
#include "createweblogintokenrequest.h"
#include "createweblogintokenresponse.h"
#include "deleteenvironmentrequest.h"
#include "deleteenvironmentresponse.h"
#include "getenvironmentrequest.h"
#include "getenvironmentresponse.h"
#include "listenvironmentsrequest.h"
#include "listenvironmentsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "publishmetricsrequest.h"
#include "publishmetricsresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateenvironmentrequest.h"
#include "updateenvironmentresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MWAA
 * \brief Contains classess for accessing AmazonMWAA.
 *
 * \inmodule QtAwsMwaa
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MWAA {

/*!
 * \class QtAws::MWAA::MwaaClient
 * \brief The MwaaClient class provides access to the AmazonMWAA service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMWAA
 *
 *  <fullname>Amazon Managed Workflows for Apache Airflow</fullname>
 * 
 *  This section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API reference documentation. For more
 *  information, see <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What Is Amazon
 */

/*!
 * \brief Constructs a MwaaClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MwaaClient::MwaaClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-07-01"),
    QStringLiteral("airflow"),
    QStringLiteral("AmazonMWAA"),
    QStringLiteral("airflow"),
    parent), d_ptr(new MwaaClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload MwaaClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MwaaClient::MwaaClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-07-01"),
    QStringLiteral("airflow"),
    QStringLiteral("AmazonMWAA"),
    QStringLiteral("airflow"),
    parent), d_ptr(new MwaaClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the MwaaClient service, and returns a pointer to an
 * CreateCliTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a CLI token to use Airflow
 */
CreateCliTokenResponse * MwaaClient::createCliToken(const CreateCliTokenRequest &request)
{
    return qobject_cast<CreateCliTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the MwaaClient service, and returns a pointer to an
 * CreateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Managed Workflows for Apache Airflow (MWAA)
 */
CreateEnvironmentResponse * MwaaClient::createEnvironment(const CreateEnvironmentRequest &request)
{
    return qobject_cast<CreateEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the MwaaClient service, and returns a pointer to an
 * CreateWebLoginTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a JWT token to be used to login to Airflow Web UI with claims based
 */
CreateWebLoginTokenResponse * MwaaClient::createWebLoginToken(const CreateWebLoginTokenRequest &request)
{
    return qobject_cast<CreateWebLoginTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the MwaaClient service, and returns a pointer to an
 * DeleteEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Managed Workflows for Apache Airflow (MWAA)
 */
DeleteEnvironmentResponse * MwaaClient::deleteEnvironment(const DeleteEnvironmentRequest &request)
{
    return qobject_cast<DeleteEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the MwaaClient service, and returns a pointer to an
 * GetEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the details of an Amazon Managed Workflows for Apache Airflow (MWAA)
 */
GetEnvironmentResponse * MwaaClient::getEnvironment(const GetEnvironmentRequest &request)
{
    return qobject_cast<GetEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the MwaaClient service, and returns a pointer to an
 * ListEnvironmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon Managed Workflows for Apache Airflow (MWAA)
 */
ListEnvironmentsResponse * MwaaClient::listEnvironments(const ListEnvironmentsRequest &request)
{
    return qobject_cast<ListEnvironmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the MwaaClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the key-value tag pairs associated to the Amazon Managed Workflows for Apache Airflow (MWAA) environment. For
 * example, <code>"Environment": "Staging"</code>.
 */
ListTagsForResourceResponse * MwaaClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MwaaClient service, and returns a pointer to an
 * PublishMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * An operation for publishing metrics from the customers to the Ops
 */
PublishMetricsResponse * MwaaClient::publishMetrics(const PublishMetricsRequest &request)
{
    return qobject_cast<PublishMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the MwaaClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates key-value tag pairs to your Amazon Managed Workflows for Apache Airflow (MWAA) environment.
 */
TagResourceResponse * MwaaClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MwaaClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes key-value tag pairs associated to your Amazon Managed Workflows for Apache Airflow (MWAA) environment. For
 * example, <code>"Environment":
 */
UntagResourceResponse * MwaaClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MwaaClient service, and returns a pointer to an
 * UpdateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Amazon Managed Workflows for Apache Airflow (MWAA)
 */
UpdateEnvironmentResponse * MwaaClient::updateEnvironment(const UpdateEnvironmentRequest &request)
{
    return qobject_cast<UpdateEnvironmentResponse *>(send(request));
}

/*!
 * \class QtAws::MWAA::MwaaClientPrivate
 * \brief The MwaaClientPrivate class provides private implementation for MwaaClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMWAA
 */

/*!
 * Constructs a MwaaClientPrivate object with public implementation \a q.
 */
MwaaClientPrivate::MwaaClientPrivate(MwaaClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace MWAA
} // namespace QtAws

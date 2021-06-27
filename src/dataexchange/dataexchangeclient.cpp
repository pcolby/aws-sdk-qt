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

#include "dataexchangeclient.h"
#include "dataexchangeclient_p.h"

#include "core/awssignaturev4.h"
#include "canceljobrequest.h"
#include "canceljobresponse.h"
#include "createdatasetrequest.h"
#include "createdatasetresponse.h"
#include "createjobrequest.h"
#include "createjobresponse.h"
#include "createrevisionrequest.h"
#include "createrevisionresponse.h"
#include "deleteassetrequest.h"
#include "deleteassetresponse.h"
#include "deletedatasetrequest.h"
#include "deletedatasetresponse.h"
#include "deleterevisionrequest.h"
#include "deleterevisionresponse.h"
#include "getassetrequest.h"
#include "getassetresponse.h"
#include "getdatasetrequest.h"
#include "getdatasetresponse.h"
#include "getjobrequest.h"
#include "getjobresponse.h"
#include "getrevisionrequest.h"
#include "getrevisionresponse.h"
#include "listdatasetrevisionsrequest.h"
#include "listdatasetrevisionsresponse.h"
#include "listdatasetsrequest.h"
#include "listdatasetsresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "listrevisionassetsrequest.h"
#include "listrevisionassetsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startjobrequest.h"
#include "startjobresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateassetrequest.h"
#include "updateassetresponse.h"
#include "updatedatasetrequest.h"
#include "updatedatasetresponse.h"
#include "updaterevisionrequest.h"
#include "updaterevisionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::DataExchange
 * \brief Contains classess for accessing AWS Data Exchange.
 *
 * \inmodule QtAwsDataExchange
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace DataExchange {

/*!
 * \class QtAws::DataExchange::DataExchangeClient
 * \brief The DataExchangeClient class provides access to the AWS Data Exchange service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDataExchange
 *
 *  AWS Data Exchange is a service that makes it easy for AWS customers to exchange data in the cloud. You can use the AWS
 *  Data Exchange APIs to create, update, manage, and access file-based data set in the AWS Cloud.</p><p>As a subscriber,
 *  you can view and access the data sets that you have an entitlement to through a subscription. You can use the APIS to
 *  download or copy your entitled data sets to Amazon S3 for use across a variety of AWS analytics and machine learning
 *  services.</p><p>As a provider, you can create and manage your data sets that you would like to publish to a product.
 *  Being able to package and provide your data sets into products requires a few steps to determine eligibility. For more
 *  information, visit the AWS Data Exchange User Guide.</p><p>A data set is a collection of data that can be changed or
 *  updated over time. Data sets can be updated using revisions, which represent a new version or incremental change to a
 *  data set. A revision contains one or more assets. An asset in AWS Data Exchange is a piece of data that can be stored as
 *  an Amazon S3 object. The asset can be a structured data file, an image file, or some other data file. Jobs are
 *  asynchronous import or export operations used to create or copy
 */

/*!
 * \brief Constructs a DataExchangeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DataExchangeClient::DataExchangeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-07-25"),
    QStringLiteral("dataexchange"),
    QStringLiteral("AWS Data Exchange"),
    QStringLiteral("dataexchange"),
    parent), d_ptr(new DataExchangeClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload DataExchangeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
DataExchangeClient::DataExchangeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-07-25"),
    QStringLiteral("dataexchange"),
    QStringLiteral("AWS Data Exchange"),
    QStringLiteral("dataexchange"),
    parent), d_ptr(new DataExchangeClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * CancelJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation cancels a job. Jobs can be cancelled only when they are in the WAITING
 */
CancelJobResponse * DataExchangeClient::cancelJob(const CancelJobRequest &request)
{
    return qobject_cast<CancelJobResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * CreateDataSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation creates a data
 */
CreateDataSetResponse * DataExchangeClient::createDataSet(const CreateDataSetRequest &request)
{
    return qobject_cast<CreateDataSetResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * CreateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation creates a
 */
CreateJobResponse * DataExchangeClient::createJob(const CreateJobRequest &request)
{
    return qobject_cast<CreateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * CreateRevisionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation creates a revision for a data
 */
CreateRevisionResponse * DataExchangeClient::createRevision(const CreateRevisionRequest &request)
{
    return qobject_cast<CreateRevisionResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * DeleteAssetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation deletes an
 */
DeleteAssetResponse * DataExchangeClient::deleteAsset(const DeleteAssetRequest &request)
{
    return qobject_cast<DeleteAssetResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * DeleteDataSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation deletes a data
 */
DeleteDataSetResponse * DataExchangeClient::deleteDataSet(const DeleteDataSetRequest &request)
{
    return qobject_cast<DeleteDataSetResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * DeleteRevisionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation deletes a
 */
DeleteRevisionResponse * DataExchangeClient::deleteRevision(const DeleteRevisionRequest &request)
{
    return qobject_cast<DeleteRevisionResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * GetAssetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns information about an
 */
GetAssetResponse * DataExchangeClient::getAsset(const GetAssetRequest &request)
{
    return qobject_cast<GetAssetResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * GetDataSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns information about a data
 */
GetDataSetResponse * DataExchangeClient::getDataSet(const GetDataSetRequest &request)
{
    return qobject_cast<GetDataSetResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * GetJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns information about a
 */
GetJobResponse * DataExchangeClient::getJob(const GetJobRequest &request)
{
    return qobject_cast<GetJobResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * GetRevisionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns information about a
 */
GetRevisionResponse * DataExchangeClient::getRevision(const GetRevisionRequest &request)
{
    return qobject_cast<GetRevisionResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * ListDataSetRevisionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists a data set's revisions sorted by CreatedAt in descending
 */
ListDataSetRevisionsResponse * DataExchangeClient::listDataSetRevisions(const ListDataSetRevisionsRequest &request)
{
    return qobject_cast<ListDataSetRevisionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * ListDataSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists your data sets. When listing by origin OWNED, results are sorted by CreatedAt in descending order.
 * When listing by origin ENTITLED, there is no order and the maxResults parameter is
 */
ListDataSetsResponse * DataExchangeClient::listDataSets(const ListDataSetsRequest &request)
{
    return qobject_cast<ListDataSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists your jobs sorted by CreatedAt in descending
 */
ListJobsResponse * DataExchangeClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * ListRevisionAssetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists a revision's assets sorted alphabetically in descending
 */
ListRevisionAssetsResponse * DataExchangeClient::listRevisionAssets(const ListRevisionAssetsRequest &request)
{
    return qobject_cast<ListRevisionAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation lists the tags on the
 */
ListTagsForResourceResponse * DataExchangeClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * StartJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation starts a
 */
StartJobResponse * DataExchangeClient::startJob(const StartJobRequest &request)
{
    return qobject_cast<StartJobResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation tags a
 */
TagResourceResponse * DataExchangeClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation removes one or more tags from a
 */
UntagResourceResponse * DataExchangeClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * UpdateAssetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation updates an
 */
UpdateAssetResponse * DataExchangeClient::updateAsset(const UpdateAssetRequest &request)
{
    return qobject_cast<UpdateAssetResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * UpdateDataSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation updates a data
 */
UpdateDataSetResponse * DataExchangeClient::updateDataSet(const UpdateDataSetRequest &request)
{
    return qobject_cast<UpdateDataSetResponse *>(send(request));
}

/*!
 * Sends \a request to the DataExchangeClient service, and returns a pointer to an
 * UpdateRevisionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation updates a
 */
UpdateRevisionResponse * DataExchangeClient::updateRevision(const UpdateRevisionRequest &request)
{
    return qobject_cast<UpdateRevisionResponse *>(send(request));
}

/*!
 * \class QtAws::DataExchange::DataExchangeClientPrivate
 * \brief The DataExchangeClientPrivate class provides private implementation for DataExchangeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDataExchange
 */

/*!
 * Constructs a DataExchangeClientPrivate object with public implementation \a q.
 */
DataExchangeClientPrivate::DataExchangeClientPrivate(DataExchangeClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace DataExchange
} // namespace QtAws

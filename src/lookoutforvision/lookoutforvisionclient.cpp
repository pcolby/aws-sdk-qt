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

#include "lookoutforvisionclient.h"
#include "lookoutforvisionclient_p.h"

#include "core/awssignaturev4.h"
#include "createdatasetrequest.h"
#include "createdatasetresponse.h"
#include "createmodelrequest.h"
#include "createmodelresponse.h"
#include "createprojectrequest.h"
#include "createprojectresponse.h"
#include "deletedatasetrequest.h"
#include "deletedatasetresponse.h"
#include "deletemodelrequest.h"
#include "deletemodelresponse.h"
#include "deleteprojectrequest.h"
#include "deleteprojectresponse.h"
#include "describedatasetrequest.h"
#include "describedatasetresponse.h"
#include "describemodelrequest.h"
#include "describemodelresponse.h"
#include "describeprojectrequest.h"
#include "describeprojectresponse.h"
#include "detectanomaliesrequest.h"
#include "detectanomaliesresponse.h"
#include "listdatasetentriesrequest.h"
#include "listdatasetentriesresponse.h"
#include "listmodelsrequest.h"
#include "listmodelsresponse.h"
#include "listprojectsrequest.h"
#include "listprojectsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startmodelrequest.h"
#include "startmodelresponse.h"
#include "stopmodelrequest.h"
#include "stopmodelresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedatasetentriesrequest.h"
#include "updatedatasetentriesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::LookoutforVision
 * \brief Contains classess for accessing Amazon Lookout for Vision.
 *
 * \inmodule QtAwsLookoutforVision
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace LookoutforVision {

/*!
 * \class QtAws::LookoutforVision::LookoutforVisionClient
 * \brief The LookoutforVisionClient class provides access to the Amazon Lookout for Vision service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLookoutforVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 */

/*!
 * \brief Constructs a LookoutforVisionClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
LookoutforVisionClient::LookoutforVisionClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LookoutforVisionClientPrivate(this), parent)
{
    Q_D(LookoutforVisionClient);
    d->apiVersion = QStringLiteral("2020-11-20");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("lookoutvision");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Lookout for Vision");
    d->serviceName = QStringLiteral("lookoutvision");
}

/*!
 * \overload LookoutforVisionClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
LookoutforVisionClient::LookoutforVisionClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new LookoutforVisionClientPrivate(this), parent)
{
    Q_D(LookoutforVisionClient);
    d->apiVersion = QStringLiteral("2020-11-20");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("lookoutvision");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Lookout for Vision");
    d->serviceName = QStringLiteral("lookoutvision");
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * CreateDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new dataset in an Amazon Lookout for Vision project. <code>CreateDataset</code> can create a training or a
 * test dataset from a valid dataset source
 *
 * (<code>DatasetSource</code>)>
 *
 * If you want a single dataset project, specify <code>train</code> for the value of
 *
 * <code>DatasetType</code>>
 *
 * To have a project with separate training and test datasets, call <code>CreateDataset</code> twice. On the first call,
 * specify <code>train</code> for the value of <code>DatasetType</code>. On the second call, specify <code>test</code> for
 * the value of <code>DatasetType</code>.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>lookoutvision:CreateDataset</code>
 */
CreateDatasetResponse * LookoutforVisionClient::createDataset(const CreateDatasetRequest &request)
{
    return qobject_cast<CreateDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * CreateModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new version of a model within an an Amazon Lookout for Vision project. <code>CreateModel</code> is an
 * asynchronous operation in which Amazon Lookout for Vision trains, tests, and evaluates a new version of a model.
 *
 * </p
 *
 * To get the current status, check the <code>Status</code> field returned in the response from
 *
 * <a>DescribeModel</a>>
 *
 * If the project has a single dataset, Amazon Lookout for Vision internally splits the dataset to create a training and a
 * test dataset. If the project has a training and a test dataset, Lookout for Vision uses the respective datasets to train
 * and test the model.
 *
 * </p
 *
 * After training completes, the evaluation metrics are stored at the location specified in <code>OutputConfig</code>.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>lookoutvision:CreateModel</code> operation. If you want to tag
 * your model, you also require permission to the <code>lookoutvision:TagResource</code>
 */
CreateModelResponse * LookoutforVisionClient::createModel(const CreateModelRequest &request)
{
    return qobject_cast<CreateModelResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * CreateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an empty Amazon Lookout for Vision project. After you create the project, add a dataset by calling
 *
 * <a>CreateDataset</a>>
 *
 * This operation requires permissions to perform the <code>lookoutvision:CreateProject</code>
 */
CreateProjectResponse * LookoutforVisionClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * DeleteDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing Amazon Lookout for Vision <code>dataset</code>.
 *
 * </p
 *
 * If your the project has a single dataset, you must create a new dataset before you can create a
 *
 * model>
 *
 * If you project has a training dataset and a test dataset consider the following.
 *
 * </p <ul> <li>
 *
 * If you delete the test dataset, your project reverts to a single dataset project. If you then train the model, Amazon
 * Lookout for Vision internally splits the remaining dataset into a training and test
 *
 * dataset> </li> <li>
 *
 * If you delete the training dataset, you must create a training dataset before you can create a
 *
 * model> </li> </ul>
 *
 * This operation requires permissions to perform the <code>lookoutvision:DeleteDataset</code>
 */
DeleteDatasetResponse * LookoutforVisionClient::deleteDataset(const DeleteDatasetRequest &request)
{
    return qobject_cast<DeleteDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * DeleteModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Lookout for Vision model. You can't delete a running model. To stop a running model, use the
 * <a>StopModel</a>
 *
 * operation>
 *
 * It might take a few seconds to delete a model. To determine if a model has been deleted, call <a>ListProjects</a> and
 * check if the version of the model (<code>ModelVersion</code>) is in the <code>Models</code> array.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>lookoutvision:DeleteModel</code>
 */
DeleteModelResponse * LookoutforVisionClient::deleteModel(const DeleteModelRequest &request)
{
    return qobject_cast<DeleteModelResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * DeleteProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Lookout for Vision
 *
 * project>
 *
 * To delete a project, you must first delete each version of the model associated with the project. To delete a model use
 * the <a>DeleteModel</a>
 *
 * operation>
 *
 * You also have to delete the dataset(s) associated with the model. For more information, see <a>DeleteDataset</a>. The
 * images referenced by the training and test datasets aren't deleted.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>lookoutvision:DeleteProject</code>
 */
DeleteProjectResponse * LookoutforVisionClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * DescribeDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe an Amazon Lookout for Vision
 *
 * dataset>
 *
 * This operation requires permissions to perform the <code>lookoutvision:DescribeDataset</code>
 */
DescribeDatasetResponse * LookoutforVisionClient::describeDataset(const DescribeDatasetRequest &request)
{
    return qobject_cast<DescribeDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * DescribeModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a version of an Amazon Lookout for Vision
 *
 * model>
 *
 * This operation requires permissions to perform the <code>lookoutvision:DescribeModel</code>
 */
DescribeModelResponse * LookoutforVisionClient::describeModel(const DescribeModelRequest &request)
{
    return qobject_cast<DescribeModelResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * DescribeProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an Amazon Lookout for Vision
 *
 * project>
 *
 * This operation requires permissions to perform the <code>lookoutvision:DescribeProject</code>
 */
DescribeProjectResponse * LookoutforVisionClient::describeProject(const DescribeProjectRequest &request)
{
    return qobject_cast<DescribeProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * DetectAnomaliesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects anomalies in an image that you supply.
 *
 * </p
 *
 * The response from <code>DetectAnomalies</code> includes a boolean prediction that the image contains one or more
 * anomalies and a confidence value for the
 *
 * prediction> <note>
 *
 * Before calling <code>DetectAnomalies</code>, you must first start your model with the <a>StartModel</a> operation. You
 * are charged for the amount of time, in minutes, that a model runs and for the number of anomaly detection units that
 * your model uses. If you are not using a model, use the <a>StopModel</a> operation to stop your model.
 *
 * </p </note>
 *
 * This operation requires permissions to perform the <code>lookoutvision:DetectAnomalies</code>
 */
DetectAnomaliesResponse * LookoutforVisionClient::detectAnomalies(const DetectAnomaliesRequest &request)
{
    return qobject_cast<DetectAnomaliesResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * ListDatasetEntriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the JSON Lines within a dataset. An Amazon Lookout for Vision JSON Line contains the anomaly information for a
 * single image, including the image location and the assigned
 *
 * label>
 *
 * This operation requires permissions to perform the <code>lookoutvision:ListDatasetEntries</code>
 */
ListDatasetEntriesResponse * LookoutforVisionClient::listDatasetEntries(const ListDatasetEntriesRequest &request)
{
    return qobject_cast<ListDatasetEntriesResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * ListModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the versions of a model in an Amazon Lookout for Vision
 *
 * project>
 *
 * This operation requires permissions to perform the <code>lookoutvision:ListModels</code>
 */
ListModelsResponse * LookoutforVisionClient::listModels(const ListModelsRequest &request)
{
    return qobject_cast<ListModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * ListProjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon Lookout for Vision projects in your AWS
 *
 * account>
 *
 * This operation requires permissions to perform the <code>lookoutvision:ListProjects</code>
 */
ListProjectsResponse * LookoutforVisionClient::listProjects(const ListProjectsRequest &request)
{
    return qobject_cast<ListProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags attached to the specified Amazon Lookout for Vision
 *
 * model>
 *
 * This operation requires permissions to perform the <code>lookoutvision:ListTagsForResource</code>
 */
ListTagsForResourceResponse * LookoutforVisionClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * StartModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the running of the version of an Amazon Lookout for Vision model. Starting a model takes a while to complete. To
 * check the current state of the model, use
 *
 * <a>DescribeModel</a>>
 *
 * A model is ready to use when its status is
 *
 * <code>HOSTED</code>>
 *
 * Once the model is running, you can detect custom labels in new images by calling
 *
 * <a>DetectAnomalies</a>> <note>
 *
 * You are charged for the amount of time that the model is running. To stop a running model, call
 *
 * <a>StopModel</a>> </note>
 *
 * This operation requires permissions to perform the <code>lookoutvision:StartModel</code>
 */
StartModelResponse * LookoutforVisionClient::startModel(const StartModelRequest &request)
{
    return qobject_cast<StartModelResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * StopModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the hosting of a running model. The operation might take a while to complete. To check the current status, call
 * <a>DescribeModel</a>.
 *
 * </p
 *
 * After the model hosting stops, the <code>Status</code> of the model is
 *
 * <code>TRAINED</code>>
 *
 * This operation requires permissions to perform the <code>lookoutvision:StopModel</code>
 */
StopModelResponse * LookoutforVisionClient::stopModel(const StopModelRequest &request)
{
    return qobject_cast<StopModelResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more key-value tags to an Amazon Lookout for Vision model. For more information, see <i>Tagging a model</i>
 * in the <i>Amazon Lookout for Vision Developer Guide</i>.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>lookoutvision:TagResource</code>
 */
TagResourceResponse * LookoutforVisionClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from an Amazon Lookout for Vision model. For more information, see <i>Tagging a model</i> in
 * the <i>Amazon Lookout for Vision Developer Guide</i>.
 *
 * </p
 *
 * This operation requires permissions to perform the <code>lookoutvision:UntagResource</code>
 */
UntagResourceResponse * LookoutforVisionClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the LookoutforVisionClient service, and returns a pointer to an
 * UpdateDatasetEntriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more JSON Line entries to a dataset. A JSON Line includes information about an image used for training or
 * testing an Amazon Lookout for Vision model. The following is an example JSON
 *
 * Line>
 *
 * Updating a dataset might take a while to complete. To check the current status, call <a>DescribeDataset</a> and check
 * the <code>Status</code> field in the
 *
 * response>
 *
 * This operation requires permissions to perform the <code>lookoutvision:UpdateDatasetEntries</code>
 */
UpdateDatasetEntriesResponse * LookoutforVisionClient::updateDatasetEntries(const UpdateDatasetEntriesRequest &request)
{
    return qobject_cast<UpdateDatasetEntriesResponse *>(send(request));
}

/*!
 * \class QtAws::LookoutforVision::LookoutforVisionClientPrivate
 * \brief The LookoutforVisionClientPrivate class provides private implementation for LookoutforVisionClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsLookoutforVision
 */

/*!
 * Constructs a LookoutforVisionClientPrivate object with public implementation \a q.
 */
LookoutforVisionClientPrivate::LookoutforVisionClientPrivate(LookoutforVisionClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace LookoutforVision
} // namespace QtAws

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

#include "robomakerclient.h"
#include "robomakerclient_p.h"

#include "core/awssignaturev4.h"
#include "batchdeleteworldsrequest.h"
#include "batchdeleteworldsresponse.h"
#include "batchdescribesimulationjobrequest.h"
#include "batchdescribesimulationjobresponse.h"
#include "canceldeploymentjobrequest.h"
#include "canceldeploymentjobresponse.h"
#include "cancelsimulationjobrequest.h"
#include "cancelsimulationjobresponse.h"
#include "cancelsimulationjobbatchrequest.h"
#include "cancelsimulationjobbatchresponse.h"
#include "cancelworldexportjobrequest.h"
#include "cancelworldexportjobresponse.h"
#include "cancelworldgenerationjobrequest.h"
#include "cancelworldgenerationjobresponse.h"
#include "createdeploymentjobrequest.h"
#include "createdeploymentjobresponse.h"
#include "createfleetrequest.h"
#include "createfleetresponse.h"
#include "createrobotrequest.h"
#include "createrobotresponse.h"
#include "createrobotapplicationrequest.h"
#include "createrobotapplicationresponse.h"
#include "createrobotapplicationversionrequest.h"
#include "createrobotapplicationversionresponse.h"
#include "createsimulationapplicationrequest.h"
#include "createsimulationapplicationresponse.h"
#include "createsimulationapplicationversionrequest.h"
#include "createsimulationapplicationversionresponse.h"
#include "createsimulationjobrequest.h"
#include "createsimulationjobresponse.h"
#include "createworldexportjobrequest.h"
#include "createworldexportjobresponse.h"
#include "createworldgenerationjobrequest.h"
#include "createworldgenerationjobresponse.h"
#include "createworldtemplaterequest.h"
#include "createworldtemplateresponse.h"
#include "deletefleetrequest.h"
#include "deletefleetresponse.h"
#include "deleterobotrequest.h"
#include "deleterobotresponse.h"
#include "deleterobotapplicationrequest.h"
#include "deleterobotapplicationresponse.h"
#include "deletesimulationapplicationrequest.h"
#include "deletesimulationapplicationresponse.h"
#include "deleteworldtemplaterequest.h"
#include "deleteworldtemplateresponse.h"
#include "deregisterrobotrequest.h"
#include "deregisterrobotresponse.h"
#include "describedeploymentjobrequest.h"
#include "describedeploymentjobresponse.h"
#include "describefleetrequest.h"
#include "describefleetresponse.h"
#include "describerobotrequest.h"
#include "describerobotresponse.h"
#include "describerobotapplicationrequest.h"
#include "describerobotapplicationresponse.h"
#include "describesimulationapplicationrequest.h"
#include "describesimulationapplicationresponse.h"
#include "describesimulationjobrequest.h"
#include "describesimulationjobresponse.h"
#include "describesimulationjobbatchrequest.h"
#include "describesimulationjobbatchresponse.h"
#include "describeworldrequest.h"
#include "describeworldresponse.h"
#include "describeworldexportjobrequest.h"
#include "describeworldexportjobresponse.h"
#include "describeworldgenerationjobrequest.h"
#include "describeworldgenerationjobresponse.h"
#include "describeworldtemplaterequest.h"
#include "describeworldtemplateresponse.h"
#include "getworldtemplatebodyrequest.h"
#include "getworldtemplatebodyresponse.h"
#include "listdeploymentjobsrequest.h"
#include "listdeploymentjobsresponse.h"
#include "listfleetsrequest.h"
#include "listfleetsresponse.h"
#include "listrobotapplicationsrequest.h"
#include "listrobotapplicationsresponse.h"
#include "listrobotsrequest.h"
#include "listrobotsresponse.h"
#include "listsimulationapplicationsrequest.h"
#include "listsimulationapplicationsresponse.h"
#include "listsimulationjobbatchesrequest.h"
#include "listsimulationjobbatchesresponse.h"
#include "listsimulationjobsrequest.h"
#include "listsimulationjobsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listworldexportjobsrequest.h"
#include "listworldexportjobsresponse.h"
#include "listworldgenerationjobsrequest.h"
#include "listworldgenerationjobsresponse.h"
#include "listworldtemplatesrequest.h"
#include "listworldtemplatesresponse.h"
#include "listworldsrequest.h"
#include "listworldsresponse.h"
#include "registerrobotrequest.h"
#include "registerrobotresponse.h"
#include "restartsimulationjobrequest.h"
#include "restartsimulationjobresponse.h"
#include "startsimulationjobbatchrequest.h"
#include "startsimulationjobbatchresponse.h"
#include "syncdeploymentjobrequest.h"
#include "syncdeploymentjobresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updaterobotapplicationrequest.h"
#include "updaterobotapplicationresponse.h"
#include "updatesimulationapplicationrequest.h"
#include "updatesimulationapplicationresponse.h"
#include "updateworldtemplaterequest.h"
#include "updateworldtemplateresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::RoboMaker
 * \brief Contains classess for accessing AWS RoboMaker.
 *
 * \inmodule QtAwsRoboMaker
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::RoboMakerClient
 * \brief The RoboMakerClient class provides access to the AWS RoboMaker service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 */

/*!
 * \brief Constructs a RoboMakerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RoboMakerClient::RoboMakerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RoboMakerClientPrivate(this), parent)
{
    Q_D(RoboMakerClient);
    d->apiVersion = QStringLiteral("2018-06-29");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("robomaker");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS RoboMaker");
    d->serviceName = QStringLiteral("robomaker");
}

/*!
 * \overload RoboMakerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RoboMakerClient::RoboMakerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RoboMakerClientPrivate(this), parent)
{
    Q_D(RoboMakerClient);
    d->apiVersion = QStringLiteral("2018-06-29");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("robomaker");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS RoboMaker");
    d->serviceName = QStringLiteral("robomaker");
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * BatchDeleteWorldsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more worlds in a batch
 */
BatchDeleteWorldsResponse * RoboMakerClient::batchDeleteWorlds(const BatchDeleteWorldsRequest &request)
{
    return qobject_cast<BatchDeleteWorldsResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * BatchDescribeSimulationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more simulation
 */
BatchDescribeSimulationJobResponse * RoboMakerClient::batchDescribeSimulationJob(const BatchDescribeSimulationJobRequest &request)
{
    return qobject_cast<BatchDescribeSimulationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CancelDeploymentJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the specified deployment
 *
 * job> <b>
 *
 * This API will no longer be supported as of May 2, 2022. Use it to remove resources that were created for Deployment
 */
CancelDeploymentJobResponse * RoboMakerClient::cancelDeploymentJob(const CancelDeploymentJobRequest &request)
{
    return qobject_cast<CancelDeploymentJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CancelSimulationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the specified simulation
 */
CancelSimulationJobResponse * RoboMakerClient::cancelSimulationJob(const CancelSimulationJobRequest &request)
{
    return qobject_cast<CancelSimulationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CancelSimulationJobBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a simulation job batch. When you cancel a simulation job batch, you are also cancelling all of the active
 * simulation jobs created as part of the batch.
 */
CancelSimulationJobBatchResponse * RoboMakerClient::cancelSimulationJobBatch(const CancelSimulationJobBatchRequest &request)
{
    return qobject_cast<CancelSimulationJobBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CancelWorldExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the specified export
 */
CancelWorldExportJobResponse * RoboMakerClient::cancelWorldExportJob(const CancelWorldExportJobRequest &request)
{
    return qobject_cast<CancelWorldExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CancelWorldGenerationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the specified world generator
 */
CancelWorldGenerationJobResponse * RoboMakerClient::cancelWorldGenerationJob(const CancelWorldGenerationJobRequest &request)
{
    return qobject_cast<CancelWorldGenerationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CreateDeploymentJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deploys a specific version of a robot application to robots in a
 *
 * fleet> <b>
 *
 * This API is no longer supported and will throw an error if
 *
 * used> </b>
 *
 * The robot application must have a numbered <code>applicationVersion</code> for consistency reasons. To create a new
 * version, use <code>CreateRobotApplicationVersion</code> or see <a
 * href="https://docs.aws.amazon.com/robomaker/latest/dg/create-robot-application-version.html">Creating a Robot
 * Application Version</a>.
 *
 * </p <note>
 *
 * After 90 days, deployment jobs expire and will be deleted. They will no longer be accessible.
 */
CreateDeploymentJobResponse * RoboMakerClient::createDeploymentJob(const CreateDeploymentJobRequest &request)
{
    return qobject_cast<CreateDeploymentJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CreateFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a fleet, a logical group of robots running the same robot
 *
 * application> <b>
 *
 * This API is no longer supported and will throw an error if
 */
CreateFleetResponse * RoboMakerClient::createFleet(const CreateFleetRequest &request)
{
    return qobject_cast<CreateFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CreateRobotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 *
 * robot> <b>
 *
 * This API is no longer supported and will throw an error if
 */
CreateRobotResponse * RoboMakerClient::createRobot(const CreateRobotRequest &request)
{
    return qobject_cast<CreateRobotResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CreateRobotApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a robot application.
 */
CreateRobotApplicationResponse * RoboMakerClient::createRobotApplication(const CreateRobotApplicationRequest &request)
{
    return qobject_cast<CreateRobotApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CreateRobotApplicationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a version of a robot
 */
CreateRobotApplicationVersionResponse * RoboMakerClient::createRobotApplicationVersion(const CreateRobotApplicationVersionRequest &request)
{
    return qobject_cast<CreateRobotApplicationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CreateSimulationApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a simulation
 */
CreateSimulationApplicationResponse * RoboMakerClient::createSimulationApplication(const CreateSimulationApplicationRequest &request)
{
    return qobject_cast<CreateSimulationApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CreateSimulationApplicationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a simulation application with a specific revision
 */
CreateSimulationApplicationVersionResponse * RoboMakerClient::createSimulationApplicationVersion(const CreateSimulationApplicationVersionRequest &request)
{
    return qobject_cast<CreateSimulationApplicationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CreateSimulationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a simulation
 *
 * job> <note>
 *
 * After 90 days, simulation jobs expire and will be deleted. They will no longer be accessible.
 */
CreateSimulationJobResponse * RoboMakerClient::createSimulationJob(const CreateSimulationJobRequest &request)
{
    return qobject_cast<CreateSimulationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CreateWorldExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a world export
 */
CreateWorldExportJobResponse * RoboMakerClient::createWorldExportJob(const CreateWorldExportJobRequest &request)
{
    return qobject_cast<CreateWorldExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CreateWorldGenerationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates worlds using the specified
 */
CreateWorldGenerationJobResponse * RoboMakerClient::createWorldGenerationJob(const CreateWorldGenerationJobRequest &request)
{
    return qobject_cast<CreateWorldGenerationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * CreateWorldTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a world
 */
CreateWorldTemplateResponse * RoboMakerClient::createWorldTemplate(const CreateWorldTemplateRequest &request)
{
    return qobject_cast<CreateWorldTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DeleteFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 *
 * fleet> <b>
 *
 * This API will no longer be supported as of May 2, 2022. Use it to remove resources that were created for Deployment
 */
DeleteFleetResponse * RoboMakerClient::deleteFleet(const DeleteFleetRequest &request)
{
    return qobject_cast<DeleteFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DeleteRobotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 *
 * robot> <b>
 *
 * This API will no longer be supported as of May 2, 2022. Use it to remove resources that were created for Deployment
 */
DeleteRobotResponse * RoboMakerClient::deleteRobot(const DeleteRobotRequest &request)
{
    return qobject_cast<DeleteRobotResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DeleteRobotApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a robot
 */
DeleteRobotApplicationResponse * RoboMakerClient::deleteRobotApplication(const DeleteRobotApplicationRequest &request)
{
    return qobject_cast<DeleteRobotApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DeleteSimulationApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a simulation
 */
DeleteSimulationApplicationResponse * RoboMakerClient::deleteSimulationApplication(const DeleteSimulationApplicationRequest &request)
{
    return qobject_cast<DeleteSimulationApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DeleteWorldTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a world
 */
DeleteWorldTemplateResponse * RoboMakerClient::deleteWorldTemplate(const DeleteWorldTemplateRequest &request)
{
    return qobject_cast<DeleteWorldTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DeregisterRobotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters a
 *
 * robot> <b>
 *
 * This API will no longer be supported as of May 2, 2022. Use it to remove resources that were created for Deployment
 */
DeregisterRobotResponse * RoboMakerClient::deregisterRobot(const DeregisterRobotRequest &request)
{
    return qobject_cast<DeregisterRobotResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DescribeDeploymentJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a deployment
 *
 * job> <b>
 *
 * This API will no longer be supported as of May 2, 2022. Use it to remove resources that were created for Deployment
 */
DescribeDeploymentJobResponse * RoboMakerClient::describeDeploymentJob(const DescribeDeploymentJobRequest &request)
{
    return qobject_cast<DescribeDeploymentJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DescribeFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a
 *
 * fleet> <b>
 *
 * This API will no longer be supported as of May 2, 2022. Use it to remove resources that were created for Deployment
 */
DescribeFleetResponse * RoboMakerClient::describeFleet(const DescribeFleetRequest &request)
{
    return qobject_cast<DescribeFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DescribeRobotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a
 *
 * robot> <b>
 *
 * This API will no longer be supported as of May 2, 2022. Use it to remove resources that were created for Deployment
 */
DescribeRobotResponse * RoboMakerClient::describeRobot(const DescribeRobotRequest &request)
{
    return qobject_cast<DescribeRobotResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DescribeRobotApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a robot
 */
DescribeRobotApplicationResponse * RoboMakerClient::describeRobotApplication(const DescribeRobotApplicationRequest &request)
{
    return qobject_cast<DescribeRobotApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DescribeSimulationApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a simulation
 */
DescribeSimulationApplicationResponse * RoboMakerClient::describeSimulationApplication(const DescribeSimulationApplicationRequest &request)
{
    return qobject_cast<DescribeSimulationApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DescribeSimulationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a simulation
 */
DescribeSimulationJobResponse * RoboMakerClient::describeSimulationJob(const DescribeSimulationJobRequest &request)
{
    return qobject_cast<DescribeSimulationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DescribeSimulationJobBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a simulation job
 */
DescribeSimulationJobBatchResponse * RoboMakerClient::describeSimulationJobBatch(const DescribeSimulationJobBatchRequest &request)
{
    return qobject_cast<DescribeSimulationJobBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DescribeWorldResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a
 */
DescribeWorldResponse * RoboMakerClient::describeWorld(const DescribeWorldRequest &request)
{
    return qobject_cast<DescribeWorldResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DescribeWorldExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a world export
 */
DescribeWorldExportJobResponse * RoboMakerClient::describeWorldExportJob(const DescribeWorldExportJobRequest &request)
{
    return qobject_cast<DescribeWorldExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DescribeWorldGenerationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a world generation
 */
DescribeWorldGenerationJobResponse * RoboMakerClient::describeWorldGenerationJob(const DescribeWorldGenerationJobRequest &request)
{
    return qobject_cast<DescribeWorldGenerationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * DescribeWorldTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a world
 */
DescribeWorldTemplateResponse * RoboMakerClient::describeWorldTemplate(const DescribeWorldTemplateRequest &request)
{
    return qobject_cast<DescribeWorldTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * GetWorldTemplateBodyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the world template
 */
GetWorldTemplateBodyResponse * RoboMakerClient::getWorldTemplateBody(const GetWorldTemplateBodyRequest &request)
{
    return qobject_cast<GetWorldTemplateBodyResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * ListDeploymentJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of deployment jobs for a fleet. You can optionally provide filters to retrieve specific deployment
 *
 * jobs> <b>
 *
 * This API will no longer be supported as of May 2, 2022. Use it to remove resources that were created for Deployment
 */
ListDeploymentJobsResponse * RoboMakerClient::listDeploymentJobs(const ListDeploymentJobsRequest &request)
{
    return qobject_cast<ListDeploymentJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * ListFleetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of fleets. You can optionally provide filters to retrieve specific
 *
 * fleets> <b>
 *
 * This API will no longer be supported as of May 2, 2022. Use it to remove resources that were created for Deployment
 */
ListFleetsResponse * RoboMakerClient::listFleets(const ListFleetsRequest &request)
{
    return qobject_cast<ListFleetsResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * ListRobotApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of robot application. You can optionally provide filters to retrieve specific robot
 */
ListRobotApplicationsResponse * RoboMakerClient::listRobotApplications(const ListRobotApplicationsRequest &request)
{
    return qobject_cast<ListRobotApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * ListRobotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of robots. You can optionally provide filters to retrieve specific
 *
 * robots> <b>
 *
 * This API will no longer be supported as of May 2, 2022. Use it to remove resources that were created for Deployment
 */
ListRobotsResponse * RoboMakerClient::listRobots(const ListRobotsRequest &request)
{
    return qobject_cast<ListRobotsResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * ListSimulationApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of simulation applications. You can optionally provide filters to retrieve specific simulation
 * applications.
 */
ListSimulationApplicationsResponse * RoboMakerClient::listSimulationApplications(const ListSimulationApplicationsRequest &request)
{
    return qobject_cast<ListSimulationApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * ListSimulationJobBatchesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list simulation job batches. You can optionally provide filters to retrieve specific simulation batch jobs.
 */
ListSimulationJobBatchesResponse * RoboMakerClient::listSimulationJobBatches(const ListSimulationJobBatchesRequest &request)
{
    return qobject_cast<ListSimulationJobBatchesResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * ListSimulationJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of simulation jobs. You can optionally provide filters to retrieve specific simulation jobs.
 */
ListSimulationJobsResponse * RoboMakerClient::listSimulationJobs(const ListSimulationJobsRequest &request)
{
    return qobject_cast<ListSimulationJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags on a AWS RoboMaker
 */
ListTagsForResourceResponse * RoboMakerClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * ListWorldExportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists world export
 */
ListWorldExportJobsResponse * RoboMakerClient::listWorldExportJobs(const ListWorldExportJobsRequest &request)
{
    return qobject_cast<ListWorldExportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * ListWorldGenerationJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists world generator
 */
ListWorldGenerationJobsResponse * RoboMakerClient::listWorldGenerationJobs(const ListWorldGenerationJobsRequest &request)
{
    return qobject_cast<ListWorldGenerationJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * ListWorldTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists world
 */
ListWorldTemplatesResponse * RoboMakerClient::listWorldTemplates(const ListWorldTemplatesRequest &request)
{
    return qobject_cast<ListWorldTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * ListWorldsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists
 */
ListWorldsResponse * RoboMakerClient::listWorlds(const ListWorldsRequest &request)
{
    return qobject_cast<ListWorldsResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * RegisterRobotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a robot with a
 *
 * fleet> <b>
 *
 * This API is no longer supported and will throw an error if
 */
RegisterRobotResponse * RoboMakerClient::registerRobot(const RegisterRobotRequest &request)
{
    return qobject_cast<RegisterRobotResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * RestartSimulationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restarts a running simulation
 */
RestartSimulationJobResponse * RoboMakerClient::restartSimulationJob(const RestartSimulationJobRequest &request)
{
    return qobject_cast<RestartSimulationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * StartSimulationJobBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a new simulation job batch. The batch is defined using one or more <code>SimulationJobRequest</code> objects.
 */
StartSimulationJobBatchResponse * RoboMakerClient::startSimulationJobBatch(const StartSimulationJobBatchRequest &request)
{
    return qobject_cast<StartSimulationJobBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * SyncDeploymentJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Syncrhonizes robots in a fleet to the latest deployment. This is helpful if robots were added after a
 *
 * deployment> <b>
 *
 * This API will no longer be supported as of May 2, 2022. Use it to remove resources that were created for Deployment
 */
SyncDeploymentJobResponse * RoboMakerClient::syncDeploymentJob(const SyncDeploymentJobRequest &request)
{
    return qobject_cast<SyncDeploymentJobResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or edits tags for a AWS RoboMaker
 *
 * resource>
 *
 * Each tag consists of a tag key and a tag value. Tag keys and tag values are both required, but tag values can be empty
 * strings.
 *
 * </p
 *
 * For information about the rules that apply to tag keys and tag values, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined Tag
 * Restrictions</a> in the <i>AWS Billing and Cost Management User Guide</i>.
 */
TagResourceResponse * RoboMakerClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified AWS RoboMaker
 *
 * resource>
 *
 * To remove a tag, specify the tag key. To change the tag value of an existing tag key, use <a
 * href="https://docs.aws.amazon.com/robomaker/latest/dg/API_TagResource.html"> <code>TagResource</code> </a>.
 */
UntagResourceResponse * RoboMakerClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * UpdateRobotApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a robot
 */
UpdateRobotApplicationResponse * RoboMakerClient::updateRobotApplication(const UpdateRobotApplicationRequest &request)
{
    return qobject_cast<UpdateRobotApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * UpdateSimulationApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a simulation
 */
UpdateSimulationApplicationResponse * RoboMakerClient::updateSimulationApplication(const UpdateSimulationApplicationRequest &request)
{
    return qobject_cast<UpdateSimulationApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the RoboMakerClient service, and returns a pointer to an
 * UpdateWorldTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a world
 */
UpdateWorldTemplateResponse * RoboMakerClient::updateWorldTemplate(const UpdateWorldTemplateRequest &request)
{
    return qobject_cast<UpdateWorldTemplateResponse *>(send(request));
}

/*!
 * \class QtAws::RoboMaker::RoboMakerClientPrivate
 * \brief The RoboMakerClientPrivate class provides private implementation for RoboMakerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RoboMakerClientPrivate object with public implementation \a q.
 */
RoboMakerClientPrivate::RoboMakerClientPrivate(RoboMakerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace RoboMaker
} // namespace QtAws

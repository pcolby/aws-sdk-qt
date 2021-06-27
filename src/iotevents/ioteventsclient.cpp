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

#include "ioteventsclient.h"
#include "ioteventsclient_p.h"

#include "core/awssignaturev4.h"
#include "createalarmmodelrequest.h"
#include "createalarmmodelresponse.h"
#include "createdetectormodelrequest.h"
#include "createdetectormodelresponse.h"
#include "createinputrequest.h"
#include "createinputresponse.h"
#include "deletealarmmodelrequest.h"
#include "deletealarmmodelresponse.h"
#include "deletedetectormodelrequest.h"
#include "deletedetectormodelresponse.h"
#include "deleteinputrequest.h"
#include "deleteinputresponse.h"
#include "describealarmmodelrequest.h"
#include "describealarmmodelresponse.h"
#include "describedetectormodelrequest.h"
#include "describedetectormodelresponse.h"
#include "describedetectormodelanalysisrequest.h"
#include "describedetectormodelanalysisresponse.h"
#include "describeinputrequest.h"
#include "describeinputresponse.h"
#include "describeloggingoptionsrequest.h"
#include "describeloggingoptionsresponse.h"
#include "getdetectormodelanalysisresultsrequest.h"
#include "getdetectormodelanalysisresultsresponse.h"
#include "listalarmmodelversionsrequest.h"
#include "listalarmmodelversionsresponse.h"
#include "listalarmmodelsrequest.h"
#include "listalarmmodelsresponse.h"
#include "listdetectormodelversionsrequest.h"
#include "listdetectormodelversionsresponse.h"
#include "listdetectormodelsrequest.h"
#include "listdetectormodelsresponse.h"
#include "listinputroutingsrequest.h"
#include "listinputroutingsresponse.h"
#include "listinputsrequest.h"
#include "listinputsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putloggingoptionsrequest.h"
#include "putloggingoptionsresponse.h"
#include "startdetectormodelanalysisrequest.h"
#include "startdetectormodelanalysisresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatealarmmodelrequest.h"
#include "updatealarmmodelresponse.h"
#include "updatedetectormodelrequest.h"
#include "updatedetectormodelresponse.h"
#include "updateinputrequest.h"
#include "updateinputresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTEvents
 * \brief Contains classess for accessing AWS IoT Events.
 *
 * \inmodule QtAwsIoTEvents
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::IoTEventsClient
 * \brief The IoTEventsClient class provides access to the AWS IoT Events service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 */

/*!
 * \brief Constructs a IoTEventsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTEventsClient::IoTEventsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-07-27"),
    QStringLiteral("iotevents"),
    QStringLiteral("AWS IoT Events"),
    QStringLiteral("iotevents"),
    parent), d_ptr(new IoTEventsClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload IoTEventsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTEventsClient::IoTEventsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-07-27"),
    QStringLiteral("iotevents"),
    QStringLiteral("AWS IoT Events"),
    QStringLiteral("iotevents"),
    parent), d_ptr(new IoTEventsClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * CreateAlarmModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an alarm model to monitor an AWS IoT Events input attribute. You can use the alarm to get notified when the
 * value is outside a specified range. For more information, see <a
 * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/create-alarms.html">Create an alarm model</a> in the
 * <i>AWS IoT Events Developer
 */
CreateAlarmModelResponse * IoTEventsClient::createAlarmModel(const CreateAlarmModelRequest &request)
{
    return qobject_cast<CreateAlarmModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * CreateDetectorModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a detector
 */
CreateDetectorModelResponse * IoTEventsClient::createDetectorModel(const CreateDetectorModelRequest &request)
{
    return qobject_cast<CreateDetectorModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * CreateInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an
 */
CreateInputResponse * IoTEventsClient::createInput(const CreateInputRequest &request)
{
    return qobject_cast<CreateInputResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * DeleteAlarmModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an alarm model. Any alarm instances that were created based on this alarm model are also deleted. This action
 * can't be
 */
DeleteAlarmModelResponse * IoTEventsClient::deleteAlarmModel(const DeleteAlarmModelRequest &request)
{
    return qobject_cast<DeleteAlarmModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * DeleteDetectorModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a detector model. Any active instances of the detector model are also
 */
DeleteDetectorModelResponse * IoTEventsClient::deleteDetectorModel(const DeleteDetectorModelRequest &request)
{
    return qobject_cast<DeleteDetectorModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * DeleteInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteInputResponse * IoTEventsClient::deleteInput(const DeleteInputRequest &request)
{
    return qobject_cast<DeleteInputResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * DescribeAlarmModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about an alarm model. If you don't specify a value for the <code>alarmModelVersion</code>
 * parameter, the latest version is
 */
DescribeAlarmModelResponse * IoTEventsClient::describeAlarmModel(const DescribeAlarmModelRequest &request)
{
    return qobject_cast<DescribeAlarmModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * DescribeDetectorModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a detector model. If the <code>version</code> parameter is not specified, information about the latest version
 * is
 */
DescribeDetectorModelResponse * IoTEventsClient::describeDetectorModel(const DescribeDetectorModelRequest &request)
{
    return qobject_cast<DescribeDetectorModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * DescribeDetectorModelAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves runtime information about a detector model
 *
 * analysis> <note>
 *
 * After AWS IoT Events starts analyzing your detector model, you have up to 24 hours to retrieve the analysis
 */
DescribeDetectorModelAnalysisResponse * IoTEventsClient::describeDetectorModelAnalysis(const DescribeDetectorModelAnalysisRequest &request)
{
    return qobject_cast<DescribeDetectorModelAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * DescribeInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an
 */
DescribeInputResponse * IoTEventsClient::describeInput(const DescribeInputRequest &request)
{
    return qobject_cast<DescribeInputResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * DescribeLoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the current settings of the AWS IoT Events logging
 */
DescribeLoggingOptionsResponse * IoTEventsClient::describeLoggingOptions(const DescribeLoggingOptionsRequest &request)
{
    return qobject_cast<DescribeLoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * GetDetectorModelAnalysisResultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves one or more analysis results of the detector
 *
 * model> <note>
 *
 * After AWS IoT Events starts analyzing your detector model, you have up to 24 hours to retrieve the analysis
 */
GetDetectorModelAnalysisResultsResponse * IoTEventsClient::getDetectorModelAnalysisResults(const GetDetectorModelAnalysisResultsRequest &request)
{
    return qobject_cast<GetDetectorModelAnalysisResultsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * ListAlarmModelVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the versions of an alarm model. The operation returns only the metadata associated with each alarm model
 */
ListAlarmModelVersionsResponse * IoTEventsClient::listAlarmModelVersions(const ListAlarmModelVersionsRequest &request)
{
    return qobject_cast<ListAlarmModelVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * ListAlarmModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the alarm models that you created. The operation returns only the metadata associated with each alarm
 */
ListAlarmModelsResponse * IoTEventsClient::listAlarmModels(const ListAlarmModelsRequest &request)
{
    return qobject_cast<ListAlarmModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * ListDetectorModelVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the versions of a detector model. Only the metadata associated with each detector model version is
 */
ListDetectorModelVersionsResponse * IoTEventsClient::listDetectorModelVersions(const ListDetectorModelVersionsRequest &request)
{
    return qobject_cast<ListDetectorModelVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * ListDetectorModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the detector models you have created. Only the metadata associated with each detector model is
 */
ListDetectorModelsResponse * IoTEventsClient::listDetectorModels(const ListDetectorModelsRequest &request)
{
    return qobject_cast<ListDetectorModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * ListInputRoutingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists one or more input routings.
 */
ListInputRoutingsResponse * IoTEventsClient::listInputRoutings(const ListInputRoutingsRequest &request)
{
    return qobject_cast<ListInputRoutingsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * ListInputsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the inputs you have
 */
ListInputsResponse * IoTEventsClient::listInputs(const ListInputsRequest &request)
{
    return qobject_cast<ListInputsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags (metadata) you have assigned to the
 */
ListTagsForResourceResponse * IoTEventsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * PutLoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets or updates the AWS IoT Events logging
 *
 * options>
 *
 * If you update the value of any <code>loggingOptions</code> field, it takes up to one minute for the change to take
 * effect. If you change the policy attached to the role you specified in the <code>roleArn</code> field (for example, to
 * correct an invalid policy), it takes up to five minutes for that change to take
 */
PutLoggingOptionsResponse * IoTEventsClient::putLoggingOptions(const PutLoggingOptionsRequest &request)
{
    return qobject_cast<PutLoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * StartDetectorModelAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Performs an analysis of your detector model. For more information, see <a
 * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-analyze-api.html">Troubleshooting a detector
 * model</a> in the <i>AWS IoT Events Developer
 */
StartDetectorModelAnalysisResponse * IoTEventsClient::startDetectorModelAnalysis(const StartDetectorModelAnalysisRequest &request)
{
    return qobject_cast<StartDetectorModelAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds to or modifies the tags of the given resource. Tags are metadata that can be used to manage a
 */
TagResourceResponse * IoTEventsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the given tags (metadata) from the
 */
UntagResourceResponse * IoTEventsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * UpdateAlarmModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an alarm model. Any alarms that were created based on the previous version are deleted and then created again as
 * new data
 */
UpdateAlarmModelResponse * IoTEventsClient::updateAlarmModel(const UpdateAlarmModelRequest &request)
{
    return qobject_cast<UpdateAlarmModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * UpdateDetectorModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a detector model. Detectors (instances) spawned by the previous version are deleted and then re-created as new
 * inputs
 */
UpdateDetectorModelResponse * IoTEventsClient::updateDetectorModel(const UpdateDetectorModelRequest &request)
{
    return qobject_cast<UpdateDetectorModelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTEventsClient service, and returns a pointer to an
 * UpdateInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 */
UpdateInputResponse * IoTEventsClient::updateInput(const UpdateInputRequest &request)
{
    return qobject_cast<UpdateInputResponse *>(send(request));
}

/*!
 * \class QtAws::IoTEvents::IoTEventsClientPrivate
 * \brief The IoTEventsClientPrivate class provides private implementation for IoTEventsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a IoTEventsClientPrivate object with public implementation \a q.
 */
IoTEventsClientPrivate::IoTEventsClientPrivate(IoTEventsClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace IoTEvents
} // namespace QtAws

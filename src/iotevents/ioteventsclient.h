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

#ifndef QTAWS_IOTEVENTSCLIENT_H
#define QTAWS_IOTEVENTSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsioteventsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IoTEvents {

class IoTEventsClientPrivate;
class CreateAlarmModelRequest;
class CreateAlarmModelResponse;
class CreateDetectorModelRequest;
class CreateDetectorModelResponse;
class CreateInputRequest;
class CreateInputResponse;
class DeleteAlarmModelRequest;
class DeleteAlarmModelResponse;
class DeleteDetectorModelRequest;
class DeleteDetectorModelResponse;
class DeleteInputRequest;
class DeleteInputResponse;
class DescribeAlarmModelRequest;
class DescribeAlarmModelResponse;
class DescribeDetectorModelRequest;
class DescribeDetectorModelResponse;
class DescribeDetectorModelAnalysisRequest;
class DescribeDetectorModelAnalysisResponse;
class DescribeInputRequest;
class DescribeInputResponse;
class DescribeLoggingOptionsRequest;
class DescribeLoggingOptionsResponse;
class GetDetectorModelAnalysisResultsRequest;
class GetDetectorModelAnalysisResultsResponse;
class ListAlarmModelVersionsRequest;
class ListAlarmModelVersionsResponse;
class ListAlarmModelsRequest;
class ListAlarmModelsResponse;
class ListDetectorModelVersionsRequest;
class ListDetectorModelVersionsResponse;
class ListDetectorModelsRequest;
class ListDetectorModelsResponse;
class ListInputRoutingsRequest;
class ListInputRoutingsResponse;
class ListInputsRequest;
class ListInputsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutLoggingOptionsRequest;
class PutLoggingOptionsResponse;
class StartDetectorModelAnalysisRequest;
class StartDetectorModelAnalysisResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAlarmModelRequest;
class UpdateAlarmModelResponse;
class UpdateDetectorModelRequest;
class UpdateDetectorModelResponse;
class UpdateInputRequest;
class UpdateInputResponse;

class QTAWSIOTEVENTS_EXPORT IoTEventsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTEventsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IoTEventsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAlarmModelResponse * createAlarmModel(const CreateAlarmModelRequest &request);
    CreateDetectorModelResponse * createDetectorModel(const CreateDetectorModelRequest &request);
    CreateInputResponse * createInput(const CreateInputRequest &request);
    DeleteAlarmModelResponse * deleteAlarmModel(const DeleteAlarmModelRequest &request);
    DeleteDetectorModelResponse * deleteDetectorModel(const DeleteDetectorModelRequest &request);
    DeleteInputResponse * deleteInput(const DeleteInputRequest &request);
    DescribeAlarmModelResponse * describeAlarmModel(const DescribeAlarmModelRequest &request);
    DescribeDetectorModelResponse * describeDetectorModel(const DescribeDetectorModelRequest &request);
    DescribeDetectorModelAnalysisResponse * describeDetectorModelAnalysis(const DescribeDetectorModelAnalysisRequest &request);
    DescribeInputResponse * describeInput(const DescribeInputRequest &request);
    DescribeLoggingOptionsResponse * describeLoggingOptions(const DescribeLoggingOptionsRequest &request);
    GetDetectorModelAnalysisResultsResponse * getDetectorModelAnalysisResults(const GetDetectorModelAnalysisResultsRequest &request);
    ListAlarmModelVersionsResponse * listAlarmModelVersions(const ListAlarmModelVersionsRequest &request);
    ListAlarmModelsResponse * listAlarmModels(const ListAlarmModelsRequest &request);
    ListDetectorModelVersionsResponse * listDetectorModelVersions(const ListDetectorModelVersionsRequest &request);
    ListDetectorModelsResponse * listDetectorModels(const ListDetectorModelsRequest &request);
    ListInputRoutingsResponse * listInputRoutings(const ListInputRoutingsRequest &request);
    ListInputsResponse * listInputs(const ListInputsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutLoggingOptionsResponse * putLoggingOptions(const PutLoggingOptionsRequest &request);
    StartDetectorModelAnalysisResponse * startDetectorModelAnalysis(const StartDetectorModelAnalysisRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAlarmModelResponse * updateAlarmModel(const UpdateAlarmModelRequest &request);
    UpdateDetectorModelResponse * updateDetectorModel(const UpdateDetectorModelRequest &request);
    UpdateInputResponse * updateInput(const UpdateInputRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTEventsClient)
    Q_DISABLE_COPY(IoTEventsClient)

};

} // namespace IoTEvents
} // namespace QtAws

#endif

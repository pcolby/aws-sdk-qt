/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ELASTICTRANSCODERCLIENT_H
#define QTAWS_ELASTICTRANSCODERCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace ElasticTranscoder {

class ElasticTranscoderClientPrivate;

class QTAWS_EXPORT ElasticTranscoderClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ElasticTranscoderClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ElasticTranscoderClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelJobResponse * cancelJob(const CancelJobRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    CreatePipelineResponse * createPipeline(const CreatePipelineRequest &request);
    CreatePresetResponse * createPreset(const CreatePresetRequest &request);
    DeletePipelineResponse * deletePipeline(const DeletePipelineRequest &request);
    DeletePresetResponse * deletePreset(const DeletePresetRequest &request);
    ListJobsByPipelineResponse * listJobsByPipeline(const ListJobsByPipelineRequest &request);
    ListJobsByStatusResponse * listJobsByStatus(const ListJobsByStatusRequest &request);
    ListPipelinesResponse * listPipelines(const ListPipelinesRequest &request);
    ListPresetsResponse * listPresets(const ListPresetsRequest &request);
    ReadJobResponse * readJob(const ReadJobRequest &request);
    ReadPipelineResponse * readPipeline(const ReadPipelineRequest &request);
    ReadPresetResponse * readPreset(const ReadPresetRequest &request);
    TestRoleResponse * testRole(const TestRoleRequest &request);
    UpdatePipelineResponse * updatePipeline(const UpdatePipelineRequest &request);
    UpdatePipelineNotificationsResponse * updatePipelineNotifications(const UpdatePipelineNotificationsRequest &request);
    UpdatePipelineStatusResponse * updatePipelineStatus(const UpdatePipelineStatusRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticTranscoderClient)
    Q_DISABLE_COPY(ElasticTranscoderClient)

};

} // namespace ElasticTranscoder
} // namespace AWS

#endif

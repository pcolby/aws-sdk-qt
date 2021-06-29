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

#ifndef QTAWS_ELASTICTRANSCODERCLIENT_H
#define QTAWS_ELASTICTRANSCODERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawselastictranscoderglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ElasticTranscoder {

class ElasticTranscoderClientPrivate;
class CancelJobRequest;
class CancelJobResponse;
class CreateJobRequest;
class CreateJobResponse;
class CreatePipelineRequest;
class CreatePipelineResponse;
class CreatePresetRequest;
class CreatePresetResponse;
class DeletePipelineRequest;
class DeletePipelineResponse;
class DeletePresetRequest;
class DeletePresetResponse;
class ListJobsByPipelineRequest;
class ListJobsByPipelineResponse;
class ListJobsByStatusRequest;
class ListJobsByStatusResponse;
class ListPipelinesRequest;
class ListPipelinesResponse;
class ListPresetsRequest;
class ListPresetsResponse;
class ReadJobRequest;
class ReadJobResponse;
class ReadPipelineRequest;
class ReadPipelineResponse;
class ReadPresetRequest;
class ReadPresetResponse;
class TestRoleRequest;
class TestRoleResponse;
class UpdatePipelineRequest;
class UpdatePipelineResponse;
class UpdatePipelineNotificationsRequest;
class UpdatePipelineNotificationsResponse;
class UpdatePipelineStatusRequest;
class UpdatePipelineStatusResponse;

class QTAWSELASTICTRANSCODER_EXPORT ElasticTranscoderClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ElasticTranscoderClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ElasticTranscoderClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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

protected:
    /// @cond internal
    ElasticTranscoderClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit ElasticTranscoderClient(ElasticTranscoderClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(ElasticTranscoderClient)
    Q_DISABLE_COPY(ElasticTranscoderClient)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif

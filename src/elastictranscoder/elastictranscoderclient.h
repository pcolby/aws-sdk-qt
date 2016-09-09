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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    ElasticTranscoderCancelJobResponse * cancelJob(const ElasticTranscoderCancelJobRequest &request);
    ElasticTranscoderCreateJobResponse * createJob(const ElasticTranscoderCreateJobRequest &request);
    ElasticTranscoderCreatePipelineResponse * createPipeline(const ElasticTranscoderCreatePipelineRequest &request);
    ElasticTranscoderCreatePresetResponse * createPreset(const ElasticTranscoderCreatePresetRequest &request);
    ElasticTranscoderDeletePipelineResponse * deletePipeline(const ElasticTranscoderDeletePipelineRequest &request);
    ElasticTranscoderDeletePresetResponse * deletePreset(const ElasticTranscoderDeletePresetRequest &request);
    ElasticTranscoderListJobsByPipelineResponse * listJobsByPipeline(const ElasticTranscoderListJobsByPipelineRequest &request);
    ElasticTranscoderListJobsByStatusResponse * listJobsByStatus(const ElasticTranscoderListJobsByStatusRequest &request);
    ElasticTranscoderListPipelinesResponse * listPipelines(const ElasticTranscoderListPipelinesRequest &request);
    ElasticTranscoderListPresetsResponse * listPresets(const ElasticTranscoderListPresetsRequest &request);
    ElasticTranscoderReadJobResponse * readJob(const ElasticTranscoderReadJobRequest &request);
    ElasticTranscoderReadPipelineResponse * readPipeline(const ElasticTranscoderReadPipelineRequest &request);
    ElasticTranscoderReadPresetResponse * readPreset(const ElasticTranscoderReadPresetRequest &request);
    ElasticTranscoderTestRoleResponse * testRole(const ElasticTranscoderTestRoleRequest &request);
    ElasticTranscoderUpdatePipelineResponse * updatePipeline(const ElasticTranscoderUpdatePipelineRequest &request);
    ElasticTranscoderUpdatePipelineNotificationsResponse * updatePipelineNotifications(const ElasticTranscoderUpdatePipelineNotificationsRequest &request);
    ElasticTranscoderUpdatePipelineStatusResponse * updatePipelineStatus(const ElasticTranscoderUpdatePipelineStatusRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticTranscoderClient)
    Q_DISABLE_COPY(ElasticTranscoderClient)

};

QTAWS_END_NAMESPACE

#endif

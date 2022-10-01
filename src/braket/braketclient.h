// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BRAKETCLIENT_H
#define QTAWS_BRAKETCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsbraketglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Braket {

class BraketClientPrivate;
class CancelJobRequest;
class CancelJobResponse;
class CancelQuantumTaskRequest;
class CancelQuantumTaskResponse;
class CreateJobRequest;
class CreateJobResponse;
class CreateQuantumTaskRequest;
class CreateQuantumTaskResponse;
class GetDeviceRequest;
class GetDeviceResponse;
class GetJobRequest;
class GetJobResponse;
class GetQuantumTaskRequest;
class GetQuantumTaskResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class SearchDevicesRequest;
class SearchDevicesResponse;
class SearchJobsRequest;
class SearchJobsResponse;
class SearchQuantumTasksRequest;
class SearchQuantumTasksResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSBRAKET_EXPORT BraketClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    BraketClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit BraketClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelJobResponse * cancelJob(const CancelJobRequest &request);
    CancelQuantumTaskResponse * cancelQuantumTask(const CancelQuantumTaskRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    CreateQuantumTaskResponse * createQuantumTask(const CreateQuantumTaskRequest &request);
    GetDeviceResponse * getDevice(const GetDeviceRequest &request);
    GetJobResponse * getJob(const GetJobRequest &request);
    GetQuantumTaskResponse * getQuantumTask(const GetQuantumTaskRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    SearchDevicesResponse * searchDevices(const SearchDevicesRequest &request);
    SearchJobsResponse * searchJobs(const SearchJobsRequest &request);
    SearchQuantumTasksResponse * searchQuantumTasks(const SearchQuantumTasksRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(BraketClient)
    Q_DISABLE_COPY(BraketClient)

};

} // namespace Braket
} // namespace QtAws

#endif

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

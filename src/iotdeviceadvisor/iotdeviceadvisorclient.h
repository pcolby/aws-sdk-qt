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

#ifndef QTAWS_IOTDEVICEADVISORCLIENT_H
#define QTAWS_IOTDEVICEADVISORCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsiotdeviceadvisorglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IotDeviceAdvisor {

class IotDeviceAdvisorClientPrivate;
class CreateSuiteDefinitionRequest;
class CreateSuiteDefinitionResponse;
class DeleteSuiteDefinitionRequest;
class DeleteSuiteDefinitionResponse;
class GetEndpointRequest;
class GetEndpointResponse;
class GetSuiteDefinitionRequest;
class GetSuiteDefinitionResponse;
class GetSuiteRunRequest;
class GetSuiteRunResponse;
class GetSuiteRunReportRequest;
class GetSuiteRunReportResponse;
class ListSuiteDefinitionsRequest;
class ListSuiteDefinitionsResponse;
class ListSuiteRunsRequest;
class ListSuiteRunsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartSuiteRunRequest;
class StartSuiteRunResponse;
class StopSuiteRunRequest;
class StopSuiteRunResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateSuiteDefinitionRequest;
class UpdateSuiteDefinitionResponse;

class QTAWSIOTDEVICEADVISOR_EXPORT IotDeviceAdvisorClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IotDeviceAdvisorClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IotDeviceAdvisorClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateSuiteDefinitionResponse * createSuiteDefinition(const CreateSuiteDefinitionRequest &request);
    DeleteSuiteDefinitionResponse * deleteSuiteDefinition(const DeleteSuiteDefinitionRequest &request);
    GetEndpointResponse * getEndpoint(const GetEndpointRequest &request);
    GetSuiteDefinitionResponse * getSuiteDefinition(const GetSuiteDefinitionRequest &request);
    GetSuiteRunResponse * getSuiteRun(const GetSuiteRunRequest &request);
    GetSuiteRunReportResponse * getSuiteRunReport(const GetSuiteRunReportRequest &request);
    ListSuiteDefinitionsResponse * listSuiteDefinitions(const ListSuiteDefinitionsRequest &request);
    ListSuiteRunsResponse * listSuiteRuns(const ListSuiteRunsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartSuiteRunResponse * startSuiteRun(const StartSuiteRunRequest &request);
    StopSuiteRunResponse * stopSuiteRun(const StopSuiteRunRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateSuiteDefinitionResponse * updateSuiteDefinition(const UpdateSuiteDefinitionRequest &request);

private:
    Q_DECLARE_PRIVATE(IotDeviceAdvisorClient)
    Q_DISABLE_COPY(IotDeviceAdvisorClient)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONCOSTPROFILERCLIENT_H
#define QTAWS_APPLICATIONCOSTPROFILERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsapplicationcostprofilerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ApplicationCostProfiler {

class ApplicationCostProfilerClientPrivate;
class DeleteReportDefinitionRequest;
class DeleteReportDefinitionResponse;
class GetReportDefinitionRequest;
class GetReportDefinitionResponse;
class ImportApplicationUsageRequest;
class ImportApplicationUsageResponse;
class ListReportDefinitionsRequest;
class ListReportDefinitionsResponse;
class PutReportDefinitionRequest;
class PutReportDefinitionResponse;
class UpdateReportDefinitionRequest;
class UpdateReportDefinitionResponse;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT ApplicationCostProfilerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ApplicationCostProfilerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ApplicationCostProfilerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteReportDefinitionResponse * deleteReportDefinition(const DeleteReportDefinitionRequest &request);
    GetReportDefinitionResponse * getReportDefinition(const GetReportDefinitionRequest &request);
    ImportApplicationUsageResponse * importApplicationUsage(const ImportApplicationUsageRequest &request);
    ListReportDefinitionsResponse * listReportDefinitions(const ListReportDefinitionsRequest &request);
    PutReportDefinitionResponse * putReportDefinition(const PutReportDefinitionRequest &request);
    UpdateReportDefinitionResponse * updateReportDefinition(const UpdateReportDefinitionRequest &request);

private:
    Q_DECLARE_PRIVATE(ApplicationCostProfilerClient)
    Q_DISABLE_COPY(ApplicationCostProfilerClient)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif

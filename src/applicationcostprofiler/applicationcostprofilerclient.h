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

protected:
    /// @cond internal
    ApplicationCostProfilerClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit ApplicationCostProfilerClient(ApplicationCostProfilerClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(ApplicationCostProfilerClient)
    Q_DISABLE_COPY(ApplicationCostProfilerClient)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif

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

#ifndef QTAWS_COSTANDUSAGEREPORTCLIENT_H
#define QTAWS_COSTANDUSAGEREPORTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscostandusagereportglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CostandUsageReport {

class CostandUsageReportClientPrivate;
class DeleteReportDefinitionRequest;
class DeleteReportDefinitionResponse;
class DescribeReportDefinitionsRequest;
class DescribeReportDefinitionsResponse;
class ModifyReportDefinitionRequest;
class ModifyReportDefinitionResponse;
class PutReportDefinitionRequest;
class PutReportDefinitionResponse;

class QTAWSCOSTANDUSAGEREPORT_EXPORT CostandUsageReportClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CostandUsageReportClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CostandUsageReportClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteReportDefinitionResponse * deleteReportDefinition(const DeleteReportDefinitionRequest &request);
    DescribeReportDefinitionsResponse * describeReportDefinitions(const DescribeReportDefinitionsRequest &request);
    ModifyReportDefinitionResponse * modifyReportDefinition(const ModifyReportDefinitionRequest &request);
    PutReportDefinitionResponse * putReportDefinition(const PutReportDefinitionRequest &request);

private:
    Q_DECLARE_PRIVATE(CostandUsageReportClient)
    Q_DISABLE_COPY(CostandUsageReportClient)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif

/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_COSTANDUSAGEREPORTSERVICECLIENT_H
#define QTAWS_COSTANDUSAGEREPORTSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace CostandUsageReportService {

class CostandUsageReportServiceClientPrivate;
class DeleteReportDefinitionResponse;
class DescribeReportDefinitionsResponse;
class PutReportDefinitionResponse;

class QTAWS_EXPORT CostandUsageReportServiceClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CostandUsageReportServiceClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CostandUsageReportServiceClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteReportDefinitionResponse * deleteReportDefinition(const DeleteReportDefinitionRequest &request);
    DescribeReportDefinitionsResponse * describeReportDefinitions(const DescribeReportDefinitionsRequest &request);
    PutReportDefinitionResponse * putReportDefinition(const PutReportDefinitionRequest &request);

private:
    Q_DECLARE_PRIVATE(CostandUsageReportServiceClient)
    Q_DISABLE_COPY(CostandUsageReportServiceClient)

};

} // namespace CostandUsageReportService
} // namespace AWS

#endif

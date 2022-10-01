// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

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

#ifndef QTAWS_SUPPORTCLIENT_H
#define QTAWS_SUPPORTCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class SupportClientPrivate;

class QTAWS_EXPORT SupportClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SupportClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SupportClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    SupportAddAttachmentsToSetResponse * addAttachmentsToSet(const SupportAddAttachmentsToSetRequest &request);
    SupportAddCommunicationToCaseResponse * addCommunicationToCase(const SupportAddCommunicationToCaseRequest &request);
    SupportCreateCaseResponse * createCase(const SupportCreateCaseRequest &request);
    SupportDescribeAttachmentResponse * describeAttachment(const SupportDescribeAttachmentRequest &request);
    SupportDescribeCasesResponse * describeCases(const SupportDescribeCasesRequest &request);
    SupportDescribeCommunicationsResponse * describeCommunications(const SupportDescribeCommunicationsRequest &request);
    SupportDescribeServicesResponse * describeServices(const SupportDescribeServicesRequest &request);
    SupportDescribeSeverityLevelsResponse * describeSeverityLevels(const SupportDescribeSeverityLevelsRequest &request);
    SupportDescribeTrustedAdvisorCheckRefreshStatusesResponse * describeTrustedAdvisorCheckRefreshStatuses(const SupportDescribeTrustedAdvisorCheckRefreshStatusesRequest &request);
    SupportDescribeTrustedAdvisorCheckResultResponse * describeTrustedAdvisorCheckResult(const SupportDescribeTrustedAdvisorCheckResultRequest &request);
    SupportDescribeTrustedAdvisorCheckSummariesResponse * describeTrustedAdvisorCheckSummaries(const SupportDescribeTrustedAdvisorCheckSummariesRequest &request);
    SupportDescribeTrustedAdvisorChecksResponse * describeTrustedAdvisorChecks(const SupportDescribeTrustedAdvisorChecksRequest &request);
    SupportRefreshTrustedAdvisorCheckResponse * refreshTrustedAdvisorCheck(const SupportRefreshTrustedAdvisorCheckRequest &request);
    SupportResolveCaseResponse * resolveCase(const SupportResolveCaseRequest &request);

private:
    Q_DECLARE_PRIVATE(SupportClient)
    Q_DISABLE_COPY(SupportClient)

};

QTAWS_END_NAMESPACE

#endif

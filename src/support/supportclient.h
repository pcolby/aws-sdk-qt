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

#ifndef QTAWS_SUPPORTCLIENT_H
#define QTAWS_SUPPORTCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Support {

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
    AddAttachmentsToSetResponse * addAttachmentsToSet(const AddAttachmentsToSetRequest &request);
    AddCommunicationToCaseResponse * addCommunicationToCase(const AddCommunicationToCaseRequest &request);
    CreateCaseResponse * createCase(const CreateCaseRequest &request);
    DescribeAttachmentResponse * describeAttachment(const DescribeAttachmentRequest &request);
    DescribeCasesResponse * describeCases(const DescribeCasesRequest &request);
    DescribeCommunicationsResponse * describeCommunications(const DescribeCommunicationsRequest &request);
    DescribeServicesResponse * describeServices(const DescribeServicesRequest &request);
    DescribeSeverityLevelsResponse * describeSeverityLevels(const DescribeSeverityLevelsRequest &request);
    DescribeTrustedAdvisorCheckRefreshStatusesResponse * describeTrustedAdvisorCheckRefreshStatuses(const DescribeTrustedAdvisorCheckRefreshStatusesRequest &request);
    DescribeTrustedAdvisorCheckResultResponse * describeTrustedAdvisorCheckResult(const DescribeTrustedAdvisorCheckResultRequest &request);
    DescribeTrustedAdvisorCheckSummariesResponse * describeTrustedAdvisorCheckSummaries(const DescribeTrustedAdvisorCheckSummariesRequest &request);
    DescribeTrustedAdvisorChecksResponse * describeTrustedAdvisorChecks(const DescribeTrustedAdvisorChecksRequest &request);
    RefreshTrustedAdvisorCheckResponse * refreshTrustedAdvisorCheck(const RefreshTrustedAdvisorCheckRequest &request);
    ResolveCaseResponse * resolveCase(const ResolveCaseRequest &request);

private:
    Q_DECLARE_PRIVATE(SupportClient)
    Q_DISABLE_COPY(SupportClient)

};

} // namespace Support
} // namespace AWS

#endif

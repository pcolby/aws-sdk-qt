/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SUPPORTCLIENT_H
#define QTAWS_SUPPORTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class QtAws::Core::AwsAbstractClient;
class QtAws::Core::AwsAbstractCredentials;

namespace QtAws {
namespace Support {

class SupportClientPrivate;
class AddAttachmentsToSetRequest;
class AddAttachmentsToSetResponse;
class AddCommunicationToCaseRequest;
class AddCommunicationToCaseResponse;
class CreateCaseRequest;
class CreateCaseResponse;
class DescribeAttachmentRequest;
class DescribeAttachmentResponse;
class DescribeCasesRequest;
class DescribeCasesResponse;
class DescribeCommunicationsRequest;
class DescribeCommunicationsResponse;
class DescribeServicesRequest;
class DescribeServicesResponse;
class DescribeSeverityLevelsRequest;
class DescribeSeverityLevelsResponse;
class DescribeTrustedAdvisorCheckRefreshStatusesRequest;
class DescribeTrustedAdvisorCheckRefreshStatusesResponse;
class DescribeTrustedAdvisorCheckResultRequest;
class DescribeTrustedAdvisorCheckResultResponse;
class DescribeTrustedAdvisorCheckSummariesRequest;
class DescribeTrustedAdvisorCheckSummariesResponse;
class DescribeTrustedAdvisorChecksRequest;
class DescribeTrustedAdvisorChecksResponse;
class RefreshTrustedAdvisorCheckRequest;
class RefreshTrustedAdvisorCheckResponse;
class ResolveCaseRequest;
class ResolveCaseResponse;

class QTAWS_EXPORT SupportClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SupportClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SupportClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUPPORTCLIENT_H
#define QTAWS_SUPPORTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssupportglobal.h"

class QNetworkReply;

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

class QTAWSSUPPORT_EXPORT SupportClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SupportClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SupportClient(
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

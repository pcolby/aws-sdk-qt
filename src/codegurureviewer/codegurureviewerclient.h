// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEGURUREVIEWERCLIENT_H
#define QTAWS_CODEGURUREVIEWERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscodegurureviewerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CodeGuruReviewer {

class CodeGuruReviewerClientPrivate;
class AssociateRepositoryRequest;
class AssociateRepositoryResponse;
class CreateCodeReviewRequest;
class CreateCodeReviewResponse;
class DescribeCodeReviewRequest;
class DescribeCodeReviewResponse;
class DescribeRecommendationFeedbackRequest;
class DescribeRecommendationFeedbackResponse;
class DescribeRepositoryAssociationRequest;
class DescribeRepositoryAssociationResponse;
class DisassociateRepositoryRequest;
class DisassociateRepositoryResponse;
class ListCodeReviewsRequest;
class ListCodeReviewsResponse;
class ListRecommendationFeedbackRequest;
class ListRecommendationFeedbackResponse;
class ListRecommendationsRequest;
class ListRecommendationsResponse;
class ListRepositoryAssociationsRequest;
class ListRepositoryAssociationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutRecommendationFeedbackRequest;
class PutRecommendationFeedbackResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSCODEGURUREVIEWER_EXPORT CodeGuruReviewerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeGuruReviewerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CodeGuruReviewerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateRepositoryResponse * associateRepository(const AssociateRepositoryRequest &request);
    CreateCodeReviewResponse * createCodeReview(const CreateCodeReviewRequest &request);
    DescribeCodeReviewResponse * describeCodeReview(const DescribeCodeReviewRequest &request);
    DescribeRecommendationFeedbackResponse * describeRecommendationFeedback(const DescribeRecommendationFeedbackRequest &request);
    DescribeRepositoryAssociationResponse * describeRepositoryAssociation(const DescribeRepositoryAssociationRequest &request);
    DisassociateRepositoryResponse * disassociateRepository(const DisassociateRepositoryRequest &request);
    ListCodeReviewsResponse * listCodeReviews(const ListCodeReviewsRequest &request);
    ListRecommendationFeedbackResponse * listRecommendationFeedback(const ListRecommendationFeedbackRequest &request);
    ListRecommendationsResponse * listRecommendations(const ListRecommendationsRequest &request);
    ListRepositoryAssociationsResponse * listRepositoryAssociations(const ListRepositoryAssociationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutRecommendationFeedbackResponse * putRecommendationFeedback(const PutRecommendationFeedbackRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeGuruReviewerClient)
    Q_DISABLE_COPY(CodeGuruReviewerClient)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

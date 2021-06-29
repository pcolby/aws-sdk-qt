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

    CodeGuruReviewerClient(
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

protected:
    /// @cond internal
    CodeGuruReviewerClientPrivate * const d_ptr; ///< Internal d-pointer.
    CodeGuruReviewerClient(CodeGuruReviewerClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(CodeGuruReviewerClient)
    Q_DISABLE_COPY(CodeGuruReviewerClient)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif

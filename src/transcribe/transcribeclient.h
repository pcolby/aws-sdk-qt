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

#ifndef QTAWS_TRANSCRIBECLIENT_H
#define QTAWS_TRANSCRIBECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawstranscribeglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Transcribe {

class TranscribeClientPrivate;
class CreateCallAnalyticsCategoryRequest;
class CreateCallAnalyticsCategoryResponse;
class CreateLanguageModelRequest;
class CreateLanguageModelResponse;
class CreateMedicalVocabularyRequest;
class CreateMedicalVocabularyResponse;
class CreateVocabularyRequest;
class CreateVocabularyResponse;
class CreateVocabularyFilterRequest;
class CreateVocabularyFilterResponse;
class DeleteCallAnalyticsCategoryRequest;
class DeleteCallAnalyticsCategoryResponse;
class DeleteCallAnalyticsJobRequest;
class DeleteCallAnalyticsJobResponse;
class DeleteLanguageModelRequest;
class DeleteLanguageModelResponse;
class DeleteMedicalTranscriptionJobRequest;
class DeleteMedicalTranscriptionJobResponse;
class DeleteMedicalVocabularyRequest;
class DeleteMedicalVocabularyResponse;
class DeleteTranscriptionJobRequest;
class DeleteTranscriptionJobResponse;
class DeleteVocabularyRequest;
class DeleteVocabularyResponse;
class DeleteVocabularyFilterRequest;
class DeleteVocabularyFilterResponse;
class DescribeLanguageModelRequest;
class DescribeLanguageModelResponse;
class GetCallAnalyticsCategoryRequest;
class GetCallAnalyticsCategoryResponse;
class GetCallAnalyticsJobRequest;
class GetCallAnalyticsJobResponse;
class GetMedicalTranscriptionJobRequest;
class GetMedicalTranscriptionJobResponse;
class GetMedicalVocabularyRequest;
class GetMedicalVocabularyResponse;
class GetTranscriptionJobRequest;
class GetTranscriptionJobResponse;
class GetVocabularyRequest;
class GetVocabularyResponse;
class GetVocabularyFilterRequest;
class GetVocabularyFilterResponse;
class ListCallAnalyticsCategoriesRequest;
class ListCallAnalyticsCategoriesResponse;
class ListCallAnalyticsJobsRequest;
class ListCallAnalyticsJobsResponse;
class ListLanguageModelsRequest;
class ListLanguageModelsResponse;
class ListMedicalTranscriptionJobsRequest;
class ListMedicalTranscriptionJobsResponse;
class ListMedicalVocabulariesRequest;
class ListMedicalVocabulariesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTranscriptionJobsRequest;
class ListTranscriptionJobsResponse;
class ListVocabulariesRequest;
class ListVocabulariesResponse;
class ListVocabularyFiltersRequest;
class ListVocabularyFiltersResponse;
class StartCallAnalyticsJobRequest;
class StartCallAnalyticsJobResponse;
class StartMedicalTranscriptionJobRequest;
class StartMedicalTranscriptionJobResponse;
class StartTranscriptionJobRequest;
class StartTranscriptionJobResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateCallAnalyticsCategoryRequest;
class UpdateCallAnalyticsCategoryResponse;
class UpdateMedicalVocabularyRequest;
class UpdateMedicalVocabularyResponse;
class UpdateVocabularyRequest;
class UpdateVocabularyResponse;
class UpdateVocabularyFilterRequest;
class UpdateVocabularyFilterResponse;

class QTAWSTRANSCRIBE_EXPORT TranscribeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    TranscribeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit TranscribeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateCallAnalyticsCategoryResponse * createCallAnalyticsCategory(const CreateCallAnalyticsCategoryRequest &request);
    CreateLanguageModelResponse * createLanguageModel(const CreateLanguageModelRequest &request);
    CreateMedicalVocabularyResponse * createMedicalVocabulary(const CreateMedicalVocabularyRequest &request);
    CreateVocabularyResponse * createVocabulary(const CreateVocabularyRequest &request);
    CreateVocabularyFilterResponse * createVocabularyFilter(const CreateVocabularyFilterRequest &request);
    DeleteCallAnalyticsCategoryResponse * deleteCallAnalyticsCategory(const DeleteCallAnalyticsCategoryRequest &request);
    DeleteCallAnalyticsJobResponse * deleteCallAnalyticsJob(const DeleteCallAnalyticsJobRequest &request);
    DeleteLanguageModelResponse * deleteLanguageModel(const DeleteLanguageModelRequest &request);
    DeleteMedicalTranscriptionJobResponse * deleteMedicalTranscriptionJob(const DeleteMedicalTranscriptionJobRequest &request);
    DeleteMedicalVocabularyResponse * deleteMedicalVocabulary(const DeleteMedicalVocabularyRequest &request);
    DeleteTranscriptionJobResponse * deleteTranscriptionJob(const DeleteTranscriptionJobRequest &request);
    DeleteVocabularyResponse * deleteVocabulary(const DeleteVocabularyRequest &request);
    DeleteVocabularyFilterResponse * deleteVocabularyFilter(const DeleteVocabularyFilterRequest &request);
    DescribeLanguageModelResponse * describeLanguageModel(const DescribeLanguageModelRequest &request);
    GetCallAnalyticsCategoryResponse * getCallAnalyticsCategory(const GetCallAnalyticsCategoryRequest &request);
    GetCallAnalyticsJobResponse * getCallAnalyticsJob(const GetCallAnalyticsJobRequest &request);
    GetMedicalTranscriptionJobResponse * getMedicalTranscriptionJob(const GetMedicalTranscriptionJobRequest &request);
    GetMedicalVocabularyResponse * getMedicalVocabulary(const GetMedicalVocabularyRequest &request);
    GetTranscriptionJobResponse * getTranscriptionJob(const GetTranscriptionJobRequest &request);
    GetVocabularyResponse * getVocabulary(const GetVocabularyRequest &request);
    GetVocabularyFilterResponse * getVocabularyFilter(const GetVocabularyFilterRequest &request);
    ListCallAnalyticsCategoriesResponse * listCallAnalyticsCategories(const ListCallAnalyticsCategoriesRequest &request);
    ListCallAnalyticsJobsResponse * listCallAnalyticsJobs(const ListCallAnalyticsJobsRequest &request);
    ListLanguageModelsResponse * listLanguageModels(const ListLanguageModelsRequest &request);
    ListMedicalTranscriptionJobsResponse * listMedicalTranscriptionJobs(const ListMedicalTranscriptionJobsRequest &request);
    ListMedicalVocabulariesResponse * listMedicalVocabularies(const ListMedicalVocabulariesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTranscriptionJobsResponse * listTranscriptionJobs(const ListTranscriptionJobsRequest &request);
    ListVocabulariesResponse * listVocabularies(const ListVocabulariesRequest &request);
    ListVocabularyFiltersResponse * listVocabularyFilters(const ListVocabularyFiltersRequest &request);
    StartCallAnalyticsJobResponse * startCallAnalyticsJob(const StartCallAnalyticsJobRequest &request);
    StartMedicalTranscriptionJobResponse * startMedicalTranscriptionJob(const StartMedicalTranscriptionJobRequest &request);
    StartTranscriptionJobResponse * startTranscriptionJob(const StartTranscriptionJobRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateCallAnalyticsCategoryResponse * updateCallAnalyticsCategory(const UpdateCallAnalyticsCategoryRequest &request);
    UpdateMedicalVocabularyResponse * updateMedicalVocabulary(const UpdateMedicalVocabularyRequest &request);
    UpdateVocabularyResponse * updateVocabulary(const UpdateVocabularyRequest &request);
    UpdateVocabularyFilterResponse * updateVocabularyFilter(const UpdateVocabularyFilterRequest &request);

private:
    Q_DECLARE_PRIVATE(TranscribeClient)
    Q_DISABLE_COPY(TranscribeClient)

};

} // namespace Transcribe
} // namespace QtAws

#endif

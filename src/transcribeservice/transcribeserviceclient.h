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

#ifndef QTAWS_TRANSCRIBESERVICECLIENT_H
#define QTAWS_TRANSCRIBESERVICECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawstranscribeserviceglobal.h"

class QNetworkReply;

namespace QtAws {
namespace TranscribeService {

class TranscribeServiceClientPrivate;
class CreateLanguageModelRequest;
class CreateLanguageModelResponse;
class CreateMedicalVocabularyRequest;
class CreateMedicalVocabularyResponse;
class CreateVocabularyRequest;
class CreateVocabularyResponse;
class CreateVocabularyFilterRequest;
class CreateVocabularyFilterResponse;
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
class ListLanguageModelsRequest;
class ListLanguageModelsResponse;
class ListMedicalTranscriptionJobsRequest;
class ListMedicalTranscriptionJobsResponse;
class ListMedicalVocabulariesRequest;
class ListMedicalVocabulariesResponse;
class ListTranscriptionJobsRequest;
class ListTranscriptionJobsResponse;
class ListVocabulariesRequest;
class ListVocabulariesResponse;
class ListVocabularyFiltersRequest;
class ListVocabularyFiltersResponse;
class StartMedicalTranscriptionJobRequest;
class StartMedicalTranscriptionJobResponse;
class StartTranscriptionJobRequest;
class StartTranscriptionJobResponse;
class UpdateMedicalVocabularyRequest;
class UpdateMedicalVocabularyResponse;
class UpdateVocabularyRequest;
class UpdateVocabularyResponse;
class UpdateVocabularyFilterRequest;
class UpdateVocabularyFilterResponse;

class QTAWSTRANSCRIBESERVICE_EXPORT TranscribeServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    TranscribeServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    TranscribeServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateLanguageModelResponse * createLanguageModel(const CreateLanguageModelRequest &request);
    CreateMedicalVocabularyResponse * createMedicalVocabulary(const CreateMedicalVocabularyRequest &request);
    CreateVocabularyResponse * createVocabulary(const CreateVocabularyRequest &request);
    CreateVocabularyFilterResponse * createVocabularyFilter(const CreateVocabularyFilterRequest &request);
    DeleteLanguageModelResponse * deleteLanguageModel(const DeleteLanguageModelRequest &request);
    DeleteMedicalTranscriptionJobResponse * deleteMedicalTranscriptionJob(const DeleteMedicalTranscriptionJobRequest &request);
    DeleteMedicalVocabularyResponse * deleteMedicalVocabulary(const DeleteMedicalVocabularyRequest &request);
    DeleteTranscriptionJobResponse * deleteTranscriptionJob(const DeleteTranscriptionJobRequest &request);
    DeleteVocabularyResponse * deleteVocabulary(const DeleteVocabularyRequest &request);
    DeleteVocabularyFilterResponse * deleteVocabularyFilter(const DeleteVocabularyFilterRequest &request);
    DescribeLanguageModelResponse * describeLanguageModel(const DescribeLanguageModelRequest &request);
    GetMedicalTranscriptionJobResponse * getMedicalTranscriptionJob(const GetMedicalTranscriptionJobRequest &request);
    GetMedicalVocabularyResponse * getMedicalVocabulary(const GetMedicalVocabularyRequest &request);
    GetTranscriptionJobResponse * getTranscriptionJob(const GetTranscriptionJobRequest &request);
    GetVocabularyResponse * getVocabulary(const GetVocabularyRequest &request);
    GetVocabularyFilterResponse * getVocabularyFilter(const GetVocabularyFilterRequest &request);
    ListLanguageModelsResponse * listLanguageModels(const ListLanguageModelsRequest &request);
    ListMedicalTranscriptionJobsResponse * listMedicalTranscriptionJobs(const ListMedicalTranscriptionJobsRequest &request);
    ListMedicalVocabulariesResponse * listMedicalVocabularies(const ListMedicalVocabulariesRequest &request);
    ListTranscriptionJobsResponse * listTranscriptionJobs(const ListTranscriptionJobsRequest &request);
    ListVocabulariesResponse * listVocabularies(const ListVocabulariesRequest &request);
    ListVocabularyFiltersResponse * listVocabularyFilters(const ListVocabularyFiltersRequest &request);
    StartMedicalTranscriptionJobResponse * startMedicalTranscriptionJob(const StartMedicalTranscriptionJobRequest &request);
    StartTranscriptionJobResponse * startTranscriptionJob(const StartTranscriptionJobRequest &request);
    UpdateMedicalVocabularyResponse * updateMedicalVocabulary(const UpdateMedicalVocabularyRequest &request);
    UpdateVocabularyResponse * updateVocabulary(const UpdateVocabularyRequest &request);
    UpdateVocabularyFilterResponse * updateVocabularyFilter(const UpdateVocabularyFilterRequest &request);

protected:
    /// @cond internal
    TranscribeServiceClientPrivate * const d_ptr; ///< Internal d-pointer.
    TranscribeServiceClient(TranscribeServiceClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(TranscribeServiceClient)
    Q_DISABLE_COPY(TranscribeServiceClient)

};

} // namespace TranscribeService
} // namespace QtAws

#endif

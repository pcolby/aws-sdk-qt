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

class QNetworkReply;

namespace QtAws {
namespace TranscribeService {

class TranscribeServiceClientPrivate;
class CreateVocabularyRequest;
class CreateVocabularyResponse;
class DeleteTranscriptionJobRequest;
class DeleteTranscriptionJobResponse;
class DeleteVocabularyRequest;
class DeleteVocabularyResponse;
class GetTranscriptionJobRequest;
class GetTranscriptionJobResponse;
class GetVocabularyRequest;
class GetVocabularyResponse;
class ListTranscriptionJobsRequest;
class ListTranscriptionJobsResponse;
class ListVocabulariesRequest;
class ListVocabulariesResponse;
class StartTranscriptionJobRequest;
class StartTranscriptionJobResponse;
class UpdateVocabularyRequest;
class UpdateVocabularyResponse;

class QTAWS_EXPORT TranscribeServiceClient : public QtAws::Core::AwsAbstractClient {
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
    CreateVocabularyResponse * createVocabulary(const CreateVocabularyRequest &request);
    DeleteTranscriptionJobResponse * deleteTranscriptionJob(const DeleteTranscriptionJobRequest &request);
    DeleteVocabularyResponse * deleteVocabulary(const DeleteVocabularyRequest &request);
    GetTranscriptionJobResponse * getTranscriptionJob(const GetTranscriptionJobRequest &request);
    GetVocabularyResponse * getVocabulary(const GetVocabularyRequest &request);
    ListTranscriptionJobsResponse * listTranscriptionJobs(const ListTranscriptionJobsRequest &request);
    ListVocabulariesResponse * listVocabularies(const ListVocabulariesRequest &request);
    StartTranscriptionJobResponse * startTranscriptionJob(const StartTranscriptionJobRequest &request);
    UpdateVocabularyResponse * updateVocabulary(const UpdateVocabularyRequest &request);

private:
    Q_DECLARE_PRIVATE(TranscribeServiceClient)
    Q_DISABLE_COPY(TranscribeServiceClient)

};

} // namespace TranscribeService
} // namespace QtAws

#endif

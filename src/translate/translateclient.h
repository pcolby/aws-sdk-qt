// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSLATECLIENT_H
#define QTAWS_TRANSLATECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawstranslateglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Translate {

class TranslateClientPrivate;
class CreateParallelDataRequest;
class CreateParallelDataResponse;
class DeleteParallelDataRequest;
class DeleteParallelDataResponse;
class DeleteTerminologyRequest;
class DeleteTerminologyResponse;
class DescribeTextTranslationJobRequest;
class DescribeTextTranslationJobResponse;
class GetParallelDataRequest;
class GetParallelDataResponse;
class GetTerminologyRequest;
class GetTerminologyResponse;
class ImportTerminologyRequest;
class ImportTerminologyResponse;
class ListLanguagesRequest;
class ListLanguagesResponse;
class ListParallelDataRequest;
class ListParallelDataResponse;
class ListTerminologiesRequest;
class ListTerminologiesResponse;
class ListTextTranslationJobsRequest;
class ListTextTranslationJobsResponse;
class StartTextTranslationJobRequest;
class StartTextTranslationJobResponse;
class StopTextTranslationJobRequest;
class StopTextTranslationJobResponse;
class TranslateTextRequest;
class TranslateTextResponse;
class UpdateParallelDataRequest;
class UpdateParallelDataResponse;

class QTAWSTRANSLATE_EXPORT TranslateClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    TranslateClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit TranslateClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateParallelDataResponse * createParallelData(const CreateParallelDataRequest &request);
    DeleteParallelDataResponse * deleteParallelData(const DeleteParallelDataRequest &request);
    DeleteTerminologyResponse * deleteTerminology(const DeleteTerminologyRequest &request);
    DescribeTextTranslationJobResponse * describeTextTranslationJob(const DescribeTextTranslationJobRequest &request);
    GetParallelDataResponse * getParallelData(const GetParallelDataRequest &request);
    GetTerminologyResponse * getTerminology(const GetTerminologyRequest &request);
    ImportTerminologyResponse * importTerminology(const ImportTerminologyRequest &request);
    ListLanguagesResponse * listLanguages(const ListLanguagesRequest &request);
    ListParallelDataResponse * listParallelData(const ListParallelDataRequest &request);
    ListTerminologiesResponse * listTerminologies(const ListTerminologiesRequest &request);
    ListTextTranslationJobsResponse * listTextTranslationJobs(const ListTextTranslationJobsRequest &request);
    StartTextTranslationJobResponse * startTextTranslationJob(const StartTextTranslationJobRequest &request);
    StopTextTranslationJobResponse * stopTextTranslationJob(const StopTextTranslationJobRequest &request);
    TranslateTextResponse * translateText(const TranslateTextRequest &request);
    UpdateParallelDataResponse * updateParallelData(const UpdateParallelDataRequest &request);

private:
    Q_DECLARE_PRIVATE(TranslateClient)
    Q_DISABLE_COPY(TranslateClient)

};

} // namespace Translate
} // namespace QtAws

#endif

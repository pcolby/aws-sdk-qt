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

    TranslateClient(
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
    ListParallelDataResponse * listParallelData(const ListParallelDataRequest &request);
    ListTerminologiesResponse * listTerminologies(const ListTerminologiesRequest &request);
    ListTextTranslationJobsResponse * listTextTranslationJobs(const ListTextTranslationJobsRequest &request);
    StartTextTranslationJobResponse * startTextTranslationJob(const StartTextTranslationJobRequest &request);
    StopTextTranslationJobResponse * stopTextTranslationJob(const StopTextTranslationJobRequest &request);
    TranslateTextResponse * translateText(const TranslateTextRequest &request);
    UpdateParallelDataResponse * updateParallelData(const UpdateParallelDataRequest &request);

protected:
    /// @cond internal
    TranslateClientPrivate * const d_ptr; ///< Internal d-pointer.
    TranslateClient(TranslateClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(TranslateClient)
    Q_DISABLE_COPY(TranslateClient)

};

} // namespace Translate
} // namespace QtAws

#endif

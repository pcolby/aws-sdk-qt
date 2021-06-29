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

#ifndef QTAWS_POLLYCLIENT_H
#define QTAWS_POLLYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawspollyglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Polly {

class PollyClientPrivate;
class DeleteLexiconRequest;
class DeleteLexiconResponse;
class DescribeVoicesRequest;
class DescribeVoicesResponse;
class GetLexiconRequest;
class GetLexiconResponse;
class GetSpeechSynthesisTaskRequest;
class GetSpeechSynthesisTaskResponse;
class ListLexiconsRequest;
class ListLexiconsResponse;
class ListSpeechSynthesisTasksRequest;
class ListSpeechSynthesisTasksResponse;
class PutLexiconRequest;
class PutLexiconResponse;
class StartSpeechSynthesisTaskRequest;
class StartSpeechSynthesisTaskResponse;
class SynthesizeSpeechRequest;
class SynthesizeSpeechResponse;

class QTAWSPOLLY_EXPORT PollyClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PollyClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit PollyClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteLexiconResponse * deleteLexicon(const DeleteLexiconRequest &request);
    DescribeVoicesResponse * describeVoices(const DescribeVoicesRequest &request);
    GetLexiconResponse * getLexicon(const GetLexiconRequest &request);
    GetSpeechSynthesisTaskResponse * getSpeechSynthesisTask(const GetSpeechSynthesisTaskRequest &request);
    ListLexiconsResponse * listLexicons(const ListLexiconsRequest &request);
    ListSpeechSynthesisTasksResponse * listSpeechSynthesisTasks(const ListSpeechSynthesisTasksRequest &request);
    PutLexiconResponse * putLexicon(const PutLexiconRequest &request);
    StartSpeechSynthesisTaskResponse * startSpeechSynthesisTask(const StartSpeechSynthesisTaskRequest &request);
    SynthesizeSpeechResponse * synthesizeSpeech(const SynthesizeSpeechRequest &request);

protected:
    /// @cond internal
    PollyClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit PollyClient(PollyClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(PollyClient)
    Q_DISABLE_COPY(PollyClient)

};

} // namespace Polly
} // namespace QtAws

#endif

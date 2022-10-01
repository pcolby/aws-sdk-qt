// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

private:
    Q_DECLARE_PRIVATE(PollyClient)
    Q_DISABLE_COPY(PollyClient)

};

} // namespace Polly
} // namespace QtAws

#endif

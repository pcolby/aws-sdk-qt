// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSCRIBESTREAMINGCLIENT_H
#define QTAWS_TRANSCRIBESTREAMINGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawstranscribestreamingglobal.h"

class QNetworkReply;

namespace QtAws {
namespace TranscribeStreaming {

class TranscribeStreamingClientPrivate;
class StartMedicalStreamTranscriptionRequest;
class StartMedicalStreamTranscriptionResponse;
class StartStreamTranscriptionRequest;
class StartStreamTranscriptionResponse;

class QTAWSTRANSCRIBESTREAMING_EXPORT TranscribeStreamingClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    TranscribeStreamingClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit TranscribeStreamingClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    StartMedicalStreamTranscriptionResponse * startMedicalStreamTranscription(const StartMedicalStreamTranscriptionRequest &request);
    StartStreamTranscriptionResponse * startStreamTranscription(const StartStreamTranscriptionRequest &request);

private:
    Q_DECLARE_PRIVATE(TranscribeStreamingClient)
    Q_DISABLE_COPY(TranscribeStreamingClient)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif

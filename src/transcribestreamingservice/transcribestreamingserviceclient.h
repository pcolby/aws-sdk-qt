/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_TRANSCRIBESTREAMINGSERVICECLIENT_H
#define QTAWS_TRANSCRIBESTREAMINGSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace TranscribeStreamingService {

class TranscribeStreamingServiceClientPrivate;
class StartStreamTranscriptionRequest;
class StartStreamTranscriptionResponse;

class QTAWS_EXPORT TranscribeStreamingServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    TranscribeStreamingServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    TranscribeStreamingServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    StartStreamTranscriptionResponse * startStreamTranscription(const StartStreamTranscriptionRequest &request);

private:
    Q_DECLARE_PRIVATE(TranscribeStreamingServiceClient)
    Q_DISABLE_COPY(TranscribeStreamingServiceClient)

};

} // namespace TranscribeStreamingService
} // namespace QtAws

#endif

/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_POLLYCLIENT_H
#define QTAWS_POLLYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace QtAws {
namespace Polly {

class PollyClientPrivate;
class DeleteLexiconRequest;
class DeleteLexiconResponse;
class DescribeVoicesRequest;
class DescribeVoicesResponse;
class GetLexiconRequest;
class GetLexiconResponse;
class ListLexiconsRequest;
class ListLexiconsResponse;
class PutLexiconRequest;
class PutLexiconResponse;
class SynthesizeSpeechRequest;
class SynthesizeSpeechResponse;

class QTAWS_EXPORT PollyClient : public AwsAbstractClient {
    Q_OBJECT

public:
    PollyClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    PollyClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteLexiconResponse * deleteLexicon(const DeleteLexiconRequest &request);
    DescribeVoicesResponse * describeVoices(const DescribeVoicesRequest &request);
    GetLexiconResponse * getLexicon(const GetLexiconRequest &request);
    ListLexiconsResponse * listLexicons(const ListLexiconsRequest &request);
    PutLexiconResponse * putLexicon(const PutLexiconRequest &request);
    SynthesizeSpeechResponse * synthesizeSpeech(const SynthesizeSpeechRequest &request);

private:
    Q_DECLARE_PRIVATE(PollyClient)
    Q_DISABLE_COPY(PollyClient)

};

} // namespace Polly
} // namespace QtAws

#endif

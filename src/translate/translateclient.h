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

class QNetworkReply;

namespace QtAws {
namespace Translate {

class TranslateClientPrivate;
class DeleteTerminologyRequest;
class DeleteTerminologyResponse;
class GetTerminologyRequest;
class GetTerminologyResponse;
class ImportTerminologyRequest;
class ImportTerminologyResponse;
class ListTerminologiesRequest;
class ListTerminologiesResponse;
class TranslateTextRequest;
class TranslateTextResponse;

class QTAWS_EXPORT TranslateClient : public QtAws::Core::AwsAbstractClient {
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
    DeleteTerminologyResponse * deleteTerminology(const DeleteTerminologyRequest &request);
    GetTerminologyResponse * getTerminology(const GetTerminologyRequest &request);
    ImportTerminologyResponse * importTerminology(const ImportTerminologyRequest &request);
    ListTerminologiesResponse * listTerminologies(const ListTerminologiesRequest &request);
    TranslateTextResponse * translateText(const TranslateTextRequest &request);

private:
    Q_DECLARE_PRIVATE(TranslateClient)
    Q_DISABLE_COPY(TranslateClient)

};

} // namespace Translate
} // namespace QtAws

#endif

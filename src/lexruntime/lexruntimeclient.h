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

#ifndef QTAWS_LEXRUNTIMECLIENT_H
#define QTAWS_LEXRUNTIMECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawslexruntimeglobal.h"

class QNetworkReply;

namespace QtAws {
namespace LexRuntime {

class LexRuntimeClientPrivate;
class DeleteSessionRequest;
class DeleteSessionResponse;
class GetSessionRequest;
class GetSessionResponse;
class PostContentRequest;
class PostContentResponse;
class PostTextRequest;
class PostTextResponse;
class PutSessionRequest;
class PutSessionResponse;

class QTAWSLEXRUNTIME_EXPORT LexRuntimeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LexRuntimeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit LexRuntimeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteSessionResponse * deleteSession(const DeleteSessionRequest &request);
    GetSessionResponse * getSession(const GetSessionRequest &request);
    PostContentResponse * postContent(const PostContentRequest &request);
    PostTextResponse * postText(const PostTextRequest &request);
    PutSessionResponse * putSession(const PutSessionRequest &request);

private:
    Q_DECLARE_PRIVATE(LexRuntimeClient)
    Q_DISABLE_COPY(LexRuntimeClient)

};

} // namespace LexRuntime
} // namespace QtAws

#endif

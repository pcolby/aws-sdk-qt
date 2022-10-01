// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

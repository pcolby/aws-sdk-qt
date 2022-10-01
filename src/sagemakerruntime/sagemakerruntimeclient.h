// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERRUNTIMECLIENT_H
#define QTAWS_SAGEMAKERRUNTIMECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssagemakerruntimeglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SageMakerRuntime {

class SageMakerRuntimeClientPrivate;
class InvokeEndpointRequest;
class InvokeEndpointResponse;
class InvokeEndpointAsyncRequest;
class InvokeEndpointAsyncResponse;

class QTAWSSAGEMAKERRUNTIME_EXPORT SageMakerRuntimeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SageMakerRuntimeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SageMakerRuntimeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    InvokeEndpointResponse * invokeEndpoint(const InvokeEndpointRequest &request);
    InvokeEndpointAsyncResponse * invokeEndpointAsync(const InvokeEndpointAsyncRequest &request);

private:
    Q_DECLARE_PRIVATE(SageMakerRuntimeClient)
    Q_DISABLE_COPY(SageMakerRuntimeClient)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif

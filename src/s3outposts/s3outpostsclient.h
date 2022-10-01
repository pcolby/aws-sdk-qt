// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3OUTPOSTSCLIENT_H
#define QTAWS_S3OUTPOSTSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawss3outpostsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace S3Outposts {

class S3OutpostsClientPrivate;
class CreateEndpointRequest;
class CreateEndpointResponse;
class DeleteEndpointRequest;
class DeleteEndpointResponse;
class ListEndpointsRequest;
class ListEndpointsResponse;
class ListSharedEndpointsRequest;
class ListSharedEndpointsResponse;

class QTAWSS3OUTPOSTS_EXPORT S3OutpostsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    S3OutpostsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit S3OutpostsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateEndpointResponse * createEndpoint(const CreateEndpointRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    ListEndpointsResponse * listEndpoints(const ListEndpointsRequest &request);
    ListSharedEndpointsResponse * listSharedEndpoints(const ListSharedEndpointsRequest &request);

private:
    Q_DECLARE_PRIVATE(S3OutpostsClient)
    Q_DISABLE_COPY(S3OutpostsClient)

};

} // namespace S3Outposts
} // namespace QtAws

#endif

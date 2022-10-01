// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARCONNECTIONSCLIENT_H
#define QTAWS_CODESTARCONNECTIONSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscodestarconnectionsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CodeStarconnections {

class CodeStarconnectionsClientPrivate;
class CreateConnectionRequest;
class CreateConnectionResponse;
class CreateHostRequest;
class CreateHostResponse;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class DeleteHostRequest;
class DeleteHostResponse;
class GetConnectionRequest;
class GetConnectionResponse;
class GetHostRequest;
class GetHostResponse;
class ListConnectionsRequest;
class ListConnectionsResponse;
class ListHostsRequest;
class ListHostsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateHostRequest;
class UpdateHostResponse;

class QTAWSCODESTARCONNECTIONS_EXPORT CodeStarconnectionsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeStarconnectionsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CodeStarconnectionsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateConnectionResponse * createConnection(const CreateConnectionRequest &request);
    CreateHostResponse * createHost(const CreateHostRequest &request);
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    DeleteHostResponse * deleteHost(const DeleteHostRequest &request);
    GetConnectionResponse * getConnection(const GetConnectionRequest &request);
    GetHostResponse * getHost(const GetHostRequest &request);
    ListConnectionsResponse * listConnections(const ListConnectionsRequest &request);
    ListHostsResponse * listHosts(const ListHostsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateHostResponse * updateHost(const UpdateHostRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeStarconnectionsClient)
    Q_DISABLE_COPY(CodeStarconnectionsClient)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif

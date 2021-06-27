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

#ifndef QTAWS_CODESTARCONNECTIONSCLIENT_H
#define QTAWS_CODESTARCONNECTIONSCLIENT_H

#include "core/awsabstractclient.h"

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

class QTAWS_EXPORT CodeStarconnectionsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeStarconnectionsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeStarconnectionsClient(
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

protected:
    /// @cond internal
    CodeStarconnectionsClientPrivate * const d_ptr; ///< Internal d-pointer.
    CodeStarconnectionsClient(CodeStarconnectionsClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(CodeStarconnectionsClient)
    Q_DISABLE_COPY(CodeStarconnectionsClient)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif

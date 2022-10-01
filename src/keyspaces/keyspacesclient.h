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

#ifndef QTAWS_KEYSPACESCLIENT_H
#define QTAWS_KEYSPACESCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawskeyspacesglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Keyspaces {

class KeyspacesClientPrivate;
class CreateKeyspaceRequest;
class CreateKeyspaceResponse;
class CreateTableRequest;
class CreateTableResponse;
class DeleteKeyspaceRequest;
class DeleteKeyspaceResponse;
class DeleteTableRequest;
class DeleteTableResponse;
class GetKeyspaceRequest;
class GetKeyspaceResponse;
class GetTableRequest;
class GetTableResponse;
class ListKeyspacesRequest;
class ListKeyspacesResponse;
class ListTablesRequest;
class ListTablesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RestoreTableRequest;
class RestoreTableResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateTableRequest;
class UpdateTableResponse;

class QTAWSKEYSPACES_EXPORT KeyspacesClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KeyspacesClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit KeyspacesClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateKeyspaceResponse * createKeyspace(const CreateKeyspaceRequest &request);
    CreateTableResponse * createTable(const CreateTableRequest &request);
    DeleteKeyspaceResponse * deleteKeyspace(const DeleteKeyspaceRequest &request);
    DeleteTableResponse * deleteTable(const DeleteTableRequest &request);
    GetKeyspaceResponse * getKeyspace(const GetKeyspaceRequest &request);
    GetTableResponse * getTable(const GetTableRequest &request);
    ListKeyspacesResponse * listKeyspaces(const ListKeyspacesRequest &request);
    ListTablesResponse * listTables(const ListTablesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RestoreTableResponse * restoreTable(const RestoreTableRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateTableResponse * updateTable(const UpdateTableRequest &request);

private:
    Q_DECLARE_PRIVATE(KeyspacesClient)
    Q_DISABLE_COPY(KeyspacesClient)

};

} // namespace Keyspaces
} // namespace QtAws

#endif

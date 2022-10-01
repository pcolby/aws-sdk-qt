// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

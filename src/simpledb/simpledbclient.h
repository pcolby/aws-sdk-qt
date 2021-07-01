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

#ifndef QTAWS_SIMPLEDBCLIENT_H
#define QTAWS_SIMPLEDBCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssimpledbglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SimpleDB {

class SimpleDBClientPrivate;
class BatchDeleteAttributesRequest;
class BatchDeleteAttributesResponse;
class BatchPutAttributesRequest;
class BatchPutAttributesResponse;
class CreateDomainRequest;
class CreateDomainResponse;
class DeleteAttributesRequest;
class DeleteAttributesResponse;
class DeleteDomainRequest;
class DeleteDomainResponse;
class DomainMetadataRequest;
class DomainMetadataResponse;
class GetAttributesRequest;
class GetAttributesResponse;
class ListDomainsRequest;
class ListDomainsResponse;
class PutAttributesRequest;
class PutAttributesResponse;
class SelectRequest;
class SelectResponse;

class QTAWSSIMPLEDB_EXPORT SimpleDBClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SimpleDBClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SimpleDBClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchDeleteAttributesResponse * batchDeleteAttributes(const BatchDeleteAttributesRequest &request);
    BatchPutAttributesResponse * batchPutAttributes(const BatchPutAttributesRequest &request);
    CreateDomainResponse * createDomain(const CreateDomainRequest &request);
    DeleteAttributesResponse * deleteAttributes(const DeleteAttributesRequest &request);
    DeleteDomainResponse * deleteDomain(const DeleteDomainRequest &request);
    DomainMetadataResponse * domainMetadata(const DomainMetadataRequest &request);
    GetAttributesResponse * getAttributes(const GetAttributesRequest &request);
    ListDomainsResponse * listDomains(const ListDomainsRequest &request);
    PutAttributesResponse * putAttributes(const PutAttributesRequest &request);
    SelectResponse * select(const SelectRequest &request);

private:
    Q_DECLARE_PRIVATE(SimpleDBClient)
    Q_DISABLE_COPY(SimpleDBClient)

};

} // namespace SimpleDB
} // namespace QtAws

#endif

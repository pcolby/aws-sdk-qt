/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SIMPLEDBCLIENT_H
#define QTAWS_SIMPLEDBCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace SimpleDB {

class SimpleDBClientPrivate;
class BatchDeleteAttributesResponse;
class BatchPutAttributesResponse;
class CreateDomainResponse;
class DeleteAttributesResponse;
class DeleteDomainResponse;
class DomainMetadataResponse;
class GetAttributesResponse;
class ListDomainsResponse;
class PutAttributesResponse;
class SelectResponse;

class QTAWS_EXPORT SimpleDBClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SimpleDBClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SimpleDBClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif

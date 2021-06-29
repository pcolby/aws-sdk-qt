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

#ifndef QTAWS_SCHEMASCLIENT_H
#define QTAWS_SCHEMASCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsschemasglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Schemas {

class SchemasClientPrivate;
class CreateDiscovererRequest;
class CreateDiscovererResponse;
class CreateRegistryRequest;
class CreateRegistryResponse;
class CreateSchemaRequest;
class CreateSchemaResponse;
class DeleteDiscovererRequest;
class DeleteDiscovererResponse;
class DeleteRegistryRequest;
class DeleteRegistryResponse;
class DeleteResourcePolicyRequest;
class DeleteResourcePolicyResponse;
class DeleteSchemaRequest;
class DeleteSchemaResponse;
class DeleteSchemaVersionRequest;
class DeleteSchemaVersionResponse;
class DescribeCodeBindingRequest;
class DescribeCodeBindingResponse;
class DescribeDiscovererRequest;
class DescribeDiscovererResponse;
class DescribeRegistryRequest;
class DescribeRegistryResponse;
class DescribeSchemaRequest;
class DescribeSchemaResponse;
class ExportSchemaRequest;
class ExportSchemaResponse;
class GetCodeBindingSourceRequest;
class GetCodeBindingSourceResponse;
class GetDiscoveredSchemaRequest;
class GetDiscoveredSchemaResponse;
class GetResourcePolicyRequest;
class GetResourcePolicyResponse;
class ListDiscoverersRequest;
class ListDiscoverersResponse;
class ListRegistriesRequest;
class ListRegistriesResponse;
class ListSchemaVersionsRequest;
class ListSchemaVersionsResponse;
class ListSchemasRequest;
class ListSchemasResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutCodeBindingRequest;
class PutCodeBindingResponse;
class PutResourcePolicyRequest;
class PutResourcePolicyResponse;
class SearchSchemasRequest;
class SearchSchemasResponse;
class StartDiscovererRequest;
class StartDiscovererResponse;
class StopDiscovererRequest;
class StopDiscovererResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDiscovererRequest;
class UpdateDiscovererResponse;
class UpdateRegistryRequest;
class UpdateRegistryResponse;
class UpdateSchemaRequest;
class UpdateSchemaResponse;

class QTAWSSCHEMAS_EXPORT SchemasClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SchemasClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SchemasClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateDiscovererResponse * createDiscoverer(const CreateDiscovererRequest &request);
    CreateRegistryResponse * createRegistry(const CreateRegistryRequest &request);
    CreateSchemaResponse * createSchema(const CreateSchemaRequest &request);
    DeleteDiscovererResponse * deleteDiscoverer(const DeleteDiscovererRequest &request);
    DeleteRegistryResponse * deleteRegistry(const DeleteRegistryRequest &request);
    DeleteResourcePolicyResponse * deleteResourcePolicy(const DeleteResourcePolicyRequest &request);
    DeleteSchemaResponse * deleteSchema(const DeleteSchemaRequest &request);
    DeleteSchemaVersionResponse * deleteSchemaVersion(const DeleteSchemaVersionRequest &request);
    DescribeCodeBindingResponse * describeCodeBinding(const DescribeCodeBindingRequest &request);
    DescribeDiscovererResponse * describeDiscoverer(const DescribeDiscovererRequest &request);
    DescribeRegistryResponse * describeRegistry(const DescribeRegistryRequest &request);
    DescribeSchemaResponse * describeSchema(const DescribeSchemaRequest &request);
    ExportSchemaResponse * exportSchema(const ExportSchemaRequest &request);
    GetCodeBindingSourceResponse * getCodeBindingSource(const GetCodeBindingSourceRequest &request);
    GetDiscoveredSchemaResponse * getDiscoveredSchema(const GetDiscoveredSchemaRequest &request);
    GetResourcePolicyResponse * getResourcePolicy(const GetResourcePolicyRequest &request);
    ListDiscoverersResponse * listDiscoverers(const ListDiscoverersRequest &request);
    ListRegistriesResponse * listRegistries(const ListRegistriesRequest &request);
    ListSchemaVersionsResponse * listSchemaVersions(const ListSchemaVersionsRequest &request);
    ListSchemasResponse * listSchemas(const ListSchemasRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutCodeBindingResponse * putCodeBinding(const PutCodeBindingRequest &request);
    PutResourcePolicyResponse * putResourcePolicy(const PutResourcePolicyRequest &request);
    SearchSchemasResponse * searchSchemas(const SearchSchemasRequest &request);
    StartDiscovererResponse * startDiscoverer(const StartDiscovererRequest &request);
    StopDiscovererResponse * stopDiscoverer(const StopDiscovererRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDiscovererResponse * updateDiscoverer(const UpdateDiscovererRequest &request);
    UpdateRegistryResponse * updateRegistry(const UpdateRegistryRequest &request);
    UpdateSchemaResponse * updateSchema(const UpdateSchemaRequest &request);

protected:
    /// @cond internal
    SchemasClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit SchemasClient(SchemasClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(SchemasClient)
    Q_DISABLE_COPY(SchemasClient)

};

} // namespace Schemas
} // namespace QtAws

#endif

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

#ifndef QTAWS_ELASTICSEARCHSERVICECLIENT_H
#define QTAWS_ELASTICSEARCHSERVICECLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace ElasticsearchService {

class ElasticsearchServiceClientPrivate;

class QTAWS_EXPORT ElasticsearchServiceClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ElasticsearchServiceClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ElasticsearchServiceClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsResponse * addTags(const AddTagsRequest &request);
    CreateElasticsearchDomainResponse * createElasticsearchDomain(const CreateElasticsearchDomainRequest &request);
    DeleteElasticsearchDomainResponse * deleteElasticsearchDomain(const DeleteElasticsearchDomainRequest &request);
    DeleteElasticsearchServiceRoleResponse * deleteElasticsearchServiceRole();
    DescribeElasticsearchDomainResponse * describeElasticsearchDomain(const DescribeElasticsearchDomainRequest &request);
    DescribeElasticsearchDomainConfigResponse * describeElasticsearchDomainConfig(const DescribeElasticsearchDomainConfigRequest &request);
    DescribeElasticsearchDomainsResponse * describeElasticsearchDomains(const DescribeElasticsearchDomainsRequest &request);
    DescribeElasticsearchInstanceTypeLimitsResponse * describeElasticsearchInstanceTypeLimits(const DescribeElasticsearchInstanceTypeLimitsRequest &request);
    ListDomainNamesResponse * listDomainNames();
    ListElasticsearchInstanceTypesResponse * listElasticsearchInstanceTypes(const ListElasticsearchInstanceTypesRequest &request);
    ListElasticsearchVersionsResponse * listElasticsearchVersions(const ListElasticsearchVersionsRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    RemoveTagsResponse * removeTags(const RemoveTagsRequest &request);
    UpdateElasticsearchDomainConfigResponse * updateElasticsearchDomainConfig(const UpdateElasticsearchDomainConfigRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticsearchServiceClient)
    Q_DISABLE_COPY(ElasticsearchServiceClient)

};

} // namespace ElasticsearchService
} // namespace AWS

#endif

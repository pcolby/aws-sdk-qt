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

#ifndef QTAWS_RESOURCEGROUPSTAGGINGAPICLIENT_H
#define QTAWS_RESOURCEGROUPSTAGGINGAPICLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace ResourceGroupsTaggingAPI {

class ResourceGroupsTaggingAPIClientPrivate;
class GetResourcesRequest;
class GetResourcesResponse;
class GetTagKeysRequest;
class GetTagKeysResponse;
class GetTagValuesRequest;
class GetTagValuesResponse;
class TagResourcesRequest;
class TagResourcesResponse;
class UntagResourcesRequest;
class UntagResourcesResponse;

class QTAWS_EXPORT ResourceGroupsTaggingAPIClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ResourceGroupsTaggingAPIClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ResourceGroupsTaggingAPIClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetResourcesResponse * getResources(const GetResourcesRequest &request);
    GetTagKeysResponse * getTagKeys(const GetTagKeysRequest &request);
    GetTagValuesResponse * getTagValues(const GetTagValuesRequest &request);
    TagResourcesResponse * tagResources(const TagResourcesRequest &request);
    UntagResourcesResponse * untagResources(const UntagResourcesRequest &request);

private:
    Q_DECLARE_PRIVATE(ResourceGroupsTaggingAPIClient)
    Q_DISABLE_COPY(ResourceGroupsTaggingAPIClient)

};

} // namespace ResourceGroupsTaggingAPI
} // namespace AWS

#endif

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

#ifndef QTAWS_RESOURCEGROUPSTAGGINGAPICLIENT_H
#define QTAWS_RESOURCEGROUPSTAGGINGAPICLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsresourcegroupstaggingapiglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

class ResourceGroupsTaggingAPIClientPrivate;
class DescribeReportCreationRequest;
class DescribeReportCreationResponse;
class GetComplianceSummaryRequest;
class GetComplianceSummaryResponse;
class GetResourcesRequest;
class GetResourcesResponse;
class GetTagKeysRequest;
class GetTagKeysResponse;
class GetTagValuesRequest;
class GetTagValuesResponse;
class StartReportCreationRequest;
class StartReportCreationResponse;
class TagResourcesRequest;
class TagResourcesResponse;
class UntagResourcesRequest;
class UntagResourcesResponse;

class QTAWSRESOURCEGROUPSTAGGINGAPI_EXPORT ResourceGroupsTaggingAPIClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ResourceGroupsTaggingAPIClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ResourceGroupsTaggingAPIClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeReportCreationResponse * describeReportCreation(const DescribeReportCreationRequest &request);
    GetComplianceSummaryResponse * getComplianceSummary(const GetComplianceSummaryRequest &request);
    GetResourcesResponse * getResources(const GetResourcesRequest &request);
    GetTagKeysResponse * getTagKeys(const GetTagKeysRequest &request);
    GetTagValuesResponse * getTagValues(const GetTagValuesRequest &request);
    StartReportCreationResponse * startReportCreation(const StartReportCreationRequest &request);
    TagResourcesResponse * tagResources(const TagResourcesRequest &request);
    UntagResourcesResponse * untagResources(const UntagResourcesRequest &request);

private:
    Q_DECLARE_PRIVATE(ResourceGroupsTaggingAPIClient)
    Q_DISABLE_COPY(ResourceGroupsTaggingAPIClient)

};

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOURCEGROUPSTAGGINGCLIENT_H
#define QTAWS_RESOURCEGROUPSTAGGINGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsresourcegroupstaggingglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ResourceGroupsTagging {

class ResourceGroupsTaggingClientPrivate;
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

class QTAWSRESOURCEGROUPSTAGGING_EXPORT ResourceGroupsTaggingClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ResourceGroupsTaggingClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ResourceGroupsTaggingClient(
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
    Q_DECLARE_PRIVATE(ResourceGroupsTaggingClient)
    Q_DISABLE_COPY(ResourceGroupsTaggingClient)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif

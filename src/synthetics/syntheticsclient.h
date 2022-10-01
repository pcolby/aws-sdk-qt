// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNTHETICSCLIENT_H
#define QTAWS_SYNTHETICSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssyntheticsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Synthetics {

class SyntheticsClientPrivate;
class AssociateResourceRequest;
class AssociateResourceResponse;
class CreateCanaryRequest;
class CreateCanaryResponse;
class CreateGroupRequest;
class CreateGroupResponse;
class DeleteCanaryRequest;
class DeleteCanaryResponse;
class DeleteGroupRequest;
class DeleteGroupResponse;
class DescribeCanariesRequest;
class DescribeCanariesResponse;
class DescribeCanariesLastRunRequest;
class DescribeCanariesLastRunResponse;
class DescribeRuntimeVersionsRequest;
class DescribeRuntimeVersionsResponse;
class DisassociateResourceRequest;
class DisassociateResourceResponse;
class GetCanaryRequest;
class GetCanaryResponse;
class GetCanaryRunsRequest;
class GetCanaryRunsResponse;
class GetGroupRequest;
class GetGroupResponse;
class ListAssociatedGroupsRequest;
class ListAssociatedGroupsResponse;
class ListGroupResourcesRequest;
class ListGroupResourcesResponse;
class ListGroupsRequest;
class ListGroupsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartCanaryRequest;
class StartCanaryResponse;
class StopCanaryRequest;
class StopCanaryResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateCanaryRequest;
class UpdateCanaryResponse;

class QTAWSSYNTHETICS_EXPORT SyntheticsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SyntheticsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SyntheticsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateResourceResponse * associateResource(const AssociateResourceRequest &request);
    CreateCanaryResponse * createCanary(const CreateCanaryRequest &request);
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    DeleteCanaryResponse * deleteCanary(const DeleteCanaryRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DescribeCanariesResponse * describeCanaries(const DescribeCanariesRequest &request);
    DescribeCanariesLastRunResponse * describeCanariesLastRun(const DescribeCanariesLastRunRequest &request);
    DescribeRuntimeVersionsResponse * describeRuntimeVersions(const DescribeRuntimeVersionsRequest &request);
    DisassociateResourceResponse * disassociateResource(const DisassociateResourceRequest &request);
    GetCanaryResponse * getCanary(const GetCanaryRequest &request);
    GetCanaryRunsResponse * getCanaryRuns(const GetCanaryRunsRequest &request);
    GetGroupResponse * getGroup(const GetGroupRequest &request);
    ListAssociatedGroupsResponse * listAssociatedGroups(const ListAssociatedGroupsRequest &request);
    ListGroupResourcesResponse * listGroupResources(const ListGroupResourcesRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartCanaryResponse * startCanary(const StartCanaryRequest &request);
    StopCanaryResponse * stopCanary(const StopCanaryRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateCanaryResponse * updateCanary(const UpdateCanaryRequest &request);

private:
    Q_DECLARE_PRIVATE(SyntheticsClient)
    Q_DISABLE_COPY(SyntheticsClient)

};

} // namespace Synthetics
} // namespace QtAws

#endif

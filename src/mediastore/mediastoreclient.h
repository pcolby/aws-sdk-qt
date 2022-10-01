// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIASTORECLIENT_H
#define QTAWS_MEDIASTORECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmediastoreglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MediaStore {

class MediaStoreClientPrivate;
class CreateContainerRequest;
class CreateContainerResponse;
class DeleteContainerRequest;
class DeleteContainerResponse;
class DeleteContainerPolicyRequest;
class DeleteContainerPolicyResponse;
class DeleteCorsPolicyRequest;
class DeleteCorsPolicyResponse;
class DeleteLifecyclePolicyRequest;
class DeleteLifecyclePolicyResponse;
class DeleteMetricPolicyRequest;
class DeleteMetricPolicyResponse;
class DescribeContainerRequest;
class DescribeContainerResponse;
class GetContainerPolicyRequest;
class GetContainerPolicyResponse;
class GetCorsPolicyRequest;
class GetCorsPolicyResponse;
class GetLifecyclePolicyRequest;
class GetLifecyclePolicyResponse;
class GetMetricPolicyRequest;
class GetMetricPolicyResponse;
class ListContainersRequest;
class ListContainersResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutContainerPolicyRequest;
class PutContainerPolicyResponse;
class PutCorsPolicyRequest;
class PutCorsPolicyResponse;
class PutLifecyclePolicyRequest;
class PutLifecyclePolicyResponse;
class PutMetricPolicyRequest;
class PutMetricPolicyResponse;
class StartAccessLoggingRequest;
class StartAccessLoggingResponse;
class StopAccessLoggingRequest;
class StopAccessLoggingResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSMEDIASTORE_EXPORT MediaStoreClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaStoreClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MediaStoreClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateContainerResponse * createContainer(const CreateContainerRequest &request);
    DeleteContainerResponse * deleteContainer(const DeleteContainerRequest &request);
    DeleteContainerPolicyResponse * deleteContainerPolicy(const DeleteContainerPolicyRequest &request);
    DeleteCorsPolicyResponse * deleteCorsPolicy(const DeleteCorsPolicyRequest &request);
    DeleteLifecyclePolicyResponse * deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request);
    DeleteMetricPolicyResponse * deleteMetricPolicy(const DeleteMetricPolicyRequest &request);
    DescribeContainerResponse * describeContainer(const DescribeContainerRequest &request);
    GetContainerPolicyResponse * getContainerPolicy(const GetContainerPolicyRequest &request);
    GetCorsPolicyResponse * getCorsPolicy(const GetCorsPolicyRequest &request);
    GetLifecyclePolicyResponse * getLifecyclePolicy(const GetLifecyclePolicyRequest &request);
    GetMetricPolicyResponse * getMetricPolicy(const GetMetricPolicyRequest &request);
    ListContainersResponse * listContainers(const ListContainersRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutContainerPolicyResponse * putContainerPolicy(const PutContainerPolicyRequest &request);
    PutCorsPolicyResponse * putCorsPolicy(const PutCorsPolicyRequest &request);
    PutLifecyclePolicyResponse * putLifecyclePolicy(const PutLifecyclePolicyRequest &request);
    PutMetricPolicyResponse * putMetricPolicy(const PutMetricPolicyRequest &request);
    StartAccessLoggingResponse * startAccessLogging(const StartAccessLoggingRequest &request);
    StopAccessLoggingResponse * stopAccessLogging(const StopAccessLoggingRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaStoreClient)
    Q_DISABLE_COPY(MediaStoreClient)

};

} // namespace MediaStore
} // namespace QtAws

#endif

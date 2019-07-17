/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_MEDIASTORECLIENT_H
#define QTAWS_MEDIASTORECLIENT_H

#include "core/awsabstractclient.h"

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
class DescribeContainerRequest;
class DescribeContainerResponse;
class GetContainerPolicyRequest;
class GetContainerPolicyResponse;
class GetCorsPolicyRequest;
class GetCorsPolicyResponse;
class GetLifecyclePolicyRequest;
class GetLifecyclePolicyResponse;
class ListContainersRequest;
class ListContainersResponse;
class PutContainerPolicyRequest;
class PutContainerPolicyResponse;
class PutCorsPolicyRequest;
class PutCorsPolicyResponse;
class PutLifecyclePolicyRequest;
class PutLifecyclePolicyResponse;

class QTAWS_EXPORT MediaStoreClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaStoreClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaStoreClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateContainerResponse * createContainer(const CreateContainerRequest &request);
    DeleteContainerResponse * deleteContainer(const DeleteContainerRequest &request);
    DeleteContainerPolicyResponse * deleteContainerPolicy(const DeleteContainerPolicyRequest &request);
    DeleteCorsPolicyResponse * deleteCorsPolicy(const DeleteCorsPolicyRequest &request);
    DeleteLifecyclePolicyResponse * deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request);
    DescribeContainerResponse * describeContainer(const DescribeContainerRequest &request);
    GetContainerPolicyResponse * getContainerPolicy(const GetContainerPolicyRequest &request);
    GetCorsPolicyResponse * getCorsPolicy(const GetCorsPolicyRequest &request);
    GetLifecyclePolicyResponse * getLifecyclePolicy(const GetLifecyclePolicyRequest &request);
    ListContainersResponse * listContainers(const ListContainersRequest &request);
    PutContainerPolicyResponse * putContainerPolicy(const PutContainerPolicyRequest &request);
    PutCorsPolicyResponse * putCorsPolicy(const PutCorsPolicyRequest &request);
    PutLifecyclePolicyResponse * putLifecyclePolicy(const PutLifecyclePolicyRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaStoreClient)
    Q_DISABLE_COPY(MediaStoreClient)

};

} // namespace MediaStore
} // namespace QtAws

#endif

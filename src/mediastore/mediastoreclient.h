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

#ifndef QTAWS_MEDIASTORECLIENT_H
#define QTAWS_MEDIASTORECLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace MediaStore {

class MediaStoreClientPrivate;

class QTAWS_EXPORT MediaStoreClient : public AwsAbstractClient {
    Q_OBJECT

public:
    MediaStoreClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaStoreClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateContainerResponse * createContainer(const CreateContainerRequest &request);
    DeleteContainerResponse * deleteContainer(const DeleteContainerRequest &request);
    DeleteContainerPolicyResponse * deleteContainerPolicy(const DeleteContainerPolicyRequest &request);
    DeleteCorsPolicyResponse * deleteCorsPolicy(const DeleteCorsPolicyRequest &request);
    DescribeContainerResponse * describeContainer(const DescribeContainerRequest &request);
    GetContainerPolicyResponse * getContainerPolicy(const GetContainerPolicyRequest &request);
    GetCorsPolicyResponse * getCorsPolicy(const GetCorsPolicyRequest &request);
    ListContainersResponse * listContainers(const ListContainersRequest &request);
    PutContainerPolicyResponse * putContainerPolicy(const PutContainerPolicyRequest &request);
    PutCorsPolicyResponse * putCorsPolicy(const PutCorsPolicyRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaStoreClient)
    Q_DISABLE_COPY(MediaStoreClient)

};

} // namespace MediaStore
} // namespace AWS

#endif

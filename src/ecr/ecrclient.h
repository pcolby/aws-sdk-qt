/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_ECRCLIENT_H
#define QTAWS_ECRCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class EcrClientPrivate;

class QTAWS_EXPORT EcrClient : public AwsAbstractClient {
    Q_OBJECT

public:
    EcrClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    EcrClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    EcrBatchCheckLayerAvailabilityResponse * batchCheckLayerAvailability(const EcrBatchCheckLayerAvailabilityRequest &request);
    EcrBatchDeleteImageResponse * batchDeleteImage(const EcrBatchDeleteImageRequest &request);
    EcrBatchGetImageResponse * batchGetImage(const EcrBatchGetImageRequest &request);
    EcrCompleteLayerUploadResponse * completeLayerUpload(const EcrCompleteLayerUploadRequest &request);
    EcrCreateRepositoryResponse * createRepository(const EcrCreateRepositoryRequest &request);
    EcrDeleteRepositoryResponse * deleteRepository(const EcrDeleteRepositoryRequest &request);
    EcrDeleteRepositoryPolicyResponse * deleteRepositoryPolicy(const EcrDeleteRepositoryPolicyRequest &request);
    EcrDescribeRepositoriesResponse * describeRepositories(const EcrDescribeRepositoriesRequest &request);
    EcrGetAuthorizationTokenResponse * getAuthorizationToken(const EcrGetAuthorizationTokenRequest &request);
    EcrGetDownloadUrlForLayerResponse * getDownloadUrlForLayer(const EcrGetDownloadUrlForLayerRequest &request);
    EcrGetRepositoryPolicyResponse * getRepositoryPolicy(const EcrGetRepositoryPolicyRequest &request);
    EcrInitiateLayerUploadResponse * initiateLayerUpload(const EcrInitiateLayerUploadRequest &request);
    EcrListImagesResponse * listImages(const EcrListImagesRequest &request);
    EcrPutImageResponse * putImage(const EcrPutImageRequest &request);
    EcrSetRepositoryPolicyResponse * setRepositoryPolicy(const EcrSetRepositoryPolicyRequest &request);
    EcrUploadLayerPartResponse * uploadLayerPart(const EcrUploadLayerPartRequest &request);

private:
    Q_DECLARE_PRIVATE(EcrClient)
    Q_DISABLE_COPY(EcrClient)

};

QTAWS_END_NAMESPACE

#endif

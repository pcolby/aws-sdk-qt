// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDCONTROLCLIENT_H
#define QTAWS_CLOUDCONTROLCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscloudcontrolglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CloudControl {

class CloudControlClientPrivate;
class CancelResourceRequestRequest;
class CancelResourceRequestResponse;
class CreateResourceRequest;
class CreateResourceResponse;
class DeleteResourceRequest;
class DeleteResourceResponse;
class GetResourceRequest;
class GetResourceResponse;
class GetResourceRequestStatusRequest;
class GetResourceRequestStatusResponse;
class ListResourceRequestsRequest;
class ListResourceRequestsResponse;
class ListResourcesRequest;
class ListResourcesResponse;
class UpdateResourceRequest;
class UpdateResourceResponse;

class QTAWSCLOUDCONTROL_EXPORT CloudControlClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudControlClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CloudControlClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelResourceRequestResponse * cancelResourceRequest(const CancelResourceRequestRequest &request);
    CreateResourceResponse * createResource(const CreateResourceRequest &request);
    DeleteResourceResponse * deleteResource(const DeleteResourceRequest &request);
    GetResourceResponse * getResource(const GetResourceRequest &request);
    GetResourceRequestStatusResponse * getResourceRequestStatus(const GetResourceRequestStatusRequest &request);
    ListResourceRequestsResponse * listResourceRequests(const ListResourceRequestsRequest &request);
    ListResourcesResponse * listResources(const ListResourcesRequest &request);
    UpdateResourceResponse * updateResource(const UpdateResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudControlClient)
    Q_DISABLE_COPY(CloudControlClient)

};

} // namespace CloudControl
} // namespace QtAws

#endif

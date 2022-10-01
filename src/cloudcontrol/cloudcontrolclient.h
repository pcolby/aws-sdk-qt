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

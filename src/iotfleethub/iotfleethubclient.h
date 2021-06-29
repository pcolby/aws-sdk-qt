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

#ifndef QTAWS_IOTFLEETHUBCLIENT_H
#define QTAWS_IOTFLEETHUBCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsiotfleethubglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IoTFleetHub {

class IoTFleetHubClientPrivate;
class CreateApplicationRequest;
class CreateApplicationResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class DescribeApplicationRequest;
class DescribeApplicationResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;

class QTAWSIOTFLEETHUB_EXPORT IoTFleetHubClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTFleetHubClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IoTFleetHubClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DescribeApplicationResponse * describeApplication(const DescribeApplicationRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);

protected:
    /// @cond internal
    IoTFleetHubClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit IoTFleetHubClient(IoTFleetHubClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(IoTFleetHubClient)
    Q_DISABLE_COPY(IoTFleetHubClient)

};

} // namespace IoTFleetHub
} // namespace QtAws

#endif

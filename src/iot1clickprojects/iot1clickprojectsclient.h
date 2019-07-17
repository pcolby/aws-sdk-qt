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

#ifndef QTAWS_IOT1CLICKPROJECTSCLIENT_H
#define QTAWS_IOT1CLICKPROJECTSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace IoT1ClickProjects {

class IoT1ClickProjectsClientPrivate;
class AssociateDeviceWithPlacementRequest;
class AssociateDeviceWithPlacementResponse;
class CreatePlacementRequest;
class CreatePlacementResponse;
class CreateProjectRequest;
class CreateProjectResponse;
class DeletePlacementRequest;
class DeletePlacementResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DescribePlacementRequest;
class DescribePlacementResponse;
class DescribeProjectRequest;
class DescribeProjectResponse;
class DisassociateDeviceFromPlacementRequest;
class DisassociateDeviceFromPlacementResponse;
class GetDevicesInPlacementRequest;
class GetDevicesInPlacementResponse;
class ListPlacementsRequest;
class ListPlacementsResponse;
class ListProjectsRequest;
class ListProjectsResponse;
class UpdatePlacementRequest;
class UpdatePlacementResponse;
class UpdateProjectRequest;
class UpdateProjectResponse;

class QTAWS_EXPORT IoT1ClickProjectsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoT1ClickProjectsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    IoT1ClickProjectsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateDeviceWithPlacementResponse * associateDeviceWithPlacement(const AssociateDeviceWithPlacementRequest &request);
    CreatePlacementResponse * createPlacement(const CreatePlacementRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    DeletePlacementResponse * deletePlacement(const DeletePlacementRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DescribePlacementResponse * describePlacement(const DescribePlacementRequest &request);
    DescribeProjectResponse * describeProject(const DescribeProjectRequest &request);
    DisassociateDeviceFromPlacementResponse * disassociateDeviceFromPlacement(const DisassociateDeviceFromPlacementRequest &request);
    GetDevicesInPlacementResponse * getDevicesInPlacement(const GetDevicesInPlacementRequest &request);
    ListPlacementsResponse * listPlacements(const ListPlacementsRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    UpdatePlacementResponse * updatePlacement(const UpdatePlacementRequest &request);
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);

private:
    Q_DECLARE_PRIVATE(IoT1ClickProjectsClient)
    Q_DISABLE_COPY(IoT1ClickProjectsClient)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif

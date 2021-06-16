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

#ifndef QTAWS_IOTDATAPLANECLIENT_H
#define QTAWS_IOTDATAPLANECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace IoTDataPlane {

class IoTDataPlaneClientPrivate;
class DeleteThingShadowRequest;
class DeleteThingShadowResponse;
class GetThingShadowRequest;
class GetThingShadowResponse;
class ListNamedShadowsForThingRequest;
class ListNamedShadowsForThingResponse;
class PublishRequest;
class PublishResponse;
class UpdateThingShadowRequest;
class UpdateThingShadowResponse;

class QTAWS_EXPORT IoTDataPlaneClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTDataPlaneClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    IoTDataPlaneClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteThingShadowResponse * deleteThingShadow(const DeleteThingShadowRequest &request);
    GetThingShadowResponse * getThingShadow(const GetThingShadowRequest &request);
    ListNamedShadowsForThingResponse * listNamedShadowsForThing(const ListNamedShadowsForThingRequest &request);
    PublishResponse * publish(const PublishRequest &request);
    UpdateThingShadowResponse * updateThingShadow(const UpdateThingShadowRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTDataPlaneClient)
    Q_DISABLE_COPY(IoTDataPlaneClient)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif

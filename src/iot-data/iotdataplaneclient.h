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

#ifndef QTAWS_IOTDATAPLANECLIENT_H
#define QTAWS_IOTDATAPLANECLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace IoTDataPlane {

class IoTDataPlaneClientPrivate;

class QTAWS_EXPORT IoTDataPlaneClient : public AwsAbstractClient {
    Q_OBJECT

public:
    IoTDataPlaneClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    IoTDataPlaneClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteThingShadowResponse * deleteThingShadow(const DeleteThingShadowRequest &request);
    GetThingShadowResponse * getThingShadow(const GetThingShadowRequest &request);
    PublishResponse * publish(const PublishRequest &request);
    UpdateThingShadowResponse * updateThingShadow(const UpdateThingShadowRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTDataPlaneClient)
    Q_DISABLE_COPY(IoTDataPlaneClient)

};

} // namespace IoTDataPlane
} // namespace AWS

#endif

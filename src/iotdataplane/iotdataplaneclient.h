// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTDATAPLANECLIENT_H
#define QTAWS_IOTDATAPLANECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsiotdataplaneglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IoTDataPlane {

class IoTDataPlaneClientPrivate;
class DeleteThingShadowRequest;
class DeleteThingShadowResponse;
class GetRetainedMessageRequest;
class GetRetainedMessageResponse;
class GetThingShadowRequest;
class GetThingShadowResponse;
class ListNamedShadowsForThingRequest;
class ListNamedShadowsForThingResponse;
class ListRetainedMessagesRequest;
class ListRetainedMessagesResponse;
class PublishRequest;
class PublishResponse;
class UpdateThingShadowRequest;
class UpdateThingShadowResponse;

class QTAWSIOTDATAPLANE_EXPORT IoTDataPlaneClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTDataPlaneClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IoTDataPlaneClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteThingShadowResponse * deleteThingShadow(const DeleteThingShadowRequest &request);
    GetRetainedMessageResponse * getRetainedMessage(const GetRetainedMessageRequest &request);
    GetThingShadowResponse * getThingShadow(const GetThingShadowRequest &request);
    ListNamedShadowsForThingResponse * listNamedShadowsForThing(const ListNamedShadowsForThingRequest &request);
    ListRetainedMessagesResponse * listRetainedMessages(const ListRetainedMessagesRequest &request);
    PublishResponse * publish(const PublishRequest &request);
    UpdateThingShadowResponse * updateThingShadow(const UpdateThingShadowRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTDataPlaneClient)
    Q_DISABLE_COPY(IoTDataPlaneClient)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif

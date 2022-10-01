// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTSMSVOICECLIENT_H
#define QTAWS_PINPOINTSMSVOICECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawspinpointsmsvoiceglobal.h"

class QNetworkReply;

namespace QtAws {
namespace PinpointSmsVoice {

class PinpointSmsVoiceClientPrivate;
class CreateConfigurationSetRequest;
class CreateConfigurationSetResponse;
class CreateConfigurationSetEventDestinationRequest;
class CreateConfigurationSetEventDestinationResponse;
class DeleteConfigurationSetRequest;
class DeleteConfigurationSetResponse;
class DeleteConfigurationSetEventDestinationRequest;
class DeleteConfigurationSetEventDestinationResponse;
class GetConfigurationSetEventDestinationsRequest;
class GetConfigurationSetEventDestinationsResponse;
class ListConfigurationSetsRequest;
class ListConfigurationSetsResponse;
class SendVoiceMessageRequest;
class SendVoiceMessageResponse;
class UpdateConfigurationSetEventDestinationRequest;
class UpdateConfigurationSetEventDestinationResponse;

class QTAWSPINPOINTSMSVOICE_EXPORT PinpointSmsVoiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PinpointSmsVoiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit PinpointSmsVoiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateConfigurationSetResponse * createConfigurationSet(const CreateConfigurationSetRequest &request);
    CreateConfigurationSetEventDestinationResponse * createConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest &request);
    DeleteConfigurationSetResponse * deleteConfigurationSet(const DeleteConfigurationSetRequest &request);
    DeleteConfigurationSetEventDestinationResponse * deleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest &request);
    GetConfigurationSetEventDestinationsResponse * getConfigurationSetEventDestinations(const GetConfigurationSetEventDestinationsRequest &request);
    ListConfigurationSetsResponse * listConfigurationSets(const ListConfigurationSetsRequest &request);
    SendVoiceMessageResponse * sendVoiceMessage(const SendVoiceMessageRequest &request);
    UpdateConfigurationSetEventDestinationResponse * updateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest &request);

private:
    Q_DECLARE_PRIVATE(PinpointSmsVoiceClient)
    Q_DISABLE_COPY(PinpointSmsVoiceClient)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif

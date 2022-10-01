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

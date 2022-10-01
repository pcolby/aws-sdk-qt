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

#include "pinpointsmsvoiceclient.h"
#include "pinpointsmsvoiceclient_p.h"

#include "core/awssignaturev4.h"
#include "createconfigurationsetrequest.h"
#include "createconfigurationsetresponse.h"
#include "createconfigurationseteventdestinationrequest.h"
#include "createconfigurationseteventdestinationresponse.h"
#include "deleteconfigurationsetrequest.h"
#include "deleteconfigurationsetresponse.h"
#include "deleteconfigurationseteventdestinationrequest.h"
#include "deleteconfigurationseteventdestinationresponse.h"
#include "getconfigurationseteventdestinationsrequest.h"
#include "getconfigurationseteventdestinationsresponse.h"
#include "listconfigurationsetsrequest.h"
#include "listconfigurationsetsresponse.h"
#include "sendvoicemessagerequest.h"
#include "sendvoicemessageresponse.h"
#include "updateconfigurationseteventdestinationrequest.h"
#include "updateconfigurationseteventdestinationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::PinpointSmsVoice
 * \brief Contains classess for accessing Amazon Pinpoint SMS and Voice Service.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::PinpointSmsVoiceClient
 * \brief The PinpointSmsVoiceClient class provides access to the Amazon Pinpoint SMS and Voice Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPinpointSmsVoice
 *
 */

/*!
 * \brief Constructs a PinpointSmsVoiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
PinpointSmsVoiceClient::PinpointSmsVoiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PinpointSmsVoiceClientPrivate(this), parent)
{
    Q_D(PinpointSmsVoiceClient);
    d->apiVersion = QStringLiteral("2018-09-05");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("sms-voice.pinpoint");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Pinpoint SMS and Voice Service");
    d->serviceName = QStringLiteral("sms-voice");
}

/*!
 * \overload PinpointSmsVoiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
PinpointSmsVoiceClient::PinpointSmsVoiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PinpointSmsVoiceClientPrivate(this), parent)
{
    Q_D(PinpointSmsVoiceClient);
    d->apiVersion = QStringLiteral("2018-09-05");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("sms-voice.pinpoint");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Pinpoint SMS and Voice Service");
    d->serviceName = QStringLiteral("sms-voice");
}

/*!
 * Sends \a request to the PinpointSmsVoiceClient service, and returns a pointer to an
 * CreateConfigurationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new configuration set. After you create the configuration set, you can add one or more event destinations to
 */
CreateConfigurationSetResponse * PinpointSmsVoiceClient::createConfigurationSet(const CreateConfigurationSetRequest &request)
{
    return qobject_cast<CreateConfigurationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceClient service, and returns a pointer to an
 * CreateConfigurationSetEventDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateConfigurationSetEventDestinationResponse * PinpointSmsVoiceClient::createConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest &request)
{
    return qobject_cast<CreateConfigurationSetEventDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceClient service, and returns a pointer to an
 * DeleteConfigurationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteConfigurationSetResponse * PinpointSmsVoiceClient::deleteConfigurationSet(const DeleteConfigurationSetRequest &request)
{
    return qobject_cast<DeleteConfigurationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceClient service, and returns a pointer to an
 * DeleteConfigurationSetEventDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteConfigurationSetEventDestinationResponse * PinpointSmsVoiceClient::deleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest &request)
{
    return qobject_cast<DeleteConfigurationSetEventDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceClient service, and returns a pointer to an
 * GetConfigurationSetEventDestinationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Obtain information about an event destination, including the types of events it reports, the Amazon Resource Name (ARN)
 */
GetConfigurationSetEventDestinationsResponse * PinpointSmsVoiceClient::getConfigurationSetEventDestinations(const GetConfigurationSetEventDestinationsRequest &request)
{
    return qobject_cast<GetConfigurationSetEventDestinationsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceClient service, and returns a pointer to an
 * ListConfigurationSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListConfigurationSetsResponse * PinpointSmsVoiceClient::listConfigurationSets(const ListConfigurationSetsRequest &request)
{
    return qobject_cast<ListConfigurationSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceClient service, and returns a pointer to an
 * SendVoiceMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
SendVoiceMessageResponse * PinpointSmsVoiceClient::sendVoiceMessage(const SendVoiceMessageRequest &request)
{
    return qobject_cast<SendVoiceMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointSmsVoiceClient service, and returns a pointer to an
 * UpdateConfigurationSetEventDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an event destination in a configuration set. An event destination is a location that you publish information
 */
UpdateConfigurationSetEventDestinationResponse * PinpointSmsVoiceClient::updateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest &request)
{
    return qobject_cast<UpdateConfigurationSetEventDestinationResponse *>(send(request));
}

/*!
 * \class QtAws::PinpointSmsVoice::PinpointSmsVoiceClientPrivate
 * \brief The PinpointSmsVoiceClientPrivate class provides private implementation for PinpointSmsVoiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a PinpointSmsVoiceClientPrivate object with public implementation \a q.
 */
PinpointSmsVoiceClientPrivate::PinpointSmsVoiceClientPrivate(PinpointSmsVoiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace PinpointSmsVoice
} // namespace QtAws

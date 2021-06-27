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

#include "updateconfigurationseteventdestinationresponse.h"
#include "updateconfigurationseteventdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSMSVoice {

/*!
 * \class QtAws::PinpointSMSVoice::UpdateConfigurationSetEventDestinationResponse
 * \brief The UpdateConfigurationSetEventDestinationResponse class provides an interace for PinpointSMSVoice UpdateConfigurationSetEventDestination responses.
 *
 * \inmodule QtAwsPinpointSMSVoice
 *
 *
 * \sa PinpointSMSVoiceClient::updateConfigurationSetEventDestination
 */

/*!
 * Constructs a UpdateConfigurationSetEventDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationSetEventDestinationResponse::UpdateConfigurationSetEventDestinationResponse(
        const UpdateConfigurationSetEventDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSMSVoiceResponse(new UpdateConfigurationSetEventDestinationResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationSetEventDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConfigurationSetEventDestinationRequest * UpdateConfigurationSetEventDestinationResponse::request() const
{
    return static_cast<const UpdateConfigurationSetEventDestinationRequest *>(PinpointSMSVoiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful PinpointSMSVoice UpdateConfigurationSetEventDestination \a response.
 */
void UpdateConfigurationSetEventDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigurationSetEventDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSMSVoice::UpdateConfigurationSetEventDestinationResponsePrivate
 * \brief The UpdateConfigurationSetEventDestinationResponsePrivate class provides private implementation for UpdateConfigurationSetEventDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSMSVoice
 */

/*!
 * Constructs a UpdateConfigurationSetEventDestinationResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationSetEventDestinationResponsePrivate::UpdateConfigurationSetEventDestinationResponsePrivate(
    UpdateConfigurationSetEventDestinationResponse * const q) : PinpointSMSVoiceResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSMSVoice UpdateConfigurationSetEventDestination response element from \a xml.
 */
void UpdateConfigurationSetEventDestinationResponsePrivate::parseUpdateConfigurationSetEventDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetEventDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSMSVoice
} // namespace QtAws

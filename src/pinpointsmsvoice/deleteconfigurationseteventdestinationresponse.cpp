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

#include "deleteconfigurationseteventdestinationresponse.h"
#include "deleteconfigurationseteventdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSMSVoice {

/*!
 * \class QtAws::PinpointSMSVoice::DeleteConfigurationSetEventDestinationResponse
 * \brief The DeleteConfigurationSetEventDestinationResponse class provides an interace for PinpointSMSVoice DeleteConfigurationSetEventDestination responses.
 *
 * \inmodule QtAwsPinpointSMSVoice
 *
 *
 * \sa PinpointSMSVoiceClient::deleteConfigurationSetEventDestination
 */

/*!
 * Constructs a DeleteConfigurationSetEventDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConfigurationSetEventDestinationResponse::DeleteConfigurationSetEventDestinationResponse(
        const DeleteConfigurationSetEventDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSMSVoiceResponse(new DeleteConfigurationSetEventDestinationResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationSetEventDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConfigurationSetEventDestinationRequest * DeleteConfigurationSetEventDestinationResponse::request() const
{
    return static_cast<const DeleteConfigurationSetEventDestinationRequest *>(PinpointSMSVoiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful PinpointSMSVoice DeleteConfigurationSetEventDestination \a response.
 */
void DeleteConfigurationSetEventDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConfigurationSetEventDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSMSVoice::DeleteConfigurationSetEventDestinationResponsePrivate
 * \brief The DeleteConfigurationSetEventDestinationResponsePrivate class provides private implementation for DeleteConfigurationSetEventDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSMSVoice
 */

/*!
 * Constructs a DeleteConfigurationSetEventDestinationResponsePrivate object with public implementation \a q.
 */
DeleteConfigurationSetEventDestinationResponsePrivate::DeleteConfigurationSetEventDestinationResponsePrivate(
    DeleteConfigurationSetEventDestinationResponse * const q) : PinpointSMSVoiceResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSMSVoice DeleteConfigurationSetEventDestination response element from \a xml.
 */
void DeleteConfigurationSetEventDestinationResponsePrivate::parseDeleteConfigurationSetEventDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationSetEventDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSMSVoice
} // namespace QtAws

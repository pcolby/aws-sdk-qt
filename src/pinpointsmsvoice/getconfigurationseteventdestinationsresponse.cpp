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

#include "getconfigurationseteventdestinationsresponse.h"
#include "getconfigurationseteventdestinationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::GetConfigurationSetEventDestinationsResponse
 * \brief The GetConfigurationSetEventDestinationsResponse class provides an interace for PinpointSmsVoice GetConfigurationSetEventDestinations responses.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::getConfigurationSetEventDestinations
 */

/*!
 * Constructs a GetConfigurationSetEventDestinationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetConfigurationSetEventDestinationsResponse::GetConfigurationSetEventDestinationsResponse(
        const GetConfigurationSetEventDestinationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceResponse(new GetConfigurationSetEventDestinationsResponsePrivate(this), parent)
{
    setRequest(new GetConfigurationSetEventDestinationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConfigurationSetEventDestinationsRequest * GetConfigurationSetEventDestinationsResponse::request() const
{
    Q_D(const GetConfigurationSetEventDestinationsResponse);
    return static_cast<const GetConfigurationSetEventDestinationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoice GetConfigurationSetEventDestinations \a response.
 */
void GetConfigurationSetEventDestinationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConfigurationSetEventDestinationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoice::GetConfigurationSetEventDestinationsResponsePrivate
 * \brief The GetConfigurationSetEventDestinationsResponsePrivate class provides private implementation for GetConfigurationSetEventDestinationsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a GetConfigurationSetEventDestinationsResponsePrivate object with public implementation \a q.
 */
GetConfigurationSetEventDestinationsResponsePrivate::GetConfigurationSetEventDestinationsResponsePrivate(
    GetConfigurationSetEventDestinationsResponse * const q) : PinpointSmsVoiceResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoice GetConfigurationSetEventDestinations response element from \a xml.
 */
void GetConfigurationSetEventDestinationsResponsePrivate::parseGetConfigurationSetEventDestinationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConfigurationSetEventDestinationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoice
} // namespace QtAws

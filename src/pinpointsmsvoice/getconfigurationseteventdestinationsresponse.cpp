// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

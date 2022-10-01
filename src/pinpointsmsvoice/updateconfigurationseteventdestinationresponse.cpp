// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationseteventdestinationresponse.h"
#include "updateconfigurationseteventdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::UpdateConfigurationSetEventDestinationResponse
 * \brief The UpdateConfigurationSetEventDestinationResponse class provides an interace for PinpointSmsVoice UpdateConfigurationSetEventDestination responses.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::updateConfigurationSetEventDestination
 */

/*!
 * Constructs a UpdateConfigurationSetEventDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationSetEventDestinationResponse::UpdateConfigurationSetEventDestinationResponse(
        const UpdateConfigurationSetEventDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceResponse(new UpdateConfigurationSetEventDestinationResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationSetEventDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConfigurationSetEventDestinationRequest * UpdateConfigurationSetEventDestinationResponse::request() const
{
    Q_D(const UpdateConfigurationSetEventDestinationResponse);
    return static_cast<const UpdateConfigurationSetEventDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoice UpdateConfigurationSetEventDestination \a response.
 */
void UpdateConfigurationSetEventDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigurationSetEventDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoice::UpdateConfigurationSetEventDestinationResponsePrivate
 * \brief The UpdateConfigurationSetEventDestinationResponsePrivate class provides private implementation for UpdateConfigurationSetEventDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a UpdateConfigurationSetEventDestinationResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationSetEventDestinationResponsePrivate::UpdateConfigurationSetEventDestinationResponsePrivate(
    UpdateConfigurationSetEventDestinationResponse * const q) : PinpointSmsVoiceResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoice UpdateConfigurationSetEventDestination response element from \a xml.
 */
void UpdateConfigurationSetEventDestinationResponsePrivate::parseUpdateConfigurationSetEventDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetEventDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoice
} // namespace QtAws

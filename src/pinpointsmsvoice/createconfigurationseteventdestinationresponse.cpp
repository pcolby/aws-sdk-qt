// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationseteventdestinationresponse.h"
#include "createconfigurationseteventdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::CreateConfigurationSetEventDestinationResponse
 * \brief The CreateConfigurationSetEventDestinationResponse class provides an interace for PinpointSmsVoice CreateConfigurationSetEventDestination responses.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::createConfigurationSetEventDestination
 */

/*!
 * Constructs a CreateConfigurationSetEventDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConfigurationSetEventDestinationResponse::CreateConfigurationSetEventDestinationResponse(
        const CreateConfigurationSetEventDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSmsVoiceResponse(new CreateConfigurationSetEventDestinationResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationSetEventDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConfigurationSetEventDestinationRequest * CreateConfigurationSetEventDestinationResponse::request() const
{
    Q_D(const CreateConfigurationSetEventDestinationResponse);
    return static_cast<const CreateConfigurationSetEventDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointSmsVoice CreateConfigurationSetEventDestination \a response.
 */
void CreateConfigurationSetEventDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConfigurationSetEventDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSmsVoice::CreateConfigurationSetEventDestinationResponsePrivate
 * \brief The CreateConfigurationSetEventDestinationResponsePrivate class provides private implementation for CreateConfigurationSetEventDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a CreateConfigurationSetEventDestinationResponsePrivate object with public implementation \a q.
 */
CreateConfigurationSetEventDestinationResponsePrivate::CreateConfigurationSetEventDestinationResponsePrivate(
    CreateConfigurationSetEventDestinationResponse * const q) : PinpointSmsVoiceResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSmsVoice CreateConfigurationSetEventDestination response element from \a xml.
 */
void CreateConfigurationSetEventDestinationResponsePrivate::parseCreateConfigurationSetEventDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationSetEventDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSmsVoice
} // namespace QtAws

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

#include "createconfigurationsetresponse.h"
#include "createconfigurationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointSMSVoice {

/*!
 * \class QtAws::PinpointSMSVoice::CreateConfigurationSetResponse
 * \brief The CreateConfigurationSetResponse class provides an interace for PinpointSMSVoice CreateConfigurationSet responses.
 *
 * \inmodule QtAwsPinpointSMSVoice
 *
 *
 * \sa PinpointSMSVoiceClient::createConfigurationSet
 */

/*!
 * Constructs a CreateConfigurationSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConfigurationSetResponse::CreateConfigurationSetResponse(
        const CreateConfigurationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointSMSVoiceResponse(new CreateConfigurationSetResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConfigurationSetRequest * CreateConfigurationSetResponse::request() const
{
    return static_cast<const CreateConfigurationSetRequest *>(PinpointSMSVoiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful PinpointSMSVoice CreateConfigurationSet \a response.
 */
void CreateConfigurationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConfigurationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointSMSVoice::CreateConfigurationSetResponsePrivate
 * \brief The CreateConfigurationSetResponsePrivate class provides private implementation for CreateConfigurationSetResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointSMSVoice
 */

/*!
 * Constructs a CreateConfigurationSetResponsePrivate object with public implementation \a q.
 */
CreateConfigurationSetResponsePrivate::CreateConfigurationSetResponsePrivate(
    CreateConfigurationSetResponse * const q) : PinpointSMSVoiceResponsePrivate(q)
{

}

/*!
 * Parses a PinpointSMSVoice CreateConfigurationSet response element from \a xml.
 */
void CreateConfigurationSetResponsePrivate::parseCreateConfigurationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointSMSVoice
} // namespace QtAws

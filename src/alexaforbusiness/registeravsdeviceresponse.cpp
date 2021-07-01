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

#include "registeravsdeviceresponse.h"
#include "registeravsdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::RegisterAVSDeviceResponse
 * \brief The RegisterAVSDeviceResponse class provides an interace for AlexaForBusiness RegisterAVSDevice responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::registerAVSDevice
 */

/*!
 * Constructs a RegisterAVSDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterAVSDeviceResponse::RegisterAVSDeviceResponse(
        const RegisterAVSDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new RegisterAVSDeviceResponsePrivate(this), parent)
{
    setRequest(new RegisterAVSDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterAVSDeviceRequest * RegisterAVSDeviceResponse::request() const
{
    Q_D(const RegisterAVSDeviceResponse);
    return static_cast<const RegisterAVSDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness RegisterAVSDevice \a response.
 */
void RegisterAVSDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterAVSDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::RegisterAVSDeviceResponsePrivate
 * \brief The RegisterAVSDeviceResponsePrivate class provides private implementation for RegisterAVSDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a RegisterAVSDeviceResponsePrivate object with public implementation \a q.
 */
RegisterAVSDeviceResponsePrivate::RegisterAVSDeviceResponsePrivate(
    RegisterAVSDeviceResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness RegisterAVSDevice response element from \a xml.
 */
void RegisterAVSDeviceResponsePrivate::parseRegisterAVSDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterAVSDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
